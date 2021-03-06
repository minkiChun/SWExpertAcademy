/*
	6718. 희성이의 원근법 - D3
	https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWd7qcdatpEDFAUh&categoryId=AWd7qcdatpEDFAUh&categoryType=CODE
*/

#include <iostream> // cin 사용 위해 필요 
#include <vector> // vector 사용 위해 필요  
#include <algorithm> // sort 사용 위해 필요 
#include <string>
#include <numeric>
#include <sstream>
#include <cstring>

using namespace std;

int main()
{
	int t, ans, line = 1, len, n, m, k, temp, sum, max, number;
	bool flag, flag2;
	vector<int> vec, temp_vec, ans_vec;
	vector<vector<int>> vec_vec;
	string str, temp_str;

	cin >> t;

	while (t > 0) {
		//입력    
		cin >> n;

		/*
			1. 0.1km 미만 : 0으로 매긴다.
			2. 0.1km 이상 1km 미만 : 1으로 매긴다.
			3. 1km 이상 10km 미만 : 2로 매긴다.
			4. 10km 이상 100km 미만 : 3으로 매긴다.
			5. 100km 이상 1000km 미만 : 4로 매긴다.
			6. 1000km 이상 : 5로 매긴다.
		*/

		if (n < 100)
			ans = 0;
		else if (n < 1000)
			ans = 1;
		else if (n < 10000)
			ans = 2;
		else if (n < 100000)
			ans = 3;
		else if (n < 1000000)
			ans = 4;
		else
			ans = 5;

		//출력
		printf("#%d %d\n", line++, ans);
		t--;
	}

	return 0;
}