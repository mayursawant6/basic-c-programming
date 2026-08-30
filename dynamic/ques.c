// WAP to allocate memory of size n, where n is entered by
// the user.
#include<stdio.h>
#include <stdlib.h>
int main() {
int *ptr;
int n;
printf("enter num =");
scanf("%d",&n);
ptr=calloc(n,sizeof(int));
ptr[0] = 1;
ptr[1] = 3;   
ptr[2] = 5;
ptr[3] = 7;
ptr[4] = 9;
for(int i=0;i<=n;i++){
    printf("%d",ptr[i]);
}
return 0;
}
