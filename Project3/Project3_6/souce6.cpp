#include <iostream>
#include <conio.h>
using namespace std;

#define MAX_X 10
#define MAX_Y 10

void Init();
void Update();
void Render();

int map[MAX_Y][MAX_X];
bool check = true;
int playerX = 5, playerY = 5;

int stage1[10][10]
{
    (0, 0, 0, 2, 0, 0, 0, 0, 0, 0),
    (0, 0, 0, 2, 0, 2, 0, 2, 2, 0),
    (0, 0, 0, 2, 0, 2, 0, 2, 0, 0),
    (0, 0, 0, 2, 2, 2, 0, 2, 0, 0),
    (0, 0, 0, 0, 0, 0, 0, 2, 0, 0),
    (0, 2, 2, 2, 2, 2, 2, 2, 0, 2),
    (0, 2, 0, 0, 0, 0, 0, 0, 0, 0),
    (0, 2, 0, 0, 0, 0, 0, 0, 0, 0),
    (0, 2, 0, 0, 2, 2, 2, 2, 2, 0),
    (0, 2, 0, 0, 0, 0, 0, 0, 0, 0)
};

int main(void)
{
    Init();
    while (check)
    {
        Update();
        Render();
    }
    return 0;
}

void ResetStage()
{
    for (int i = 0; i < MAX_Y; i++)
    {
        for (int j = 0; j < MAX_X; j++)
        {
            map[i][j] = stage1[i][j];
        }
    }
}

void Init()
{
    ResetStage();
    map[playerY][playerX] = 1;
    Render();
}

void Update()
{
    ResetStage();
    char ch;
    ch = _getch();
    switch (ch)
    {
    case 'a':
    case 'A':
        if (playerX > 0)
        {
            playerX--;
        }
        break;
    case 's':
    case 'S':
        if (playerY < MAX_Y - 1)
        {
            playerY++;
        }
        break;
    case 'd':
    case 'D':
        if (playerX < MAX_X - 1)
        {
            playerX++;
        }
        break;
    case 'w':
    case 'W':
        if (playerY > 0)
        {
            playerY--;
        }
        break;
    case 27:
        check = false;
        break;
    }
    map[playerY][playerX] = 1;
}

void Render()
{
    system("cls");
    for (int i = 0; i < MAX_Y; i++)
    {
        for (int j = 0; j < MAX_X; j++)
        {
            switch (map[i][j])
            {
            case 0:
                cout << "бр";
                break;
            case 1:
                cout << "б┌";
                break;
            case 2:
                cout << "бс";
                break;
            }
        }
        cout << endl;
    }
}