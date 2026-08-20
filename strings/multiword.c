// scanf() cannot input multi-word strings with spaces
// Here,
// gets()& puts() come into picture
#include<stdio.h>
int main() {
    char str[10];
    printf("enter string :");
    fgets(str,10,stdin);//fgets() can input multi-word strings with spaces
    puts(str);
   return 0; }