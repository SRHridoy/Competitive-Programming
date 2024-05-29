//Write a program to check the number is Positive , negative or Zero..

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : \n");
    scanf("%d",&n);

    if(n>0){
        printf("%d is a postive number\n",n);
    }else if(n<0){
        printf("%d is a negative number\n",n);
    }else{
        printf("%d is zero\n",n);
    }
}