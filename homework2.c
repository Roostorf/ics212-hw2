/*****************************************************************
//
//  NAME:        Constantine Peros
//
//  HOMEWORK:    2
//
//  CLASS:       ICS 212
//
//  INSTRUCTOR:  Ravi Narayan
//
//  DATE:        January 18, 2021
//
//  FILE:        homework2.c
//
//  DESCRIPTION:
//   Homework 2 Making  table that prints a table of even or odd unbers up to a specified number 
//
****************************************************************/

#include <stdio.h>

void user_interface();
void print_table();
void is_even();

/*****************************************************************
//
//  Function name: main
//
//  DESCRIPTION:   The main part of the program
//
//  Parameters:    argc (int) : number of arguments
//                 argv (char*[]): array of arguments
//
//  Return values:  0 : success
//
****************************************************************/

int main(int argc, char* argv[])
{
    user_interface();
    return 0;
}

/*****************************************************************
//
//  Function name: user_interface()
//
//  DESCRIPTION:   The part of the program that accepts user input
//
//  Parameters:    none
//
//  Return values:  none
//
****************************************************************/

void user_interface()
{
    char user_input[100];
    int max;
    max = -1;

    while ( max == -1)
    {
        printf("Welcome to the even odd table generator\n");
        printf("How high would you like the table to go?\n");

        fgets(user_input, 99, stdin);

        if ( sscanf(user_input, "%d", &max) != 1)
        {
            printf("Invalid entry, not a number\n");
        }
        else if ( max < 0)
        {
            max = -1;
            printf("Invalid entry, less than zero\n");
        }
        else
        {
            print_table(max);
        }
    }
}

/*****************************************************************
//
//  Function name: print_table()
//
//  DESCRIPTION:   The main part of the program
//
//  Parameters:  maxNum (int) The user specified maximum lof the table 
//
//  Return values:  none
//
****************************************************************/

void print_table(int maxNum)
{
    int i;
    for (i = 0; i <= maxNum; i = i + 1)
    {
        printf("%d", i);
        is_even(i);
    }
}

/*****************************************************************
//
//  Function name: is_even()
//
//  DESCRIPTION:   Determines if a number is odd or even and prints even or odd.
//
//  PARAMETERS:  even_odd (int) the number to determine if even or odd.
//
//  Return values:  none
//
****************************************************************/

void is_even(int even_odd)
{
    if (even_odd % 2 == 0)
    {
        printf(" even");
    }
    else if (even_odd % 2 == 1)
    {
        printf(" odd");
    }
    printf("\n");
}
