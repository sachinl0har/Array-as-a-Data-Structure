#include<stdio.h>
void selection_sort(int a[],int n);

int main()
{
	int a[50],n,i;
	printf("\nEnter no of elements :");
	scanf("%d",&n);
	printf("\nEnter array elements :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	selection_sort(a,n);
	

}
void selection_sort(int a[],int n)
{
	int i,k,temp,current,pos,smallest,compcount;
	printf("\nUnsorted Data:");
	for(k=0;k<n;k++)
	  printf("%5d",a[k]);
	for(current=0;current<n-1;current++)
	  {
smallest=a[current];
pos=current;	  
  for(i=current+1;i<=n-1;i++,compcount++)
		 if(a[i]<smallest)
		   {
smallest=a[i];
pos=i;
}
			temp=a[current];
		        a[current]=a[pos];
a[pos]=temp;
		}
	  
	printf("\n Sorted Data\n");
	for (i=0;i<n;i++)
		printf("%5d",a[i]);
}
