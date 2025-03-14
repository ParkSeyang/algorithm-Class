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

	for (int i =0; i<SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			
			if (list[j]<key)
			{
				list[j + 1] = list[j];
			}

			key = list[j + 1];
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << list[i] << " ";
	}

#pragma endregion

	return 0;
}


