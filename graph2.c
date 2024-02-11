#include<stdio.h>
int main()
{
    int a[100][100],n,i,j,in,out;
    printf("enter number of vertices=");
    scanf("%d",&n);
    printf("\n enter graph in the format of matrix=");
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
      {
         scanf("%d",&a[i][j]);
       }
    }
      printf("\n adjacency matrix= \n");
      for(i=1;i<=n;i++)
      {
        printf("\tV%d",i);
       }
       for(i=1;i<=n;i++)
       {
          printf("\nV%d",i);
          for(j=1;j<=n;j++)
           {
              printf("\t%d",a[i][j]);
            }
        }
    for(i=1;i<=n;i++)
    {
       in=0;
       out=0;
       for(j=1;j<=n;j++)
       {
          in=in+a[j][i];
          out=out+a[i][j];
          }
          printf("\nV%d indegree:%d\toutdegree:%d\t",i,in,out);
       }
    }

