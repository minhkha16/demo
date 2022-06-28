// // Kiều Minh Kha - C2109I1
// // bài 7
// #include <stdio.h>
// int main(){
//     int i, cp;
//     printf("Nhap so nguyen duong muon kiem tra: ");
//     scanf("%d",&i);
//     for (;i<0;){
//         printf("Ban da nhap so am.\n");
//         printf("Hay nhap lai so duong: ");
//         scanf("%d",&i);
//     }
//     cp = (int)sqrt(i);
//     if (pow(cp,2)==i) printf("%d la so chinh phuong.",i);
//     else printf("%d khong phai so chinh phuong.",i);
//     return 0;
// }

// // bai 8 
// #include <stdio.h>
// int main(){
//     int i,s = 0, a;
//     printf("Nhap so nguyen duong de tinh: ");
//     scanf("%d",&i);
//     while (i<0){    
//         printf("Ban da nhap so am.\n");
//         printf("Hay nhap lai so nguyen duong: ");
//         scanf("%d",&i);
//     }
//     for (a=1;a<=i;a++){
//         s += pow(a,2);
//     }
//     printf("Tong S = %d",s);
//     return 0;
// }

// // bai 9 
// #include <stdio.h>
// int main(){
//     int x , s=0, i=1;
//     printf("Nhap so nguyen duong de tinh: ");
//     scanf("%d",&x);
//     while (x<0){    
//         printf("Ban da nhap so am.\n");
//         printf("Hay nhap lai so nguyen duong: ");
//         scanf("%d",&x);
//     }
//     while (i<=x){
//         s += pow(i,3);i++;
//     }
//     printf("Tong S = %d",s);
//     return 0;
// }

// // bai 10 
// #include <stdio.h>
// int main(){
//     float x , s=0 , i=1;
//     printf("Nhap so nguyen duong de tinh: ");
//     scanf("%f",&x);
//     while (x<=0){    
//         if (x==0) {
//             printf("Ban da nhap so 0.\n");
//             printf("Hay nhap lai so nguyen duong: ");
//             scanf("%f",&x);
//         }
//         else {
//             printf("Ban da nhap so am.\n");
//             printf("Hay nhap lai so nguyen duong: ");
//             scanf("%f",&x);
//         }
//     }
//     while (i<=x){
//         s +=  1/i ;i++;
//     }
//     printf("Tong S = %.2f",s);
//     return 0;
// }