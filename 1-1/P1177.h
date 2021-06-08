#include <iostream>
#include <cstdlib>

using namespace std;

int a[100000];


void quick_sort(int s[], int l, int r);

int P1177()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    quick_sort(a, 0, N - 1);
    cout << "done";
    for (int i = 0; i < N; i++)
    {
        cout << a[i];
        if (i < N - 1)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }
    return 0;
}

void quick_sort(int s[], int l, int r)
{
    if (l < r)
    {
        int i = l, j = r, x = s[l];
        while (i < j)
        {
            while(i < j && s[j] >= x) // 从右向左找第一个小于x的数
                j--;
            if(i < j)
                s[i++] = s[j];

            while(i < j && s[i] < x) // 从左向右找第一个大于等于x的数
                i++;
            if(i < j)
                s[j--] = s[i];
        }
        s[i] = x;
        quick_sort(s, l, i - 1); // 递归调用
        quick_sort(s, i + 1, r);
    }
}