#include<stdio.h>
#include<string.h>
int main(){
    char oldstr[]= "old";
    char newstr[]= "new";
    strcat(newstr,oldstr);
    puts(newstr);
    return 0;
}
   