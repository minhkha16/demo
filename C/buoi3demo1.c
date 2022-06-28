#include <stdio.h>
//từ khóa keyword
//biến -> variable
//kiểu dữ liệu của biến -> data type
//ngôn ngữ c phân biệt chữ hoa chữ thường - case sensitive

//ngôn ngữ c thường có 4 kiểu chính =>
//kiểu số nguyên: 0,1,2,....
//kiểu số thực: -3,5, 7.3...
//kiểu luận lý: đúng, sai
//<=> true (đúng là một số khác 0, thường là 1), false (sai) =0
//kiểu ký tự: chỉ bao gồm 255 ký tự nằm torng bảng ascii
main()
{
    // int x=0, y=0, sum=0;
    //nhap gia tri bien x
    // printf("nhap vao so nguyen x");
    // scanf("%d", &x);
    // printf("gia tri x = %d", x);
    // //nhap gia tri bien x
    // printf("\nnhap vao so nguyen y");
    // scanf("%d", &y);
    // printf("gia tri y = %d", y);
    // sum = x + y;
    // printf("\ntong sum = %d", sum);

    // int z=10, Z=20;
    // printf("gia tri z thuong = %d va gia tri bien Z hoa = %d", z, Z);

    //int nam trong khoảng âm 2 tỷ 1 đến dương 2 tỷ một
    // int t=3000000000; //=> error
    // printf("gia tri t=%d", t);

    // int a=10; //phép gán giá trị  là 1 dấu =
    //phép so sánh là 2 dấu ==
    //char -> character
    // char i = 'A';
    // printf("gia tri bien i la = %c", i);
    // printf("vi tri i trong bang ascii la = %d", i);

    // int  j = 1283;
    // printf("vi tri j la 1283 trong bang ascii co gia tri = %c", j);

    int a = 8, b = 3, c=0;

    c = a==b; // => c = 0;

    printf("gia tri a+b= %d", a + b);
    printf("\ngia tri a-b= %d", a - b);
    printf("\ngia tri a*b= %d", a * b);
    printf("\ngia tri a/b= %d", a / b);
    printf("\ngia tri a/b lay phan du= %d", a % b);
    //5 chia 10 => bằng 0 dư 5 -> tại a và b là kiểu số nguyên
    //10 chia 5 => bằng 2 dư 0 -> 2

    // c = c + a; //=> c = 8
    // c += a; //<=> c = c + a; 
    // c>a;  // >, <, <= , >=, ==, !=



}

