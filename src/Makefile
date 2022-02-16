.PHONY: all clean

CC = gcc
CFLAGS = -c -Wall -Werror -Wextra -std=c11

rebuild: clean all

all: ../build/Quest_1 ../build/Quest_2 ../build/Quest_3 ../build/Quest_4 ../build/Quest_5 ../build/Quest_6

../build/Quest_1: s21_string_test.o
	$(CC) s21_string_test.o -o ../build/Quest_1

../build/Quest_2: s21_string_test.o
	$(CC) s21_string_test.o -o ../build/Quest_2

../build/Quest_3: s21_string_test.o
	$(CC) s21_string_test.o -o ../build/Quest_3

../build/Quest_4: s21_string_test.o
	$(CC) s21_string_test.o -o ../build/Quest_4

../build/Quest_5: s21_string_test.o
	$(CC) s21_string_test.o -o ../build/Quest_5

../build/Quest_6: s21_string_test.o
	$(CC) s21_string_test.o -o ../build/Quest_6

s21_string_test.o: s21_string_test.c s21_string.so
	$(CC) $(CFLAGS) -c s21_string_test.c

s21_string.so: s21_string.c s21_string.h
	$(CC) $(CFLAGS) -c s21_string.c

clean:
	rm -rf *.o main
