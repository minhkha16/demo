#include <stdio.h>
int main()
{
  int arr[10], n, i;
  int sum=0;
  float tb;
  printf("nhap vao so n:\n ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("nhap cac so vao mang:\n arr[%d] = ", i + 1);
    scanf("%d", &arr[i]);
  }
  printf("cac so duoc in ra la:\n ");
  for (int i = 0; i < n; ++i)
  {
    printf("%d\n", arr[i]);
    sum = sum + arr[i];
  }
 tb= sum / n;
 printf(" tb = %.2f", tb);
  return 0;
}