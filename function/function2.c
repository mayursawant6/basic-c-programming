#include<stdio.h>
void namaste();
void bonjour();
int main(){
    printf("enter n or b\n");
    char ch;
    scanf("%c",&ch);
    if(ch=='n'){
        namaste();
    }else{ bonjour(); }
}
     void namaste(){
            printf("namaste");
        }
        void bonjour(){
            printf("bonjure");
        }


    


 