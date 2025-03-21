#include <iostream>

#define SIZE 8

using namespace std;

void BinarySearch(int list[], int key)
{
	int left = 0;
	int right = SIZE - 1;


	while (left <= right)
	{
		int mid = (left + right) / 2; // 중간값

		if (list[mid] == key) // 찾는 키값과 중간 값이 같을경우
		{
			cout << "Key Found : " << list[mid] << endl;
			return;
		}
		else if (list[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}

	cout << "Cross over" << endl;
}

int main()
{
#pragma region 이진 탐색
	// 탐색 범위를 반으로 나누어 찾는 값을 포함하는 범위를
	// 좁혀 나가는 방식으로 동작하는 알고리즘 입니다.

	// 1. List의 중간값을 지정한다.
	// 2. list

	int list[8] = { 5,6,11,13,27,55,66,99 };

	BinarySearch(list, 66);

	// int size = sizeof(list) / sizeof(int);


#pragma endregion

	return 0;
}



