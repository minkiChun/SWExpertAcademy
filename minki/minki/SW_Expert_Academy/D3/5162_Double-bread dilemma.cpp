/*
	5162. 두가지 빵의 딜레마 D3
	https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWTaTDua3OoDFAVT&categoryId=AWTaTDua3OoDFAVT&categoryType=CODE
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
	int t, ans, line = 1, len, n, m, k, temp, sum, max, cnt, number;
	bool flag;
	vector<int> vec, temp_vec, ans_vec;
	string str, temp_str;

	cin >> t;

	int a, b, c ,ans1,ans2;

	while (t > 0) {
		//입력
		cin >> a >> b >> c;

		ans = a > b ? b : a;
		ans = c / ans;

		printf("#%d %d\n", line++, ans);
		t--;
	}

	return 0;
}