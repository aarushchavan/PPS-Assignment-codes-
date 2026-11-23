#include <stdio.h>

struct Robot {
    int id;
    char type[20];
    float capacity;
    float load;
    float time;
};

int main()
{
    struct Robot r[50];
    int n, i;
    float utilization;

    printf("Enter number of robots\n");
    scanf("%d", &n);

    if (n < 1 || n > 50)
    {
        printf("Invalid number of robots\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("\n Enter details of robot %d\n", i + 1);

        printf("Robot ID: ");
        scanf("%d", &r[i].id);

        printf("Robot Type: ");
        scanf("%19s", r[i].type);

        printf("Payload Capacity (kg): ");
        scanf("%f", &r[i].capacity);

        printf("Actual load (kg): ");
        scanf("%f", &r[i].load);

        printf("Operating Time: ");
        scanf("%f", &r[i].time);
    }

    printf("\n Robot Load Report \n");

    for (i = 0; i < n; i++)
    {
        if (r[i].capacity <= 0)
        {
            printf("\n Robot ID: %d", r[i].id);
            printf("\n Invalid payload capacity \n");
        }

        utilization = (r[i].load / r[i].capacity) * 100;

        printf("\nRobot ID: %d", r[i].id);
        printf("\nRobot type: %s", r[i].type);
        printf("\n operating Time: %.2f hours", r[i].time);
        printf("\n Load Utilization: %.2f%%", utilization);

        if (utilization > 100)
        {
            printf("\n Status: overloaded \n");
        }
        else
        {
            printf("\n Status: within capacity \n");
        }
    }

    return 0;
}
