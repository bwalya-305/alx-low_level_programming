#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - entry point
  * Description: creates a random key for program 101_crackme
  * Return: always 0
  */

int main()
{
    int counter = 0;
    srandom(time(NULL));  // Correct seeding function for random()
    char randChar;

    int  passwordLength;

    printf("Type in a password Length \n");
    scanf("%d", &passwordLength);

    while(counter < passwordLength)
    {
        randChar = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[random () % 62];
        printf("%c", randChar);
        counter++;
    }
