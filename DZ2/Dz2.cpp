//2.1
/*#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
double V,R,r,h,S,l;
int main()
{
    cout<<"Enter nums"<<endl;
    cin>>r>>R>>h;
    if (h,r,R>0){
        l=sqrt((h*h+pow((R-r),2)));
        V = (M_PI * h * (pow(R, 2) + R * r + pow(r, 2)) / 3);
        S = M_PI * (pow(R, 2) + (R + r) * l + pow(r, 2));
        cout << S << " " << V;
    }
    else{
    cout<<"Введите числа больше нуля";
    }
    return 0;
}*/
//2.2
/*#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
float w,a,x;

int main()
{
    cout<<"Enter nums"<<endl;
    cin >> x>>a;
    if (x==0){
        cout<<"Error"<<endl;
        }
    else {
        if (abs(x) < 1) {
            w = a * log(abs(x));
            cout << abs(w);
        }
        else {
            if (s < 0) {
                cout << "error\n";
            }
            else {
                w = sqrt(a - pow(x, 2));
                cout << abs(w);
            }
        }
    }
    return 0;
}*/
//2.3
/*#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
double x, y, b,z;
int main()
{
    cout << "Enter b,x,y" << endl;
    cin >> b >> x >> y;
    if ((b - y>0) and (b-x>0))  {
        z =  log(b-y) * sqrt(b - x);
        cout << z;
    }
    else {
        cout << "ERROR";
    }
    return 0;

}*/
//2.4
/*#include <iostream>
using namespace std;
int N,i,k;
int main()
{
    cout<<"Enter number\n";
    cin>>N;
    if (N<=0) or (N!=(int)(N){
        cout<<"Number must be natural.";
    }
    else {
        for (i = N; k < 10; i++) {
            cout << i << endl;
            k += 1;
        }
    }
    return 0;
}*/
//2.5
/*#include <iostream>
using namespace std;
float y,x;
int k=0;
int main()
{
    for (x=-4;x<5;x+=0.5){
        if (x==1){
            cout<<"No solutions\n";
        }
        else
        {
            y=((x*x)-(2*x)+2)/(x-1);
            k+=1;
            cout<<"Solution "<<k<<": "<<y<<endl;
        }
    }
    return 0;
}*/
