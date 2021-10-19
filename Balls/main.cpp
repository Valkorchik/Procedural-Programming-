//Шарики
/*#include <iostream>
using namespace std;
int n,a[11];
void perestanovka(int i)
{
    for (int i=1;i<11;i++) {
        if (i==a[i])
        {
            cout<<a[i]<< " "<<endl;

        }
        else
        {
            for (int j=i;j<n;++j)
            {
                swap(a[i],a[j]);
                i++;
                perestanovka(i);
                i--;
                swap(a[i],a[j]);
            }

        }
    }

}
int main()
{
    cout<<"Enter number of balls:\n";
    cin>>n;
    for (int i=1;i<n+1;i++) {
        a[i] = i;
    }
    perestanovka(n);

}*/
//Шарики 2.0
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool proverka(vector<int> ball)
{
for (int i = 0; i < ball.size(); i++)
{
    if (i + 1 == ball[i])
    {
        return true;
    }
}
}

int main()
{

cout << "Enter amount of balls -> ";
int n;
cin >> n;
vector< int > vector;
int count = 0;

for (int i = 1; i <= n; i++)
{
    vector.push_back(i);
}
do
{
    if (proverka(vector) == true)
    {
        count += 1;
    }
}
while (next_permutation(vector.begin(), vector.end()));  //Переставляет местами начало и конец, выставляет правильный порядок
cout << "Number of variants -> " << count << endl;
return 0;
}

