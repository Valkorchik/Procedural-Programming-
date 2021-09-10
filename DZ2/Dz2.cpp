//2.1
/*#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int V,R,r,h,S,l;
int main()
{
    cin>>r>>R>>h;
    l=sqrt((h*h+pow((R-r),2)));
    V = (M_PI * h * (pow(R, 2) + R * r + pow(r, 2)) / 3);
    S = M_PI * (pow(R, 2) + (R + r) * l + pow(r, 2));
    cout << V << " " << S;
    return 0;
}*/
//2.2
/*#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int w;
int x;
int a;
int main()
{
    cin >> x;
    cin >> a;
    if (abs(x) < 1) {
        w = a * log(abs(x));
        cout << w;
    }
    else if (abs(x) >= 1) {
        w = sqrt(a - pow(x, 2));
        cout << w;
    }
    return 0;
}*/
//2.3
#include <iostream>
#define _USE_MATH_DEFINES
/*#include <math.h>
using namespace std;
int x, y, b,z;
int main()
{
    cout << "Введите  x,y,b" << endl;
    cin >> x >> y >> b;
    if ((b - y)>0 and ((b-x)>=0)) {
        z = log(b - y) * sqrt(b - x);
        cout << z;
    }
    else
        cout<<"ERROROR";
}*/
//2.4
/*#include <iostream>
using namespace std;
int N,i,k;
int main()
{
    cout<<"Введите число\n";
    cin>>N;
    if (N<=0){
        cout<<"Число должно быть натуральным.";
    }
    else {
        for (i = N; k < 10; i++) {
            k += 1;
            cout << i << endl;
        }
    }
    return 0;
}*/
//2.5
/*#include <iostream>
using namespace std;
float y,x;
int main()
{
    for (x=-4;x<5;x+=0.5){
        y=((x*x)-(2*x)+2)/(x-1);
        cout<<y<<endl;
    }
    return 0;
}*/
