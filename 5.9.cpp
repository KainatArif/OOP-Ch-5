//5.9


#include<iostream>
using namespace std;
int main()
{
    int result = 1;
    for( int i = 1; i<= 15; i++ )
  {
    if( i%2 == 1)
    result *= i;
   }
    cout << "result is " << result <<"\n";
   //for pause
   system("PAUSE");
   return 0;
}

