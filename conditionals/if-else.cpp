#include <iostream>
using namespace std;
int main (void) {
   int a;
   cout << "Input Integer is : ";
   cin >> a ;
   

   if (a < 0){
      cout << "negative." << endl;
   }
   else {
      cout << "positive." << endl;
   }
   return 0;
}

/* Output : -4
           Input Integer is : neagtive. */
