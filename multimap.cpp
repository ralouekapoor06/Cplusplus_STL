#include<iostream>
#include<map>
using namespace std;

int main(){
	//no mp[] such syntax is allowed
	//only insertion is allowed
	multimap <int,int> mp;
	mp.insert(make_pair(10,100));
	mp.insert(make_pair(30,300));
	mp.insert(make_pair(20,200));
	mp.insert(make_pair(10,100));
	for(auto it = mp.begin();it!=mp.end();it++){
		cout<<it->first<<"->"<<it->second<<endl;
	}


}