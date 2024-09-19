#include<stdio.h>
#include<math.h>

int main()
{
	int  n,j,k; 
	printf("100~200内的素数有：\n");
	for(n=100;n<=200;n++)
	{
		j=2;
		k=sqrt(n);
		while(j<=k)
		{
			if(n%j==0)
			break;
			j++;
		}
		if(j>k)
		printf("%d,",n);
    } 
	printf("\b \n");
}
		 

