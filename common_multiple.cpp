// common_multiple.cpp
#include <iostream>
using namespace std;

//int dif(const int num);
double input(double dif[]);
int calculate(int a,int b);

int main()
{
	/*
	int num;

	dif(num);
	*/

	const int num=2;

	double dif[num];

	input(dif[num]);
	calculate();

	cin.get();
	return 0;
}

/*
int dif(int num)
{
	cout<<"公倍数を求める要素数を入力してください： ";
	cin>>num;
	return num;
}
*/

double input(double dif[])
{
	cout<<"1つめの整数を入力してください： ";
	cin>>dif[0];
	cout<<"2つめの整数を入力してください： ";
	cin>>dif[1];
	return dif[0],dif[1];
}