#include<iostream>
#include<vector>
#include<algorithm>

//https://www.quora.com/What-does-using-namespace-std-mean-in-C++
using namespace std;

int main(){
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(3);
	sort(v.begin(),v.end());
	vector<int>::iterator itr;
	cout<<v.size()<<endl;
	for(itr = v.begin();itr != v.end();itr++){
			cout<<*itr<<endl;
	}
	v.clear();
}
