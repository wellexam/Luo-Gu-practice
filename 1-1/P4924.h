#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int m, n, flag;

void i2v(int &x, int &y);

void v2c(int &x, int &y);

void c2v(int &x, int &y);

int P4924()
{
    cin >> n >> m;
    vector< vector< int > > mat1, mat2;
    for (int i = 1; i <= n * n; i += n)
    {
        vector< int > mat;
        for (int j = i; j < i + n; j++)
        {
            mat.push_back(j);
        }
        mat1.push_back(mat);
        mat2.push_back(mat);
    }
    while (m > 0)
    {
        m--;
        int x, y, r, z;
        cin >> x >> y >> r >> z;
        i2v(x, y);
        v2c(x, y);
        if (flag == 0)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    int a = i, b = j;
                    v2c(a, b);
                    if (abs(x - a) <= r && abs(y - b) <= r)
                    {
                        if (z == 0)
                        {
                            a -= x;
                            b -= y;
                            int c;
                            c = a;
                            a = b;
                            b = c;
                            b *= -1;
                            a += x;
                            b += y;
                            c2v(a, b);
                            mat2[a][b] = mat1[i][j];
                        }
                        else
                        {
                            a -= x;
                            b -= y;
                            int c;
                            c = a;
                            a = b;
                            b = c;
                            a *= -1;
                            a += x;
                            b += y;
                            c2v(a, b);
                            mat2[a][b] = mat1[i][j];
                        }
                    }
                    else
                    {
                        mat2[i][j] = mat1[i][j];
                    }
                }
            }
            flag = 1;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    int a = i, b = j;
                    v2c(a, b);
                    if (abs(x - a) <= r && abs(y - b) <= r)
                    {
                        if (z == 0)
                        {
                            a -= x;
                            b -= y;
                            int c;
                            c = a;
                            a = b;
                            b = c;
                            b *= -1;
                            a += x;
                            b += y;
                            c2v(a, b);
                            mat1[a][b] = mat2[i][j];
                        }
                        else
                        {
                            a -= x;
                            b -= y;
                            int c;
                            c = a;
                            a = b;
                            b = c;
                            a *= -1;
                            a += x;
                            b += y;
                            c2v(a, b);
                            mat1[a][b] = mat2[i][j];
                        }
                    }
                    else
                    {
                        mat1[i][j] = mat2[i][j];
                    }
                }
            }
            flag = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (flag == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mat1[i][j] << " ";
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                cout << mat2[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

void i2v(int &x, int &y)
{
    x--;
    y--;
}

void v2c(int &x, int &y)
{
    int c;
    c = x;
    x = y;
    y = c;
    x++;
    y = n - y;
}

void c2v(int &x, int &y)
{
    y = n - y;
    x--;
    int c;
    c = x;
    x = y;
    y = c;
}