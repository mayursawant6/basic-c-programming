#include<stdio.h>
#include<string.h>
int countlength(char arr[]);

int main(){
    char name[100]; 
    // char name[]="mayur";
    printf("enter name\n");
    fgets(name,100,stdin);
    int length= strlen(name);
    printf("count is %d",length);
    return 0;
}//The count is 3 because fgets() reads and includes
// the newline character (\n) when you press Enter.