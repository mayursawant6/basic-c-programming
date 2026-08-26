// salting is adding of string in the password to secure it
#include<stdio.h>
#include<string.h>
void salting(char pass[]);
int main(){
 
    salting("mayur");

}
void salting(char pass[]){
    char salt[]="123";
    char newpass[200];
    strcpy(newpass,pass);
    strcat(newpass,salt);
    puts(newpass);
}