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
        cout << "����" << i << "�� ü��:" << enemyHP[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        if (enemyHP[i] < enemyHP[minEnemy])
        {
            minEnemy = i;
        }
    }

    cout << "���� ü���� ���� ����:" << "����" << minEnemy << endl;
    cout << "���� ü���� ���� ������ HP:" << enemyHP[minEnemy] << endl;

    return 0;
}