#include<stdio.h>
void bubble_sort(int a[],int n);
int binsearch(int a[],int,int);

                                                                                                                             
int main()
{
        int a[50],n,i,x,ans;
        printf("\nEnter no of elements :");
        scanf("%d",&n);
        printf("\nEnter array elements :");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
       // bubble_sort(a,n);
printf("\n Enter no to be serched");
scanf("%d",&x);
if((ans=binsearch(a,n,x))==-1)
 printf("\n record not found");
else
 printf("\n Record found at position %d",ans);
                                                                                                                                                                                                                                    
}
/* void bubble_sort(int a[],int n)
{
        int i,j,k,temp;
        printf("\nUnsorted Data:");
        for(k=0;k<n;k++)
          printf("%5d",a[k]);
        for(i=1;i<n;i++)
          {
            for(j=0;j<n-i;j++)
                {
                  if(a[j]>a[j+1])
                   {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                   }
               }
          }

  printf("\n Sorted Data\n");
        for (i=0;i<n;i++)
                printf("%5d",a[i]);
}
*/
int binsearch(int a[],int n,int x)
{
   int high,mid,low;
   high=0;
   low=n-1;
while(high<=low)
{
mid=(high+low)/2;
if(a[mid]==x)
  {
printf("%d",x);
 return(mid+1);
}
else                                                                                

if(x<a[mid])
low=mid-1;
else
    high=mid+1;
}
return -1;
}
                                                                                                                             
