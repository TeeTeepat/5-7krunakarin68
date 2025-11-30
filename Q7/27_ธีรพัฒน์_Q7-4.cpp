#include <iostream>
using namespace std;

int main(){
	
	float arr[10];
	
	cout << "Celsius to Fahrenheit converison" << endl;
	
	for(int i=0; i<10; i++){
		cout << "Enter Celcius " << "(" << i+1 << ") : ";
		cin >> arr[i];
	}
	
	cout << endl << "Report Celsius to Fahrenheit conversion" << endl;
	
	for(int i =0; i<10; i++){
		cout << arr[i] << " C -> " <<  arr[i] * 1.8 + 32 << " F" << endl; 
	}
	
	return 0;
}