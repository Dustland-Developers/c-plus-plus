#include <iostream>
using namespace std;
int main (){
   int a = 21;
   if (a > 20){
      cout << "Aditya Vijay and my fav. number is : ";
   }
   else if ( a == 24 ){
      cout << "Kiriotheo.";
   }
   else {
      cout << "My Github Account is : @kiriotheo.";
   }
   // In this case our first condition (if) satisfy our need so it jumped to the upcoming cout line.  
   cout << a << endl;
   return 0;
}

/* Output : Aditya Vijay and my fav. number is : 21 */ 
