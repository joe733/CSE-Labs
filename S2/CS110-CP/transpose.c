#include <stdio.h>
 
int main()
{
	int m,n,i,j,a[20][20];
	printf("Enter the order: ");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d", &a[i][j]);
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}
