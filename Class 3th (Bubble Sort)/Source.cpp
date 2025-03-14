#include <iostream>

using namespace std;

#define SIZE 5

int main()
{
#pragma region 거품 정렬
	// 서로 인접한 두 원소를 비교하여 정렬하는 알고리즘입니다.

	int index[SIZE] = { 100,85,45,35,15 };
	int swap = 0;

	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = 0; j < (SIZE - i) - 1; j++)
		{
			if (index[j] > index[j + 1])
			{
				std::swap(index[j], index[j + 1]);
			}
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << index[i] << " ";
	}

#pragma endregion

	return 0;
}


