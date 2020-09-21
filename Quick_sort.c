/* QUICK sort for numbers.*/
#include<stdio.h>

void quick_sort(int [],int,int);
int partition(int [],int,int);


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

  quick_sort(a,0,n-1);


  printf("\nSorted array is :");
  for(i=0;i<n;i++)
    printf("%d   ",a[i]);
    
}

void quick_sort(int a[],int l,int u)
{
  int j;
  if(l<u)
  {
    j=partition(a,l,u);
    quick_sort(a,l,j-1);
    quick_sort(a,j+1,u);
  }
}
int partition(int a[],int l,int u)
{
    int pivot,down,up,temp;
    pivot=a[l];
    down=l;
    up=u+1;
    do
    {
  do
  {  down++;
    
  }while(a[down]<=pivot && down<up);

  do
  {  up--;
    
  }while(a[up]>pivot);

  if(down<up)
  {
    temp=a[down];
    a[down]=a[up];
    a[up]=temp;
    
  }
    }while(down<up);
    a[l]=a[up];
    a[up]=pivot;
    return(up);
}

