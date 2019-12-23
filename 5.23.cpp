// 5.23 
// EggTimer


#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=9;i++)
    {
    if(i==1||i==9)
    {
        cout<<"###########";
        cout<<"\n";	
    }
    else
	{
        cout<<"#";
        for(int k=7;k>=1;k=k-2)
		{
            cout<<"*";
            if(k==1)
			{
			for(int l=3;l<=7;l++)
            {
                cout<<"*";
            }
       }
    }
    cout<<"#";
    cout<<"\n";	
}	
}
}
