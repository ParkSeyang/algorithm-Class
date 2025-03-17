#include <iostream>

using namespace std;

#define SIZE 5

int main()
{
#pragma region 삽입 정렬
	// 데이터를 하나씩 확인하면서 이미 정렬된 부분과 비교하여
	// 자신의 위치를 찾아 삽입하는 방식으로 정렬하는 알고리즘 입니다.

	// key 라는변수 
	// key는 처음인덱스값이아닌 그다음번째 인덱스값을넣어야한다

	// 그리고 0번째인덱스와 값을비교한다
	// 2번의 값보다 1번의값이크다면 1번의값을 2번에 삽입한다.

	// 그리고 키값을 인덱스 1번에 삽입한다.

	int list[SIZE] = { 9,6,8,1,3 };

	int key = 0;

	int j = 0;
	// for (int i =0; i < SIZE - 1; i++)
	// {
	// 	key = list[i + 1]; // key는 다음 값을 가리킨다
	// 	for (int j = 0; j < i + 1; j++)
	// 	{
	// 		if (list[i-j] > list[i-j+1]) // 키값과 키의다음값을 비교하고 키값보다 클경우 다음칸으로 밀어낸다
	// 		{
	// 			list[i - j + 1] = list[i - j];
	// 			list[i - j] = key;
	// 		}
	// 		else if (list[i - j] < list[i - j + 1]) // 만약 그전값이 키값보다 크다면 다음 값을 비교하도록 한다.
	// 		{
	// 			continue;
	// 		}
	// 	}
	// 
	// }
	for (int i = 0; i < SIZE; i++)
	{
		key = list[i];
		for (j = i - 1; j >= 0 && list[j] > key; j--)
		{
			list[j + 1] = list[j];
		}
		list[j + 1] = key;
	}

	for (const int& element : list)
	{
		cout << element << " ";
	}
	// for (int i = 0; i < SIZE; i++)
	// {
	// 	cout << list[i] << " ";
	// }

#pragma endregion

	return 0;
}


