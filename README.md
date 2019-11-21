* **Guide pour réaliser la fonction str_to_word_array...**


*Vas dans le fichier src/str_to_word_array.c pour commencer les exercises!*


* **Petits rappels:**

Naviguer dans un tableau:
```
*(str) = str[0]
*(str + 1) = str[1]
*(str + n) = str[n]
```
Allouer de la mémoire:
```
char *str = malloc(sizeof(char) * str_size);
char **str = malloc(sizeof(char *) * str_size);
```
Pour parcourir un simple tabeau (```char *```):
```
char *str;
for (int i = 0; str[i] != '\0', i++) {}
```
Pour parcourir un double tabeau (```char **```):
```
char **str;
for (int i = 0; str[i] != NULL, i++) {}
```
