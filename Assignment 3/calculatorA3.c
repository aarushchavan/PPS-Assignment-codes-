#include<stdio.h>
int main(){
    int a,b,choice,result;
    printf("Enter 2 Numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter: 1 for addition\n");
    printf("2 for subtraction\n3 for multiplication\n");
    printf("4 for division\n5 for modulus\nChoice: ");
    scanf("%d" , &choice);
    switch(choice){
        case 1: result=a+b;
                printf("Addition = %d\n" , result);
                break;
        case 2: result=a-b;
                printf("Subtraction = %d\n" , result);
                break;
        case 3: result=a*b;
                printf("Multiplication = %d\n", result);
                break;
        case 4: result=a/b;
                printf("Division = %d\n", result);
                break;
        case 5: result=a%b;
                printf("Modulus = %d\n", result);
                break;
        default:printf("Invalid\n");
    }
  return 0;
}
