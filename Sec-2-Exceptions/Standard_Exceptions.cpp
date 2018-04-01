#include <iostream>
using namespace std;

class CanGoWrong{
public:
	CanGoWrong(){
		char *pMemory = new char[99999999999999999999];
		delete [] pMemory; // Deleting an array or its pointer
	}
};

int main(){
	try{
		CanGoWrong wrong;
	}
	catch(bad_alloc &e){
		cout << "Exception caught: " <<  e.what() << endl;
	}
	
	cout << "Still running" << endl;
	return 0;
}