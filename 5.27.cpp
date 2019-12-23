//5.27


#include <iostream>
using namespace std;
int main() 
{
   for ( unsigned int count{ 1 }; count <= 10; count++ ) 
   {
      if ( count == 5 )
        ++count;
      cout << count << ' ';
   }
   cout << "\n"<<"Used increment to skip printing 5" << "\n";
   return 0;
}
