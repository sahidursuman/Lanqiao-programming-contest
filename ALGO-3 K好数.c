/*
	问题描述
如果一个自然数N的K进制表示中任意的相邻的两位都不是相邻的数字，那么我们就说这个数是K好数。求L位K进制数中K好数的数目。例如K = 4，L = 2的时候，所有K好数为11、13、20、22、30、31、33 共7个。由于这个数目很大，请你输出它对1000000007取模后的值。

输入格式
输入包含两个正整数，K和L。

输出格式
输出一个整数，表示答案对1000000007取模后的值。
样例输入
4 2
样例输出
7
数据规模与约定
对于30%的数据，KL <= 106；

对于50%的数据，K <= 16， L <= 10；

对于100%的数据，1 <= K,L <= 100。
*/ 
#include <stdio.h>
#define MOD		1000000007
#define MAXKL	100
__int64 a[MAXKL][MAXKL];
int main()
{
	int i, j, k, l, m;
	scanf("%d%d", &k, &l);
	for(i = 0; i < k; i++)
		a[0][i] = 1;
	for(i = 1; i < l; i++)
		for(j = 0; j < k; j++){
			a[i][j] = 0;
			for(m = 0; m < k; m++)
				if(j + 1 != m && j - 1 != m)
					a[i][j] = (a[i][j] + a[i - 1][m]) % MOD;
		}
	for(i = 2; i < k; i++)
		a[l - 1][i] = (a[l - 1][i] + a[l - 1][i - 1]) % MOD;
	printf("%I64d\n", a[l - 1][k - 1]);
	return 0;
}
