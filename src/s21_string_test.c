#include <stdio.h>
#include "s21_string.h"
#include "s21_string.c"

int s21_strlen_test(char *data1, char *data2, char *data3, char *data4);
int s21_strcmp_test(char *data1, char *data2, char *data3, char *data4);
int s21_strcpy_test(char *data1, char *data2, char *data4);
int s21_strcat_test(char *data1, char *data2);
int s21_strchr_test(char *data1, char *data2, char *data3, char *data4);
int s21_strstr_test(char *data1, char *data2, char *data3, char *data4);
int s21_strtok_test(char *data1, char *data2, char *data3, char *data4);
void start(char *data1, char *data2, char *data3, char *data4, char *sd1, char *sd2, char *sd3, char *sd4);
void assect(int flag);

int main() {
    char sd1[9]  = {'a', 'b', 'c', 'd', 'h', 'f', 'g', 'h', 0};
    char sd2[10] = {'2', '1', ' ', 's', 'c', 'h', 'o', 'o', 'l', 0};
    char sd3[3]  = {'g', 'h', 0};
    char sd4[1]  = {0};
    char data1[9]  = {'a', 'b', 'c', 'd', 'h', 'f', 'g', 'h', 0};
    char data2[10] = {'2', '1', ' ', 's', 'c', 'h', 'o', 'o', 'l', 0};
    char data3[3]  = {'g', 'h', 0};
    char data4[1]  = {0};

    printf("============ TESTS ============\n");

    #ifndef QUEST_1
    #define QUEST_1
    printf("\nTEST 1 : s21_strlen");
    assect(s21_strlen_test(data1, data2, data3, data4));
    #endif  // QUEST_1

    #ifndef QUEST_2
    #define QUEST_2
    printf("\nTEST 2 : s21_strcmp");
    start(data1, data2, data3, data4, sd1, sd2, sd3, sd4);
    assect(s21_strcmp_test(data1, data2, data3, data4));
    #endif  // QUEST_2

    #ifndef QUEST_3
    #define QUEST_3
    printf("\nTEST 3 : s21_strcpy");
    start(data1, data2, data3, data4, sd1, sd2, sd3, sd4);
    assect(s21_strcpy_test(data1, data2, data4));
    #endif  // QUEST_3

    #ifndef QUEST_4
    #define QUEST_4
    printf("\nTEST 4 : s21_strcat");
    start(data1, data2, data3, data4, sd1, sd2, sd3, sd4);
    assect(s21_strcat_test(data1, data2));
    #endif  // QUEST_4

    #ifndef QUEST_5
    #define QUEST_5
    printf("\nTEST 5 : s21_strchr");
    start(data1, data2, data3, data4, sd1, sd2, sd3, sd4);
    assect(s21_strchr_test(data1, data2, data3, data4));
    #endif  // QUEST_5

    #ifndef QUEST_6
    #define QUEST_6
    printf("\nTEST 6 : s21_strstr\n");
    start(data1, data2, data3, data4, sd1, sd2, sd3, sd4);
    assect(s21_strstr_test(data1, data2, data3, data4));
    #endif  // QUEST_6

    // printf("\nTEST 7 : s21_strtok\n");
    // start(data1, data2, data3, data4, sd1, sd2, sd3, sd4);
    // assect(s21_strtok_test(data1, data2, data3, data4));

}

void start(char *data1, char *data2, char *data3, char *data4, char *sd1, char *sd2, char *sd3, char *sd4) {
    for (int i = 0; i < 9; i++)
        data1[i] = sd1[i];
    for (int i = 0; i < 10; i++)
        data2[i] = sd2[i];
    for (int i = 0; i < 3; i++)
        data3[i] = sd3[i];
    for (int i = 0; i < 1; i++)
        data4[i] = sd4[i];
}

int s21_strlen_test(char *data1, char *data2, char *data3, char *data4) {
    int flag = 0, 
        a1 = s21_strlen(data1), 
        a2 = s21_strlen(data2), 
        a3 = s21_strlen(data3), 
        a4 = s21_strlen(data4);
    if (a1 != 8) flag++;
    if (a2 != 9) flag++;
    if (a3 != 2) flag++;
    if (a4 != 0) flag++;
    printf("\nin: %d\tout: %d", 8, a1);
    printf("\nin: %d\tout: %d", 9, a2);
    printf("\nin: %d\tout: %d", 2, a3);
    printf("\nin: %d\tout: %d", 0, a4);
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
    if (a3 >= 0) flag++;
    if (a4 <= 0) flag++;
    printf("\nin: 1+\tout: %d", a1);
    printf("\nin: 1-\tout: %d", a2);
    printf("\nin: 1-\tout: %d", a3);
    printf("\nin: 1+\tout: %d", a4);
    return flag;
}

