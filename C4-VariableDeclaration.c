/*   RULES OF VARIABLE DECLARATION IN C

1. Can Only contain digit, alphabets or an underscore (_)
2. Must not start with a digit.
3. Must not be a keyword, all variables should be unique.
4. No White space Allowed in between variable name

*/
#include<stdio.h>

int main(){

int number1 = 5, number = 3;
int number_2;

char character;

char For_1; 

/// = AND ==
//number = number1;

int ans = number1 == number;

printf("%d",ans);
}