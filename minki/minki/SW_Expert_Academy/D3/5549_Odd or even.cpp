/*
	5549. 홀수일까 짝수일까 - D3
	https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWWxpEDaAVoDFAW4&categoryId=AWWxpEDaAVoDFAW4&categoryType=CODE
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
		cin >> temp_str;

		str = (temp_str[temp_str.length() - 1] - '0') % 2 == 1 ? "Odd" : "Even";
		
		cout << "#" << line++ << ' ' << str << endl;
		t--;
	}

	return 0;
}