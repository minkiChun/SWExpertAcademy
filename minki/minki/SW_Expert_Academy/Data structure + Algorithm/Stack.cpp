/*
	Queue는 컴퓨터의 기본적인 자료 구조의 한가지로, 먼저 집어 넣은 데이터가 먼저 나오는 FIFO (First In First Out)구조로 저장하는 형식을 말한다.
*/

#include <iostream> // cin 사용 위해 필요 
#include <vector> // vector 사용 위해 필요  
#include <string>
#include <numeric>
#include <sstream>

using namespace std;

#define MAX_N 100

int top;
int Stack[MAX_N];

void stackInit(void) {
	top = 0;
}

int stackIsFull(void)
{
	return (top == MAX_N);
}

int stackPush(int value) {
	if (stackIsFull())
	{
		printf("stack overflow!");
		return 0;
	}
	Stack[top++] = value;

	return 1;
}

int stackIsEmpty(void) {
	return (top == 0);
}

int stackPop(int *value) {
	if (top == 0) {
		printf("stack is empty!");
		return 0;
	}
	*value = Stack[--top];
	return 1;
}

int main()
{
	int T, N;

	scanf("%d", &T);
	
	for (int test_case = 1; test_case <= T; test_case++)
	{
		scanf("%d", &N);
		stackInit();
		for (int i = 0; i < N; i++)
		{
			int value;
			scanf("%d", &value);
			stackPush(value);
		}

		printf("#%d ", test_case);

		while (!stackIsEmpty())
		{
			int value;
			if (stackPop(&value) == 1)
			{
				printf("%d ", value);
			}
		}
		printf("\n");

	}
	return 0;
}