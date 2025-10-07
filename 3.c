#include<stdio.h>
int main()
{
 int i,a[50],n,s,f=0;
 printf("enter array size:");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
  printf("array a[%d]->",i);
  scanf("%d",&a[i]);
 }
 printf("enter search element:");
scanf("%d",&s);
 for(i=0;i<=n;i++)
 {
  if(s==a[i])
  {
  printf("element %d found in %d index",s,i);
   f=1;
   break;
 }
 if(!s)
 {
 printf("element %d not found",s);
 }
 }
return 0;
}
