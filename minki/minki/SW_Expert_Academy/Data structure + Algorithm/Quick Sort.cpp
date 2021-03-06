/*
	퀵 정렬은 기준키(pivot)를 기준으로 작거나 같은 값을 지닌 데이터는 앞으로, 큰 값을 지닌 데이터는 뒤로 가도록 하여
	작은 값을 갖는 데이터와 큰 값을 갖는 데이터로 분리해가며 정렬하는 방법이다.
*/

#include <iostream> // cin 사용 위해 필요 
#include <vector> // vector 사용 위해 필요  
#include <string>
#include <numeric>
#include <sstream>

#define MAX_NUM 100

int input[MAX_NUM];
int num;

void quickSort(int first, int last)
{
	int pivot;
	int i;
	int j;
	int temp;

	if (first < last)
	{
		pivot = first;
		i = first;
		j = last;

		while (i < j) {
			while (input[i] <= input[pivot] && i < last)
				i++;
			while (input[j] > input[pivot])
				j--;
			//input[pivot]은 i, j 사이에 가장 큰 값
			if (i < j) {
				temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}
		
		temp = input[pivot];
		input[pivot] = input[j];
		input[j] = temp;
		// i pivot j -> pivot i j
		quickSort(first, j - 1);
		quickSort(j + 1, last);
	}
}

void printResult(void)
{
	int i;

	for (i = 0; i < num; ++i)
	{
		printf("%d ", input[i]);
	}
	printf("\n");
}

int main()
{
	int T;
	int test_case;
	int i;

	scanf("%d", &T);

	for (test_case = 1; test_case <= T; test_case++)
	{
		scanf("%d", &num);
		for (i = 0; i < num; i++)
		{
			scanf("%d", &input[i]);
		}
		quickSort(0,num - 1);
		printf("#%d ", test_case);
		printResult();
	}

	return 0;
}