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
int main()
{
    sign();
    return 0;
}*/
//4.3
#include <iostream> //Сделано
#define USE_MATH_DEFINES
#include <cmath>
using namespace std;
int n;
double R, a, b, c,S1,S2,S3;
double CircleArea ()
{
    cout << "Enter radius\n";
    cin >> R;
    S1=3.14*R*R;
    if (S1>=0)
     cout << "The square of circle equals " << S1;
    else
        cout<<"Error";
    return 0;
}
double RectangleArea ()
{
    cout << "Enter 'a' and 'b' sides\n";
    cin >> a >> b;
    S2=a*b;
    if (S2>=0)
        cout << "The area of rectangle equals " << S2;
    else
        cout<<"Error";
    return 0;
}
double TriangleArea ()
{
    cout << "Enter 'a' , 'b' and 'c' sides\n";
    cin >> a >> b>>c;
    double p;
    p=(a+b+c)/2;
    S3=sqrt(p*(p-a)*(p-b)*(p-c));
    if (S3>=0)
        cout << "The area of triangle equals " << S3;
    else
        cout<<"Error";
    return 0;
}
int main() {
    cout << "Choose which figure do you want to calculate: 1-rectangle, 2-triangle or 3-circle\n";
    cin >> n;
    switch (n) {
        case 1:
            RectangleArea();
            break;
        case 2:
            TriangleArea();
            break;
        case 3:
            CircleArea();
            break;
    }
}
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
/*#include <iostream> //Сделано
#include <cmath>
#include <cstring>
using namespace std;
int k=0;
void converter() {
    char buff[100];
    for (int i = 0; i < 100; i++) {
        buff[i] = NULL;
    }
    int chetchik = 0;
    cout << "Enter rim number\n";
    cin.getline(buff, 100);
    for (int i = 0; i < 100; i++) {
        if (buff[i] == NULL) continue;
        switch (buff[i]) {
            case 'I':
                if (i + 1 < strlen(buff) && (buff[i + 1] == 'V' || buff[i + 1] == 'X')) {
                    chetchik = chetchik - 1;
                }
                if (buff[i + 1] == 'I' && buff[i + 2] == 'I' && buff[i + 3] == 'I')
                {
                    cout<<"Error\n";
                    k+=1;
                    break;
                }
                if ((buff[i + 1] == 'I' && buff[i + 2] == 'I') && (buff[i + 3] == 'V' || buff[i + 3] == 'X' || buff[i + 3] == 'C'))
                {
                    cout<<"Error\n";
                    k+=1;
                    break;
                }
                if (buff[i + 1] == 'C')
                {
                    cout<<"Error\n";
                    k+=1;
                    break;
                }
                else chetchik = chetchik + 1;
                break;
            case 'V':
                if (buff[i + 1] == 'C')
                {
                    cout<<"Error\n";
                    k+=1;
                    break;
                }
                else
                chetchik = chetchik + 5;
                break;
            case 'X':
                if (i + 1 < strlen(buff) && (buff[i + 1] == 'L' || buff[i + 1] == 'C' || buff[i + 1] == 'M')) {
                    chetchik = chetchik - 10;
                } else chetchik = chetchik + 10;
                break;
            case 'L':
                if (buff[i + 1] == 'C')
                {
                    cout<<"Error\n";
                    k+=1;
                    break;
                }
                chetchik = chetchik + 50;
                break;
            case 'C':
                if (i + 1 < strlen(buff) && (buff[i + 1] == 'D' || buff[i + 1] == 'M')) {
                    chetchik = chetchik - 100;
                } else chetchik = chetchik + 100;
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
    if (k >= 1)
    {
        cout<<"-------------------------";
    }
    else if (chetchik == 0) {
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
    cout << x << " "<<endl;
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
/*#include <iostream>//Сделано
using namespace std;
int main()
{
    int a[3][4];
    cout << "Amount of goods 1, sold by seller 1;\n";
    cin >> a[0][0];
    cout << "Amount of goods 2, sold by seller 1;\n";
    cin >> a[0][1];
    cout << "Amount of goods 3, sold by seller 1;\n";
    cin >> a[0][2];
    cout << "Amount of goods 4, sold by seller 1;\n";
    cin >> a[0][3];
    cout << "Amount of goods 1, sold by seller 2;\n";
    cin >> a[1][0];
    cout << "Amount of goods 2, sold by seller 2;\n";
    cin >> a[1][1];
    cout << "Amount of goods 3, sold by seller 2;\n";
    cin >> a[1][2];
    cout << "Amount of goods 4, sold by seller 2;\n";
    cin >> a[1][3];
    cout << "Amount of goods 1, sold by seller 3;\n";
    cin >> a[2][0];
    cout << "Amount of goods 2, sold by seller 3;\n";
    cin >> a[2][1];
    cout << "Amount of goods 3, sold by seller 3;\n";
    cin >> a[2][2];
    cout << "Amount of goods 4, sold by seller 3;\n";
    cin >> a[2][3];
   double b[4][2];
    cout << "Cost 1;\n";
    cin >> b[0][0];
    cout << "Cost 2;\n";
    cin >> b[1][0];
    cout << "Cost 3;\n";
    cin >> b[2][0];
    cout << "Cost 4;\n";
    cin >> b[3][0];
    cout << "Commission 1;\n";
    cin >> b[0][1];
    cout << "Commission 2;\n";
    cin >> b[1][1];
    cout << "Commission 3;\n";
    cin >> b[2][1];
    cout << "Commission ;\n";
    cin >> b[3][1];
    cout << "\n\n";
    double p1 = 0, p2 = 0, p3 = 0, d1 = 0, d2 = 0, d3 = 0;
    for (int i = 0; i < 4; i++)
    {
        p1 = p1 + (a[0][i] * b[i][0]);
    }
        for (int i = 0; i < 4; i++)
    {
        p2 = p2 + (a[1][i] * b[i][0]);
    }
        for (int i = 0; i < 4; i++)
    {
        p3 = p3 + (a[2][i] * b[i][0]);
    }
        for (int i = 0; i < 4; i++)
    {
        d1 = d1 + (a[0][i] * b[i][1]);
    }
        for (int i = 0; i < 4; i++)
    {
        d2 = d2 + (a[1][i] * b[i][1]);
    }
        for (int i = 0; i < 4; i++)
    {
        d3 = d3 + (a[2][i] * b[i][1]);
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

