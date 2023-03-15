#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;

    // Input for five numbers
    printf("Enter five numbers (between 1 and 30): ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    // Print asterisks for each number

    if (num1, num2, num3, num4, num5 < 1 && num1, num2, num3, num4, num5 > 30)
    {
       printf("%s", "INVALID! Number must be between 1 and 30!\n");
    }
    else 
    {
        printf("%.2d: ", num1);
        for (int i = 0; i < num1; i++) {
            printf("*");
        }
        printf("\n");

        printf("%.2d: ", num2);
        for (int i = 0; i < num2; i++) {
            printf("*");
        }
        printf("\n");

        printf("%.2d: ", num3);
        for (int i = 0; i < num3; i++) {
            printf("*");
        }
        printf("\n");

        printf("%.2d: ", num4);
        for (int i = 0; i < num4; i++) {
            printf("*");
        }
        printf("\n");

        printf("%.2d: ", num5);
        for (int i = 0; i < num5; i++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
