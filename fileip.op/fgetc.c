#include<stdio.h>
int main() {
FILE *fptr;
fptr = fopen("fileip.op/test.txt", "r");

printf("%c\n", fgetc(fptr));
printf("%c\n", fgetc(fptr));
printf("%c\n", fgetc(fptr));
printf("%c\n", fgetc(fptr));
printf("%C\n", fgetc(fptr));
 return 0;}