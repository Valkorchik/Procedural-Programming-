//Шарики
/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool proverka(vector<int> ball)
{
	for (int i = 0; i < ball.size(); i++)
	{
		if (i + 1 == ball[i])
		{
			return true;
		}
	}
}

int main()
{
	setlocale(0, "");
	cout << "Введите количество шаров -> ";
	int n;
	cin >> n;
	vector< int > vector;
	int count = 0;

	for (int i = 1; i <= n; i++)
	{
		vector.push_back(i);
	}
	do
	{
		if (proverka(vector) == true)
		{
			count += 1;
		}
	}
	while (next_permutation(vector.begin(), vector.end()));
	cout << "Количество подходящих вариаций ->" << count << endl;
	return 0;
}

 */