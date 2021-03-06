/*
	동적 계획법(Dynamic programming)은 복잡한 문제를 풀기위해서 
	간단한 여러 개의 하위 문제로 나누어 푼 다음, 그것을 결합하여 목적에 도달하는 방법이다
*/

#include <iostream> // cin 사용 위해 필요 
#include <vector> // vector 사용 위해 필요  
#include <string>
#include <numeric>
#include <sstream>

using namespace std;

int N;
int dp[2][100001];
int board[2][100001];

const int max(const int a, const int b) {
	return (a < b) ? b : a;
}

void findSticker() {
	dp[0][0] = board[0][0];
	dp[1][0] = board[1][0];
	dp[0][1] = dp[1][0] + board[0][1];
	dp[1][1] = dp[0][0] + board[1][1];
	for (int i = 2; i < N; i++)
	{
		dp[0][i] = max(dp[0][i - 2], dp[1][i - 2]);
		dp[0][i] = max(dp[0][i], dp[1][i - 1]);
		dp[0][i] += board[0][i];

		dp[1][i] = max(dp[1][i - 2], dp[0][i - 2]);
		dp[1][i] = max(dp[1][i], dp[0][i - 1]);
		dp[1][i] += board[1][i];
	}
}

int main()
{
	int T;
	
	scanf("%d", &T);

	for (int test_case = 1; test_case <= T; ++test_case)
	{
		scanf("%d", &N);
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < N; j++) {
				scanf("%d", &board[i][j]);
			}
		}
		printf("#%d ", test_case);
		findSticker();
		printf("%d\n", max(dp[0][N - 1], dp[1][N - 1]));
	}

	return 0;
}