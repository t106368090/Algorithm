#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int sum = 1;
	unsigned int n, i;

	printf("Type number: ");
	scanf("%d", &n);
	i = 0;

	if(n == 0)
		printf("%d!=%3d\n", n, sum);
	else {
		printf("0!=%3d\n", sum);
		for (int j=1; j<=n; j++ , i++) {
			sum *= j;
			printf("%d!=%3d\n", j, sum);		
		}
	}	
	return 0;
}
