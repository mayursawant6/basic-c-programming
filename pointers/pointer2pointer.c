# include <stdio.h>

int main() {
// float price = 100.00;
// float *ptr = &price;
// float ** pptr = &ptr;

int i = 5;
int *ptr = &i;
int **pptr = &ptr;

printf("%d\n", ** pptr);
    return 0;
}//call by value is we make changes in parameter
//call by refrence is we make changes in  direct address ,
// so when we print it in main function the value is changes as we are making change on direct address thereby changing the value itself 