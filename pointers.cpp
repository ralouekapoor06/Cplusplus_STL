#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	int var = 8;
	int *ptr = &var;
	cout<<ptr<<endl;
	*ptr = 10;
	cout<<var<<endl;

	//ask this case
	char *ptrr = new char[8];
	cout<<ptrr;
	memset(ptrr,0,8);
	cout<<*ptrr;
	//delete ptrr[];
	//ask above case

	int arr[] = {10,20,30,40};
	int *begin = &arr[0];
	int *end = &arr[3];
	sort(begin,end); // sort function will always take address
	for(;begin!=end;begin++){
		cout<<*begin;
	}
	cout<<*begin;

	//1st parameter why blank - https://stackoverflow.com/questions/1971311/what-does-it-mean-when-the-first-for-parameter-is-blank




}