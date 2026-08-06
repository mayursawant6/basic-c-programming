#include<stdio.h>
void printn(int arr[], int n);
int main(){
int arr[]={1,2,3,4,5,6};
printn(arr,6);


    return 0;
}
void printn(int arr[], int n){
    for(int i=0 ;i<n ; i++){

    printf("%d",arr[i]);

    }
  
    printf("\n");
}