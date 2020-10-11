#include <stdio.h>
int compcount=0;
void main()
{
    int a[20],i,n;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("\nEnter the unsorted elements:");
    accept(a,n);
    bubbleSort(a,n);
    printf("\nThe sorted output is:");
    display(a,n);
    printf("\nTotal numberss of comparisons = %d", compcount);
}
void bubbleSort(int a[20],int n)
{
    int i,temp,pass;
    for (pass=1;pass<n;pass++)
    for (i=0;i<=n-pass-1;i++)
    {
        compcount++;
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
}
void accept (int a[], int n)
{
    int i;
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void display (int a[],int n)
{
    int i;
    for (i=0;i<n;i++)
    printf("%d \t",a[i]);
}
