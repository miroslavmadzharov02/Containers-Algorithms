#pragma once
#include <queue>#
#include <iostream>
class Queue
{
private:
	std::queue<int> q;
public:
	void initializing() {}

	void traversal() {
		while (!q.empty())
		{
			std::cout << q.front() << " ";
			q.pop();
		}
	}

	//at the back
	void addElement(int x) { q.push(10); }

	void insertElements() {}

	//from the front
	void erase() { q.pop(); }

	void getElement() { q.front(); q.back(); }

	void querySize() { q.size(); q.empty(); }
};

