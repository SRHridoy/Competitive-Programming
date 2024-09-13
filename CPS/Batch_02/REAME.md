## Class - 13 Bitwise Operator & It's Properties:

```c
#include<stdio.h>
int main(){
    int a,b,c;
    a = 5,b = 5;
    c = a^b;//0
    printf("%d",c);//0
    printf("%d",a^c);//5
    printf("%d",c^b);//5

    /*
    a^b = c
    b^c = a
    c^a = b
    */
}
```