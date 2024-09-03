#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    // Display menu options
    printf("Welcome to the Basic Calculator!\n");
    printf("Please choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");\
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");     
    scanf("%d", &choice);
printf("Enter your number:  ");
scanf("%lf %lf", &num1, &num2);

switch(choice) {
case 1:
        result = num1 + num2;
        printf("Result: %.2lf + %.2lf = %.2lf\n" ,num1, num2, result);
        break;
case 2:
    result = num1 - num2;
    printf("Result: %.2lf - %.2lf = %.2lf \n" , num1 ,num2, result );
    break;

case 3:
    result = num1 * num2;
    printf("Result : %.2lf * %.2lf = %.2lf\n" ,num1 ,num2 , result);
    break;

case 4:
    if (num2 != 0) {
        result = num1 / num2;
        printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
    } else {
        printf("Error: Cannot divide by zero.\n");
    }
    break;

        default:  // This will handle any invalid choice
            printf("Invalid choice: Please enter a number between 1 and 4.\n");
            break;
    return 0;} 
}



