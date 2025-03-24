#include <iostream>

#define SIZE 6

using namespace std;

void QuickSort(int list[], int start, int end)
{
	if (start >= end) // 8. start 가 end와 같거나 클경우 함수를 종료시킨다.
	{
		return;
	}
	// 1. pivot 변수 의 값을 설정합니다.
	int pivot = start;
	// 2. left 변수의 값을 설정합니다.
	int left = start + 1;
	// 3. right 변수의 값을 설정합니다.
	int right = end;

	// 4. left가 right보다 크거나 같을때 까지 반복합니다.
	while (left <= right)
	{
		// 5. left가 end 보다 작거나 같고 list[left]가
		// list[pivot] 보다 작거나 같을 때 까지 반복합니다.
		while (left <= end && list[pivot] >= list[left])
		{
			left++; // left 의 값을 증가시킵니다.
		}
		// 6. right가 start 보다 크고 list[right] 가
		// list[pivot] 보다 크거나 같을 떄 까지 반복합니다
		while (right > start && list[pivot] <= list[right])
		{
			right--; // right 의 값을 감소시킵니다.
		}
		if (left > right)
		{
			swap(list[pivot], list[right]);
		}
		else
		{
			swap(list[left], list[right]);
		}

		// 7. pivot을 기준으로 나누어진 두 배열에 대해
		// 재귀적으로 퀵정렬을 호출합니다.

		QuickSort(list, start, right - 1);

		QuickSort(list, right + 1, end);

		// 7. 내가만든 과제풀이

		// if (left < right) // 재귀호출을 하여서 정렬을 반복한다.
		// {
		// 	QuickSort(list, start, (left + right) / 2);
		// }
		// else
		// {
		// 	QuickSort(list, (left + right) / 2 + 1, end);
		// 	return;
		// }
	}

}

int main()
{
#pragma region 퀵 정렬
	// 기준점을 획득한 다음 기준점을 기준으로 배열을 나누고 한 쪽에는
	// 기준점보다 작은 값들이 위치하게 하고 다른 한 쪽에는 기준점보다 
	// 큰 값들이 위치 하도록 정렬합니다.

	// 나누어진 하위 배열에 대해 재귀적으로 퀵 정렬을 호출하여
	// 모든 배열이 기본 배열이 될 때 까지 반복하면서 정렬하는 알고리즘입니다.

	// int left는 피벗보다 작으면 기준점을 왼쪽를 오른쪽 으로 이동  
	// left는 피벗보다 값이 크면 멈춘다.
	// int right는 피벗보다 값이 크면 오른쪽을 왼쪽으로 이동 
	// right는 피벗보다 값이작으면 멈춘다. 


	int list[SIZE] = { 5,4,6,2,1,3 };

	QuickSort(list, 0, SIZE - 1);

	for (int i = 0; i < SIZE; i++)
	{
		cout << list[i] << " ";
	}
#pragma endregion

	return 0;
}