int s21_strcpy_test(char *data1, char *data2, char *data4) {
    int flag = 0;
    printf("\nH 1 True answer:");
    for (int i = 0; i < s21_strlen(data2) + 1; i++)
        printf("%c", data2[i]);
    char *in_2_from_1 = s21_strcpy(data1, data2);
    for (int i = 0; (i < s21_strlen(data1) + 1) && (*in_2_from_1) && (data2); i++)
        if (data2[i] != in_2_from_1[i]) flag++;
    printf("\nReceived answer:");
    for (int i = 0; i < s21_strlen(data1) + 1; i++)
        printf("%c", data1[i]);
    printf("\nH 2 True answer:");
    for (int i = 0; i < s21_strlen(data4) + 1; i++)
        printf("%c", data4[i]);
    char *in_4_from_2 = s21_strcpy(data2, data4);
    for (int i = 0; (i < s21_strlen(data4) + 1) && (*in_4_from_2) && (data2); i++)
        if (data2[i] != in_4_from_2[i]) flag++;
    printf("\nReceived answer:");
    for (int i = 0; i < s21_strlen(data2) + 1; i++)
        printf("%c", data2[i]);
    return flag;
}

int s21_strcat_test(char *data1, char *data2) {
    int flag = 0;
    char data[19] = {'a', 'b', 'c', 'd', 'h', 'f', 'g', 'h', 'l', '2', '1', ' ', 's', 'c', 'h', 'o', 'o', 'l', 0};
    printf("\nH 1 True answer:");
    for (int i = 0; data[i] != '\0'; i++)
        printf("%c", data[i]);
    char *data_test = s21_strcat(data1, data2);
    for (int i = 0; (data_test[i] != '\0') && (*data) && (*data_test); i++)
        if (data[i] != data_test[i]) flag++;
    printf("\nReceived answer:");
    for (int i = 0; data1[i] != '\0'; i++)
        printf("%c", data1[i]);
    printf("\nH 2 True answer:");
    for (int i = 0; data2[i] != '\0'; i++)
        printf("%c", data2[i]);
    char *data_test_2 = s21_strcat(data2, data2);
    printf("\nReceived answer:");
    for (int i = 0; data2[i] != '\0'; i++) {
        if (data2[i] != data_test_2[i]) flag++;
        printf("%c", data_test_2[i]);
    }
    return flag;
}

int s21_strchr_test(char *data1, char *data2, char *data3, char *data4) {
    int flag = 0, symbol_1 = 97, symbol_2 = 99, symbol_3 = 100;
    char *s_1 = s21_strchr(data1, symbol_1);
    char *s_2 = s21_strchr(data2, symbol_2);
    char *s_3 = s21_strchr(data3, symbol_1);
    char *s_4 = s21_strchr(data4, symbol_3);
    printf("\nin: %ld\tout: %ld\n", data1 - data1, s_1 - data1);
    printf("in: %ld\tout: %ld\n", &data2[4] - data2, s_2 - data2);
    printf("in: %ld\tout: %ld\n", &data3[2] - data3, s_3 - data3);
    printf("in: %ld\tout: %ld", data4 - data4, s_4 - data4);
    if (s_1 != &data1[0]) flag++;
    if (s_2 != &data2[4]) flag++;
    if (s_3 != &data3[2]) flag++;
    if (s_4 != &data4[0]) flag++;
    return flag;
}

int s21_strstr_test(char *data1, char *data2, char *data3, char *data4) {
    int flag = 0;
    char *a = s21_strstr(data1, data3);
    char *a1 = s21_strstr(data2, data3);
    char *a2 = s21_strstr(data1, data4);
    char *a3 = s21_strstr(data2, data4);
    printf("in: %ld\tout: %ld\n", &data1[6] - data1, a - data1);
    printf("in:    \tout:    \n");
    printf("in:    \tout:    \n");
    printf("in:    \tout:    ");
    if (&data1[6] - data1 != a - data1) flag++;
    if (*a1 != data4[0]) flag++;
    if (*a2 != data4[0]) flag++;
    if (*a3 != data4[0]) flag++;
    return flag;
}

// int s21_strtok_test(char *data1, char *data2, char *data3, char *data4) {
//     int flag = 0;
//     char *a1 = s21_strtok(data1)
//     printf("in: %d\tout: %d\n", l1, );
//     if () flag++;
//     if () flag++;
//     if () falg++;
//     if () flag++;
//     return flag;
// }

void assect(int flag) {
    if (flag == 0)
        printf("\nSUCCESS\n");
    else printf("\nFAIL\n");
}
