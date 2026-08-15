#include<stdio.h>
void printn(char m[]);
int main(){
 char firstname[]="mayur";
 char lastname[]="sawant";
 printn(firstname);
 printn(lastname);
    return 0;
}
void printn(char m[]){
    for(int i=0;m[i] != '\0' ;i++){
        printf("%c",m[i]);
    }
}