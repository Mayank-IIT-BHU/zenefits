#include<stdio.h>
int main()
{
	int a[10],i,n,pos,flag=0;
	printf("Enter 10 elements in the array\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to be searched\n");
	scanf("%d",&n);
	for(i=0;i<10;i++)
		if(a[i]==n)
		{
			pos=i+1;
			printf("Element found at position=%d\n",pos);
			flag=1;
			break;
		}
	if(flag==0)
		printf("Element not found\n");
	return 0;
}
