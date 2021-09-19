//Алгоритм Евклида
/*

#include<iostream>
using namespace std;


int NOD(int x, int y)
{
	int i;
	while (x && y)
		if (x >= y) x %= y;
		else y %= x;
	return x | y;
}

int main()
{
	setlocale(0, "");
	int  x, y;
	cout << "Первое число: ";
	cin >> x;
	cout << "Второе число: ";
	cin >> y;
	cout << "NOD -> " << NOD(x, y) << endl;


	system("pause");
	return 0;
}
*/

//Ханойская башня
/*

#include <iostream>

using namespace std;

void hanoi_towers(int quantity, int from, int to, int buf_peg)	//quantity-число колец, from-начальное положение колец(1-3),to-конечное положение колец(1-3)
{								//buf_peg - промежуточный колышек(1-3)
	if (quantity != 0)
	{
		hanoi_towers(quantity-1, from, buf_peg, to);

		cout << from << " -> " << to << endl;

		hanoi_towers(quantity-1, buf_peg, to, from);
	}
}

int main()
{
		setlocale(LC_ALL,"rus");
	int start_peg, destination_peg, buffer_peg, plate_quantity;

	start_peg = 1;

	destination_peg = 3;

	buffer_peg = 2;

	cout << "Количество дисков:" << endl;
	cin >> plate_quantity;

	hanoi_towers(plate_quantity, start_peg, destination_peg, buffer_peg);
	system("pause");
return 0;
}
*/

// Решето

/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
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