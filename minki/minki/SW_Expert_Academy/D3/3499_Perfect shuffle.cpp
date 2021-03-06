/*
	3499. 퍼펙트 셔플 D3
	https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWGsRbk6AQIDFAVW&categoryId=AWGsRbk6AQIDFAVW&categoryType=CODE&&&
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
	
	cin >> t;

	while (t > 0) {
		//입력
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> temp_str;
			str_vec.push_back(temp_str);
		}

		//홀수 경우 처리
		temp = n % 2;

		for (int i = 0; i < n; i++) {
			if (i % 2 == 0)
				ans_vec.push_back(str_vec[i/2]);
			else if (i % 2 == 1)
				ans_vec.push_back(str_vec[(n + i - 1 + temp)/2]);
		}


		//출력
		printf("#%d ", line++);
		for (int i = 0; i < n; i++)
			printf("%s ", ans_vec[i].c_str());
		puts("");
		str_vec.clear();
		ans_vec.clear();
		t--;
	}

	return 0;
}