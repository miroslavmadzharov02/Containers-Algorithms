#pragma once

#include <stack>
#include <iostream>

class Stack
{
private:
	std::stack<int> s;
public:
	//void initializing() {}
	
	void traversal() {
		std::stack<int> temp(s);
		while (!temp.empty())
		{
			std::cout << temp.top() << " ";
			temp.pop();
		}
	}
	
	void addElement(int x) { s.push(x); }
	
	//void insertElements() {}
	
	void erase() { s.pop(); }
	
	void getElement() { s.top(); }

	void querySize() { s.empty(); s.size(); }
};

