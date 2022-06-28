#include <stdio.h>
int number1,number2;
void cong(int a, int b ){
printf("input number 1: "); scanf("%d",&a);
printf("input number 2: "); scanf("%d",&b);
printf("number1 + number2 = %d",a+b);
}
void tru(int a,int b){
printf("input number 1: "); scanf("%d",&a);
printf("input number 2: "); scanf("%d",&b);
printf("a - b = %d",a-b);
}
int main(){
    cong(number1,number2);
    printf("\n");
    tru(number1,number2);
    return 0;
}