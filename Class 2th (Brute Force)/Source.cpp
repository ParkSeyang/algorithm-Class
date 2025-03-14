#include <iostream>

using namespace std;

int main()
{
#pragma region 완전 탐색
	// 가능한 모든 경우의 수를 탐색하면서
	// 결과를 찾아내는 알고리즘입니다.
#pragma endregion
	 // 내가 만든 예제
	 // 브루트 포스의 잘못 이해한 예제 for문하나에 값을입력해서 바로 다이렉트로 연산을하기때문에
	 // 시간복잡도가 O(1)(상수 시간)이된다.
	 // int input[3];
	 // int password[3] = { 7,1,2 };
	 // 
	 // for (int i = 0; i < 3; i++)
	 // {
	 // 	cout << "3자리의 비밀번호를 입력해주세요. : ";
	 // 	cin >> input[i];
	 // }
	 // if (input[0] == password[0] && input[1] == password[1] && input[2] == password[2])
	 // {
	 // 	cout << "비밀번호가 일치합니다." << endl;
	 // }
	 // else
	 // {
	 // 	cout << "틀린 비밀번호 입니다." << endl;
	 // }

	// 강사님이 만든 예제 (브루트 포스)
	// 비밀번호 3자리를 배열로 지정해놓고 3중for문으로 7,1,2를 찾을때까지 반복하는 반복문이다
	// int password[] = { 7,1,2 };
	// 
	// for (int i = 0; i < 10; i++)
	// {
	// 	for (int j = 0; j< 10; j++)
	// 	{
	// 		for (int k = 0; k < 10; k++)
	// 		{
	// 			if (password[0] == i && password[1] == j && password[2] ==k)
	// 			{
	// 				cout << "Password Release : " << i << " " << j << " " << k << endl;
	// 
	// 				break;
	// 			}
	// 		}
	// 	}
	// }
	return 0;
}


