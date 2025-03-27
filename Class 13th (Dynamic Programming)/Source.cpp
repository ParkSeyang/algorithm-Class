#include <iostream>

#define SIZE 10000

using namespace std;

// list[SIZE] = {0,1}  정적배열로도 참조 가능함.

int Fibonacci(int list[], int n)
{
	// 재귀함수로 만든 시간복잡도 O(n₂) 의 피보나치 수열
	// if (n<= 0)
	// {
	// 	return 0;
	// }
	// 
	// else if (n <= 2)
	// {
	// 	return 1;
	// }
	// return Fibonacci(n - 1) + Fibonacci(n - 2);

	list[0] = 0;
	list[1] = 1;

	if (n == 0 || n == 1) // n의값이 0과 같거나 1과같다면 n값을 리턴시킨다.
	{
		return n;
	}
	else if (list[n] != 0) // 안에 이미 계산된 값이있다면 그값을 리턴시킨다.
	{
		return list[n];
	}

	// return list[n] = Fibonacci(list, n - 1) + Fibonacci(list, n - 2);
	for (int i = 2; i <= n; i++)
	{
		list[i] = list[i - 1] + list[i - 2];
	}
	return list[n];
}
int main()
{
#pragma region 동적 계획법
	// 특정 범위까지의 값을 구하기 위해 그것과
	// 다른 범위까지의 값을 이용해서 효율적으로 값을
	// 구하는 알고리즘입니다.

	// (Overlapping Subproblems) 겹치는 부분 문제
	// 동일한 작은 문제들이 반복하여 나타나는 경우를 의미합니다.

	// (Optimal Substructure) 최적 부분 구조
	// 부분 문제의 최적 결과 값을 사용하여 전체 문제의 최적
	// 결과를 낼 수 있는 경우를 의미합니다.
	// 
	// 메모이제이션 (Memoization)
	// 프로그램이 동일한 계산을 반복해야 할 때, 이전에
	// 계산한 값을 메모리에 저장함으로써 동일한 계산을
	// 반복 수행하는 작업을 제거하여 프로그램의 실행 속도를
	// 향상시키는 방법입니다.

	int list[SIZE] = { 0, };

	cout << " 피보나치의 수열 값: " << Fibonacci(list, 40) << endl;

#pragma endregion

	return 0;
}


