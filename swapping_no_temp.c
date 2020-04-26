#include<stdio.h>

int main(){
    //swapping two numbers without using temp variable
    int a,b;
    scanf("%d%d",&a,&b);
    printf("numbers before swapping a=%d,b=%d",a,b);
    a=a-b;
    b=a+b;
    a=b-a;
   
    printf("\nnumbers after swapping a=%d,b=%d",a,b);
    return 0;

}
