#include <stdio.h>
#include <stdlib.h>

int main()
{
    find_greater_between_three_number();

    return 0;
}

void positive_or_non_positive()
{
    int var;

    printf("Enter a integer -> ");
    scanf("%d", &var);

    if(var > 0)
        printf("%d is a positive integer", var);
    else
        printf("%d is not a non positive integer", var);

    getch();
    return;
}

void divisible_by_five_or_not()
{
    int var;

    printf("Enter a integer -> ");
    scanf("%d", &var);

    if(var % 5 == 0)
        printf("%d is a divisible by 5", var);
    else
        printf("%d is not a divisible by 5", var);

    getch();

    return;
}

void even_odd()
{
    int var;

    printf("Enter a integer -> ");
    scanf("%d", &var);

    if(var % 2 == 0)
        printf("%d is even", var);
    else
        printf("%d is odd number", var);

    getch();

    return;
}

void even_odd_without_modulus_operator()
{
    int var, temp;

    printf("Enter a integer -> ");
    scanf("%d", &var);

    temp = var / 2;

    if(temp + temp == var)
        printf("%d is a even", var);
    else
        printf("%d is a odd", var);

    getch();

    return;
}

void perfect_root_quadratic_equation()
{
    int a, b, c, d;

    printf("Enter a value -> ");
    scanf("%d", &a);

    printf("\nEnter b value -> ");
    scanf("%d", &b);

    printf("\nEnter c value -> ");
    scanf("%d", &c);

    d = (b * b) - (4 * a * c);

    if(d > 0)
      printf("Real and distinct");
    else if(d < 0)
      printf("Imaginary");
    else
      printf("real and equal");

    getch();
    return;

}

void is_leap_year_or_not()
{
    int year;

    printf("Enter a year -> ");
    scanf("%d", &year);

    if(year <= 999)
        printf("Please enter a 04 digit year");
    else if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("%d is a leap year", year);
    else
        printf("%d is not a leap year", year);

    getch();

    return;
}

void positive_negative_zero()
{
    int var;

    printf("Enter a integer -> ");
    scanf("%d", &var);

    if(var > 0)
        printf("%d is a positive number", var);
    if(var < 0)
        printf("%d is a negative number", var);
    if(var == 0)
        printf("%d is a zero", var);

    getch();
    return;
}

void find_greater_between_two_number()
{
    int var1, var2;

    printf("Enter 1st digit -> ");
    scanf("%d", &var1);

    printf("\nEnter 2nd digit -> ");
    scanf("%d", &var2);

    if(var1 > var2)
        printf("%d is greater than %d", var1, var2);
    else
        printf("%d is greater than %d", var2, var1);

    getch();
    return;
}

void find_greater_between_three_number()
{
    int var1, var2, var3;

    printf("Enter 1st digit -> ");
    scanf("%d", &var1);

    printf("\nEnter 2nd digit -> ");
    scanf("%d", &var2);

    printf("\nEnter 3rd digit -> ");
    scanf("%d", &var3);

    if(var1 > var2 && var1 > var3)
        printf("%d is greater than %d and %d", var1, var2, var3);
    else if(var2 > var1 && var2 > var3)
        printf("\n%d is greater than %d and %d", var2, var1, var3);
    else
        printf("\n%d is greater than %d and %d", var3, var1, var2);

    getch();
    return;
}

void student_marks_obtained()
{
    float hindi, english, maths, science, social_science, percentage;

    printf("Enter 1st subject marks -> ");
    scanf("%f", &hindi);

    printf("\nEnter 2nd subject marks -> ");
    scanf("%f", &english);

    printf("\nEnter 3rd subject marks -> ");
    scanf("%f", &maths);

    printf("\nEnter 4th subject marks -> ");
    scanf("%f", &science);

    printf("\nEnter 5th subject marks -> ");
    scanf("%f", &social_science);

    if((hindi > 100 || hindi < 0) ||
            (english > 100 || english < 0)||
            (maths > 100 || maths < 0) ||
            (science > 100 || science < 0) ||
            (social_science > 100 || social_science < 0))
    {
        printf("Don't put negative number or less than hundred");
    }
    else
    {
        percentage = (float) ((hindi + english + maths + science + social_science) * 100) / 500;

        if(percentage >= 0 && percentage <= 33)
            printf("Student got %f percentage, FAIL", percentage);
        else if(percentage > 33 && percentage <= 45)
            printf("Student got %f percentage by third division", percentage);
        else if(percentage > 45 && percentage < 60)
            printf("Student got %f percentage by second division", percentage);
        else if(percentage >= 60 && percentage <=100)
            printf("Student got %f percentage by first division", percentage);
    }

    getch();

    return;

}
