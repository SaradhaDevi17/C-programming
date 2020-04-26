#include<stdio.h>

int main(){
    //swapping two numbers using temp variable
    int a,b,temp;
    scanf("%d%d",&a,&b);
    printf("numbers before swapping a=%d,b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nnumbers after swapping a=%d,b=%d",a,b);
    return 0;

}
