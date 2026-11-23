#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    int x, y, oldX, oldY, count = 0;
    int step, oldStep;
    float distance, oldDistance;
    char direction[10], oldDirection[10];

    printf("Enter step number: ");
    scanf("%d", &step);

    printf("Enter distance (cm): ");
    scanf("%f", &distance);

    printf("Enter obstacle coordinates (x y): ");
    scanf("%d %d", &x, &y);

    printf("Enter direction: ");
    scanf("%9s", direction);

    fp = fopen("navigation.txt", "r");

    if (fp != NULL)
    {
        while (fscanf(fp, "%d %f %d %d %9s",
               &oldStep, &oldDistance,
               &oldX, &oldY, oldDirection) == 5)
        {
            if (x == oldX && y == oldY)
                count++;
        }
        fclose(fp);
    }

    if (distance < 50 && x != -1 && y != -1)
    {
        printf("Obstacle detected!\n");

        if (count > 0)
        {
            printf("Repeated %d time(s)\n", count);

            if (strcmp(direction, "Forward") == 0)
                printf("Move Left\n");
            else if (strcmp(direction, "Left") == 0)
                printf("Move Right\n");
            else if (strcmp(direction, "Right") == 0)
                printf("Move Back\n");
            else
                printf("Move Forward\n");
        }
        else
            printf("Move Left\n");
    }
    else
        printf("Move Forward\n");

    fp = fopen("navigation.txt", "a");

    if (fp != NULL)
    {
        fprintf(fp, "%d %.2f %d %d %s\n",
                step, distance, x, y, direction);
        fclose(fp);
        printf("Record saved successfully\n");
    }

    return 0;
}
