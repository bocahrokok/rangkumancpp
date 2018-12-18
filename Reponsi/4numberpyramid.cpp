#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int i,j,n,k;
printf("Enter a value : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
  for(j=1;j<=n-i;j++)
   printf(c" ");
  {
   for(j=1;j<=i;j++)
   printf("%d",j);
   j=1;
   for(j=i;i>=j;j--)
   if(j==0)
   break;
   else
   {
   k=j-1;
   if(k==0)
   break;
   else
   printf("%d",k);
   }
   printf("\n");
   }
   }
 getch();
}
