#include <stdio.h>

using namespace std;

int main()
{
	int N;
	scanf("%d", &N);

	for (int C = 1; C <= 10; C++)
	{
		printf("%d x %d = %d\n", C, N, C * N);
	}
	return 0;
}