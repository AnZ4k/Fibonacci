#include <queue>
#include <iostream>

using namespace std;

int seq(int x);

int main()
{
		int x;
		queue<int> result;
		
		cout << "Insira um numero: ";
		cin >> x;

		for(int i = 1; i <= x; i++)
		{
				result.push(seq(i));
		}
		
		while(!result.empty())
		{
				cout << result.front() << " ";
				result.pop();
		}
		cout << endl;

}

int seq(int x)
{
		if (x == 1 || x == 2) return 1;
		return seq(x - 1) + seq(x - 2);
}
