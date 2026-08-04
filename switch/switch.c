#include<stdio.h>
int main() {
    char day;
    printf("Enter a day : "); 
    scanf("%d",&day);// %d for number , %c for char , %f for float
    switch(day){
        case 'a':printf("monday \n");//while defining char use the '' symbol
     break;
        case 'b':printf("teusday\n");
     break;
     case 3: printf("tuesday");
     break;
     case 4 : printf("thrusday");
     break;
     case 5:printf("friday");
     break;
     case 6:printf("saturday");
     break;
     default: printf("not valid");
    }
    return 0;
}