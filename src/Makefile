.PHONY: all clean

CC = gcc
CFLAGS = -c -Wall -Werror -Wextra -std=c11

rebuild: clean all

all: ../build/Quest_1 ../build/Quest_2 ../build/Quest_3 ../build/Quest_4 ../build/Quest_5 ../build/Quest_6

../build/Quest_1: strlen_tests.o
	$(CC) strlen_tests.o -o ../build/Quest_1

strlen_tests.o: s21_string_test.c s21_string.a
	$(CC) $(CFLAGS) -c s21_string_test.c -o strlen_tests.o -DQUEST_1



../build/Quest_2: strcmp_tests.o
	$(CC) strcmp_tests.o -o ../build/Quest_2

strcmp_tests.o: s21_string_test.c s21_string.a
	$(CC) $(CFLAGS) -c s21_string_test.c -o strcmp_tests.o -DQUEST_2



../build/Quest_3: strcpy_tests.o
	$(CC) strcpy_tests.o -o ../build/Quest_3

strcpy_tests.o: s21_string_test.c s21_string.a
	$(CC) $(CFLAGS) -c s21_string_test.c -o strcpy_tests.o -DQUEST_3



../build/Quest_4: strcat_tests.o
	$(CC) strcat_tests.o -o ../build/Quest_4

strcat_tests.o: s21_string_test.c s21_string.a
	$(CC) $(CFLAGS) -c s21_string_test.c -o strcat_tests.o -DQUEST_4



../build/Quest_5: strchr_tests.o
	$(CC) strchr_tests.o -o ../build/Quest_5

strchr_tests.o: s21_string_test.c s21_string.a
	$(CC) $(CFLAGS) -c s21_string_test.c -o strchr_tests.o -DQUEST_5



../build/Quest_6: strstr_tests.o
	$(CC) strstr_tests.o -o ../build/Quest_6

strstr_tests.o: s21_string_test.c s21_string.a
	$(CC) $(CFLAGS) -c s21_string_test.c -o strstr_tests.o -DQUEST_6

../build/Quest_7: strtok_tests.o
	$(CC) strtok_tests.o -o ../build/Quest_6

strtok_tests.o: s21_string_test.c s21_string.a
	$(CC) $(CFLAGS) -c s21_string_test.c -o strtok_tests.o -DQUEST_7

s21_string.a: s21_string.c s21_string.h
	$(CC) $(CFLAGS) -c s21_string.c

clean:
	rm -rf *.o main
