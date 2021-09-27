//4.1
/*#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("Testa.txt");
int a;
int main() {
    for (int i=0;i<10;i++) {
        cin >> a;
        fout << a<<endl;
    }
    fout.close();
    ifstream fin("Testa.txt");
    int n=0;
    while (fin>>a){
        n+=a;
    }
    fin.close();
    cout<<n;
    return 0;
}*/
//4.2
/*#include <iostream>
using namespace std;
int x;

int main()
{
    int sign(x);
    {
        cin>>x;
        if (x>0)
        {
            cout<<"Number has positive sign";
        }
        if (x==0)
        {
            cout<<"Number is zero";
        }
        if (x<0){
            cout<<"Number has negative sign";
        }
    }
    return 0;
}*/
//4.3
/*#include <iostream>
#define USE_MATH_DEFINES
#include <cmath>
using namespace std;
int n;
double R, a, b, c;
double CircleArea (double R)
{
    return 3.14*R*R;
}
double RectangleArea (double a, double b)
{
    return a*b;
}
double TriangleArea (double a, double b, double c)
{
    double p;
    p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main() {
    cout << "Choose which figure do you want to calculate: 1-rectangle, 2-triangle or 3-circle\n";
    cin >> n;
    switch (n) {
        case 1:
            cout << "Enter 'a' and 'b' sides\n";
            cin >> a >> b;
            cout << "The area of rectangle equals " << RectangleArea(a,b)<<endl;
            break;
        case 2:
            cout << "Enter 'a' , 'b' and 'c' sides\n";
            cin >> a >> b>>c;
            cout << "The area of triangle equals " << TriangleArea(a,b,c)<<endl;
            break;
        case 3:
            cout << "Enter radius\n";
            cin >> R;
            cout << "The square of circle equals " << CircleArea(R);
            break;
    }
}*/
//4.4
/*#include <iostream>
using namespace std;
int f,n,n1;
int main()
{
    for (int i=0;i<3;i++)
    {
        if (f==50)
        {
           break;
        }
        for (int z=0;z<50;z++)
        {
            cout << "*";
            n1+=1;
            f+=1;
            if (n1==10)
            {
                n1=0;
                for (int c=0;c<30;c+=1)
                {
                    cout<<"-";
                    n+=1;
                    if (n==30)
                    {
                        cout<<endl;
                        n=0;
                    }

                }
            }

        }
    }
    for (int i=0;i<4;i++) {
        for (int c = 0; c < 40; c += 1) {
            cout << "-";
            n += 1;
            if (n == 40) {
                cout << endl;
                n = 0;
            }
        }
    }
    return 0;
}*/
//4.5
/*#include <iostream>
#include <cmath>
using namespace std;
#define M_PI 3.14159265358979323846
#define X1  -2*M_PI
#define X2   2*M_PI
float func(float x) {
    return sin(x);
}
int main()
{
    bool prn_x=false;
    bool prn_y=false;
    float eps = 0.05;
    float y = 1.0;
    float step = M_PI/16;        // шаг приращения к аргументу
    while (y>=-1.1) {
        for(float x=X1; x<=X2; x+=step) {
            if (abs(func(x)-y) >= eps)
                if (abs(y)<eps)
                    cout << "-";
                else
                    cout << " ";
            else {
                cout << "*";
            }
            if (abs(x)<eps)
                cout << "|";
        }
        cout << endl;
        y=y-0.1;
    }
    return 0;
}*/
//4.6
/*#include <iostream>
#include <cmath>
using namespace std;

void converter() {
    char buff[100];
    for (int i = 0; i < 100; i++) {
        buff[i] = NULL;
    }
    int chetchik = 0;
    cout << "Enter rim number\n";
    cin.getline(buff, 100);
    for (int i = 0; i < 100; i++)
    {
        if (buff[i] == NULL) continue;
        switch (buff[i]) {
            case 'I':
                if (i + 1 < strlen(buff) && (buff[i + 1] == 'V' || buff[i + 1] == 'X' || buff[i + 1] == 'C')) {
                    chetchik = chetchik - 1;
                }
                else chetchik = chetchik + 1;
                break;
            case 'V':
                chetchik = chetchik + 5;
                break;
            case 'X':
                if (i + 1 < strlen(buff) && (buff[i + 1] == 'L' || buff[i + 1] == 'C' || buff[i + 1] == 'M')) {
                    chetchik = chetchik - 10;
                }
                else chetchik = chetchik + 10;
                break;
            case 'L':
                chetchik = chetchik + 50;
                break;
            case 'C':
                if (i + 1 < strlen(buff) && (buff[i + 1] == 'D' || buff[i + 1] == 'M')) {
                    chetchik = chetchik - 100;
                }
                else chetchik = chetchik + 100;
                break;
            case 'D':
                chetchik = chetchik + 500;
                break;
            case 'M':
                chetchik = chetchik + 1000;
                break;
        }

    }
    cout << endl;
    if (chetchik == 0) {
        cout << "You didnt write number" << endl;
    }
    else {
        cout << "Your arabic number is\n " << chetchik << endl;
    }

}
int main()
{
        converter();
        return 0;
}*/
//4.7
/*
#include <iostream>
using namespace std;
int x, y, z;
int main(){
    cout << "Start number:\n";
    cin >> x;
    cout << "Choose generator(1,2).\n";
    cin >> y;
    cout << "Enter amount of numbers:\n";
    cin >> z;
    cout << "\n";
    if (y == 1)
    {
    for (int i = 0; i < z; i++)
    {
    x = (37 * x + 3) % 64;
    cout << x << " ";
    }
    cout << "\n";
    }
    else if (y == 2)
    {
    for (int i = 0; i < z; i++)
    {
    x = (25173 * x + 13849) % 65537;
    cout << x << " ";
    }
    cout << "\n";
    }
    else
    {
    cout << "Error" << "\n";
    }
}
*/
//4.8
/*
#include <iostream>
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
*/
//4.9
/*
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int k=0;
char simvols[32] = { '0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v' };
string toSis(int num, int Sis)
{
    string resStr = "";
    if (num < Sis)
    {
        resStr += simvols[num];
    }
    else
    {
        cout<<"Error\n";
        k+=1;
    }
    return resStr;
}
void translatoorCC()
{
    string num;
    string result;
    int num10 = 0;
    int numSis = 0;
    int resSis;
    cout << "number: ";
    cin >> num;
    cout << "ss: ";
    cin >> numSis;
    cout << "new ss: ";
    cin >> resSis;
    for (int i = num.size() - 1; i >= 0; i--)
    {
        for (int numSim = 0; numSim < numSis; numSim++)
        {
            if (num[i] == simvols[numSim])
            {
                num10 += numSim * pow(numSis, (num.size() - i) - 1);
            }
        }
    }
    result = toSis(num10, resSis);
    if (k==1){
        cout<<"-------------------------------------------------------------------\n\n";
    }
    else
    cout << "final: " << result;
}
{
    translatoorCC();
}
*/
