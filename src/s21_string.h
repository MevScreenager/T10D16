#ifndef S21_STRING_H
#define S21_STRING_H

int s21_strlen(const char *str);
int s21_strcmp(char *str1, char *str2);
char *s21_strcpy(char *destptr, char *srcptr);
char *s21_strcat(char *destptr, const char *srcptr);
char *s21_strchr(char *string, int symbol);
char *s21_strstr(char *string1, char *string2 );
char *s21_strtok(char *string, char *delim );

#endif  // S21_STRING_H
