#include <iostream>
using namespace std;

int main(){
	
	int arrnum[5];
	int arrchar[5];
	
	for(int i =0; i<5; i++){
		cout << "Enter Number To Array" << "(" << i+1 << ") : ";
		cin >> arrnum[i];
		
		if(arrnum[i]%2 == 0) arrchar[i] = 'E';
		else arrchar[i] = 'O';
	}
	
	cout << endl << "Data In Array" << endl;
	
	for( int i=0; i<5; i++){
		if(i < 4) cout << char(arrchar[i]) << ", ";
		else cout << char(arrchar[i]);
	}
	
	return 0;
}