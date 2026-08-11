#include<stdio.h>
float convtemp(float celcius);
int main(){ 
    int t;
    printf("Enter A Number : \n");
    scanf("%d",&t);
    float m=convtemp(t);
    printf("Temp in far is : %f",m);//takes and keep the value in m

    return 0;
}
float convtemp(float celcius){//returns the value in far
 float far=celcius*(9.0/5.0)+32;
 return far;
}