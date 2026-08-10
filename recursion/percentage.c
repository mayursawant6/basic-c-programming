#include<stdio.h>
int percentage(int science, int maths, int sanskrit);
int main(){
    int science=96;
    int maths=89;
    int sanskrit=90;
    printf("%d",percentage(science,maths,sanskrit));
    return 0;
}
int percentage(int science,int maths,int sanskrit){
    int final= (( science + maths + sanskrit ) / 3 );
    return final;
}