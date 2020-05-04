#include<iostream>
#include<set>
using namespace std;
int main(){

	//set
	set<int> myset;
	myset.insert(100);
	myset.insert(400);
	myset.insert(300);
	myset.insert(200);
	myset.insert(200);
	for(auto &ele : myset){
		cout<<ele;
	}
	//where else can we use this for loop

	myset.erase(100);
	myset.erase(myset.begin());
	for(auto &ele : myset){
		cout<<ele;
	}


	//multiset
	multiset<int> myset1;
	myset1.insert(100);
	myset1.insert(300);
	myset1.insert(200);
	myset1.insert(400);
	myset1.insert(200);
	for(auto &ele1 : myset1){
		cout<<ele1;
	}
	myset1.erase(200);
	myset1.erase(myset1.begin());
	for(auto &ele1 : myset1){
		cout<<ele1;
	}

}