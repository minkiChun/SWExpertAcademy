/*
	RGB거리
	https://www.acmicpc.net/problem/1149
*/

#include <iostream>
#include <vector>   
#include <algorithm> 
#include <string>
#include <sstream>
#include <cstdio>

using namespace std;

#define COLOR_MAX 1000

int min(int a, int b) {
	return a < b ? a : b;
}

void ComputeCosts(int n , int arr[1002][3]) {
	int i, j, min;
	for (i = 1; i <= n; i++)arr[1][i] = c[1][i];


}

int main()
{
	int t, line = 1, len, n, m, k, temp, sum, max, cnt, index;
	vector<int> vec, temp_vec; 
	string str, temp_str;
	vector<string> str_vec, ans_vec;

	int arr[1002][3] = { 0, }, ans[1002][3] = { 0 ,};

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) 
		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
	
	ComputeCosts(n, arr);

	printf("%d\n")

	return 0;
}