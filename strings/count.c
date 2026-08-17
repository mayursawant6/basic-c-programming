#include<stdio.h>
int countlength(char arr[]);

int main(){
    char name[100];
    printf("enter name\n");
    fgets(name,100,stdin);
    printf("count is %d",countlength(name));
    return 0;
}
int countlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count ++;}
        return count-1; 
}