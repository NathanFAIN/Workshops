**The guide to code the function str_to_word_array...**

Go to src/str_to_word_array.c file to start the exercises!


**Petits rappels:**
```
*(str) = str[0]
*(str + 1) = str[1]
*(str + n) = str[n]

char *str = malloc(sizeof(char) * str_size);
char **str = malloc(sizeof(char *) * str_size);*

```
Pour parcourir un simple tabeau:
```
char *str;
for (int i = 0; str[i] != '\0', i++)

```
Pour parcourir un double tabeau:
```
char **str;
for (int i = 0; str[i] != NULL, i++)
```
