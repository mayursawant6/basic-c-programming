# include <stdio.h>

void printString(char arr[]);

int main() {
char name[50];
printf("Enter your name: ");
scanf("%s", name); 
printf("Your name is %s", name);//when we use %s \0 is not required to 
                                //print the string as it is automatically handled by printf function   
return 0;}