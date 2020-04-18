#include<iostream>
#include<map>
using namespace std;
int main(){
	pair<int,int> p = make_pair(10,20);
	cout<<p.first<<"--"<<p.second<<endl;
	map<int,int> mp;
	mp.insert(make_pair(20,100));
	mp.insert(make_pair(10,200));
	mp.insert(make_pair(30,300));
	//using auto we wont have to declare the type of the variable
	for(auto it=mp.begin();it!=mp.end();it++){
		cout<<it->first<<"--"<<it->second<<endl;	
	}
	mp[4] = 400;
	mp[3] = 300;
	for(auto it=mp.begin();it!=mp.end();it++){
		cout<<it->first<<"--"<<it->second<<endl;	
	}
	//insertion
	mp.insert(make_pair(30,900));
	for(auto it=mp.begin();it!=mp.end();it++){
		cout<<it->first<<"--"<<it->second<<endl;	
	}
	//updation
	mp[30] = 900;
	for(auto it=mp.begin();it!=mp.end();it++){
		cout<<it->first<<"--"<<it->second<<endl;	
	}
}