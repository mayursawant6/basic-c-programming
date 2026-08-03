#include<stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main(){int a=3,b=5;
    _swap(&a,&b);
    printf("a is %d b is %d\n",a,b);


    
   
return 0;}
//call by value
void swap(int a, int b){
    int t=b;
    b=a;
    a=t;
    printf("a= %d & b= %d\n",a,b);
}
//call by refrence
void _swap(int *a,int *b){
    int t=*b;
    *b=*a;
    *a=t;
}