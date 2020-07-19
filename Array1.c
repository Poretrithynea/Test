/*#include<stdio.h>
int main(){
int a[5],i;
for(i=0;i<5;i++)
{
	printf("Input Array");scanf("%d",&a[i]);
	printf("%d\n",a[i]);	
}
//for(i=0;i<5;i++)
//{
//	printf("%d\n",a[i]);
//}*/
#include<stdio.h>
int main(){
	int a[100],i,n;
	printf("Input Array:");scanf("%d",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

