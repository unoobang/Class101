#include <iostream>
using namespace std;

int main(void)
{
    int heart = 2;
    int check;

    cout << "���� �� ȣ���� ����: 2" << endl;
    cout << endl;
    cout << "�����̰� '�߿�'�Ҹ��� ���� �ٰ��´�" << endl;
    cout << endl;
    cout << "1. �ָӴϿ��� ������ ã�ƺ���." << endl;
    cout << "2. ���ٵ����� ���� ���´�." << endl;
    cout << "3. ���� �ٰ����� �ʰ� ������ �ִ´�." << endl;

    cin >> check;

    switch (check)
    {
    case 1:
        cout << "����̴� ���� ���ַ��������� �ƽ��Ե� �غ��� ������ ���� ����̴� �Ǹ��ѵ� �����ȴ�. [ȣ��-1]" << endl;
        heart -= 1;
        break;
    case 2:
        cout << "���� ����� �ٰ����� �̿� ���� �յ��� ������ ���������ȴ�.. ������ ��ó���̴�. [ȣ��-2]" << endl;
        heart -= 2;
    case 3:
        cout << "����̴� ������ �ٰ��� �߳��� ������ �ð� ���� �񺳴�. ģ�а��� ���� ����̴�. [ȣ��+1]" << endl;
        heart += 1;
        break;
    }

    heart -= check;

    cout << endl;
    cout << "���� �� ȣ���� : " << check << endl;
    cout << endl;
    cout << "<��ĥ ��>" << endl;
    cout << endl;
    cout << "������ ������ �����̰�  �� �ٽ� ������. �������� �����̰� ����� ���� �����̴�." << endl;
    cout << endl;
    cout << "1. �̹����߸��� ì�ܵ� ������ �����ش�." << endl;
    cout << "2. ������ ���������ҵ��ϴ�. �غ��ص� �̵����� ������ ������ ���ѷ� ����." << endl;
    cout << "3. �׳� ��ô ��������." << endl;

    cin >> check;

    switch (check)
    {
    case 1:
        cout << "����̴� ���� ����ʹ��� �߹����� ������ �Ծ�ġ��� ������ �����ִ� �������� �Ĵٺ���� �ٸ��� ���� �����ȴ�. [ȣ��+2]" << endl;
        heart -= 2;
        break;
    case 2:
        cout << "���ѷ� �پ������ ����̴� �µ����� ������. [ȣ����������]" << endl;
        heart == 0;
    case 3:
        cout << "����̰� ���� �Ĵٺ��� ����� ������� �Ű澲���ʰ� ���� �ɾ���. [ȣ��-1]" << endl;
        heart -= 1;
        break;
    }

    heart -= check;

    cout << endl;
    cout << "���� �� ȣ���� : " << check << endl;

    return 0;
}