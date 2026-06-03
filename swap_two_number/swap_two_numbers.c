#include <stdio.h>

int main()
{

    int a = 5, b = 10, temp;

    temp = a;

    a = b;

    b = temp;
    
    if(a> b){
        printf("a is greater\n");
    }else{
        printf("b is greater\n");
    }

    printf("a is %d and b is %d\n", a, b);
    return 0;
}