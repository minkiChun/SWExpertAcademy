/*
	3809. 화섭이의 정수 나열  -D3
	https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWHz7xD6A20DFAVB&categoryId=AWHz7xD6A20DFAVB&categoryType=CODE
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

	cin >> t;

	while (t > 0) {
		//입력
		scanf("%d", &n);
		
		ans = 0;
		int arr[1000] = { 0, }, temp_arr[1000];

		for (int i = 0; i < n; i++) {
			scanf("%d", &temp_arr[i]);
			arr[temp_arr[i]]++;
			if(i > 0)
				arr[temp_arr[i - 1] * 10 + temp_arr[i]]++;
			if(i > 1)
				arr[temp_arr[i - 2] * 100 + temp_arr[i - 1] * 10 + temp_arr[i]]++;
		}

		while (1) {
			if (arr[ans] == 0)
				break;
			ans++;
		}

		//출력
		cout << "#" << line++ << " " << ans;
		cout << endl;
		t--;
	}
	return 0;
}