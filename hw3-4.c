
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ans,g,a=0,b=0;
    int broke;
    int A[4]={0,0,0,0};
    int G[4]={0,0,0,0};
    scanf("%d",&ans);
    A[0]=ans/1000;
    A[1]=(ans%1000)/100;
    A[2]=(ans%100)/10;
    A[3]=(ans%10);
    broke=1;
    while(broke)
    {
    scanf("%d",&g);
    G[0]=g/1000;
    G[1]=(g%1000)/100;
    G[2]=(g%100)/10;
    G[3]=(g%10);
    if(g==0)
    {
        broke=0;
    }
    for (int i=0;i<4;i++)
    {

        for(int j=0;j<4;j++)
        {
         if(A[i]==G[j])
         {
          if(i==j)
          {
           a+=1;
           break;
          }
          else
          {
           b+=1;
           break;
          }

         }


        }

    }
    printf("%d",a);
    printf("A");
    printf("%d",b);
    printf("B");
    a=0;
    b=0;



    }
}
