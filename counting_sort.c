#include<stdio.h>
void countingSort(int a[],int k,int n)
{
int i,c[20]={0},b[20];
for(i=0;i<n;i++)
c[a[i]]+=1;
for(i=1;i<=k;i++)
c[i]=c[i]+c[i-1];
for(i=n-1;i>=0;i--)
{
b[c[a[i]]-1]=a[i];
c[a[i]]-=1;
}
printf("The sorted data is:");
for(i=0;i<n;i++)
printf("%5d",b[i]);
}
int main()
{
int a[10],i,k,n;
printf("Accept size of array:");
scanf("%d",&n);
printf("Enter the array range:");
scanf("%d",&k);
printf("Enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
countingSort(a,k,n);
return 0;

}
