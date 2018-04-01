#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> digits;

	digits.push_back(1);
	digits.push_back(2);
	digits.push_back(3);
	digits.push_back(4);
	digits.push_back(5);

	cout << "Simple for loop:\n";
	for(int i=0; i < digits.size(); i++){
		cout << digits[i] << endl;
	}

	// Creating an iterator for the vector
	vector<int> :: iterator it; 
	
	cout<< "Vector iterator:\n";
	for(it = digits.begin(); it != digits.end(); it++){
		cout << *it << endl;
	}

}