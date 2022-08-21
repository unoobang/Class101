#include <iostream>
using namespace std;

int Triangle(int n1, int n2)
{
    int result = 0;
    for (int i = 0; i < n2 - n1 + 1; i++)
    {
        result += n1 + i;
    }
    return result;
}


int main(void)
{
    int n1, n2;
    cin >> n1;
    cin >> n2;

    cout << Triangle(n1, n2);
    return 0;
}
