#include <stdio.h>
void TB(int arr[], int n){
    int i, S =0;
    for(i=0; i<n; i++){
        S += arr[i];
    }
    float tb=0;
    tb = S /n ;
    printf("tb cua mang %f", tb);
}
void ptumax(int arr[], int n){
    int i, max ;
    max = arr[0];
    for(i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int dem = 0;
    for(i=0; i<n; i++){
        if(arr[i]==max){
            dem = dem +1;
        }
    }
    if (dem ==1){
        printf("\nco 0 gt giong max =%d",max);
    }
    else
        printf("\nco %d giong gt  max = %d",dem,max);
}
void xoa(int arr[], int *n){
    
    int i, vitri, a ;
    printf("nha");
    scanf("%d",&a);
    int h;
    h=*n;
    for (i=0; i<*n; i++){
        if (arr[i]==a){
            for(vitri=i; vitri<h; vitri++){
                arr[vitri]= arr[vitri+1];
            }
            --h;
            --i;
        }
    }
    *n=h;
}
void xuat(int arr[], int n){
    int i;
    for (i = 0 ; i <n; i++) {
        printf("%d\t",arr[i]);
    }
}
int main(){
    int n, i; 
    printf("nhap n :");
    scanf("%d",&n);
    int arr[n];
    for (i =0 ; i<n ; i++){
        printf("nhap gia tri mang: ");
        scanf("%d",&arr[i]);
    }
    TB(arr, n);
    ptumax(arr,n);
    xoa(arr,&n);
    xuat(arr,n);
    return 0;
}