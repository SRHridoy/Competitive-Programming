#include<stdio.h>

int factorial(int n){
    if(n>=1){
        return n*factorial(n-1);//5*4*3*2*1*1
    }else{
        return 1;
    }
}

int main(){
    // 5! = 5 * 4 * 3  *2 * 1...
    //     = 5*4!...

    printf("%d\n",factorial(5));//120
    printf("%d\n",factorial(6));
    
    
}
