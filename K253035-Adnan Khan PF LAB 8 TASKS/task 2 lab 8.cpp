#include<stdio.h>
int main(){
	int N;
	printf("Enter a number: ");
	scanf("%d", &N);
	for (int i =1; i<=10; i++)
	{
		for (int j=1; j<=1; j++)
		{
			printf("%d x %d = %d\n", N, i, N*i);
		}
	}
	return 0;
}
