#include <iostream>

using namespace std;

bool isEven (int n)
{
    return n % 2 == 0;
}

int main()
{
    cout << "Enter a Number :" << endl;
    int mahbub;
    cin >> mahbub;

    if (isEven(mahbub))
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }

    return 0;
}