#include <iostream>
using namespace std;

int main(void)
{
    int a = 4;
    int b = 6;

    bool c = false;

    if (a==b)
    {
        cout << "같은 값입니다";
    }

    else if (a > b)
    {
        cout << "A값이 큽니다";
    }

    else
    {
        cout << "둘의 값이 다릅니다";
    }

    return 0;
}