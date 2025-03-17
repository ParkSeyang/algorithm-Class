#include <iostream>

using namespace std;
int& euclid(int x, int y)
{
	if (y == 0)
	{
		return x;
	}
	else
	{
		return euclid(y, x % y);
	}

	// 1. 두개의 자연수 x,y 가 있습니다
	// 그리고 x와 y를 나눈 나머지 를 R 이라고 합니다.
	// 2. R이 0이라면, x 와 y의 최대공약수 y가 됩니다.

	// 3. R이 0이 아니라면, x와 y의 최대공약수는 y와 R의
	//	최대공약수와 같기 때문에 x에는 y그리고 y에는
	//	R을 대입한후 1번으로 돌아갑니다.
}
int main()
{
#pragma region 유클리드 호제버
	// 2개의 자연수 또는 정식의 최대 공약수를 구하는 방식으로
	// 두 수가 서로 상대방 수를 나누어서 원하는 수를 얻어내는 알고리즘 입니다.

	int x = 145;
	int y = 13;

	cout << euclid(x, y) << endl;

	// int a = 156;
	// int b = 60;
	// int r = 0;
	// 
	// 
	// for (int i = 1; i <= a && i <= b; i++)
	// {
	// 	if (a % i == 0 && b % i == 0)
	// 	{
	// 		r = i;
	// 	}
	// }
	// 
	// cout << "최대공약수 : " << r << endl;
#pragma endregion

	return 0;
}



