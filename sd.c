
#include <stdio.h>

int main ()
{

  int a, i,k,b;
  scanf ("%d",&a);
  scanf("%d",&b);
  int sum=0;
  for(i = 1; i <= a; i++)
    {
        printf("%d\n",i);
    }
        
for(k=1;k<=b;k++)
	{
	  sum=sum+k;
	}
	printf ("%d\n", sum);
      return 0;
    }
