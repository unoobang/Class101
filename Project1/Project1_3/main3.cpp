#include <iostream>
using namespace std;

int main(void)
{
    int currentHP;
    int defense = 2;
    int monsterDamage = 10;
    int weaponLevel = 2;

    cin >> currentHP;

    currentHP -= (monsterDamage * weaponLevel) / defense;

    cout << "���� �� ü�� : " << currentHP << endl;

    return 0;
}