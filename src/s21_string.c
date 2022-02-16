#include"s21_string.h"
#ifndef S21_STRING_C
#define S21_STRING_C

int s21_strlen(const char *str) {
    int lenght = 0;
    for (;*(str + lenght); lenght++);
    return lenght;
}

int s21_strcmp(char *str1, char *str2) {
    for (; *str1 && *str1 == *str2; str1++, str2++);
    return *str1 - *str2;
}

char *s21_strcpy(char *destptr, char *srcptr) {
    for (; *destptr && *srcptr; destptr++, srcptr++)
        *destptr = *srcptr;
    if (!*srcptr) *destptr = *srcptr;
    return destptr;
}

char *s21_strcat( char * destptr, const char * srcptr ) {
    int lenght = s21_strlen(destptr) < s21_strlen(srcptr)? s21_strlen(destptr) : s21_strlen(srcptr);
    for (int i = s21_strlen(destptr); (i < lenght + 1) && *srcptr; i++)
        destptr[i] = srcptr[i];
    return destptr;
}

char *s21_strchr(char *string, int symbol) {
    char *p;
    for (;*string; string++) {
        if (*string == '\0') p = string;
        if ((int) *string == symbol)
            return string;
    }
    return string;
}

char * s21_strstr(char * str1, char * str2 ) {
    int len = s21_strlen(str2), stat = 0;;
    for (int i = 0; str1[i] != '\0'; i++)
        if (str1[i] == str2[0])
            for (int j = 0, l = i; str1[l] && str2[j]; j++, l++) {
                if (str1[l] == str2[j]) stat++;
                if (stat == len) return &str1[i];
            }
    return &str2[len];

}

char *s21_strtok(char * string, char * delim ) {
    char* p = 0;
    if(string)
        p = string;
    else if(!p)
        return 0;
    // string = p + strspn(p, delim);
    // p = string + strcspn(string, delim);
    p = delim;

    if(p == string)
        return p = 0;
    p = *p ? *p = 0, p + 1 : 0;
    return string;
}

#endif  // S21_STRING_C
