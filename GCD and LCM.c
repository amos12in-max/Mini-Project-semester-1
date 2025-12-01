#include<stdio.h>
int main ()
{
    int a, b, gcd, lcm, temp_a, temp_b;

    printf("Enter two integers; ");
    scanf("%d %d", &a, &b);
    temp_a = a;
    temp_b = b;
    while (temp_b != 0)
    {
        int remainder = temp_a % temp_b;
        temp_a = temp_b;
        temp_b = remainder;
    }
    gcd = temp_a;
    lcm = (a * b) / gcd;
    printf("GCD of %d and %d is %d\n", a, b, gcd);
    printf("LCM of %d and %d is %d\n", a, b
, lcm);

    return 0;
}