#include <iostream>
#include <cstdlib>

using namespace std;

int P1024()
{
    char input[65000];
    int win = 0, lost = 0;
    int i = 0, flag = 0;
    while (cin >> input[i])
    {
        if (input[i] == 'E')
        {
            break;
        }
        i++;
    }
    if (i == 0)
    {
        cout << 0 << ":" << 0 << endl << endl;
        cout << 0 << ":" << 0 << endl;
        return 0;
    }
    int x = 0;
    while (x < i)
    {
        for (int j = 0; ((win < 11 && lost < 11) || abs(win - lost) < 2) && x < i; j++)
        {
            if (input[x] == 'W')
            {
                win++;
            }
            else
            {
                lost++;
            }
            x++;
        }
        cout << win << ":" << lost << endl;
        if ((win >= 11 || lost >= 11) && abs(win - lost) >= 2)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        win = 0;
        lost = 0;
    }
    if (flag)
    {
        cout << 0 << ":" << 0 << endl;
        flag = 0;
    }
    cout << endl;
    x = 0;
    while (x < i)
    {
        for (int j = 0; ((win < 21 && lost < 21) || abs(win - lost) < 2) && x < i; j++)
        {
            if (input[x] == 'W')
            {
                win++;
            }
            else
            {
                lost++;
            }
            x++;
        }
        cout << win << ":" << lost << endl;
        if ((win >= 21 || lost >= 21) && abs(win - lost) >= 2)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        win = 0;
        lost = 0;
    }
    if (flag)
    {
        cout << 0 << ":" << 0 << endl;
    }
    return 0;
}