#include <iostream>
#include <list>
using namespace std;

int main(){
	list <int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_front(0);

	cout << "Original list" << endl;
	for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++){
		cout << *it << endl;
	}

	list<int>::iterator it=numbers.begin();
	
	cout << "Altered list" << endl;
	
	while(it != numbers.end()){
		// Insert
		if(*it == 2){
			numbers.insert(it, 1234);
		}

		// Erase
		if(*it == 1){
			it = numbers.erase(it); // It points to the  next element after the 
									// element has been removed
		}
		else{
			it++;
		}

	}

	for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++){
		cout << *it << endl;
	}

	return 0;
}