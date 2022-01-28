#include <iostream>
#include <cmath>

using namespace std;

// function to get the highest mark  
int getHighest(int arr[], int n){
	int maximum = arr[0];
	for (int a = 0; a<n; a++){
		if(arr[a] > maximum){
			maximum = arr[a];
		}
	}
	
	return maximum;
}

int main(){
//	section that return highest mark from ny ten numbers input from the screen

	int size = 10;
	int array[size];
	
	// taking input in array
	cout << "Enter  10 Student marks : ";
	for (int j=0; j<size; j++){
		
		cin >> array[j];
	}
	
	cout << " \n\nMarks entered:"; 
	//displaying entered numbers
	for(int i=0; i<size; i++){
		cout<< array[i] <<",";
	}
	
	// finding the maximum number
	cout << "\n\n Highest mark : " << getHighest(array,size);
	
	
	
//	end of section
}