/*
	Queue는 컴퓨터의 기본적인 자료 구조의 한가지로, 먼저 집어 넣은 데이터가 먼저 나오는 FIFO (First In First Out)구조로 저장하는 형식을 말한다.
*/

#include <iostream> // cin 사용 위해 필요 
#include <vector> // vector 사용 위해 필요  
#include <algorithm> // sort 사용 위해 필요 
#include <string>
#include <numeric>
#include <sstream>

using namespace std;

#define MAX_N 100

int front;
int rear;
int queue[MAX_N];

void queueInit(void) {
	front = 0;
	rear = 0;
}

int queueIsfull(void) {
	if ((rear + 1) % MAX_N == front)
		return 1;
	else
		return 0;
}

int queueEnqueue(int value) {
	if (queueIsfull()) {
		printf("queue is full!");
		return 0;
	}

	queue[rear++] = value;
	if (rear == MAX_N)
		rear = 0;
	return 1;
}

int queueIsEmpty() {
	return (front == rear);
}

int queueDequeue(int *value) {
	if (queueIsEmpty()) {
		printf("queue is empty!");
		return 0;
	}
	*value = queue[front++];
	if (front == MAX_N)
		front = 0;
	return 1;
}

int main()
{
	int T;
	int N;

	scanf("%d", &T);

	for (int test_case = 1; test_case <= T; test_case++)
	{
		scanf("%d", &N);

		queueInit();
		for (int i = 0; i < N; i++)
		{
			int value;
			scanf("%d", &value);
			queueEnqueue(value);
		}

		printf("#%d ", test_case);

		while (!queueIsEmpty())
		{
			int value;
			if (queueDequeue(&value) == 1)
			{
				printf("%d ", value);
			}
		}
		printf("\n");
	}

	return 0;
}