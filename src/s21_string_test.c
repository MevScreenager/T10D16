#include "s21_string.h"
#include <stdio.h>
// #include<stdlib.h>

// #include "s21_string.c"

int s21_strlen_test(char *data1, char *data2, char *data3, char *data4);
int s21_strcmp_test(char *data1, char *data2, char *data3, char *data4);
int s21_strcpy_test(char *data1, char *data2, char *data4);
int s21_strcat_test(char *data1, char *data2, char *data4);
int s21_strchr_test(char *data1, char *data2, char *data3, char *data4);
int s21_strstr_test(char *data1, char *data2, char *data3, char *data4);
int s21_strtok_test(char *data1, char *data2, char *data3, char *data4);
void assect(int flag);

int main() {
    char data1[9] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 0};
    char data2[10] = {'2', '1', ' ', 's', 'c', 'h', 'o', 'o', 'l', 0};
    char data3[3] = {'g', 'h', 0};
    char data4[1] = {0};

    printf("============ TESTS ============\n");

    printf("TEST 1 : s21_strlen\n");
    assect(s21_strlen_test(data1, data2, data3, data4));

    printf("TEST 2 : s21_strcmp\n");
    assect(s21_strcmp_test(data1, data2, data3, data4));

    printf("TEST 3 : s21_strcpy\n");
    assect(s21_strcpy_test(data1, data2, data4));

    printf("TEST 4 : s21_strcat\n");
    assect(s21_strcat_test(data1, data2, data4));

    // printf("TEST 5 : s21_strchr\n");
    // printf("in: %d\tout: %d\n", l1, s21_strchr(data1));
    // assect(s21_strchr_test(data1, data2, data3, data4));

    // printf("TEST 6 : s21_strstr\n");
    // printf("in: %d\tout: %d\n", l1, s21_strstr(data1));
    // assect(s21_strstr_test(data1, data2, data3, data4));

    // printf("TEST 7 : s21_strtok\n");
    // printf("in: %d\tout: %d\n", l1, s21_strtok(data1));
    // assect(s21_strtok_test(data1, data2, data3, data4));

}

int s21_strlen_test(char *data1, char *data2, char *data3, char *data4) {
    int flag = 0, 
        a1 = s21_strlen(data1), 
        a2 = s21_strlen(data2), 
        a3 = s21_strlen(data3), 
        a4 = s21_strlen(data4);
    if (a1 != 9) flag++;
    if (a2 != 10) flag++;
    if (a3 != 3) flag++;
    if (a4 != 1) flag++;
    printf("in: %d\tout: %d\n", 9, a1);
    printf("in: %d\tout: %d\n", 10, a2);
    printf("in: %d\tout: %d\n", 3, a3);
    printf("in: %d\tout: %d\n", 1, a4);
    return flag;
}

int s21_strcmp_test(char *data1, char *data2, char *data3, char *data4) {
    int flag = 0, 
        a1 = s21_strcmp(data1, data2), 
        a2 = s21_strcmp(data4, data3), 
        a3 = s21_strcmp(data1, data3), 
        a4 = s21_strcmp(data1, data4);
    if (a1 <= 0) flag++;
    if (a2 >= 0) flag++;
    if (a3 <= 0) flag++;
    if (a4 <= 0) flag++;
    printf("in: 1+\tout: %d\n", a1);
    printf("in: 1-\tout: %d\n", a2);
    printf("in: 1+\tout: %d\n", a3);
    printf("in: 1+\tout: %d\n", a4);
    return flag;
}

int s21_strcpy_test(char *data1, char *data2, char *data4) {
    int flag = 0;
    char *in_2_from_1 = s21_strcpy(data1, data2), *in_4_from_2 = s21_strcpy(data2, data4);
    printf("H 1 True answer:");
    for (int i = 0; data2[i] != '\0'; i++)
        printf(" %d", data2[i]);
    printf("\nReceived answer:");
    for (int i = 0; data2[i] != '\0'; i++) {
        if (data2[i] != in_2_from_1[i]) flag++;
        printf(" %d", in_2_from_1[i]);
    }
    printf("H 2 True answer:");
    for (int i = 0; data4[i] != '\0'; i++)
        printf(" %d", data4[i]);
    printf("\nReceived answer:");
    for (int i = 0; data4[i] != '\0'; i++) {
        if (data4[i] != in_4_from_2[i]) flag++;
        printf(" %d", in_4_from_2[i]);
    }
    return flag;
}

int s21_strcat_test(char *data1, char *data2, char *data4) {
    int flag = 0;
    char data[18] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', '2', '1', ' ', 's', 'c', 'h', 'o', 'o', 'l', 0};
    char *data_test = s21_strcat(data1, data2), *data_test_2 = s21_strcat(data2, data4);
    printf("H 1 True answer:");
    for (int i = 0; data[i] != '\0'; i++)
        printf(" %d", data[i]);
    printf("\nReceived answer:");
    for (int i = 0; data[i] != '\0'; i++) {
        if (data[i] != data_test[i]) flag++;
        printf(" %d", data_test[i]);
    }
    printf("H 2 True answer:");
    for (int i = 0; data2[i] != '\0'; i++)
        printf(" %d", data2[i]);
    printf("\nReceived answer:");
    for (int i = 0; data2[i] != '\0'; i++) {
        if (data2[i] != data_test_2[i]) flag++;
        printf(" %d", data_test_2[i]);
    }
    return flag;
}

// int s21_strchr_test(char *data1, char *data2, char *data3, char *data4) {
//     int flag = 0;
//     if () flag++;
//     if () flag++;
//     if () falg++;
//     if () flag++;
//     return flag;
// }

// int s21_strstr_test(char *data1, char *data2, char *data3, char *data4) {
//     int flag = 0;
//     if () flag++;
//     if () flag++;
//     if () falg++;
//     if () flag++;
//     return flag;
// }

// int s21_strtok_test(char *data1, char *data2, char *data3, char *data4) {
//     int flag = 0;
//     if () flag++;
//     if () flag++;
//     if () falg++;
//     if () flag++;
//     return flag;
// }

void assect(int flag) {
    if (flag == 0)
        printf("SUCCESS\n");
    else printf("FAIL\n");
}


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
    for (; *destptr || *srcptr; *destptr = *srcptr, destptr++, srcptr++);
    return destptr;
}

char *s21_strcat( char * destptr, const char * srcptr ) {
    char *cp = destptr;
    while(*cp)
        ++cp;
    for (; *srcptr; srcptr++, cp++)
        *cp = *srcptr;
    return destptr;
}