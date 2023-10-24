#include <stdio.h>
#include <stdlib.h>

int is_prime(int);
int main()
{
	int n;
	scanf("%d",&n);
	if(is_prime(n)){
		printf("yes\n");
	}else{
		printf("no\n");
	}

  system("PAUSE");
  return 0;
}
int is_prime(int num){
	int i;
	if(num==1){
		return 0;
	}
	else
    {
       for(i=2;i<num;i++)
       {
			if(num%i==0)
			{
				return 0;
			}
		}
	}
	return 1;
}
