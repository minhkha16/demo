// #include <stdio.h>
// int main(){
//     int number;
//     printf("nhap mot con so: ");
//     scanf("%d",&number);
//     if (number%2==0){
//         printf("%d la so chan",number);
//     }
//     else {
//         printf("%d la so so le. Vi %d chia 2 duoc %d va du %d",number,number,number/2,number % 2);
//     }
//     return 0;
// }


// // //bài 5
// #include <stdio.h>
// int main(){
//     int age1, age2, kc;
//     printf("nhap tuoi cha: ");
//     scanf("%d",&age1);
//     printf("nhap tuoi con: ");
//     scanf("%d",&age2);
//     kc= age1-age2;
//     if (kc <= 0){
//         printf(" nhap sai ");
//     }
//     else {
//         if (17> kc && kc >=1){
//             printf("vi pham phap luat");
//         }
//         else if (age1 - age2 ==17 ){
//             printf("nguoi cha la vi thanh nien");
//         }
//         else {
//             if ( age2 >= 18 && age1 / 2 ==age2){
//                     printf("cha da qua gia");
//             }
//             else {
//                 printf("cha qua loi hai");
//             }
//         }

//     }
//     return 0;
// }

// // bài 6:
// #include <stdio.h> 
// int main(){
//     int a, b, c;
//     printf("nhap vao 1 con so a: ");
//     scanf ("%d",&a);
//     printf("nhap vao 1 con so b: ");
//     scanf ("%d",&b);
//     printf("nhap vao 1 con so c: ");
//     scanf (" %d",&c);
//     if (a!=b && a!=c && b!=c){
//         if (b>a && b >c) {
//             printf ("%d la max \n",b);
//             (a>c)?printf("%d la min",c):printf("%d la min ",a);
//         }
//         else if (c>a && c>b) {
//             printf ("%d la max \n",c);
//             (a>b)?printf("%d la min",b):printf("%d la min ",a);
//         }
//         else {
//             printf ("%d la max \n",a);
//             (b>c)?printf("%d la min",c):printf("%d la min ",b);
//         }
//     }
//     else if (a!=b && b==c){
//         if (a> b){
//             printf ("%d la max \n",a);
//             printf ("%d la min", b);
//         }
//         else {
//             printf("%d la max \n",b);
//             printf("%d la min ", a);
//         }
//     }
//     else if (a!=b && a==c){
//         if(a<b){
//             printf ("%d la max \n",b);
//             printf ("%d la min", a);
//         }
//         else {
//             printf ("%d la max \n",a);
//             printf("%d la min",b);
//         }
//     }
//     else {
//         if (a<c){
//             printf ("%d la max \n",c);
//             printf ("%d la min",a);
//         }
//         else {
//             printf ("%d la max \n ",a);
//             printf ("%d la min",c);
//         }
//     }
//     return 0;
// }

// // bài 7
// #include <stdio.h> 
// int main(){
//     int a,b,c;
//     printf("nhap con so a: ");
//     scanf("%d",&a);
//     printf("nhap conn so b: ");
//     scanf("%d",&b);
//     printf("nhap con so c: ");
//     scanf("%d",&c);
//     if (a > b && a >c){
//         printf ("cac so duoc sap theo thu tu tang dan la: ");
//         (b>c)?printf("%d %d %d",c, b, a):printf("%d %d %d",b, c,a);
//     }
//     else if (b >a && b >c){
//         printf ("cac so duoc sap theo thu tu tang dan la: ");
//         (a>c)?printf("%d %d %d",c, a, b):printf("%d %d %d",a, c,b);
//     }
//     else {
//         printf ("cac so duoc sap theo thu tu tang dan la: ");
//         (a>b)?printf("%d %d %d",b, a, c):printf("%d %d %d",a, b,c);
//     }
//     return 0;
// }


// // bài 8
// #include <stdio.h>
// int main(){
//     int year;
//     printf("nhap so nam: ");
//     scanf("%d",&year);
//     if ( year % 400 == 0){
//         printf("%d la nam nhuan", year);
//     }
//     else if (year % 4 == 0 && year % 100 != 0){
//         printf("%d la nam nhuan", year);
//     }
//     else {
//         printf("%d khong phai nam nhuan", year);
//     }
//     return 0;
// }

// bài 9
// #include <stdio.h>
// int main(){
//     float a , kq;
//     printf("nhap con so lon hon 0: ");
//     scanf("%f",&a);
//     kq = sqrt(a);
//     printf("so %.f co can bac hai la: %.4f",a,kq );
//     return 0;
// }

