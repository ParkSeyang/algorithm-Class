#include <iostream>
#define SIZE 6

using namespace std;

int parent[SIZE];

// Root Node 를 찾는 함수


int find(int x)
{
	// 배열의 인덱스와 값이 같다면 Root Node 발견
	if (parent[x] == x)
	{
		return x;
	}
	else
	{
		// 부모노드의 번호를 전달하면서, Root Node를 찾을 때까지 
		// 재귀 호출을 반복합니다.
		return parent[x] = find(parent[x]);
	}
}

// 값을 부른후에 부모노드(0번째인덱스)의 값을 자식노드의 값에 갱신합니다.
void Union(int x, int y)
{
	x = find(x);
	x = find(y);
	
	if (x == y)
	{
		return;
	}

	if (x < y)
	{
		parent[y] = x;
	}
	else
	{
		parent[x] = y;
	}
}

bool same(int x, int y)
{
	// 1번
	if (find(parent[x]) != find(parent[y]))
	{
		return false;
	}
	else if (find(parent[x]) == find(parent[y]))
	{
		return true;
	}
	// 2번
	// if (find(x) != find(y))
	// {
	// 	return false;
	// }
	// else if (find(x) == find(y))
	// {
	// 	return true;
	// }
	//find 함수가 같다면 true를 출력하게한다.
}

int main()
{
#pragma region 유니온 파인드
	// 여러 노드가 존재할 때 어떤 노드가 다른 노드와
	// 연결되어 있는 지 확인하는 알고리즘 입니다.

	// Union : 특정한 두 개의 노드를 같은 집합으로 합치는 연산입니다.

	// Find : 특정한 노드가 어느 집합에 있는 지 확인하는 연산입니다.

	// int parent[SIZE] = {};

	find(1);

	Union(0, 1);
	Union(1, 2);
	Union(3, 4);
	Union(4, 5);

	same(1, 2);


	cout << "0과 1은 연결되어있나? " << same(0, 1) << endl;
	cout << "0과 4은 연결되어있나? " << same(0, 4) << endl;
	for (int i = 0; i < SIZE; i++)
	{
		parent[i] = i;
		cout << "  "<< parent[i] << endl;
	}
	
#pragma endregion

	return 0;
}


