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
        cout << "���ӿ���";
    }
    else
    {
        cout << "���� ü�� : " << currentHP;
    }
    return 0;
}