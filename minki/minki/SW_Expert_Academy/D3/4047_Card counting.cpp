/*
	4047. 영준이의 카드 카운팅 -D3
	https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWIsY84KEPMDFAWN&categoryId=AWIsY84KEPMDFAWN&categoryType=CODE
*/

#include <iostream>
#include <vector>   
#include <algorithm> 
#include <string>
#include <sstream>
#include <cstdio>

using namespace std;

int *func(string str , int ans[]) {
	int arr[4][13] = { 0, };
	bool flag = false;
	int index;

	for (int i = 0; i < str.length(); i++) {
		switch (str[i])
		{
			case 'S':
				index = 0;
				break;
			case 'D':
				index = 1;
				break;
			case 'H':
				index = 2;
				break;
			case 'C':
				index = 3;
				break;
			default:
				break;
		}
		arr[index][(str[i + 1] - '0') * 10 + str[i + 2] - '0' - 1]++;
		//중복
		if (arr[index][(str[i + 1] - '0') * 10 + str[i + 2] - '0' - 1] > 1){
			flag = true;
			ans[0] = -1;
			break;
		}
		i += 2;
	}

	if(!flag)
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 13; j++)
				if (arr[i][j] == 0)
					ans[i]++;
		}

	return ans;
}

int main()
{
	int t, ans, line = 1, len, n, m, k, temp, sum, max, cnt, index, q, l, r;
	vector<int> vec, temp_vec;
	string str, temp_str;
	vector<string> str_vec, ans_vec;

	cin >> t;

	while (t > 0) {
		//입력
		cin >> str;

		int *arr,ans[4] = { 0, };

		arr = func(str,ans);

		//출력
		cout << "#" << line++ << " ";
		if (arr[0] == -1)
			cout << "ERROR";
		else {
			for (int i = 0; i < 4; i++)
				cout << arr[i] << " ";
		}
		cout << endl;

		t--;
	}
	return 0;
}