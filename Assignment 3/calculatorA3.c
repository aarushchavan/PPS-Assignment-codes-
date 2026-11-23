#include <stdio.h>

int main(void)
{
    int choice;
    int first, second;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulous\n");
    printf("enter your choice: ");
    scanf("%d", &choice);

    printf("enter two numbers: ");
    scanf("%d %d", &first, &second);

    switch(choice)
    {
        case 1:
            printf("Addition = %d\n", first + second);
            break;

        case 2:
            printf("subtraction = %d\n", first - second);
            break;

        case 3:
            printf("Multiplication = %d\n", first * second);
            break;

        case 4:
            if (second != 0)
            {
                printf("Division = %d\n", first / second);
            }
            else
            {
                printf("cannot divide by zero\n");
            }
            break;

        case 5:
            printf("Modulus = %d\n", first % second);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
