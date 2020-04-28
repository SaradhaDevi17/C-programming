#include<stdio.h>

int main() {
   //A char is a vowel or consonant
   char c;
   int lowercase,uppercase;
   scanf("%c",&c);
   lowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
   uppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
   if (lowercase||uppercase)
    printf("The char is vowel");
   else
    printf("The char is consonant");
   return 0;
   
}
