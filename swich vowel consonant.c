
#include<stdio.h>
void main()
{
    char ch;
    printf("enter any letter: ");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("vowel");
        break;
    default:
        printf("consonant");
        break;

    }


}
