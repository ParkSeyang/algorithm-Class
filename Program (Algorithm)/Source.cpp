#include <iostream>

#define SIZE 6
#define INFINITY 10000000

using namespace std;

class Dijkstra
{
private:
	int node[SIZE][SIZE] =
	{
		{0,2,5,1,INFINITY,INFINITY},
		{2,0,3,2,INFINITY,INFINITY},
		{5,3,0,3,1,5},
		{1,2,3,0,1,INFINITY},
		{INFINITY,INFINITY,1,1,0,2},
		{INFINITY,INFINITY,5,INFINITY,2,0},
	};
	int distance[SIZE];
	bool visited[SIZE];
public:
	Dijkstra()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
			distance[i] = 0;
		}
	}
	const int& Find()
	{
		int min = INFINITY;
		int index = -1;
		for (int i = 0; i < SIZE; i++)
		{
			if (!visited[i] && distance[i] < min)
			{
				min = distance[i];
				index = i;
			}
		}
		
		return index;
	}
	void calculate(int start)
	{
		for (int i = 0; i < SIZE; i++)
		{
			distance[i] = node[start][i];
		}
		visited[start] = true;

		for (int count = 0; count < SIZE - 1; count++)
		{
			int next = Find();
			if (next == -1)
			{
				break;
			}
			visited[next] = true;

			for (int i = 0; i < SIZE; i++)
			{
				if (!visited[i])
				{
					if (distance[i]>distance[next] + node[next][i])
					{
						distance[i] = distance[next] + node[next][i];
					}
				}
			}
		}

		cout << "최단 거리 출력:" << endl;
		for (int i = 0; i < SIZE; i++)
		{
			if (distance[i] == INFINITY)
				cout << i << ": INF" << endl;
			else
				cout << i << ": " << distance[i] << endl;
		}

	}

};


int main()
{
#pragma region 다익스트라 알고리즘
	// 시적점으로부터 모든 노드까지의 최소 거리를 구해주는
	// 알고리즘 입니다.
	// 가중치 그래프를 활용합니다.
	// 
	// 1. 거리 배열에 weight[시작 노드]의 값들로 초기화 합니다.

	// 2. 시작점을 방문 처리합니다.

	// 3. 거리 배열에서 최소 비용 노드를 찾고 방문 처리합니다.
	//    단, 이미 방문한 노드는 제외합니다.

	// 4. 최소 비용 노드를 거쳐갈 지 고민해서 거리 배열을 갱신합니다.
	//    단, 이미 방문한 노드는 제외합니다.

	// 5. 모든 노드를 방문할 때까지 3번 ~ 4번을 반복합니다.

	// 방문하지 않은 노드 중에서 가장 작은 거리를 가진 노드를
	// 방문하고, 그 노드와 연결된 다른 노드까지의 거리를 계산합니다.
	
	Dijkstra dijkstra;
	dijkstra.calculate(0);
	
	
#pragma endregion

	return 0;
}


