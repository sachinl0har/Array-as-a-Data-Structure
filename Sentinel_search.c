#include<stdio.h>
int sentinel_search(int [],int,int);
int main()
{
int a[10],key,n,i;
printf("\nEnter the size of array:");
scanf("%d",&n);
printf("\nEnter the elements of array:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nEnter the element which u want to searched:");
scanf("%d",&key);
int val=sentinel_search(a,n,key);
if(val==-1)
printf("Element %d is not present in an array",key);
else
printf("Element %d is present at %d position",key,val+1);
}

int sentinel_search(int a[10],int n,int key)
{
  int i=0;
  a[n]=key;
  while(a[i]!=key)
   {
  i++;
   }
if(i==n)
return -1;// sentinel reached,key not found
else
return i;//return position where key is found
}

   
