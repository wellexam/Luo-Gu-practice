#include<iostream>
#include<stdio.h>

using namespace std;


void my_sort(int list[], int l, int r, int k);

int a[5000000];

inline int read(){	//快读
	char ch=getchar();
	int x=0,f=1;
	while(ch<'0'||ch>'9'){
		if(ch=='-') f=-1;
		ch=getchar();
	}
	while('0'<=ch&&ch<='9'){
		x=x*10+ch-'0';
		ch=getchar();
	} return x*f;
}

int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		a[i] = read();
	}
	my_sort(a, 0, n - 1, k);
	return 0;
}

void my_sort(int list[], int l, int r, int k)
{
	if (l >= r)
	{
		return;
	}
	int i = l, j = r, key = j;
	int x = list[key];
	while (i < j)
	{
		while (i < j && list[i] <= list[key])
		{
			i++;
		}
		list[key] = list[i];
		list[i] = x;
		key = i;
		while (i < j && list[j] > list[key])
		{
			j--;
		}
		list[key] = list[j];
		list[j] = x;
		key = j;
	}
	if (key == k)
	{
		cout << list[k];
		return;
	}
	else if (key < k)
	{
		my_sort(list, key + 1, r, k);
	}
	else
	{
		my_sort(list, l, key - 1, k);
	}
}