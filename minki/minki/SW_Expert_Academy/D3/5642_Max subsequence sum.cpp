/*
	5642. [Professional] 합 D3
	https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWXQm2SqdxkDFAUo&categoryId=AWXQm2SqdxkDFAUo&categoryType=CODE
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
	bool flag, flag2;
	vector<int> vec, temp_vec, ans_vec;
	vector<vector<int>> vec_vec;
	string str, temp_str;

	cin >> t;

	while (t > 0) {
		//입력    
		cin >> n;
		
		int *arr = new int[n + 1];
		sum = 0 , max = 0;

		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
			sum += arr[i];
			if (sum > max)
				max = sum;
			else if (sum < 0)
				sum = 0;
		}

		printf("#%d %d\n", line++, max);
		t--;
	}

	return 0;
}