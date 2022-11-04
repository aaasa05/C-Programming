/**enter a letter to check vowel or consonant**/

#include<stdio.h>
void main()
{
    char ch;
    printf("enter a letter: ");
    scanf("%c",&ch);

    if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' )
    {
        printf("vowel");

    }
    else
    {
        printf("consonant");
    }



}
