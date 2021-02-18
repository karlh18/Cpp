#include <iostream>
#include <cmath>
using namespace std;



void testingDouble(){

cout << "Please enter a floating-point value: ";
	double n;
	cin >> n;
	cout  	<< "n==" <<n
		<< "\nn+1 ==" << n+1
	        << "\nnthree times n == " << n*3
		<< "\ntwice n == " << n+n
		<< "\nn squared == " << n*n
		<< "\nnhalf of n ==" << n/2
		<< "\nsquare root of n == " << sqrt(n)
		<< "\n"; // end of line 
}


void testingInt(){
	
cout << "Please enter a integer value: ";
	int n;
	cin >> n;
	cout  	<< "n==" <<n
		<< "\nn+1 ==" << n+1
	        << "\nnthree times n == " << n*3
		<< "\ntwice n == " << n+n
		<< "\nn squared == " << n*n
		<< "\nnhalf of n ==" << n/2
		<< "\nsquare root of n == " << sqrt(n)
		<< "\n"; // end of line 
}

// Fun property of guaranteeing that for two positive ints a and b
// 	We have a/b*b + a%b == a
void guaranteeTwoPositive(int a, int b){
	int first= a/b*b;
	int second= a%b;
	bool s = true;
cout << s;	
cout << first + second;
	cout << "a: " << a << endl 
	       << "b: " << b << endl
       << "first calc: " << first << endl
	<< "second calc: " << second << endl
  	<< "is a/b*b + a%b == a?" << (a/b*b + a%b) << " ==" << a << (a/b*b+a%b==a)<< endl;
}




int main() {
	guaranteeTwoPositive(5,4);

	int i = 10;
	i%=2;
	cout << i;
//	double j = 10;
//	j%=2;

//	cout << j ;
	testingDouble();	
	testingInt();	

	// Modulo test for int and double
	
}
