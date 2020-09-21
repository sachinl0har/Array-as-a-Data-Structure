/* MERGE sort */
#include<stdio.h>
struct emp
{
 int age;
};
struct emp e1[20];
void mergesort(struct emp e1[] ,int i , int j);
void merge(struct emp e1[],int i1, int j1, int i2, int j2);

int main()
{
int n,i;
FILE *fptr,*fptr1;
int cnt=0;
fptr=fopen("age.txt","r");
if(fptr==NULL)
{
printf("\nError in  opening file");
exit(0);
}
while(!feof(fptr))
        {
                fscanf(fptr,"%d",&e1[cnt].age);
                cnt++;
        }
	printf("\nUnsorted Data:");
	for(i=0;i<cnt-1;i++)
	  printf("%5d",e1[i].age);

   mergesort(e1,0,cnt-1);

	printf("\nSorted array is :");
	for(i=1;i<cnt;i++)
		printf("%5d",e1[i].age);
fptr1=fopen("sortedemponage.txt","w");
for(i=1;i<cnt;i++)
{
fprintf(fptr1,"%5d",e1[i].age);
}                                                                                                                       
}

void mergesort(struct emp e1[] ,int i , int j)
   {
	int mid;
	if(i<j)
	 { mid=(i+j)/2;
	   mergesort(e1,i,mid);    //left recursion
	   mergesort(e1,mid+1,j);  //right recursion
	  
 merge(e1,i,mid,mid+1,j); //meging of two sorted sub-arrays
	 }
    }
                                                                       
                                                                              
 void merge(struct emp e1[10],int i1, int j1, int i2, int j2)
  {
     int temp[50];	//array used for merging
     int i,j,k;
     i=i1;	//beginning of the first list
     j=i2;	//beginning of the second list
     k=0;
     while(i<=j1 && j<=j2) //while elemnts in both lists
      {
	if(e1[i].age<e1[j].age)
	   temp[k++]=e1[i++].age;
	else
	   temp[k++]=e1[j++].age;
      }
    while(i<=j1)	//copy remaining elements of the first list
	temp[k++]=e1[i++].age;
   while(j<=j2)	//copy remaining elements of the second list
		temp[k++]=e1[j++].age;
 //Transfer elemnts from temp[] back to a[]
    for(i=i1,j=0;i<=j2;i++,j++)
       e1[i].age=temp[j];
  }

