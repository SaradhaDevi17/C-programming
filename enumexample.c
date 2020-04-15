#include<stdio.h>

int main()
{  
    enum greetings {hello,welcome,hai};
    enum greetings first=hello;
    enum greetings second=welcome;
    enum greetings third=hai;
    printf("value of hello %d",first);
    printf("\nvalue of welcome %d",second);
    printf("\nvalue of hai %d",third);
    return 0;
}
