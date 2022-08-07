#include <iostream>
using namespace std;

int main(void)
{
    int heart = 2;
    int check;

    cout << "현재 내 호감도 상태: 2" << endl;
    cout << endl;
    cout << "길고양이가 '야옹'소리를 내며 다가온다" << endl;
    cout << endl;
    cout << "1. 주머니에서 간식을 찾아본다." << endl;
    cout << "2. 쓰다듬으려 손을 뻗는다." << endl;
    cout << "3. 먼저 다가가지 않고 가만히 있는다." << endl;

    cin >> check;

    switch (check)
    {
    case 1:
        cout << "고양이는 제법 굶주려보였지만 아쉽게도 준비한 간식이 없다 고양이는 실망한듯 가버렸다. [호감-1]" << endl;
        heart -= 1;
        break;
    case 2:
        cout << "낯선 사람이 다가오자 겁에 질려 손등을 할퀴고 도망가버렸다.. 남은건 상처뿐이다. [호감-2]" << endl;
        heart -= 2;
    case 3:
        cout << "고양이는 조심히 다가와 발끝의 냄새를 맡고 몸을 비볐다. 친밀감이 생긴 기분이다. [호감+1]" << endl;
        heart += 1;
        break;
    }

    heart -= check;

    cout << endl;
    cout << "현재 내 호감도 : " << check << endl;
    cout << endl;
    cout << "<며칠 후>" << endl;
    cout << endl;
    cout << "앞전에 만났던 길고양이가  또 다시 보였다. 이전보다 말라보이고 기운이 없는 상태이다." << endl;
    cout << endl;
    cout << "1. 이번에야말로 챙겨둔 간식을 꺼내준다." << endl;
    cout << "2. 병원에 데려가야할듯하다. 준비해둔 이동장을 가지러 집으로 서둘러 간다." << endl;
    cout << "3. 그냥 모른척 지나간다." << endl;

    cin >> check;

    switch (check)
    {
    case 1:
        cout << "고양이는 많이 배고팠는지 야무지게 간식을 먹어치우고 조금은 생기있는 눈빛으로 쳐다보고는 다리에 비비고 가버렸다. [호감+2]" << endl;
        heart -= 2;
        break;
    case 2:
        cout << "서둘러 뛰어왔지만 고양이는 온데간데 없었다. [호감변동없음]" << endl;
        heart == 0;
    case 3:
        cout << "고양이가 나를 쳐다보는 기분이 들었지만 신경쓰지않고 길을 걸었다. [호감-1]" << endl;
        heart -= 1;
        break;
    }

    heart -= check;

    cout << endl;
    cout << "현재 내 호감도 : " << check << endl;

    return 0;
}