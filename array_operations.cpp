#include <iostream>
#include <bits/stdc++.h>

// program contianing a menu for deletion, insertion and serarching of an array
using namespace std;


int main(){
	int array[100], x, n, s, pos, ele;
	
	cout <<" Enter size of array :";
	cin >> n;
	cout << "\nInput array elements :";
	
	for (int k=0; k<n; k++){
		cin >> array[k];
	}
	
	cout <<  "\n Enter a number in  the menu below to choose  the operation";
	cout << "\n 1 for Insertion"; 
	cout << "\n 2 for Deletion"; 
	cout << "\n 3 for Search "; 
	cout <<" \nyour choice: ";
	cin >> x;
	
	if (x == 1){
		// insertion
		cout << "Enter element to add";
		cin >> ele;
		
		cout << "\nEnter Postion to insert element";
		cin >> pos;
		
		if (pos > n){
			cout << "\nInvalid Input ";
		}else{
			for (int t = n-1; t >= pos -1; t--){
				array[t+1]=array[t];
				
				array[pos-1] = ele;
				
			}
			cout << "Array after insertion : ";
			for (int j=0; j<=n; j++){
				cout << array[j] << " ";
			}
		}
		
		 
	}else if (x ==2){
		// deletion
		cout << "\nEnter position of element to delete:";
		cin >> pos;
		
		if (pos >= n+1){
			cout << "\n Deletion at position not possible";
		}else{
			for (int a = pos - 1; a< n - 1; a++){
				array[a] = array[a+1];
			}
			cout << "\n Array after deletion :";
			
			for(int c=0; c<n; c++){
				cout << array[c] << " ";
			}
		}
		
	}
	else {
		//searching
		cout << "\nEnter element to search : ";
		cin >> s;
		
		for (int i=0; i<n; i++){
			if (array[i] == s){
				cout << "\nelement found";
			}
			
		}
	}
	
	
	return 0;
}