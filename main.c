#include <stdio.h>

int main()
{

    /*
    [A] Cheese Burger: 30
    [B] Bacon and Egg Burger: 40
    [C] Special Mama Burger: 50
    */
    char prdCode;
    int prdAmount, numberOfOrder, total;
    printf("*********************************************\n"
           "            Welcome to MamaBurger            \n"
           "*********************************************\n"
           "[A] Cheese Burger\n"
           "[B] Bacon and Egg Burger\n"
           "[C] Special Mama Burger\n"
           "[X] Exit\n\n"
           "Enter product code >> "
           );

           scanf("%c", &prdCode);

           switch(prdCode) {
            case 'A':
                prdAmount = 30;
                break;
            case 'B':
                prdAmount = 40;
                break;
            case 'C':
                prdAmount = 50;
                break;
            default:
                printf("Product code not in the list");
                break;

           }
           printf("Price: Php %d\n", prdAmount);
           printf("Number of Order >> ");
           scanf("%d", &numberOfOrder);

           total = numberOfOrder* prdAmount;

           printf("\n\nTotal amount >> %d", total);
           printf("\nThank you and Come Again!");

           return 0;
}
