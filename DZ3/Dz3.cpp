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
/*#include <iostream>
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
