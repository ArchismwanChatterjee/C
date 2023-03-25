// Write a program in C to prepare a grocery bill. For that enter the code of the items purchased,
// quantity in which it is purchased, and its price per unit. Then display the bill in the following
// format: (Print at least two lines and for two line printing take 8 variables. Don’t use loop.)
// Example is given below:
// ************************* B I LL **********************************************
// ITEM QUANTITY PRICE OF ONE QUANTITY/1KG AMOUNT
// SUGAR 500G RS.40.00 RS.20.00
// RICE 2KG RS.50.00 RS.100.00
// ******************************************************************************
// TOTAL AMOUNT TO BE PAID = 120.00
// ******************************************************************************

#include <stdio.h>

int main()
{
    /*
    name: Item Code
    price: price per unit
    quantity: quantity purchased(1=1kg)
    amount: payable amount for item(price*quantity)
    */
    char name1[15], name2[15];
    float price1, price2, quantity1, quantity2, amount1, amount2;

    // taking input for two items.
    printf("Enter the info of first item ([name] [quantity] [price])\n");
    scanf("%s %f %f", &name1, &quantity1, &price1);
    amount1 = price1 * quantity1;
    printf("Enter the info of second item ([name] [quantity] [price])\n");
    scanf("%s %f %f", &name2, &quantity2, &price2);
    amount2 = price2 * quantity2;

    // printing first two lines.
    printf("************************* B I LL **********************************************\n");
    printf("%-15s%-15s%-30s%-15s\n", "ITEM", "QUANTITY", "PRICE OF ONE QUANTITY/1KG", "AMOUNT");

    // printing formatted items
    printf("%-15s%-15.2f%-30.2f%-15.2f\n", name1, quantity1, price1, price1 * quantity1);
    printf("%-15s%-15.2f%-30.2f%-15.2f\n", name2, quantity2, price2, price2 * quantity2);

    // printing last three lines
    printf("******************************************************************************\n");
    printf("TOTAL AMOUNT TO BE PAID = %.2f\n", (amount1 + amount2));
    printf("******************************************************************************\n");

    return 0;
}
/*
Enter the info of first item ([name] [quantity] [price])
rice 1.5 70
Enter the info of second item ([name] [quantity] [price])
sugar 1 20
************************* B I LL **********************************************
ITEM           QUANTITY       PRICE OF ONE QUANTITY/1KG     AMOUNT
rice           1.50           70.00                         105.00
sugar          1.00           20.00                         20.00
******************************************************************************
TOTAL AMOUNT TO BE PAID = 125.00
******************************************************************************
*/