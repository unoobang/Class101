#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    
    int result = 1;

    for (int i = 0; i < n; i++)
    {
        result *= i + 1;        
    }

    cout << result;
    return 0;
}