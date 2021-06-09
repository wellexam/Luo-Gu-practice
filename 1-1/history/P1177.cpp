#include<iostream>
#include<cstdio>

using namespace std;


void my_sort(int list[], int l, int r);

int a[1000000];

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
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i] = read();
	}
	my_sort(a, 0, n - 1);
	for (int i = 0; i < n-1; i++)
	{
		printf("%d ", a[i]);
	}
	printf("%d\n", a[n-1]);
	return 0;
}

void my_sort(int list[], int l, int r)
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
	my_sort(list, key + 1, r);
	my_sort(list, l, key - 1);
}