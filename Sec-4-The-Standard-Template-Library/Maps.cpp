#include <iostream>
#include <map>
using namespace std;

int main(){
	map<string, int> ages;

	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;

	cout << ages["Raj"] << endl;

	ages.insert(make_pair("Peter", 100));

	// cout << ages["Sue"] << endl; // Simply doing this is error prone
	// 							 // It adds "Sue" to the map with value 0

	// Instead we use find() method
	if(ages.find("Sue") != ages.end()){
		cout << "Found key" << endl;
	}
	else{
		cout << "Key not found" << endl;
	}

	for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
		cout << it->first << ": " << it->second << endl;
	}

	for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
		pair<string, int> age = *it;
		cout << age.first << ": " << age.second << endl;
	}


	return 0;
}