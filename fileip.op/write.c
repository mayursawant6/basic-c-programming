
# include <stdio.h>

int main() {
FILE *fptr;
fptr = fopen("fileip.op/test.txt", "a");// path is imp

fprintf(fptr, "%c", 'M');
fprintf(fptr, "%c", 'A');
fprintf(fptr, "%c", 'N');
fprintf(fptr, "%c", 'G');
fprintf(fptr, "%c", 'o');
fclose(fptr);
return 0;
}