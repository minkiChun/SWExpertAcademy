/*
	3131. 100만 이하의 모든 소수 -D3
	https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV_6mRsasV8DFAWS&categoryId=AV_6mRsasV8DFAWS&categoryType=CODE
*/

#include <iostream>
#include <vector>   
#include <algorithm> 
#include <string>
#include <sstream>
#include <cstdio>

using namespace std;

int main()
{
	int t, ans, line = 1, len, n, m, k, temp, sum, max, cnt, index;
	vector<int> vec, temp_vec;
	string str, temp_str;
	vector<string> str_vec, ans_vec;

	n = 1000000;

	bool *PrimeArray = new bool[n + 1];

	//처음에 모든 숫자가 소수라고 가정
	for (int i = 2; i <= n; i++) 
		PrimeArray[i] = true;

	for (int i = 2; i*i <= n; i++) {
		if (PrimeArray[i])
			for (int j = i; j <= n/i; j++)
				PrimeArray[j*i] = false;
	}

	for (int i = 2; i <= n; i++)
		if (PrimeArray[i])
			printf("%d ", i);

	return 0;
}