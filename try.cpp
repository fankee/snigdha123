// SampleCpp.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include<vector>
using namespace std;

template <typename _T>
class Stack
{
public:
    Stack() : v1(0) { }
	~Stack()
	{
while(v1.size!=0)
v1.pop_back();
	}

	void push(const _T& elem)
	{
v1.push_back(elem);
	}

	void pop()
	{
v1.pop_back();
	}

	const _T& top() const
	{
return v1[v1.size()-1];
	}

	bool empty() const
	{
		return (v1.front() == NULL);
	}

private:
vector v1;
};

int main()
{
/*	Stack<int> s;
	int d;
	while(cin>>d)
	{
		s.push(d);
	}
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
*/
	cout<<"problem sir";
/*#ifdef WIN32
	system("PAUSE");
#endif // WIN32
	return 0;*/
}
