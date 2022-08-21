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
        cout << "몬스터" << i << "의 체력:" << enemyHP[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        if (enemyHP[i] < enemyHP[minEnemy])
        {
            minEnemy = i;
        }
    }

    cout << "가장 체력이 낮은 몬스터:" << "몬스터" << minEnemy << endl;
    cout << "가장 체력이 낮은 몬스터의 HP:" << enemyHP[minEnemy] << endl;

    return 0;
}