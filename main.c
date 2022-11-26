#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int gadget, quantity;
    float price, amt, totalAmt, cash, vat, BAT, rate = 0.16;
    char addAnother;
    do {
         system("cls");
    printf("===============\n");
    printf("PRO GADGET SHOP\n");
    printf("===============\n\n");
    printf("[1] Laptop\t\tKSh 30000.00\n");
    printf("[2] Joysticks\t\tKSh 1000.00\n");

    printf("what gadget do you want\n ");
    scanf("%d", &gadget);
    printf("how many gadgets:?\n ");
    scanf("%d", &quantity);

    switch(gadget) {
          case 1: price = 30000.00;
                  break;
          case 2: price = 1000.00;
                  break;

    }
      amt = price * quantity;
      printf("Amount: %.2f\n", amt);

       totalAmt = totalAmt + amt;
       printf("Total Amount\t: %.2f\n", totalAmt);

       printf("\nAdd another order(y/n)?\n");
       addAnother = getche ();
    }while(addAnother == 'y' || addAnother == 'Y');

    do{

    printf("\nCash paid\t:\n");
    scanf("%f", &cash);

    }while(cash < totalAmt);

    vat = rate * cash;
    printf("VAT: %.3f\n", vat);

    BAT=cash - vat;
    printf("change after tax: %.2f\n", BAT);

return 0;
}
