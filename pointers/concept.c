#include<stdio.h>
int main(){
    int age=5;
  int *ptr=&age;//* =value at address operator
 int _age=*ptr;//& =addres of operator

printf("%d",_age); // pointer is used to store memory location or memory address
return 0;}