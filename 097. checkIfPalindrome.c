/*
palindrome using string
*/

#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[50];
    printf("enter the string");
    scanf("%s", &str[0]);
    char reverse[50];
    int i, j=0;
    for(i=strlen(str)-1;i>=0;--i, j++){
        reverse[j] = str[i];
    }
    reverse[j] = '\0';
    if(strcmp(str, reverse) == 0){
        printf("palindrome");
    } else {
        printf("not a palindrome");
    }
    return 0;
}

/*
output1

enter the string
malayalam
palindrome

output2

enter the string
happy
not a palindrome
*/
