#include <iostream>
using namespace std;
int main (){
   int a = 2;
   int b = a + 1;
   // a is assigned to 3 and now a == 3
   if ((a = 3) == b ){
      cout << a +2 << endl;
   }
   else
   {
      cout << a << endl;
   }
}
/* Output : 5 */
