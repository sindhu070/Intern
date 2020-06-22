#include<stdio.h>
void main()
{
	int a[5]={1,2,3,4,5};
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
		printf("%u \n",&a[i]);
	}
	printf("%d\n",a[1]);
	printf("%d\n",4[a]);
	printf("%d\n",*(a+3));
	
}
