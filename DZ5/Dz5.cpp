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
/*#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s,sr;
    ifstream fin("E:\\Work\\GitHub\\Procedural-Programming-\\DZ5\\21-22.txt");
    getline(fin,s);
    double max_chast=0;
    double kol_b=0;
    for(int i=0;i<s.length();i++){
        if((s[i]>='A' && s[i]<='Z')||
        (s[i]>='a' && s[i]<='z'))
            kol_b ++;               //всего букв
    }
    char a[12]={'a','e','i','u','y','o','A','E','I','U','Y','O'};
    double kol_bukvi=0;
    int number;
    for(int i=0;i<12;i++){
        kol_bukvi=0;
        for (int j=0;j<s.length();j++){
            if(a[i]==s[j])
            {
                kol_bukvi ++;
            }
        }
        if(max_chast<kol_bukvi/kol_b)
        {
            max_chast=kol_bukvi/kol_b;
            number=i;
        }
    }
    cout<<"The most frequent letter is '"<<a[number]<<"'.";
    return 0;
}*/
//22
/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
double min_chast=1000.0;
int main()
{
    string s,sr;
    ifstream fin("E:\\Work\\GitHub\\Procedural-Programming-\\DZ5\\21-22.txt");
    getline(fin,s);
    double max_chast=0;
    double chast;
    double kol_b=0;
    for(int i=0;i<s.length();i++){
        if((s[i]>='A' && s[i]<='Z')||
           (s[i]>='a' && s[i]<='z'))
            kol_b ++;               //всего букв
    }
    char a[12]={'a','e','i','u','y','o','A','E','I','U','Y','O'};
    double kol_bukvi=0;
    int number;
    for(int i=0;i<12;i++)
    {
        kol_bukvi=0;
        for (int j=0;j<s.length();j++)
        {
            if(a[i]==s[j])
            {
                kol_bukvi ++;
            }
        }
        if(kol_bukvi!=0)
        {
            chast=kol_bukvi/kol_b;
            if(chast<=min_chast)
            {
                min_chast=chast;
                number=i;
            }
        }
    }
    cout<<"The most non frequent letter is '"<<a[number]<<"'.";
    return 0;
}*/
//Ряды
//21
#include <iostream>
#include <string>
using namespace std;
int n,k;
string s;
char simvols[30] = {'2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v' };

int a[100];
int main()
{
    cout<<"How many numbers do you want to transform into ternary numeral system?"<<endl;
    cin>>k;
    cout<<"Now enter binary numbe(r/s)"<<endl;
    for (int i=0; i<k;i++)
    {
        cin >> n;
        s+= to_string(n);
        s+=" ";
        cout<<s<<endl;
        for (int j=0;j<s.size();j++)
        {
            if((simvols[j]==s[j])||(simvols[j+1]==s[j])
            ||(simvols[j+2]==s[j]) |(simvols[j+3]==s[j]))
            {
                cerr << "Error. Cant use non binary number here;";
                return 0;
            }
        }
        a[i]=n;
       // cout << a[i] << endl;

    }

    return 0;
}
/*#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int k=0;
char simvols[32] = { '0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v' };
string toSS(int num, int SS)
{
    string newStr = "";
    if (num < SS)
    {
        newStr += simvols[num];
    }
    else
    {
        newStr = toSS(num / SS, SS) + simvols[num % SS];
    }

    return newStr;
}
void translatoorSS()
{
    string num,result;
    int newSS,num10 = 0, numSS=0;
    cout << "Enter your number: ";
    cin >> num;
    cout << "Enter SS: ";
    cin >> numSS;
    cout << "Enter new SS: ";
    cin >> newSS;
    for (int i = num.length() - 1; i >= 0; i--)
    {
        for (int numSim = 0; numSim < numSS; numSim++)
        {
            if (num[i] == simvols[numSim])
            {
                num10 += numSim * pow(numSS, (num.length() - i) - 1);
            }
        }
    }
    result = toSS(num10, newSS);
    cout << "Final: " << result;
}
int main()
{
    translatoorSS();
}*/













































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