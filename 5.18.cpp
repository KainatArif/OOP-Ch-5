#include<iostream>
using namespace std;
int main()
{
	int x=7;
	int y=5;
	int z=3;
	cout<<(x==7&&y==5)<<"\n";
	cout<<(x==7||y==3)<<"\n";
	cout<<(x==7&&y==3)<<"\n";
	cout<<(z==7||y==3)<<"\n";
	cout<<(x-2==5&&y+4==9)<<"\n";
	cout<<(x>=7||y<=5)<<"\n";
	cout<<(y!=6&&z!=3)<<"\n";
	cout<<(y!=5&&z!=6)<<"\n";
	cout<<(!(y-z-2))<<"\t"<<(!(y>z))<<"\n";
}
