#include<stdio.h>
int main() {
FILE *fptr;
fptr = fopen("fileip.op/test.txt", "w");

fputc('m',fptr);
fputc('a',fptr);
fputc('y',fptr);
fputc('u',fptr);
fputc('r',fptr);
fclose(fptr);
 return 0;}