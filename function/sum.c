#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b;
    printf("Enter 1st num : ");
    scanf("%d",&a);
    printf("Enter 2nd num : ");
    scanf("%d",&b);
    int s= sum(a,b);
    printf("%d",s);
   return 0;
} 
int sum(int m, int n){// The value from above a and b copies here in m and n so they can be different
    //in each function variable are different
    // n is always a different variable in each function 
    return m+n;
}