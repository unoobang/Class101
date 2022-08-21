#include <iostream>
using namespace std;

int Add(int a, int b);
void Talk();

void Talk()
{
    cout << "계산기!" << endl;
}


int main(void)
{
    Talk();
    int a = Add(5, 7);
    cout << Add(5, 7) << endl;
    cout << "5+7의 결과값입니다" << endl;
    
    return 0;
}

int Add(int a, int b)
{
    return a + b;
}


