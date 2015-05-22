//Insert Interval 
#include<iostream>
using namespace std;

// struct Interval {
//       int start;
//       int end;
//       Interval() : start(0), end(0) {}
//       Interval(int s, int e) : start(s), end(e) {}
//   };

//   vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        
//     }

class A
{
public:
	A(){fun();}
	//~A();

	virtual void fun(){
		cout<<"A class"<<endl;
	}
	
};

class B:public A
{
public:
	B(){fun();}
	//~B();
	void fun(){
		cout<<"B class"<<endl;
	}
};

int main(){
	A *p = new B();
	p->fun();
	return 0;
}


