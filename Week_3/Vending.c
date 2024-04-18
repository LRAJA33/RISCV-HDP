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

  //  while (1) {



        if (!button1Pressed && !button2Pressed && !button3Pressed) {
            printf("Please select a product (Enter 1, 2, or 3):\n");

            scanf("%d", &selectedProduct);
            if (selectedProduct == 1) {
                button1Pressed = true;
            } else if (selectedProduct == 2) {
                button2Pressed = true;
            } else if (selectedProduct == 3) {
                button3Pressed = true;
            }
        }


        if (!paymentCompleted) {
            printf("Please complete payment (Enter 1 for payment completed):\n");

            int paymentStatus;
            scanf("%d", &paymentStatus);
            if (paymentStatus == 1) {
                paymentCompleted = true;
            }
        }


        if (paymentCompleted) {
            if (button1Pressed) {
                printf("Product 1 dispensed.\n");
              	Product1 = true;
    		Product2 = false;
   		Product3 = false;
                printf("Product1 %d \n", Product1);
                printf("Product2 %d \n", Product2);
                printf("Product3 %d \n", Product3);

            } else if (button2Pressed) {
                printf("Product 2 dispensed.\n");
                Product1 = false;
    		Product2 = true;
                Product3 = false;
                printf("Product1 %d \n", Product1);
                printf("Product2 %d \n", Product2);
                printf("Product3 %d \n", Product3);
            } else if (button3Pressed) {
                printf("Product 3 dispensed.\n");
                Product1 = false;
    		Product2 = false;
                Product3 = true;
                printf("Product1 %d \n", Product1);
                printf("Product2 %d \n", Product2);
                printf("Product3 %d \n", Product3);

            }

else
            
                Product1 = false;
    		Product2 = false;
                Product3 = false;
        }

    }


