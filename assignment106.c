//generating bill
#include<stdio.h>
struct product{
    char item_name[50];
    int quantity;
    float price;
    float amount;
};
int main()
{   int n;
    printf("Enter how many items are you purchasing:");
    scanf("%d",&n);
    struct product items[n];
    printf("Enter the following details:");
    for(int i=0;i<n;i++)
    {
        printf("\nEnter item name:");
        scanf("%s",items[i].item_name);
        printf("\nEnter qunatity purchased:");
        scanf("%d",&items[i].quantity);
        printf("\nEnter the price:");
        scanf("%f",&items[i].price);
        fflush(stdin);
    }
    for(int i=0;i<n;i++)
    {
        items[i].amount=items[i].quantity*items[i].price;
    }
    printf("ITEM NAME\t\t Amount\n");
    for(int i=0;i<n;i++)
    {
        printf("%-15s \t %.2f\n",items[i].item_name,items[i].amount);
    }

}