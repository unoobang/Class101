#include <iostream>
using namespace std;

int main(void)
{
    int enemyHP[5];
    int minEnemy = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> enemyHP[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Enemy[" << i << "] : " << enemyHP[i] << endl;
        if (enemyHP[minEnemy] > enemyHP[i])
        {
            minEnemy = i;
        }
    }

    cout << "���� ü���� ���� �� : Enemy[" << minEnemy << "]" << endl;
    cout << "���� ü���� ���� ���� HP : " << enemyHP[minEnemy] << endl;

    return 0;
}