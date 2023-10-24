#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if(0<a<b<=24,0<c<d<=24,0<e<f<=24)
    {
       if(b!=c&&b!=e&&d!=a&&d!=e&&f!=a&&f!=c)
       {
           printf("3\n");
       }
       else if(b==c&&d==e)
       {
           printf("1\n");
       }
        else if(d==a&&b==e)
       {
           printf("1\n");
       }
        else if(f==c&&d==a)
       {
           printf("1\n");
       }
       else
       {
            printf("2\n");
       }


    }

}

