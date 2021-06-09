#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

class pos
{
public:
	double x;
	double y;
	double z;
	pos(double a, double b, double c);

	bool operator<(const pos&b)
	{
		if(this->z < b.z)
			return true;
		else
			return false;
	}
};

pos::pos(double a, double b, double c)
{
	x = a;
	y = b;
	z = c;
}

vector<pos> a;


int main()
{
	int N;
	double sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		double x, y, z;
		cin >> x;
		cin >> y;
		cin >> z;
		pos temp(x, y, z);
		a.push_back(temp);
	}
	sort(a.begin(), a.end());
	for(int i = 1; i<N; i++)
	{
		double x, y, z;
		x = a[i-1].x - a[i].x;
		y = a[i-1].y - a[i].y;
		z = a[i-1].z - a[i].z;
		sum += sqrt(x*x + y*y + z*z);
	}
	cout << setiosflags(ios::fixed)<<setprecision(3) << sum;
}