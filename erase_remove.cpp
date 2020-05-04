#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	//erase
	vector<int> v;
	v.push_back(9);
	v.push_back(20);
	v.push_back(30);
	//Erase is used to remove an element
	//It is a very costly operation
	v.erase(v.begin(),v.begin()+1);
	vector<int>::iterator itr;
	for(itr = v.begin();itr != v.end();itr++){
			cout<<*itr<<endl;
	}
	cout<<v.size();

	//doubt
	//remove
	std::remove(v.begin(),v.end(),20); //remove all occurances of 20 from start to end
	vector<int>::iterator itr1;
	for(itr1 = v.begin();itr1 != v.end();itr++){
			cout<<*itr1<<endl;
	}
	//doubt

}
