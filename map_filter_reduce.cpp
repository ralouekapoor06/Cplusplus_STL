#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	// if we would want to apply some operations on vector or anything similar, we use them
	//map-transform
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	vector<int> vout(v.size());
	transform(v.begin(),v.end(),vout.begin(),[](int & value){
		return value*3;
	});
	for(auto &val : vout)
	cout<<val<<endl;


	//we can use back_inserter(vout) instead of vout.begin
	//v.size() need not be specified
	//back_inserter will use push back internally
	// if we use the container not having push back then then use previous method only


	vector<int> vout1;
	transform(v.begin(),v.end(),back_inserter(vout1),[](int & value){
		return value*3;
	});
	for(auto &val1 : vout1)
	cout<<val1<<endl;

	//filter
	//see how to do it

	//reduce
	//see how to do it

	//which all containers doesnt has begin and end functions?
	//end() cannot be used if size not specified?
	
}