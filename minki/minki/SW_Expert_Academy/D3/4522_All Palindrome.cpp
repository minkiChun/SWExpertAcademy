/*
	4522. 세상의 모든 팰린드롬 - D3
	https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWO6Oao6N4QDFAWw&categoryId=AWO6Oao6N4QDFAWw&categoryType=CODE
*/

#include <iostream> // cin 사용 위해 필요 
#include <vector> // vector 사용 위해 필요  
#include <algorithm> // sort 사용 위해 필요 
#include <string>
#include <numeric>
#include <sstream>
#include <cstring>

using namespace std;

string func(string str) {
	int len = str.length();
	bool flag = true;
	for (int i = 0; i < len; i++) {
		if (str[i] != str[len - i - 1]) {
			if (str[i] != '?' && str[len - i - 1] != '?') {
				flag = false;
				break;
			}
		}

	}
	return flag ? "Exist" : "Not exist";
}

int main()
{
	int t, line = 1, len, n, m, k, temp, sum, max, number;
	bool flag, flag2;
	vector<int> vec, temp_vec, ans_vec;
	vector<vector<int>> vec_vec;
	string str, temp_str;

	cin >> t;

	while (t > 0) {
		//입력    
		cin >> str;

		//출력
		printf("#%d %s\n", line++, func(str).c_str());
		t--;
	}

	return 0;
}