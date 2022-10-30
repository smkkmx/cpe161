#include <stdio.h>
#include <ctype.h>
 
int main()
{
    char in_char;
    char ch;
     
    printf(" Enter character for VOWEL & CONSONANT  : ");
    scanf("%c", &in_char);
     
    ch = toupper(in_char);
     
    if(ch == 'A' || ch == 'E'|| ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y')
    {
        printf("\n Answer = %c is VOWEL", in_char);
    }
    else
    {
        printf("\n Answer = %c is CONSONANT", in_char);
    }
     
    return 0;
}
