#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int code, qty;
    float price, amt, totalAmt, cash, change, vat;
    char addAnother;
    do {
         system("cls");
         printf("===============\n");
    printf("PRO GADGET SHOP\n");
    printf("===============\n\n");
    printf("[1] Laptop\t\tKSh 30000.00\n");
    printf("[2] Joysticks\t\tKSh 1000.00\n");

    printf("\nEnter Code\t: ");
    scanf("%d", &code);
    printf("\nEnter Quantity\t: ");
    scanf("%d", &qty);

    switch(code) {
          case 1: price = 30000.00;
                  break;
          case 2: price = 1000.00;
                  break;

    }
      amt = price * qty;
      printf("\nAmount\t: % .2f", amt);
       totalAmt = totalAmt + amt;
       printf("\nTotal Amount\t: %.2f", totalAmt);
       printf("\nAdd another order(y/n)?");
       addAnother = getche ();
    }while(addAnother == 'y' || addAnother == 'Y');

    do{

    printf("\nCash paid\t: ");
    scanf("%f", &cash);

    }while(cash < totalAmt);

    printf("\nCash paid\t: ");
    scanf("%f", &cash);

    change = cash - totalAmt;
    printf("\Change\t\t: %2f", change);
    printf("\n\nThank You!");

    printf("===============\n");
    printf("PRO GADGET SHOP\n");
    printf("===============\n\n");
    printf("[1] Laptop\t\tKSh 30000.00\n");
    printf("[2] Joysticks\t\tKSh 1000.00\n");

    printf("\nEnter Code\t: ");
    scanf("%d", &code);
    printf("\nEnter Quantity\t: ");
    scanf("%d", &qty);

    switch(code) {
          case 1: price = 30000.00;
                  break;
          case 2: price = 1000.00;
                  break;

    }
      amt = price * qty;
      printf("\nAmount\t: % .2f", amt);

      printf("Please enter the VAT percentage:\n");
      scanf("%f",&vat);
      printf("Please enter the item value:\n");
      scanf("%f",&price);

      float price_to_cost_conversion(price, vat)
{
float cost;
cost=((1+(vat/100))*price);
return cost;
}
printf("The total price is %f", price_to_cost_conversion);
}
