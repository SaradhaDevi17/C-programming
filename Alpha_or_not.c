#include<stdio.h>

int main() {
    char c;
    printf("enter a character");
    scanf("%c",&c);
    if (c>='a'&& c<='z'|| c>='A'&& c<='Z')
        printf("This is an alphabet");
    else
        printf("This is not an alphabet");
    return 0;
}
