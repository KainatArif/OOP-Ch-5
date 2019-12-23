//5.21
// Modified Triangle Printing Program


#include <iostream>
using namespace std;
int main() 
{
   for ( int row{ 1 }; row <= 10; ++row ) 
   {
      for ( int col{ 1 }; col <= row; ++col )
        cout << '*';
      for ( int col{ 10 }; col > row; --col )
        cout << ' ';
		cout << '\t';
      for ( int col{ 10 }; col >= row; --col )
        cout << '*';
      for ( int col{ 1 }; col < row; ++col )
        cout << ' ';
		cout << '\t';
      for ( int col{ 1 }; col < row; ++col )
        cout << ' ';
      for ( int col{ 10 }; col >= row; --col )
        cout << '*';
		cout << '\t';
      for ( int col{ 10 }; col > row; --col )
        cout << ' ';
      for ( int col{ 1 }; col <= row; ++col )
        cout << '*'<<"\n";
   }
   return 0;
}
