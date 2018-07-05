#include <iostream>

using namespace std;

int main()
{int a,b;
    cout << "Introduceti numarul a:";
    cin>>a;
    cout<<"Introduceti numarul b:";
    cin>>b;
    if(a<b)
        cout<<"Ordinea numerelor este:a,b";
    else
        cout<<"Ordinea numerelor este:b,a";
    return 0;
}
