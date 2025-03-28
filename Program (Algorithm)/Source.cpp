#include <iostream>
#include <vector>
#include <queue>

#define SIZE 8

using namespace std;

class Node
{
private:
	// 인접 리스트와 탐색할때는 Queue가 필요하다.
	bool visited[SIZE];
	queue<int> queue;
	vector<int> adjacencyList[SIZE];
public:

	Node()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
		}
	}

	void Insert(int i, int j)
	{
		adjacencyList[i].push_back(j);
		adjacencyList[j].push_back(i);
	}
	void search(int start)
	{
		queue.push(start);

		visited[start] = true;

		while (queue.empty() == false)
		{
			int print = queue.front();

			queue.pop();

			cout << print << " ";

			for (int i = 0; i < adjacencyList[print].size(); i++)
			{
				int next = adjacencyList[print][i];
				if (visited[next] == false)
				{
					queue.push(next);

					visited[next] = true;
				}
			}
		}
		// 방문한노드를 true로 바꿈
		// 1에서 시작해서 가장가까운 노드로 접근함2,3 
		// 임시변수를 만든다
		// 임시변수에는 방문한 노드의 값을대입하고 출력한다.

	}
};

int main()
{
#pragma region 너비 우선 탐색 (Breadth First Search)
	// 시작 정점을 방문한 후 시작 정점에 인접한
	// 모든 정점들을 우선 방문하는 방법입니다.



	// 더 이상 방문하지 않은 정점이 없을 때까지 방문하지 않은 
	// 모든 정점들에 대해서도 너비 우선 탐색을 적용합니다.

	Node node;

	node.Insert(1, 2);
	node.Insert(1, 3);

	node.Insert(2, 4);
	node.Insert(2, 5);

	node.Insert(3, 6);
	node.Insert(3, 7);

	node.search(1);

#pragma endregion

	return 0;
}


