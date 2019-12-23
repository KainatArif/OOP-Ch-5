#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class DAmount
{   
    private:
    	int amt=0;
	public://constructor initialize's  
		DAmount(double val) : amt(val)
		{
			
		}
    //addition
    double addition(DAmount r)
    {
    	amt = amt + r.amt;
	}
	//subtraction
	double subtraction(DAmount r)
    {
    	amt = amt - r.amt;
	}
	///addInterest
	void addInterest(int rate,int divisor)
	{
		DAmount Interest
		{
		  (amt * rate + divisor / 2) / divisor 
		};
		addition(Interest);
	}
   //toString//
	std::string toString()  
	{
		std::string dollars{std::to_string( amt/100)};
        std::string cents{std::to_string((amt%100))};
	return dollars +"." + (cents.size() == 1 ? "0" : " ") + cents;
	}
};

int main()
{   
    DAmount obj1=1000;
    DAmount obj2=2000;
    int rate=0;
    int divisor=0;
    DAmount bal=200000;
    
    cout<<"After adding from obj2 into obj1 our result is : "<<endl;
    obj1.addition(obj2);
    cout<<obj1.toString()<< "\n";
    
    cout<<"After subtracting obj2 from obj1 our result is : "<<endl;
    obj1.subtraction(obj2);
    cout<<obj1.toString()<< "\n";
    
    cout<<"Enter INTEREST RATE and DIVISOR i.e: (for 4% you should enter 4 100\n"<<endl;
    cout<<"Enter INTEREST RATE and DIVISOR i.e: (for 4.1% you should enter 41 1000\n"<<endl;
    cout<<"Enter INTEREST RATE and DIVISOR i.e: (for 411% you should enter 411 10000\n"<<endl;
    cout<<"Enter INTEREST RATE and DIVISOR i.e: (for 4111% you should enter 4111 100000\n"<<endl;
    cout<<"Enter rate and Divisor : ";
	cin>>rate>>divisor;
    cout<<"Initial Balance : "<<bal.toString()<<endl;
    cout<<" Year :         "<<"  Amount on Deposit :"<<endl;
    for(int i=1;i<=10;i++)
    {
    bal.addInterest(rate,divisor);
	cout<< i <<"              " << bal.toString() <<endl;
}
    return 0;
}
