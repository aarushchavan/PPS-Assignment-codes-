#include <stdio.h>

int main()
{
    int m1, m2, temp;
    int *p1, *p2;

    printf("Enter speed of motor 1: ");
    scanf("%d", &m1);

    printf("Enter speed of motor 2: ");
    scanf("%d", &m2);

    p1 = &m1;
    p2 = &m2;

    printf("\nBefore Swapping:\n");
    printf("Motor 1 speed = %d\n", m1);
    printf("Motor 2 speed = %d\n", m2);

    printf("Address of motor 1 = %p\n", (void*)p1);
    printf("Address of motor 2 = %p\n", (void*)p2);

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("\nAfter Swapping:\n");
    printf("Motor 1 speed = %d\n", m1);
    printf("Motor 2 speed = %d\n", m2);

    printf("Address of motor 1 = %p\n", (void*)p1);
    printf("Address of motor 2 = %p\n", (void*)p2);

    return 0;
}
