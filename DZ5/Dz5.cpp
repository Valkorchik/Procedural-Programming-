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


//Сортировка

/*
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int a[10]; // объявили массив на 10 ячеек

	cout << "Введите 10 чисел для заполнения массива: " << endl;

	for (int i = 0; i < 10; i++) {
		cin >> a[i]; // "читаем" элементы в массив
	}




	for (int i = 0; i < 10; ++i)
	for (int j = (i & 1) ? 1 : 2; j < 10; j += 2)
		if (a[j - 1] > a[j])
			swap(a[j - 1], a[j]);

	cout << "Массив в отсортированном виде: ";

	for (int i = 0; i < 10; i++) {
		cout << a[i] << " "; // выводим элементы массива
	}
	system("pause");
	return 0;
}
*/







//5
/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k;
	cout << "Введите количество свободных мест: ";
	cin >> n;
	cout << "Введите количество школьников: ";
	cin >> k;
	while (k != 1) {
		n = (n - k % 2) / 2;
		k /= 2;
	}
	cout << "Остаток мест слева/справа \n -> " << (n - 1) / 2 << " \n -> " << n / 2 << endl;
}
*/



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
	system("pause");
	return 0;
}

 */