#include<stdio.h>
#include<string.h>
int main()
{
    int length,k;
    char str[100];
    printf("Enter the word: ");
    gets(str);
    length = strlen(str);
    length = length - 1;
    k = 0;
    while(length > k)
    {
        if(str[k] != str[length])
        {
            printf("The word is not a perfect word.\n");
            return 0;
        }
        k++;
        length--;
    }
    printf("The word is a perfect word.\n");
    return 0;
}