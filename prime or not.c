#include<stdio.h>
int main()
{
    int number;
    int i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 1) {
        printf("%d is not a prime number.\n", number);
        return 0;
    }
    for (i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);
    return 0;

    if(number%2==0)
    printf("IT IS EVEN");
    else
    printf("IT IS ODD");
    return 0;
}