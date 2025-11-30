#include <iostream>
using namespace std;

int main(){
	
	int arr[5];
	
	for(int i =0; i<5; i++){
		cout << "Enter Number To Array" << " (" << i+1 << ") :";
		cin >> arr[i];
	}
	cout << endl;
	
	cout << "Data In Array" << endl;
	
	for(int i =0; i<5; i++){
		if(i < 4) cout << arr[i] << " ,";
		else cout << arr[i];
	}
	
	return 0;
}