#include <iostream>
using namespace std;

int main(void)
{
    int currentHP;
    int damage = 100;

    cin >> currentHP;

    currentHP -= damage;

    if (currentHP <= 0)
    {
        cout << "게임오버";
    }
    else
    {
        cout << "남은 체력 : " << currentHP;
    }
    return 0;
}