#include <iostream>
#include <cassert>

using namespace std;

bool isEven (int n)
{
    return n % 2 == 0;
}

int main()
{
    assert(isEven(2) == true);
    assert(isEven(0) == true);
    assert(isEven(-2) == true);
    assert(isEven(6) == true);
    assert(isEven(-8) == true);

    assert(isEven(1) == false);
    assert(isEven(3) == false);
    assert(isEven(-3) == false);

    cout << "All test Passed!!!!!" << endl;
}