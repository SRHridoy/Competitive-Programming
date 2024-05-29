//WAP to reverse a number ; 
#include<stdio.h>
int main()
{
    int n,remainder,reverse = 0;
    printf("Enter a number : \n");
    scanf("%d",&n);//153--->351

    while (n!=0)
    {
        remainder = n % 10;//3  --- 5---1
        reverse = reverse * 10 + remainder;//3---35---351
        n = n/10;//15---1---0
    }
    printf("Reversed Number = %d",reverse);//351
    


}