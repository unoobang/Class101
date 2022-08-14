#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
    int map[10][10];
    char ch;
    bool check = true;
    int playerX = 5, playerY = 5;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            map[i][j] = 0;
        }
    }
    while (check)
    {
        map[playerY][playerX] = 1;

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                switch (map[i][j])
                {
                case 0:
                    cout << "бр";
                    break;
                case 1:
                    cout << "в▄";
                    break;
                }
            }
            cout << endl;
        }
        map[playerY][playerX] = 0;
        ch = _getch();
        switch (ch)
        {
        case 'a':
        case 'A':
            playerX--;
            break;
        case 's':
        case 'S':
            playerY++;
            break;
        case 'd':
        case 'D':
            playerX++;
            break;
        case 'w':
        case 'W':
            playerY--;
            break;
        case 27:
            check = false;
            break;
        }
        system("cls");
    }

    return 0;
}