#include<stdio.h>
void insertion_sort(int [],int);

int main()
{
  int a[50],n,i;
  printf("\nEnter no of elements :");
  scanf("%d",&n);
  printf("\nEnter array elements :");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  insertion_sort(a,n);

}
void insertion_sort(int a[],int n)
{
  int i,j,temp,k;
  printf("\nUnsorted Data:");
  for(k=0;k<n;k++)
    printf("%5d",a[k]);

  for(i=1;i<n;i++)
  {
    temp=a[i];
    for(j=i-1;j>=0 && a[j]>temp;j--)
      {
      a[j+1]=a[j];
      
      }
    a[j+1]=temp;
        
  }
  printf("\n Sorted Data\n");
  for (i=0;i<n;i++)
    printf("%5d",a[i]);

}
