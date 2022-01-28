#include <iostream>
#include <cmath>

using namespace std;


//  function for finding factorial 
unsigned factorial (unsigned  x){
		if (x < 0){
		cout << "Error! Factorial of a negative number doesnot exist";
	}else if (x == 0){
		return 1;
	}
	else{
	
		return 	x * factorial(x - 1);
		}
		
		
	}
	

// function to find greatest common denominator 
int gcd(int a, int b){
	if (a ==0){
		
		return b;
		
	}else if (b == 0){
		
		return a;
		
	}else if (a == b){
		
		return a;
		
	}else if( a > b){
		
		return gcd( a-b, b);
		
	}else{
		
		return gcd(a, b-a);
	}

}


int main(){
	
	cout << "----------------------";
	cout <<" \nFinding factorial";
	cout << "\n----------------------";
	int n;
	
	
	cout << "\nEnter any  Number:";
	cin >> n;
	
	cout << "factorial of " << n << " is  " << factorial(n);
	
	cout << "\n----------------------";
	cout << " \nfinding Greatest common denominator of any 2 numbers";
	cout << "\n----------------------";
	
	int x, y;
	cout << "\n enter first number";
	cin >> x;
	cout << "\n enter second number";
	cin >> y;
	
	cout << "GCD  of  " << x << " and " << y << " is " << gcd(x, y);
}
