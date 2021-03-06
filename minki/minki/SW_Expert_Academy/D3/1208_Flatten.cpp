/*
	1208. [S/W 문제해결 기본] 1일차 - Flatten D3
	https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV139KOaABgCFAYh&categoryId=AV139KOaABgCFAYh&categoryType=CODE&&&
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
	vector<int> vec, temp_vec;
	string str, temp_str;
	vector<string> str_vec,ans_vec;
	
	t = 10;

	while (t > 0) {
		//입력
		cin >> n;
		for (int i = 0; i < 100; i++) {
			cin >> temp;
			vec.push_back(temp);
		}

		for (int i = 0; i < n; i++) {
			vec[distance(vec.begin(), max_element(vec.begin(), vec.end()))]--;
			vec[distance(vec.begin(), min_element(vec.begin(), vec.end()))]++;
		}
		
		printf("#%d %d\n", line++, *max_element(vec.begin(), vec.end()) - *min_element(vec.begin(), vec.end()));
		vec.clear();
		t--;
	}

	return 0;
}