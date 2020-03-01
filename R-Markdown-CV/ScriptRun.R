library(shiny)

options(shiny.port = 8100)

numBox <- 0
numLastBox <- 0

ui <- fluidPage(
    titlePanel("Générateur de CV"),
    textInput("title", "Titre de ton CV:", "Recherche de stage"),
    textInput("firstname", "Prénom:", ""),
    textInput("lastname", "Nom:", ""),
    textInput("jobtitle", "Domaine de travail:", "Développeur freelance"),
    textInput("address", "Address:", "Résidence ...."),
    textInput("city", "Ville:", "Montpellier"),
    textInput("country", "Pays:", "France"),
    textInput("phone", "Téléphone:", "+33 6 89 89 09 40"),
    textInput("web", "Site Web:", "github.com/NathanFAIN/"),
    textInput("email", "Email:", "nathan.fain"),
    textInput("domaine", "Domaine:", "epitech.eu"),
    fileInput("profil", "Chemin Image de profil:", multiple = FALSE),
    # textAreaInput("text", "Contenue du CV:", "", width = 800, height = 800),
    uiOutput("new"),
    actionButton("add", "Ajouter une partie au CV"),
    actionButton("do", "Lancer la génération du CV")
)

server <- function(input, output) {
    observeEvent(input$add, {
        text <- c()
        textname <- c()
        for (i in 1:numBox) {
            text <- c(text, toString(input[[paste("text", i, sep="")]]))
            textname <- c(textname, toString(input[[paste("textname", i, sep="")]]))
        }
        numBox <<- numBox + 1
        output$new <- renderUI({
            lapply(1:numBox, function(i) {
                sidebarLayout(
                    sidebarPanel(width = 18,
                        textInput(paste("textname", i, sep=""), "Nom de la partie:", value = textname[i]),
                        textAreaInput(paste("text", i, sep=""), "Contenue de la partie:", "", width = 800, height = 200, value = text[i])
                    ),
                    mainPanel()
                )
            })
        })
    })
    observeEvent(input$do, {
        text <- c()
        textname <- c()
        for (i in 1:numBox) {
            text <- c(text, toString(input[[paste("text", i, sep="")]]))
            textname <- c(textname, toString(input[[paste("textname", i, sep="")]]))
        }
        rmarkdown::render(input = "ScriptCV.Rmd", output_format = "pdf_document", params = list(
            title = input$title,
            firstname = input$firstname,
            lastname = input$lastname,
            jobtitle = input$jobtitle,
            address = input$address,
            city = input$city,
            country = input$country,
            phone = input$phone,
            web = input$web,
            email = input$email,
            domaine = input$domaine,
            profil = toString(input$profil[4]),
            text = text,
            textname = textname
        ))
    })
}

shinyApp(ui, server)
