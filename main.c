#include <stdio.h>
#include <stdlib.h>

#define A 65

#define LETTER_CASE(letter, number, string) \
    case (letter): \
        if (currentLetter < (letter)) \
        { \
            printf("\n"); \
            break; \
        } \
        for (int c = (number); c < countFromA; c++) \
        { \
            printf(" "); \
        } \
        printf((string)); \
        for (int c = (number); c < countFromA; c++) \
        { \
            printf(" "); \
        } \

int main(int argc, char *argv[])
{
    int countFromA = 0;
    // find how far from 'A'
    for (int i = A; i < argv[1][0]; i++)
    {
        countFromA = countFromA + 1;
    }
    // start with first letter
    char currentLetter = argv[1][0] - countFromA;
    int half = 0;
    // loop twice for each char from 'A'
    for (double x = countFromA; x >= 0; x-=0.5)
    {
        // print string for each character
        switch (currentLetter)
        {
            LETTER_CASE('A', 0, "A")
            LETTER_CASE('B', 1, "B B")
            LETTER_CASE('C', 2, "C   C")
            LETTER_CASE('D', 3, "D     D")
            LETTER_CASE('E', 4, "E       E")
            LETTER_CASE('F', 5, "F         F")
            LETTER_CASE('G', 6, "G           G")
            LETTER_CASE('H', 7, "H             H")
            LETTER_CASE('I', 8, "I               I")
            LETTER_CASE('J', 9, "J                 J")
            LETTER_CASE('K', 10, "K                   K")
            LETTER_CASE('L', 11, "L                     L")
            LETTER_CASE('M', 12, "M                       M")
            LETTER_CASE('N', 13, "N                         N")
            LETTER_CASE('O', 14, "O                           O")
            LETTER_CASE('P', 15, "P                             P")
            LETTER_CASE('Q', 16, "Q                               Q")
            LETTER_CASE('R', 17, "R                                 R")
            LETTER_CASE('S', 18, "S                                   S")
            LETTER_CASE('T', 19, "T                                     T")
            LETTER_CASE('U', 20, "U                                       U")
            LETTER_CASE('V', 21, "V                                         V")
            LETTER_CASE('W', 22, "W                                           W")
            LETTER_CASE('X', 23, "X                                             X")
            LETTER_CASE('Y', 24, "Y                                               Y")
            LETTER_CASE('Z', 25, "Z                                                 Z")
            printf("\n");
        }
        // go forward until half way through then go back to start
        if (half - 1 && x - (countFromA / 2.0))
        {
            currentLetter = currentLetter + 1;
        }
        else
        {
            half = 1;
            currentLetter = currentLetter - 1;
        }
    }
}