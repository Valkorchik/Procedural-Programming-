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
/*#include <iostream>
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
}*/
//3.4
/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string line;
int main()
{
    ifstream file("Test.txt");
    int b;
    do {
        if (file >> b) {
            cout << b << endl;
        }
        else {
            file.clear();
            file.ignore(1, ' ');
        }
    }
    while(!file.eof());
    file.close();
    return 0;
}*/
//3.5
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
    string s = "WEFGFDKOVOKPPDCVDKMXZXEARWERFD";
    int len = s.length();
    for (int i = 1; i < len; i++){
        char temp = s[i];
        int j = i - 1;
        while (j >= 0 && s[j] > temp){
            s[j + 1] = s[j];
            j--;
        }
       s[j + 1] = temp;
    }

    cout << "\n String after sorting: " << s << " \n";
    return 0;
}