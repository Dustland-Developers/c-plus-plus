#include<iostream>
using namespace std;
int main (){
	// if we int(x)/float(y) or float(y)/int(x) then answer will be in float always.
	int a = 3;
	float b = 5.3;
	float c = a/b;
	float d = b/a;
	cout<<c<<endl;
	cout<<d<<endl;
}
