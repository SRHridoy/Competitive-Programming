#include<stdio.h>

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("%d %d\n",a,b);
}

int main(){
    int x, y;
    x = 6, y = 10;
    swap(&x,&y);
    printf("%d %d",x, y);// 10 6


}