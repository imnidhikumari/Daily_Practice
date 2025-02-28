/// Qs: WAP to accept a character from User and print it's ASCII

#include<stdio.h>

int main(){

    char character;

    printf("Enter Character \n");
    scanf("%c", &character);

    printf("ASCII for charcter %c is %d ", character, character);
}