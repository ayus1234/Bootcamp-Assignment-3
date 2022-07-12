/*Program which takes the cost price and selling price of a product from the user.
  
  Now calculate and print profit or loss percentage.

*/

#include<stdio.h>
int main()
{
    int CP,SP,profit,loss;
    float profit_percent,loss_percent;
    printf("Enter the Cost Price and Selling Price of the Product\n");
    scanf("%d %d",&CP,&SP);
    profit=SP-CP;
    profit_percent=(profit*100)/CP;
    loss=CP-SP;
    loss_percent=(loss*100)/CP;
    if(CP<SP)
    {
        printf("Profit = %d\n",profit);
        printf("Profit Percentage = %f",profit_percent);
    }
    else if(CP>SP)
    {
        printf("Loss = %d\n",loss);
        printf("Loss Percentage = %f",loss_percent);
    }
    else
        printf("No Profit No Loss");
    
    return 0;
}