#include <stdio.h>

int main()
{
	int n, i, j, k;
	scanf("%d", &n);
	/*******************************五位**********************************/
	for(i = 1; i <= 9; i++)
		for(j = 0; j <= 9; j++)
			for(k = 0; k <= 9; k++){
				if((2 * i + 2 * j + k) == n)
					printf("%d\n", i * 10001 + j * 1010 + k * 100);
			}
	/*******************************六位**********************************/
	for(i = 1; i <= 9; i++)
		for(j = 0; j <= 9; j++)
			for(k = 0; k <= 9; k++){
				if((2 * i + 2 * j + 2 * k) == n)
					printf("%d\n", i * 100001 + j * 10010 + k * 1100);
			}
	return 0; 
}
