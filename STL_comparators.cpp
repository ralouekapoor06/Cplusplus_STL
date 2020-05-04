#include<iostream>
#include<set>
using namespace std;

//understand this properly
template <typename type>
struct mycomp
	{
		bool operator()(const type & first,const type & second)const
		{
			return first > second;
		}
	};
//understand above

int main(){
	set<int,greater<int>> myset;
	myset.insert(100);
	myset.insert(50);
	myset.insert(200);
	for(auto &ele:myset){
		cout<<ele;
	}
	//we can do this in map also
	//We make the 3rd parameter change
	//We can also make our own comparator
	
	

	set<int,mycomp<int>> myset1;
	myset1.insert(100);
	myset1.insert(50);
	myset1.insert(200);
	for(auto &ele1:myset1){
		cout<<ele1;
	}
}