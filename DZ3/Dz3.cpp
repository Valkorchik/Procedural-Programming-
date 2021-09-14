//3.1
/*#include <iostream>
using namespace std;
double S,p,n,r,m;
int main()
{
    cout<<"Vedite peremene"<<endl;
    cin>>S>>p>>n;
    r=(p)/100;
    m=(S*r*pow((1+r),n))/(12*(pow((1+r),n)-1));
    cout<<m;
    return 0;
}*/
//3.2
/*#include <iostream>
using namespace std;
double S,p,n,r,m;
int main() {
    cout << "Vedite peremene" << endl;
    cin >> S >> m>> n;
    r = (p) / 100;
    m = (S * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1));
    cout << p;
    return 0;
}*/
//3.3
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string line;
int main()
{
    ofstream out("Test.txt");
    out<<"1111222ffffaaaaa(((((";
    ifstream inf;
    while(getline(inf,line)) {
        cout << line << endl;
    }

    return 0;
}