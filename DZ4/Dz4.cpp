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