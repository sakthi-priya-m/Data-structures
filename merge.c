#include <stdio.h>
#define N 100
int main()
{
 int a1[N], a2[N], merge[N * 2];
 int n1, n2, n3;
 int i1, i2, merge_i;
 int i;
 printf("Enter the size of first array : ");
 scanf("%d", &n1);
 printf("Enter elements of first array : ");
 for(i=0; i<n1; i++)
 {
 scanf("%d", &a1[i]);
 }
 printf("\nEnter the size of second array : ");
 scanf("%d", &n2);
 printf("Enter elements of second array : ");
 for(i=0; i<n2; i++)
 {
 scanf("%d", &a2[i]);
 }
 n3 = n1 + n2;
 i1 = 0;
 i2 = 0;
 for(merge_i=0; merge_i < n3; merge_i++)
 {
 if(i1 >= n1 || i2 >= n2)
 {
 break;
 }
 if(a1[i1] < a2[i2])
 {
 merge[merge_i] = a1[i1];
 i1++;
 }
 else
 {
 merge[merge_i] = a2[i2];
 i2++;
 }
 }
 while(i1 < n1)
 {
 merge[merge_i] = a1[i1];
 merge_i++;
 i1++;
 }
 while(i2 < n2)
 {
 merge[merge_i] = a2[i2];
 merge_i++;
 i2++;
 }
 printf("\nArray merged in ascending order : ");
 for(i=0; i<n3; i++)
 {
 printf("%d\t", merge[i]);
 }
 return 0;
}






