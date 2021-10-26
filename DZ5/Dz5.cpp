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
int j,z;
float a;
bool k;
int main()
{
    do
    {
        cout << "Enter natural number:\n";
        cin >> a;
    } while ((a <= 2) || (a != (int)a));
    k = true;
    j = 3;
    for (int i = 2; i <= a; i++)
    {
        while ((k == true) && (j < i/2))
        {

            if ((i % j) == 0)
            {
                k = false;
            }
            j += 1;
        }
        if (k == true)
        {
            z+=1;
            cout<<"Number "<<z<<"- "<<i<<endl;
        }
        j = 2;
        k = true;
    }
}*/
//Обработка текстовых файлов
//№21
/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string s,sr;
    ifstream fin("C:\\Users\\GX701LV PR#3\\Documents\\GitHub\\Procedural-Programming-\\DZ5\\21-22.txt");
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
    ifstream fin("C:\\Users\\GX701LV PR#3\\Documents\\GitHub\\Procedural-Programming-\\DZ5\\21-22.txt");
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
/*#include <iostream>
#include <string>
#include <math.h>
#define USE_MATH_DEFINES
using namespace std;
int l,n,k,num10;
string s,result,newStr = "";
char simvols[30] = {'2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v' };
char sim[3] = { '0','1','2'};
int a[100];
int b[100];
string toSS(int num, int SS)
{
    if (num < SS)
    {
        newStr += sim[num];
    }
    else
    {
        newStr = toSS(num / SS, SS) + sim[num % SS];
    }
    return newStr;
}
void Transfer()
{
    cout<<"Massive after transfer equals: \n";
    for (int i=0;i<k;i++) {
        s = to_string(a[i]);
        for (int i = s.length() - 1; i >= 0; i--) {
            for (int numSim = 0; numSim < 2; numSim++) {
                if (s[i] == sim[numSim]) {
                    num10 += numSim * pow(2, (s.length() - i) - 1);
                }
            }
        }
        result=toSS(num10, 3);
        num10=0;
        b[i]=stoi(result);
        result="";
        newStr="";
        l+=1;
        cout<<l<<") "<<b[i]<<endl;
    }
}
int main()
{
    cout<<"How many numbers do you want to transform into ternary numeral system?"<<endl;
    cin>>k;
    cout<<"Now enter binary numbe(r/s)"<<endl;
    for (int i=0; i<k;i++)
    {
        cin >> n;
        s=to_string(n);
        for (int j = 0; j < 30; j++) {
            for (int z = 0; z < s.length(); z++) {
                if (simvols[j] == s[z]) {
                    cerr << "Error. Cant use non binary number here;";
                    return 0;
                }
            }
        }
        a[i] = n;
    }
    Transfer();
    return 0;
}*/
//42
#include <iostream>
#include <string>
using namespace std;
int k = 0, n, counter = 0;
int a[100],b[100];
string ID = "";
void Sorter()
{
    for (int i = 0; i < counter; i++) {
        for (int j = 0; j < counter; j++) {
            if (b[j] < b[j + 1]) {                  //Пузырек
                a[j] = b[j];
                b[j] = b[j + 1];
                b[j + 1] = a[j];
            }
        }
    }
}
string Checker()
{
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (a[i] == a[j])   //Поиск одинаковвых элементов
            {
                ID += to_string(i);
                ID += " ";
                ID += to_string(j);   //Нахождение позиций
                ID += "; ";
                int wasBefore = 0;
                for (int k = 0; k < i; k++)
                {
                    if (a[k] == a[i])
                    {
                        wasBefore = 1; break;            //Создание исключения, чтобы не учитывать предыдущие значения
                    }
                }
                if (wasBefore == 0)
                {
                    b[i] = a[i];
                    counter += 1;
                }
                b[j] = a[j];
                counter += 1;
                break;
            }
        }
    }
    Sorter();
    if (counter == 0)
    {
        return "Same numbers dont exist in array.";
    }
    else
    {
        cout << "Amount of same numbers equals: " << counter << endl;
        cout << "ID's of positions in array: " << ID << endl;
        cout << "Same numbers in new sorted array: ";
        for (int i = 0; i < counter; i++)
        {
            cout << b[i] << " ";
        }
        return ".";
    }
}
int main()
{
    cout << "How many numbers do you want to add?" << endl;
    cin >> k;
    cout << "Now enter numbe(r/s)" << endl;
    for (int i = 0; i < k; i++)
    {
        cin >> n;
        a[i] = n;
    }
    cout << Checker();
}
//Файлы
//21
/*#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int all,points,gold,silver,bronze;
string c1[10],c[10]={"Austria",
                   "Germany",
                   "Canada",
                   "China",
                   "Korea",
                   "Norway",
                   "Russia",
                   "USA",
                   "Finland",
                   "Japan"};
int n[9][6];
int m[9][6];
ofstream file;
int main() {
    cout << "Enter amount of gold, silver and bronze medals." << endl;
    for (int i = 0; i < 10; i++) {
        cin >> gold>>silver>>bronze;
        all=gold+silver+bronze;
        points=gold*7+silver*6+bronze*5;

        n[i][1] = gold;
        n[i][2] = silver;
        n[i][3] = bronze;
        n[i][4]=all;
        n[i][5]=points;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int z=0;z<10;z++)
        {
            if (n[z][5]<n[z+1][5])
            {
                c1[z]=c[z];
                c[z]=c[z+1];
                c[z+1]=c1[z];
                for (int j=1;j<6;j++)
                {
                    m[z][j]=n[z][j];
                    n[z][j]=n[z+1][j];
                    n[z+1][j]=m[z][j];
                }
            }
        }
    }
    file.open("C:\\Users\\GX701LV PR#3\\Documents\\GitHub\\Procedural-Programming-\\DZ5\\Olimp.txt");
    for (int g = 0; g < 10; g++)
    {
            cout<<c[g]<<" "<<n[g][1]<<" "<<n[g][2]<<" "<<n[g][3]<<" "<<n[g][4]<<" "<<n[g][5]<<endl;
            file<<c[g]<<" "<<n[g][1]<<" "<<n[g][2]<<" "<<n[g][3]<<" "<<n[g][4]<<" "<<n[g][5]<<endl;
    }
    file.close();
}*/
/*
3 5 9
12 9 8
6 5 4
0 6 2
3 1 2
10 10 5
9 6 3
6 3 4
2 4 6
5 1 4
Austria
Germany
Canada
China
Korea
Norway
Russia
USA
Finland
Japan*/
