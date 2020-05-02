#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	unordered_map <int,int> mp;
	mp.insert(make_pair(10,100));
	mp.insert(make_pair(30,300));
	mp.insert(make_pair(20,200));
	mp.insert(make_pair(40,400));
	mp[10]=700;
	for(auto it = mp.begin();it!=mp.end();it++){
		cout<<it->first<<"->"<<it->second<<endl;
	}

	cout<<" "<<endl;

	unordered_multimap <int,int> mp1;
	mp1.insert(make_pair(10,100));
	mp1.insert(make_pair(30,300));
	mp1.insert(make_pair(20,200));
	mp1.insert(make_pair(40,400));
	mp1.insert(make_pair(20,100));
	for(auto it = mp1.begin();it!=mp1.end();it++){
		cout<<it->first<<"->"<<it->second<<endl;
	}

}