// bài 10
// #include <stdio.h>
// int main(){
//     float a, b , x ;
//     printf("nhap con so a: ");
//     scanf("%f",&a);
//     printf("nhap con so b: ");
//     scanf("%f",&b);
//     if(a==0){
//         if ( b==0 ){
//             printf("Vo so nghiem");
//         }
//         else{
//             printf("vo nghiem");
//         }
//     }
//     else {
//         x = -b/a;
//         printf("nghiem phuong trinh la %.2f ",x);
//     }
//     return 0;
// }
// bài 11
// #include <stdio.h>
// int main(){
//     float a , b , c , x , x2, delta;
//     printf("nhap he so a: ");
//     scanf("%f",&a);
//     printf("nhap he so b: ");
//     scanf("%f",&b);
//     printf("nhap he so c: ");
//     scanf("%f",&c);
//     if (a == 0){
//         if(b==0){
//             if ( c==0 ){
//                 printf("Vo so nghiem");
//             }
//             else{
//                 printf("vo nghiem");
//             }
//         }
//         else {
//             x = -c/b;
//             printf("nghiem phuong trinh la %.2f ",x);
//         }
//     }
//     else {
//         delta = b*b-4*a*c;
//         if (delta<0){
//             printf("phuong trinh co nghiem phuc \n");
//             printf("x = (-%.fi + %.f) / %.f \n",b,sqrt(abs(delta)), a*2 );
//             printf("x2 = (-%.fi - %.f) / %.f ", b , sqrt(abs(delta)), a*2);
//         }
//         else {
//             if (delta==0){
//                 x = -b/2*a;
//                 printf("phuong trinh co nghiem kep \n");
//                 printf("x = %.2f", x);
//             }
//             else {
//                 x = (-b + sqrt(delta)/2*a);
//                 x2 = (-b - sqrt(delta)/2*a);
//                 printf("phuong trinh co 2 nghiem \n");
//                 printf("x1 = %.2f \n",x);
//                 printf("x2 = %.2f",x2);
//             }
//         }
//     }
//     return 0;
// }

// bài 12
// #include <stdio.h>
// int main(){
//     int a;
//     printf("nhap mot con so: ");
//     scanf("%d",&a);
//     switch(a){
//         case 2 : printf("This is Monday");
//             break;
//         case 3: printf("This is Tuesday");
//             break;
//         case 4 : printf("This is Saturday");
//             break;
//         case 5 : printf("This is Thursday");
//             break;
//         case 6 : printf("This is Friday");
//             break;
//         case 7 : printf("This is Saturday");
//             break;
//         default : printf(" This is Sunday");
//             break;
//     }
//     return 0;
// }

// // bài 13
// #include <stdio.h>
// #define TRUE 1
// int main(){
//     // int a= 1;
//     // printf("nhap thang ma ban muon biet co bao nhieu ngay: ");
//     // // scanf("%d",&a);
//     switch(TRUE){
//         printf("thang co 31 ngay");
//         //     break;
//         // case 2 : printf("thang %d co 30 ngay", a);
//         //     break;
//         // case 3: printf("thang %d co 31 ngay", a);
//         //     break;
//         // case 4 : printf("thang %d co 30 ngay", a);
//         //     break;
//         // case 5 : printf("thang %d co 31 ngay", a);
//         //     break;
//         // case 6 : printf("thang %d co 30 ngay", a);
//         //     break;
//         // case 7 : printf("thang %d co 31 ngay", a);
//         //     break;
//         // case 8 : printf("thang %d co 31 ngay", a);
//         //     break;
//         // case 9 : printf("thang %d co 30 ngay", a);
//         //     break;
//         // case 10 : printf("thang %d co 31 ngay", a);
//         //     break;
//         // case 11 : printf("thang %d co 30 ngay", a);
//         //     break;
//         // case 12 : printf("thang %d co 31 ngay", a);
//         //     break;
//         // default : printf("ban da nhap sai");
//     //         break;
//         // case 4: printf("g");
//         // case 5: printf("f");
//         // case 8: printf("r");
//     }
//     return 0;
// }

// /
    // int i=2 , j=2 ;
    // while(i+1?--i:j++)
    //     printf("%d",i);
    //     printf("%d",j);
    // char c = 125 ; 
    // int i=0 ;
    // do {
    //     printf("%d",c);
    //     i++;
    // } 
    // while(c++);{
    //     printf("k");
    //     }
    // printf("\n%d",i);
    // // while (c != c++) printf("%d",c);
// #include <stdio.h>
// int main(){
// 	int x = 1;
// 	for (x;x<10;++x) printf("%d\t",x);
// #include <stdio.h>
// int main(){    
//     int x;
//     printf("nhap 1 con so: ");
//     scanf("%d",&x);
//     for(;x!=10;){
//         printf("%d \n",x);
//         printf("nhap lai 1 con so ( nhap so 10 neu muon thoat): ");
//         scanf("%d",x);
//     }    
// #include <stdio.h>
// int main(){
//     int i = 1;
//     while (i<50){
//         printf("%d\t",i);
//         i++;
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int x=0;
//     while(x<10){
//         printf("%d\t",x);x++;  
//     }
// }