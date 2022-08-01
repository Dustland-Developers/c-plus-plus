#include<iostream>
using namespace std;
int main (){
    int n;
    // taking input by cin for where it will end.
    cin >> n;
    // giving instruction from where this will start.
    int i = 1;
    // maing while (condition)
    while (i <= n){
      cout  << i << " ";
      // adding 1 for next integer, actually we are giving instruction of the amount of gap bettwen 1st n value and 2nd n value.
      i = i + 1;
    }
    cout << endl;
    return 0;
}

/* Output : 
12
1 2 3 4 5 6 7 8 9 10 11 12 
*/
