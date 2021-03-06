/*
	2817. 부분 수열의 합 - D3
	https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV7IzvG6EksDFAXB&categoryId=AV7IzvG6EksDFAXB&categoryType=CODE
*/

#include <iostream> // cin 사용 위해 필요 
#include <vector> // vector 사용 위해 필요  
#include <algorithm> // sort 사용 위해 필요 
#include <string>
#include <numeric>
#include <sstream>

using namespace std;

int cnt;

void dfs(int i, int sum, int *arr, int N, int K) {

	if (sum > K || i == N) {

		if (sum == K)
			cnt++;

		return;
	}

	dfs(i + 1, sum + arr[i], arr, N, K);
	dfs(i + 1, sum, arr, N, K);
}

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
		cin >> n >> k;

		int arr[21];

		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}

		cnt = 0;
		dfs(0, 0, arr, n, k);

		//출력
		printf("#%d %d\n", line++, cnt);
		t--;
	}

	return 0;
}

// 2번째 방법

//int a[20];
//vector<int> all;//k를 초과하지 않는 경우들을 누적시킬 벡터
//int cnt = 0;
//
//scanf("%d %d", &n, &k);
//for (int i = 0; i < n; i++) {
//	scanf("%d", &a[i]);
//	if (a[i] == k) {
//		cnt++;
//	}
//}
//
//for (int i = 0; i < n; i++) {
//	all.push_back(a[i]);
//	int size = all.size();
//	//누적된 벡터내의 원소들과 더해 k가 되는지 확인
//	//k==sum 이면 cnt++;
//	//k<sum 이면 더해봤자 어차피 k보다 크므로 continue;
//	//k>sum 이면 vector에 sum원소 추가
//	for (int j = 0; j < size - 1; j++) {
//		int sum = a[i] + all.at(j);
//		if (sum == k) {
//			cnt++;
//		}
//		else if (sum > k) {
//			continue;
//		}
//		else {
//			all.push_back(sum);
//		}
//	}
//}
//printf("#%d %d\n", tc, cnt);