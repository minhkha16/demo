#include<stdio.h>

void nhap(int ar[],int n){

     int i;
     for(i = 0;i < n;i++){
        printf("nhap mang [%d] : ",i);
        scanf("%d",&ar[i]);
     }
}

void xuat(int ar[],int n){

    int i;
    for(i = 0;i < n;i++){
        printf("mang dc xuat ra o vi tri [%d] la %d\n",i,ar[i]);
    }
}

void avg(int ar[],int n){

     int i;
     float sum = 0,tb;

     for(i = 0;i < n;i++){

        sum += ar[i];
     }
     tb = sum / n;
printf("TRUNG BINH CUA MANG LA %.2f\n",tb);

}

void max(int ar[],int n){

      int i;
      int max = ar[0];
       int count = 0;
      for(i = 0;i < n;i++){
        if(max < ar[i]){
            max = ar[i];
      }
      }
       for(i = 0;i < n;i++){
            if(max == ar[i]){
                count++;
       }
       }
         printf("co %d bang vs p/tu max = %d",count,max);
      }


void xoa(int ar[],int *n){
    int i,loc,numb, dem=0;
    int h = *n;
     printf("\nnhap so ban can xoa : "); 
     scanf("%d",&numb);
     for(i = 0;i < *n;i++){
        if(numb == ar[i]){
            for(loc = i;loc < h;loc++){
               ar[loc] = ar[loc + 1];
        }
        dem ++;
        --h;
        i--;
        }
    }
    *n = h;
    if(dem>0){
        if(h>0){
            printf("Cac phan tu trong mang la: ");
                    xuat(ar,h);
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

void find_odd(int ar[],int n){

     int i;
     int count = 0;
     for(i = 0;i < n;i++){
        if(ar[i]%2==0) count++;
     }
         if(count > 0){
            printf("so gia tri chan la %d",count);
         }
         else
            printf("\nkhong ton tai so nao");

}

void find_itg(int ar[],int n){

         int count = 0;
         int numb;
         do{
         printf("\nnhap so ban can tim : "); scanf("%d",&numb);
         }while(numb < 0);

         int i;
         for(i = 0;i < n;i++){
            if(numb == ar[i]){
            count++;
            }
         }

         if(count > 0){
            printf("so duong ban can tim la %d",numb);
         for(i = 0;i < n;i++){
            if(numb == ar[i]){
                printf("\n%d nam o vi tri [%d] trong mang",numb,i);

            }
         }
}
      else{
        printf("so ban can tim %d ko ton tai",numb);
      }
}
int main(){

int n; printf("nhap do dai cua mang : "); scanf("%d",&n);

int loc;
int ar[n];

nhap(ar,n);

printf("\n");

xuat(ar,n);

printf("\n");

avg(ar,n);

xuat(ar,n);

max(ar,n);

printf("\n");

xoa(ar,&n);

printf("\n");

xuat(ar,n);

printf("\n");

find_odd(ar,n);

printf("\n");

find_itg(ar,n);
return 0;
}