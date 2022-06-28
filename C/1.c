#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int shh(int n){
    int s=0,i;
    for (i=1;i<n;i++)   if(n%i==0) s+=i;
    return s;
}
void menu(){
    printf("nhap 1 de in 1\n");
    printf("nhap 2 de in 2\n");
    printf("nhap 3 de in 3\n");
    printf("nhap 4 de in 4\n");
    printf("nhap 5 de in 5\n");
    printf("nhap 6 de in 6\n");
}

int main(){
    int n;
    do{
        system("cls");
        menu();
        printf("out range stop: ");
        scanf("%d",&n);
        switch(n){
            case 1: printf("1\n");sleep(2);break;
            case 2: printf("2\n");sleep(2);break;
            case 3: printf("3\n");sleep(2);break;
            case 4: printf("4\n");sleep(2);break;
            case 5: printf("5\n");sleep(2);break;
            case 6: printf("6\n");sleep(2);break;
        }
    }while((n>=1)&&(n<=6));
    return 0;
}