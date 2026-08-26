#include<stdio.h>
#include<string.h>
int main(){
    char oldstr[]= "old";
    char newstr[]= "new";
    strcpy(newstr,oldstr);
    puts(newstr);
    return 0;
}
   