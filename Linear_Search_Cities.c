#include<stdio.h>
struct city
{
char cname[20];
int code;
};
struct city c[10];
void linear_search(struct city[],int,char[]);

void main()
{
char sname[20];
FILE *fptr;
int cnt=0;
fptr=fopen("city.txt","r");
if(fptr==NULL)
{
printf("\nError in  opening file");
exit(0);
}
while(!feof(fptr))
        {
                fscanf(fptr,"%s %d",c[cnt].cname,&c[cnt].code);		
cnt++;
        }
printf("%d",cnt);
printf("\nEnterthe name to be searched:");
scanf("%s",sname);
linear_search(c,cnt,sname);
}

void linear_search(struct city c[10],int n,char scity[10])
{
int i,flag=0;
 int scode;
  for(i=0;i<n;i++)
   {
  if(strcmp(c[i].cname,scity)==0)
   {
		
      scode=c[i].code;
// printf("%s is present in file \nCity code is %d",scity,c[i].code);
       flag=1;
       break;
   }
}
if(flag==1)
   printf("%s is present in file \nCity code is %d",scity,scode);
   else
printf("%s is not in the list",scity);

}

   
