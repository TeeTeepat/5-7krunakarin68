#include <iostream>
using namespace std;

int main(){
	
	int arr1[5];
	int arr2[5];
	int arrsum[5];
	char check[5];
	
	cout << "Input Data To Array : 1" << endl;
	for(int i=0; i<5; i++){
		cout << "Enter Number To Array" << "(" << i+1 << ") : ";
		cin >> arr1[i];
	}
	cout << endl;
	
	cout << "Input Data To Array : 2" << endl;
	for(int i=0; i<5; i++){
		cout << "Enter Number To Array" << "(" << i+1 << ") : ";
		cin >> arr2[i];
		
		arrsum[i] = arr1[i] + arr2[i];
		if(arrsum[i]%2 == 0) check[i] = 'E';
		else check[i] = 'O';
	}
	
	cout << endl << "Report" << endl;
	
	for(int i =0; i<5; i++){
		cout << arr1[i] << " + " << arr2[i] << " = " << arrsum[i] << "(" << char(check[i]) << ")" << endl;
	}
	
	
	return 0;
}