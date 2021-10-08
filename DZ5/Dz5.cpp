//Алгоритм Евклида
/*#include<iostream>
using namespace std;
int Nod1(int x, int y) {
    while (x!=0 && y!=0)
        if (x >= y)
            x %= y;
        else y %= x;
    return x + y;
}
int Nod2(int x, int y) {
    while (x != y)
        if (x > y)
            x -= y;
        else y -= x;
    return x;

}
int main()
{
    int  x, y;
    cout << "First number: ";
    cin >> x;
    cout << "Second number: ";
    cin >> y;
    cout << "Nod1 =  " << Nod1(x, y) << endl;
    cout << "Nod2 =  " << Nod2(x, y);
    return 0;
}*/
//Решето
/*#include <iostream>
using namespace std;
int i,k=0;
int main()
{
    cout<<"Enter natural number: "<<endl;
    cin>>i;
    if ((i<=0) or (i!=int(i)))
    {
        cout<<"Number must be natural";
        return 0;
    }
    else {
        for (int j = 2; j < i; j++) {
            if ((j<=0) or (j!=int(j))) continue;
            else
            {
                k+=1;
                cout<<"Number "<<k<<"- "<<j<<endl;
            }
        }
    }
}
*/
//Обработка текстовых файлов
//№21
#include <iostream>
using namespace std;
int main()
{

}












































/////////////
// Решето

/*
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Введите число" << endl;
	cin >> n;
	cout << endl;
	int* a = new int[n + 1];
	for (int i = 0; i < n + 1; i++)
		a[i] = i;
	for (int p = 2; p < n + 1; p++)
	{
		if (a[p] != 0)
		{
			cout << a[p] << endl;
			for (int j = p * p; j < n + 1; j += p)
				a[j] = 0;
		}
	}
	cin.get();
}
*/
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