#include <stdio.h>
  int isprime(int n)
{
   int i;
   for(i=2;i<=n-1;i++)
   {
   		if(n=2||1)
	return n;
   	else if(n%i==0)
   	return 0;
   	else if (n%i!=0)
	   return 1;
   } 	
}
 int main()
 {
 	int n,i;
 	while(1)
	 {printf("请输入一个数字：");
	scanf("%d",&n);

	printf("%d\n",isprime(n)); 
 }
	 
	 
	 
 }
  
 