#include <iostream>
using namespace std;

int Add(int a, int b);
void Talk();

void Talk()
{
    cout << "����!" << endl;
}


int main(void)
{
    Talk();
    int a = Add(5, 7);
    cout << Add(5, 7) << endl;
    cout << "5+7�� ������Դϴ�" << endl;
    
    return 0;
}

int Add(int a, int b)
{
    return a + b;
}


