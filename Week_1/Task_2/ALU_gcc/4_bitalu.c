#include <stdio.h> 
#include <string.h> 

int main() { 

int a, b, result; char operation;

printf("Enter the value of a: ");
scanf("%d", &a);
printf("Enter the value of b: ");
scanf("%d", &b);
printf("Enter the required operation (add, sub, mul, div): ");
scanf(" %c", &operation);
switch (operation) {
    case 'a':
        result = a + b;
        printf("Value of %d + %d is %d\n", a, b, result);
        break;
    case 's':
        result = a - b;
        printf("Value of %d - %d is %d\n", a, b, result);
        break;
    case 'm':
        result = a * b;
        printf("Value of %d * %d is %d\n", a, b, result);
        break;
    case 'd':
        if (b == 0) {
            printf("Can't divide when b is zero\n");
        } else {
            result = a / b;
            printf("Value of %d / %d is %d\n", a, b, result);
        }
        break;
    default:
        printf("Invalid operation selected\n");
        break;
}
return 0;

}
