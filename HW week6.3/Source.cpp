#include <stdio.h>
void func(int n) {
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
int main()
{
	int k;
	scanf_s("%d", &k);
	func(k);
	return 0;
}