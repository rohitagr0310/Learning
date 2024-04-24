#include <stdio.h>

int main()
{
    int i;
    printf("Enter any day number - ");
    scanf("%d",&i);

    switch (i)
    {
    case 1:
        printf("--- Monday ---\n\n");
        printf("People often say that motivation doesn't last. Well, neither does bathing \nthat's why we recommend it daily.");
        break;
    
    case 2:
        printf("--- Tuesday ---\n\n");
        printf("Someday is not a day of the week");
        
    case 3:
        printf("--- Wednesday ---\n\n");
        printf("Hire character. Train skill.");
        
    case 4:
        printf("--- Thursday ---\n\n");
        printf("Your time is limited, so don't waste it living someone else's life.");
        
    case 5:
        printf("--- Friday ---\n\n");
        printf("Sales are contingent upon the attitude of the salesman \n not the attitude of the prospect.");
        
    case 6:
        printf("--- Saturday ---\n\n");
        printf("Everyone lives by selling something.");
        
    case 7:
        printf("--- Sunday ---\n\n");
        printf("If you are not taking care of your customer, your competitor will.");
        
    default:
        break;
    }

    return 0;
}