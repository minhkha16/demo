#include<stdio.h>
void laiSuat(int tienVay)
{
	int nam = 1;
	int tienLai;
	int tienGoc = tienVay /288;
	int tienTra;
	int tienCon;
	tienCon = tienVay;
	printf("Ky han | Lai phai tra | Goc phai tra | So tien con lai  \n");
	int i;
	for(i = 1; i <= 288; i++)
	{
		tienLai = tienCon * 0.06;
		tienTra = tienGoc + tienLai;
		tienCon = tienCon - tienGoc;
		printf("...................................");
		printf("");
		printf("%6d |",i);
		printf("%12d |",tienLai);
		printf("%12d |",tienGoc);
		printf("%16d |",tienTra);
		printf("%15d |",tienCon);
		printf("\n");
		if (i%12 == 0){
			nam++;
			printf("\n");
			printf("============Ket thuc %d nam ===============",nam);
			printf("\n");
		}
		
	}
}

int main()
{
	printf("Chuong trinh tra gop mua xe \n");
	int tienXe ;
	printf("nhap gia xe:");
	scanf("%d",&tienXe);
	int tienVay = 0;
	int tienTraTruoc = 0;
	tienTraTruoc = tienXe *0.2;
	tienVay = tienXe *0.8;
	printf("Tien tratruoc: %d",tienTraTruoc);
	printf("Tien vay: %d",tienVay);
	printf("");
	if(tienVay >500000){
		tienVay = 500000;
		tienTraTruoc = tienXe - tienVay;
		laiSuat(tienVay);
		printf("So tien cua ban vuot han muc quy dinh \n");
		printf("Tien tra truoc %d \n",tienTraTruoc);
		printf("Tien vay: %d \n",tienVay);
		
	}else{
		laiSuat(tienVay);
		printf("So tien cua ban vuot han muc quy dinh \n");
		printf("Tien tra truoc %d \n",tienTraTruoc);
		printf("Tien vay: %d \n",tienVay);
		
	}
	 
}