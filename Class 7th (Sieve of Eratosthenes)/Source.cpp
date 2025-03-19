#include <iostream>

using namespace std;

bool isPrime(/*const*/ int n)
{
	if (n <= 1)
	{
		return false;
	}

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

void sieve()
{

}

int main()
{
	cout << isPrime(11) << endl;
	return 0;
}


