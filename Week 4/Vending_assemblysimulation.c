#include <stdio.h>
#include <stdbool.h>

int main() {
    bool button1Pressed = false;
    bool button2Pressed = false;
    bool button3Pressed = false;
    bool paymentCompleted = false;
    bool Product1 = false;
    bool Product2 = false;
    bool Product3 = false;
    int selectedProduct = 0;

    printf("Vending Machine Controller\n");

 
        printf("Please select a product (Enter 1, 2, or 3):\n");
        scanf("%d", &selectedProduct);
        scanf("%d", &button1Pressed);
        int mask = 0xFFFFFF80;
        asm volatile(
            "and x30, x30, %4\n\t"
            "andi %0, x30, 1\n\t"
            "srli x30, x30, 1\n\t"
            "andi %1, x30, 1\n\t"
            "srli x30, x30, 2\n\t"
            "andi %2, x30, 1\n\t"
            "srli x30, x30, 3\n\t"
            "andi %3, x30, 1\n\t"
            : "=r"(button1Pressed), "=r"(button2Pressed), "=r"(button3Pressed), "=r"(Product1)
            : "r"(mask)
            : "x30"
        );

        if (!paymentCompleted) {
            printf("Please complete payment (Enter 1 for payment completed):\n");

            int paymentStatus;
            scanf("%d", &paymentStatus);

            asm volatile(
                "srli x30, x30, 4\n\t"
                "andi %0, x30, 1\n\t"
                : "=r"(paymentCompleted)
                : "r"(mask)
                : "x30"
            );

            if (paymentStatus == 1) {
                paymentCompleted = true;
            }
        }

        if (paymentCompleted) {
            if (button1Pressed && selectedProduct == 1) {
                printf("Product 1 dispensed.\n");
                asm volatile(
                    "srli x30, x30, 5\n\t"
                    "ori %0, x30, 1\n\t"
                    : "=r"(Product1)
                    : "r"(mask)
                    : "x30"
                );
            } else if (button2Pressed && selectedProduct == 2) {
                printf("Product 2 dispensed.\n");
                asm volatile(
                    "srli x30, x30, 5\n\t"
                    "andi %0, x30, 0\n\t"
                    : "=r"(Product1)
                    : "r"(mask)
                    : "x30"
                );
                asm volatile(
                    "srli x30, x30, 6\n\t"
                    "ori %0, x30, 1\n\t"
                    : "=r"(Product2)
                    : "r"(mask)
                    : "x30"
                );
            } else if (button3Pressed && selectedProduct == 3) {
                printf("Product 3 dispensed.\n");
                asm volatile(
                    "srli x30, x30, 5\n\t"
                    "andi %0, x30, 0\n\t"
                    : "=r"(Product1)
                    : "r"(mask)
                    : "x30"
                );
                asm volatile(
                    "srli x30, x30, 6\n\t"
                    "andi %0, x30, 0\n\t"
                    : "=r"(Product2)
                    : "r"(mask)
                    : "x30"
                );
                asm volatile(
                    "srli x30, x30, 7\n\t"
                    "ori %0, x30, 1\n\t"
                    : "=r"(Product3)
                    : "r"(mask)
                    : "x30"
                );
            } 
    }

    return 0;
}

