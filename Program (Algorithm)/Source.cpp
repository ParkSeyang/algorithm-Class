#include <iostream>

#define SIZE 8

using namespace std;

void merge_sort(int list[], int start, int end)
{
	if (start < end)
	{
		int mid = (start + end) / 2;
		merge_sort(list, mid + 1, end);
		merge_sort(list, start, mid);
	}

	return;
}

void combine(int list[], int start, int mid, int end)
{
	int count = 0;

	int left = start + 1;

	int right = mid + 1;

	int* container = new int[end - start + 1];

	// 2. 두 부분의 배열을 병합합니다.

	while (left <= start && right <= mid)
	{
		if (list[left] <= list[right])
		{
			container[count++] = list[left++];
		}
		else
		{
			container[count++] = list[right++];
		}
	}
	while(left <= mid)
	{
		container[count++] = list[left++];
	}
	while(right <= end)
	{
		container[count++] = list[right++];
	}

	for (int i = start; i <= end; i++)
	{
		list[i] = container[count++];
	}
	delete[] container;
	// 작은값을 정렬해놓고 작은배열을 큰배열로만든곳에다가 비교해서 정렬하고 올린다.
}

	
int main()
{
#pragma region 병합 정렬
	// 하나의 리스트를 두 개의 균일한 크기로 분할하고 분할된
	// 부분 리스트를 정렬한 다음, 두 개의 정렬된 부분 리스트를
	// 합하여 전체가 정렬된 리스트가 되게 하는 방법입니다.

	// 1. 리스트의 길이가 0 또는 1 이면 이미 정렬된 것으로 봅니다.

	// 2. 그렇지 않은 경우

	// 2-1. 정렬되지 않은 리스트를 절반으로 잘라 비슷한 크기의
	//		두 부분을 리스트로 나눕니다.

	// 2-2. 각 부분 리스트를 재귀적으로 병합 정렬을 이용하여 정렬합니다.

	// 2-3. 두 부분 리스트를 다시 하나의 정렬된 리스트로 병합합니다.

	int list[SIZE] = { 3,5,2,7,4,1,8,6};

	//int mid 변수를만들어서 배열들을 하나가 될때까지 쪼갠다.
	
	merge_sort(list, 0, SIZE - 1);
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << list[i] << " ";
	}

	// 임시배열에있는것을 원본배열에넣어줘야한다
#pragma endregion

	return 0;
}


