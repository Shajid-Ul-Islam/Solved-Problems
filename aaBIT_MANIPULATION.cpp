#include<iostream>
#include<cmath>
using namespace std;
int getIthbit(int m, int i)
{
	int mask = (1 << i);
	//cout << (mask & m) << endl;
	if (mask & m == 0) return 0;
	else return 1;

}
int clearIthbit(int m, int i)
{
	int mask = ~(1 << i);
	return mask & m ;
}
int updateIthbit(int m, int i, int v)
{
	int x = ~(1 << i);
	m = x & m;
	int mask = v << i;
	return mask | m;
}
int clearlastIbits(int m, int i)
{
	int mask = (-1 << i);	//(~0)==(-1)
	return (m & mask);
}
int clearbitsinrange(int m, int i, int j)
//clear from i to j(numbering right to left)
//including i-th and j-th bit
{
	int a = (1 << i) - 1 , b = -1 << (j + 1);	//a=(2 power n)-1
	int mask = a | b;
	int res = m & mask;
	return res;
}
int converttobinary(int n)
{
	int last_bit, ans = 0, p = 1;
	while (n != 0)
	{
		last_bit = (n & 1);
		ans += last_bit * p;
		p = p * 10;
		n = n >> 1;
	}
	return ans;
}
int main()
{
	int n = 127, i = 2;
	//cin >> n >> i;
	//cout << getIthbit (n, 0) << endl;
	// cout << clearIthbit(n, i) << endl;
	// cout << updateIthbit(n, 16 , 1) << endl;
	// cout << clearlastIbits(n, i) << endl;
	// cout << clearbitsinrange(n, i, 5) << endl;
	cout << converttobinary(5) << endl;
}

