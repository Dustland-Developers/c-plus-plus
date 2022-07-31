#include<iostream>
using namespace std;
int main (){
	// if we int(x)/double(y) or double(y)/int(x) then answer will be in double always.
	int a = 3;
	double b = 5.3;
	double c = a/b;
	double d = b/a;
	cout<<c<<endl;
	cout<<d<<endl;
}

/*
output:
0.566038
1.76667
*/
