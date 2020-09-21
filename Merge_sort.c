
#include<stdio.h>

void mergesort(int a[] ,int i , int j);
void merge(int a[],int i1, int j1, int i2, int j2);

int main()
{
  int a[50],n,i;
  printf("\nEnter no of elements :");
  scanf("%d",&n);
  printf("\nEnter array elements :");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  printf("\nUnsorted Data:");
  for(i=0;i<n;i++)
    printf("%5d",a[i]);

  mergesort(a,0,n-1);

  printf("\nSorted array is :");
  for(i=0;i<n;i++)
    printf("%d   ",a[i]);
  
}
void mergesort(int a[] ,int i , int j)
   {
  int mid;
  if(i<j)
   { mid=(i+j)/2;
     mergesort(a,i,mid);
     mergesort(a,mid+1,j);
     merge(a,i,mid,mid+1,j);
   }
    }


void merge(int a[],int i1, int j1, int i2, int j2)
  {
     int temp[50];  
     int i,j,k;
     i=i1;
     j=i2;
     k=0;
     while(i<=j1 && j <=j2) //while elemnts in both lists
      {
  if(a[i]<a[j])
     temp[k++]=a[i++];
        else
     temp[k++]=a[j++];
      }
    while(i<=j1)  //copy remaining elements of the first list
  temp[k++]=a[i++];
    
    while(j<=j2)  //copy remaining elements of the second list
  temp[k++]=a[j++];
  
  //Transfer elemnts from temp[] back to a[]

    for(i=i1,j=0;i<=j2;i++,j++)
       a[i]=temp[j];
  }

