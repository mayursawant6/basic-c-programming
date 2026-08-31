# include <stdio.h>

int main() {
    FILE *fptr;
    fptr=fopen("fileip.op/text.txt","r");// to specify the path, is important
    char ch;
    fscanf(fptr,"%c", &ch);
    printf("character is %c\n",ch);
     fscanf(fptr,"%c\n", &ch);
    printf("character is %c\n",ch);
     fscanf(fptr,"%c", &ch);
    printf("character is %c\n",ch);
     fscanf(fptr,"%c", &ch);
    printf("character is %c\n",ch);
     fscanf(fptr,"%c", &ch);
    printf("character is %c\n",ch);
     fscanf(fptr,"%c", &ch);
    printf("character is %c\n",ch);
    
  fclose(fptr);
return 0;}

