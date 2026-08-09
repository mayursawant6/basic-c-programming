//print hello world 5 times
#include<stdio.h>
void hello(int count);
int main(){
    hello(5);
    return 0; 
}
//recursive function

void hello(int count){
    if(count==0){
        return;
    }
    printf("hello world\n");
    hello(count-1);
}