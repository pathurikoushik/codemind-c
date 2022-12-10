#include<stdio.h>
int main()
{
	int Size, i, sum = 0;
	float avg = 0;
	scanf("%d", &Size);
	int arr[Size];
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < Size; i++)
	{
		sum = sum + arr[i];
	}

	avg = (float)sum / Size;
	printf("%.2f
", avg);
}