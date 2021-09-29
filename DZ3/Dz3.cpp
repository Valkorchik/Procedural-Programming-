//3.1
/*#include <iostream>
#define USE_MATH_DEFINES
#include <math.h>
using namespace std;
double S,p,n,r,m;
int main()
{
    cout<<"Enter nums"<<endl;
    cin>>S>>p>>n;
    r=(p)/100;
    m=(S*r*pow((1+r),n))/(12*(pow((1+r),n)-1));
    cout<<m;
    return 0;
}*/
//3.2
/*
#include <iostream>
#define USE_MATH_DEFINES
#include <math.h>
using namespace std;
double S,n,m,p,r,m1=0;
int main() {
    cout << "Enter credit value: " << endl;
    cin >> S;
    cout<< "Enter per month pay: "<< endl;
    cin>>m;
    cout<< "Enter number of years: "<< endl;
    cin>>n;
    for (p=1;m1<m;p++)
    {
        r = p / 100;
        m1=(S * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1));
        if (m1>m){
            cout<<"Your credit percent equals "<<p-1<<"%"<<endl;
        }
        if (p>100)
        {
            cout<<"Percents cant be more than 100%..";
            return 0;
        }

    }
    return 0;
}*/
//3.3
/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string line;
ofstream fout;
ifstream fin;
int main()
{
    fout.open("Test.txt");
    fout<<"1111222f3fffaa5aaa4((5(((";
    fout.close();
    fin.open("Test.txt");
    while (getline(fin,line)){
        cout<<line;
    }
    fin.close();
    return 0;
}*/
//3.4
/*#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file("Test.txt");
    int b;
    do { //делай
        if (file >> b) {
            cout << b;
        }
        else {
            file.clear();
            file.ignore(1, ' ');
        }
    }
    while(!file.eof()); //пока файл не пустой
    file.close();
    return 0;
}*/
//3.5
/*#include <iostream>
#include <sstream>
#include <string>
using namespace std;
string str;
int main() {
    char temp;
    cout<<"Enter the string: \n";
    getline(cin,str);
    int len = str.length(); //пузырек
    for (int i = 0; i < len; i++){
        for (int j = 0; j <len-1;j++){
            if (str[j]>str[j+1]){ //ascii проверка
                temp=str[j];
                //swap
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    cout << "\n String after sorting: " << str << " \n";
    return 0;
}*/

#include <iostream>//Доделать, двумерный массив, таблицы должны быть совместными
using namespace std;
int main()
{
    int a[3], b[3], c[3];
    cout << "Amount of goods 1, sold by seller 1;\n";
    cin >> a[0];
    cout << "Amount of goods 2, sold by seller 1;\n";
    cin >> a[1];
    cout << "Amount of goods 3, sold by seller 1;\n";
    cin >> a[2];
    cout << "Amount of goods 4, sold by seller 1;\n";
    cin >> a[3];
    cout << "Amount of goods 1, sold by seller 2;\n";
    cin >> b[0];
    cout << "Amount of goods 2, sold by seller 2;\n";
    cin >> b[1];
    cout << "Amount of goods 3, sold by seller 2;\n";
    cin >> b[2];
    cout << "Amount of goods 4, sold by seller 2;\n";
    cin >> b[3];
    cout << "Amount of goods 1, sold by seller 3;\n";
    cin >> c[0];
    cout << "Amount of goods 2, sold by seller 3;\n";
    cin >> c[1];
    cout << "Amount of goods 3, sold by seller 3;\n";
    cin >> c[2];
    cout << "Amount of goods 4, sold by seller 3;\n";
    cin >> c[3];
    double t[3], k[3];
    cout << "Cost 1;\n";
    cin >> t[0];
    cout << "Cost 2;\n";
    cin >> t[1];
    cout << "Cost 3;\n";
    cin >> t[2];
    cout << "Cost 4;\n";
    cin >> t[3];
    cout << "Commission 1;\n";
    cin >> k[0];
    cout << "Commission 2;\n";
    cin >> k[1];
    cout << "Commission 3;\n";
    cin >> k[2];
    cout << "Commission ;\n";
    cin >> k[3];
    cout << "\n\n";
    double p1 = 0, p2 = 0, p3 = 0, d1 = 0, d2 = 0, d3 = 0;
    for (int i = 0; i < 4; i++)
    {
        p1 = p1 + (a[i] * t[i]);
    }
        for (int i = 0; i < 4; i++)
    {
        p2 = p2 + (b[i] * t[i]);
    }
        for (int i = 0; i < 4; i++)
    {
        p3 = p3 + (c[i] * t[i]);
    }
        for (int i = 0; i < 4; i++)
    {
        d1 = d1 + (a[i] * k[i]);
    }
        for (int i = 0; i < 4; i++)
    {
        d2 = d2 + (b[i] * k[i]);
    }
        for (int i = 0; i < 4; i++)
    {
        d3 = d3 + (c[i] * k[i]);
    }
        if (p1 > p2 && p1 > p3)
    {
        cout << "Most of the money got seller 1 " << "(" << p1 << ").\n\n";
    }
        else if (p2 > p1 && p2 > p3)
    {
        cout << "Most of the money got seller  2 " << "(" << p2 << ").\n\n";
    }
        else if (p3 > p2 && p3 > p1)
    {
        cout << "Most of the money got seller  3 " << "(" << p3 << ").\n\n";
    }
        if (d1 > d2 && d1 > d3)
    {
        cout << "The highest commission got seller 1 " << "(" << d1 << ").\n\n";
    }
        else if (d2 > d1 && d2 > d3)
    {
        cout << "The highest commission got seller 2 " << "(" << d2 << ").\n\n";
    }
        else if (d3 > d2 && d3 > d1)
    {
        cout << "The highest commission got seller 3 " << "(" << d3 << ").\n\n";
    }
        cout << "Total proceeds from goods sold " << (p1 + p2 + p3) << ".\n\n";
        cout << "Total commissions received " << (d1 + d2 + d3) << ".\n\n";
        cout << "Total amount of money that went through the sellers " << (p1 + p2 + p3 + d1 + d2 + d3) << ".\n\n";
}
