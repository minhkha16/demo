#include <stdio.h>
#include <stdlib.h>
void nhap(int arr[], int n){
    int i;
    for (i = 0 ; i <n ; i++) {
        printf("nhap gia tri thu %d: ", i+1);
        scanf ("%d",&arr[i]);
    }
}
void xuat(int arr[], int n){
    int i;
    for (i = n-1 ; i >=0; i--) {
        printf("%d \n",arr[i]);
    }
}
int max(int arr[], int n){
    int i, max;
    max = arr[0];
    for (i = 0 ; i < n ; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}
int min(int arr[], int n){
    int i, min;
    min = arr[0];
    for (i = 0 ; i < n ; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}
void sapxep(int arr[], int n){
    int i,j, tam;
    for (i = 0 ; i < n-1 ; i++) {
        for (j = 0 ; j < n-i-1; j++) {
            if(arr[j] < arr[j+1]){
                tam = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = tam;
            }
    }
    }
}
int main(){
    int n,Max, Min;
    do {
        printf("nhap so luong mang: ");
        scanf("%d",&n);
    }while (n<0);
    int arr[n];
    nhap(arr, n);
    sapxep(arr,n);
    xuat(arr, n);
    Max= max (arr, n);
    Min = min(arr, n);
    printf("Max = %d",Max);
    printf("\nMin = %d", Min);
    return 0;
}