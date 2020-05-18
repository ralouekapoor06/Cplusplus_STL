#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
	stack<int,deque<int>> stk;// we can also use vector also instead of deque
	stk.push(100);
	stk.push(200);
	stk.push(300);
	while(!stk.empty()){
		cout<<stk.top();
		stk.pop();
	}

	cout<<endl;

	//queue
	queue<int,deque<int>> q;//we can use list also instead of deque
	q.push(100);
	q.push(200);
	q.push(300);
	while(!q.empty()){
		cout<<q.front();
		cout<<q.back();
		q.pop();
	}

	cout<<endl;

	//priority queue
	priority_queue<int,deque<int>,std::less<int>> pq;//vector can be passed too instead of deque
	pq.push(10);
	pq.push(20);
	pq.push(30);
	while(!pq.empty()){
		cout<<pq.top();
		pq.pop();
	} 
}
