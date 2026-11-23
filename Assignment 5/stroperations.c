#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50], result[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("1. length of str1: %lu \n", strlen(str1));
    printf("length of str2: %lu \n", strlen(str2));

    strcpy(result, str1);
    printf("2. Copied str1 into result: %s \n", result);

    strcpy(result, str1);
    strcat(result, str2);
    printf("3. Concatenated string: %s \n", result);

    if (strcmp(str1, str2) == 0)
    {
        printf("4. strings are equal.\n");
    }
    else
    {
        printf("4. strings are not equal.\n");
    }

    return 0;
}
