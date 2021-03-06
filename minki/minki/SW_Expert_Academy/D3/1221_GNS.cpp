/*
	1221. [S/W 문제해결 기본] 5일차 - GNS D3
	https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14jJh6ACYCFAYD&categoryId=AV14jJh6ACYCFAYD&categoryType=CODE&&&
*/

#include <iostream> // cin 사용 위해 필요 
#include <vector> // vector 사용 위해 필요  
#include <algorithm> // sort 사용 위해 필요 
#include <string>
#include <numeric>
#include <sstream>

using namespace std;

int main()
{
	int t, ans, line = 1, len, n, m, k, temp, sum, max, cnt,index;
	bool flag;
	vector<int> vec, temp_vec, ans_vec;
	string str, temp_str, line_str;
	
	cin >> t;

	vector<string> number = { "ZRO", "ONE", "TWO", "THR", "FOR", "FIV", "SIX", "SVN", "EGT", "NIN" }, vec_str;
	vector<string>::iterator iter;

	while (t > 0) {
		//입력
		cin >> line_str >> len;
		for (int i = 0; i < len; i++) {
			cin >> temp_str;
			iter = find(number.begin(), number.end(), temp_str);
			
			//만약 string이 있으면
			if (iter != number.end())
				index = distance(number.begin(), iter);
			vec.push_back(index);
		}

		sort(vec.begin(), vec.end());

		for (int i = 0; i < len; i++)
			vec_str.push_back(number[vec[i]]);

		//출력
		cout << line_str << endl;
		for (int i = 0; i < len; i++)
			printf("%s ",vec_str[i].c_str());
		puts("");

		vec.clear();
		vec_str.clear();
		t--;
	}

	return 0;
}