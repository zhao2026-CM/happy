#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "input year'1582<=year<=2020'" << endl;
    cin >> a;
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
    {
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;

    }
    system("space");
    return 0;
}
