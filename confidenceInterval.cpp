#include <iostream>
#include <cmath>
using namespace std;

/* 
C++ program that use inflation rates find the confidence interval, which is then 
 used to check if the over the past 10 years the inflation rates have been within the confidence interval range
*/

//  function that will check if number is in range
bool inRange(float low, float high, float x){
        return (low <= x && x <= high);
    }



//main method
int main(){

    

    // defining and declaring variables
    int n, i;
    float sum = 0.0, mean, standardDeviation = 0.0, variance = 0.0;

    // array of inflation rates for the past 10 years

    float inflationrates[] = {12.68, 4.91, 3.08, 5.41, 5.17, 5.64, 2.62, 2.34, 2.76, 2.16};
    
    
    // storing size of array in a variable
    n = sizeof(inflationrates) / sizeof(inflationrates[0]);
    
//    displaying information stored in the array 
    cout << "\nThe inflation rates for the past 10 years are: " << endl;
    
//	 variable storing the year
    int year = 2012;
    
    for (int i = 0; i < n; ++i) {
    	cout << year <<"   ";
        cout << inflationrates[i] << "%" << endl;
        year +=1;
    }
    
    cout << "\n \n";
    

    // calculating the mean
    for(i = 0; i < n; i++){
        sum += inflationrates[i];
    }

    mean = sum / n;
    cout << "Mean : " << mean << endl;
    cout << "\n";

    //  end of calculating mean
    

    // calculting standard deviation
    for(i = 0; i < n; ++i){
        variance += pow(inflationrates[i] - mean, 2);
    }
   
   variance=variance/n;
   standardDeviation = sqrt(variance);
   
   cout<< "Standard Deviation : " << standardDeviation << endl;
   cout << "\n";

    // end of calculating stndard deviation
    

    // calculating 95% confidence interval

    
    const float z = 1.960; // defining the constant as 95% confidence interval estimate

    float xupper, xlower;

    //  calculating confidence interval Using the Z Statistic where z is defined as a constant 

    xlower = mean - z*(standardDeviation/sqrt(n));
    xupper = mean + z*(standardDeviation/sqrt(n));

    cout<< "confidence interval is "<< xlower << "-" << xupper << endl;


    // end of calculation
    cout << "\n \n";
	int y = 2012;
	
	std::cout <<" Checking if inflation rate lies in the confidence interval " << endl;

    for ( i = 0; i < n; i++)
    {
//         Display and increment the year
        cout << y << ":";
        y += 1;

        // calling function inRange which checks whether the inflation rate falls in the confidence interval 
        inRange(xlower, xupper, inflationrates[i])? cout << "True\n": cout <<"False\n";
        
    }
    



   
return 0;

}