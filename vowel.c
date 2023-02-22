//write a program o show vowel and consonent using switch case.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the alphabet: ");
    scanf("%c" ,&ch);
    switch(ch)
    {
        case 'a':
        printf("Enter vowel");
        break;
        case 'e':
        printf("Enter vowel");
        break;
        case 'i':
        printf("Enter vowel");
        break;
        case 'o':
        printf("Enter vowel");
        break;
        case  'u':
        printf("Enter vowel");
        break;
        case 'A':
        printf("Enter vowel");
        break;
        case 'E':
        printf("Enter vowel");
        break;
        case 'I':
        printf("Enter vowel");
        break;
        case 'O':
        printf("Enter vowel");
        break;
        case 'U':
        printf("Enter vowel");
        break;
        default:
        printf("Enter consonent"); 
    }
    return 0;
}