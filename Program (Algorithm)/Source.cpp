#include <iostream>

using namespace std;

int Find(int list[],/*call by Reference*/ int left, int right) // call by value
{
	
	if (left == right) // 왼쪽과 오른쪽의 값이 같다면 왼쪽의 값을 반환한다.
	{
		return list[left];
	}
	else // 그게아니라면 재귀함수를 계속호출한다.
	{
		int leftMax = Find(list, left, (left + right) / 2);
		int rightMax = Find(list, (left + right) / 2 + 1, right);
		if (leftMax < rightMax)
		{
			return rightMax;
		}
		else
		{
			return leftMax;
		}
	}
	
}

int main()
{
#pragma region 분할 정복
	// 주어진 2개 이상의 부분으로 문제를 나눈 뒤 각 부분
	// 문제에 대한 답을 재귀 호출하여 재귀호출을 이용하여 계산한, 다음
	// 그 답으로 부터 전체 문제의 답을 계산해내는 알고리즘 입니다.

	// 분할 (Divide) : 주어진 문제를 두개 혹은 그 이상의 형식으로 나눈다.
	 
	// 정복 (Conquer) : 나누어진 문제를 재귀적으로 해결해서 나누어진 문제를
	//                 더 이상 나누어서 문제가 필요없을 때까지 계속 분할합니다. 

	// 통합 (Combine) : 나누어서 해결한 문제들을 통합해서 원래 문제의 해답을 생성합니다.

	// 1. 배열을 중간값을 기준으로 두개씩 나눈다.
	// 2. 문제가 더 나누어질수 없도록 1개까지 더나눈다.
	// 3. 각 문제에 변수값을 그전 문제에 값을 반환해준다.
	// 4. 각 변수의 값을 비교후 더큰값을 위로 반환한다.

	// 5. 최상단의 문제 값끼리 서로비교후 가장높은 수가 결과값이되도록한다.

	int list[4] = { 20,15,99,1 };

	int size = sizeof(list) / sizeof(int);

	cout << Find(list, 0, size - 1);

#pragma endregion

	return 0;
}


