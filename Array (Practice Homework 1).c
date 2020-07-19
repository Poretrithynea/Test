#include<stdio.h>
int main(){
	
	int i,n,ch,search;
	printf("Input n:");scanf("%d",&n);
	int a[n];
	int b=0;
	start:
	system("cls");
	printf("1.Input\n");
	printf("2.Output\n");
	printf("3.Search\n");
	printf("4.Update\n");
	printf("Input Choose:");scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			for(i=0;i<n;i++)
			{
				printf("Input Array:");scanf("%d",&a[i]);
			}
			break;
		case 2:
			for(i=0;i<n;i++)
			{
				printf("%d\n",a[i]);
			}
			break;
		case 3:
			 printf("Input to search:");
			 scanf("%d",&search);
			 for(i =0;i<n;i++)
			 {
			 	if(search==a[i])
			 	 {
			 	 //	b=1000;
			 		printf("Search is: %d\n",a[i]);
				 }
			 }
			 if(b==0)
			 {
			 	printf("search not found\n");
			 }
			break;
	}
	getch();
	goto start;
}
