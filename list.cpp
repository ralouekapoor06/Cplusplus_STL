#include<iostream>
#include<list>
#include<algorithm>

//https://www.quora.com/What-does-using-namespace-std-mean-in-C++
using namespace std;

int main(){
	list<int> l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(5);
	list<int>::iterator itr = l.begin();
	cout<<l.size()<<endl;
	for(;itr != l.end();itr++){
			cout<<*itr<<endl;
	}
	l.clear();
}