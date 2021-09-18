#include <iostream>
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

}
