// 5.11
// Find smallest value


#include<iostream>
using namespace std;
int main() 
{
   int number;
   int smallest;
   cout << "Number of values: ";
   cin >> number;
   cout << "\nValue: ";
   cin >> smallest;  
   while ( --number ) 
   {
        int value;
        cout << "Value: ";
        cin >> value;
        if ( value < smallest )
        smallest = value;
   }
   cout << "\nSmallest is " << smallest << "\n";
   return 0;
}
