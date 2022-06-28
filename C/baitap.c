#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
float trungbinh(int arr[], int n){
    int i;
    float tb, s=0;
    for (i=0; i<n; i++) {
        s+=arr[i];
    }
    tb =  s/n;
    return tb;
}
void nhapgiatri(int arr[], int n){
    int i;
    for (i = 0 ; i <n ; i++) {
        printf("Nhap gia tri thu %d: ", i);
        scanf ("%d",&arr[i]);
    }
}
int Max(int arr[], int n){
    int i, max;
    max = arr[0];
    for (i = 0 ; i < n ; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}
void pttmax(int arr[], int n){
    int i, max;
    max = Max(arr, n);
    int dem=0;
    for (i = 0 ; i <n ; i++) {
        if (arr[i] == max) dem++;
    }
    printf("\nCo %d phan tu bang phan tu Max = %d.",dem-1, max);
}
void ktsochan(int arr[], int n){
    int i,dem=0;
    for (i = 0 ; i <n ; i++) {
        if(arr[i]%2==0){
            dem++;
        }
    }
    printf("\nCo %d phan tu chan trong mang.",dem);
}
int nhapsoluong(int n){
    do {
        printf("Nhap so luong phan tu mang: ");
        scanf("%d",&n);
    }while(n<1);
    return n;
}
void menu(){
    printf("\n---------------------------Menu----------------------------\n");
    printf("Nhap 1 de tinh trung binh mang.\n");
    printf("Nhap 2 de biet so phan tu bang gia tri Max.\n");
    printf("Nhap 3 de kiem tra co phan tu chan co trong mang khong.\n");
    printf("Nhap 4 de kiem tra so ban chon co trong mang khong.\n");
    printf("Nhap 5 de tim gia tri lon thu hai.\n");
    printf("nhap 6 de xoa gia tri ban muon\n");
    printf("Nhap 7 de tao lai mang.\n");
    printf("Nhap con so khac de thoat.\n");
    printf("=============================================================\n");
}
void ktvitri(int arr[], int n){
    int i, a, dem =0;
    do {
        printf("\nNhap so nguyen duong ban can tim: ");
        scanf ("%d",&a);
    }while(a<0);
    for (i = 0 ; i < n ; i++){
        if ( a == arr[i]) dem++;
    }
    if (dem>0){
        printf("So %d co trong mang.",a);
        for (i = 0 ; i < n ; i++){
            if ( a == arr[i]) printf("\nO vi tri thu %d trong mang.",i);
        }
    }
    else printf("So %d khong co trong mang.",a);
}
int max2(int arr[], int n){
    int i, max;
    max = Max(arr,n);
    int max2 = 0;
    for (i = 0 ; i <n ; i++) {
        if (arr[i] == max) continue;
        else if (max2 < arr[i])max2 = arr[i];
    }
    return max2;
}
void xuat(int arr[], int n){
    int i;
    for (i = 0 ; i <n; i++) {
        printf("%d\t",arr[i]);
    }
}
void xoa(int arr[],int *n){
    int i,loc,numb, dem=0;
    int h = *n;
     printf("\nnhap so ban can xoa : "); 
     scanf("%d",&numb);
     for(i = 0;i < *n;i++){
        if(numb == arr[i]){
            for(loc = i;loc < h;loc++){
               arr[loc] = arr[loc + 1];
            }
            dem ++;
            --h;
            i--;
            *n = h;
        }
    }
    if(dem>0){
        if(h>0){
            printf("Cac phan tu trong mang la: ");
                    xuat(arr,*n);
        }
        else {
            printf("Ban da xoa het phan tu trong mang.\n");
            printf("Ban hay tao lai mang.");
        }
    }
    else {
        printf("Phan ban xoa khong co trong mang.");
    }
}
void taolaimang(int arr[], int *n){
    *n = nhapsoluong(*n);
    arr[*n];
    nhapgiatri(arr,*n);
}
void luachon(int arr[], int n){
    int i;
    do {
        system("cls");
        menu();
        printf("Cac phan tu trong mang la: ");
        xuat(arr,n);
        printf("\nNhap lua chon cua ban: ");
        scanf ("%d",&i);
        switch(i){
            case 1: {
                system("cls");
                printf("Cac phan tu trong mang la: ");
                xuat(arr,n);
                float Tb;
                Tb = trungbinh(arr,n);
                printf("\nTong trung binh gia tri cua mang la %.2f",Tb);
                getch();
                break;
            }
            case 2: {
                system("cls");
                printf("Cac phan tu trong mang la: ");
                xuat(arr,n);
                pttmax(arr ,n);
                getch();
                break;
            }
            case 3: {
                system("cls");
                printf("Cac phan tu trong mang la: ");
                xuat(arr,n);
                ktsochan( arr ,n);
                getch();
                break;
            }
            case 4: {
                system("cls");
                printf("Cac phan tu trong mang la: ");
                xuat(arr,n);
                ktvitri( arr ,n);
                getch();
                break;
            }
            case 5: {
                system("cls");
                int Max2;
                printf("Cac phan tu trong mang la: ");
                xuat(arr,n);
                Max2 = max2(arr,n);
                printf("\nMax thu hai la %d",Max2);
                getch();
                break;
            }
            case 6: {
                system("cls");
                printf("Cac phan tu trong mang la: ");
                xuat(arr,n);
                xoa( arr ,&n);
                getch();
                break;
            }
            case 7: {
                system("cls");
                taolaimang(arr,&n);
                break;
            }
        }
    }
    while(i>=1 && i<=7);{
        printf("Cam on ban da tham gia.");
    }
}
int main(){
    system("cls");
    int n;
    printf("Ban hay tao mot mang.\n");
    n = nhapsoluong(n);
    int arr[n];
    nhapgiatri(arr,n);
    luachon(arr,n);
    return 0;
}
