#pragma once
#include <unordered_set>
#include <iostream>
class Set
{
private:
	std::unordered_set<int> s;

public:
	void initializing() { std::unordered_set<int> us = {1, 2, 3, 4, 5}; }

	void traversal() {
		for (auto x : s)
			std::cout << x << " ";

		for (auto it = s.begin(); it != s.end(); it++)
			std::cout << *it << " ";
	}

	void addElement(int x) { s.insert(x); }

	//void insertElements() {}

	void erase() { s.erase(5); }

	void getElement() {
		// Finding 4
		auto it = s.find(4);

		if (it != s.end())
			std::cout << *it;
		else
			std::cout << "Element not Found!";
	}

	void querySize() { s.size(); s.empty(); }
};

