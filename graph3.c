#include<stdio.h>
void indegree(int a[10][10],int n)
{
    int i,j,s;
    for(i=1;i<=n;i++)
    {
       s=0;
       for(j=1;j<=n;j++)
       {
           s+=a[j][i];
       }
       printf("\n indegree of V%d=%d",i,s);
    }
}
void outdegree(int a[10][10],int n)
{
    int i,j,s;
    for(i=1;i<=n;i++)
    {
       s+=a[i][j];
    }
    printf("\n outdegree of V%d=%d",i,s);
}
void totaldegree(int a[10][10],int n)
{
   int i,j,s;
   for(i=1;i<=n;i++)
   {
      s=0;
      for(j=1;j<=n;j++)
      {
         s=s+a[j][i]+a[i][j];
      }
      printf("\n totaldegree of V%d=%d",i,s);
}
}
int main()
{
   int a[10][10],i,j,n;
   printf("enter limit");
   scanf("%d",&n);
   printf("enter graph in the matrix format");
   for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)
      scanf("%d",&a[i][j]);
      indegree(a,n);
      outdegree(a,n);
      totaldegree(a,n);
}
