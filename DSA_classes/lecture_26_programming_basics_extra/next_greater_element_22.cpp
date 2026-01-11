#include <stdio.h>
int main()
{
    long income;
    float rate = 0.0;

    printf("Enter your income\n");
    scanf("%ld", &income);

    if (income > 25000 && income < 500000)
    {
        rate = 0.05;
    }
    else if (income >= 500000 && income < 1000000)
    {
        rate = 0.20;
    }
    else if (income >= 1000000)
    {
        rate = 0.30;
    }

    if (rate > 0)
    {
        float tax = income * rate;
        printf("Your tax is %.2f\n", tax);
    }
    else
    {
        printf("You're exempted from tax\n");
    }

    return 0;
}