#pragma once
#include <unordered_map>
#include <iostream>
class Map
{
private:
	std::unordered_map<int, int> um;
public:
	void initializing() {
		std::unordered_map<int, std::string> m =
		{ {1, "A"}, {2, "B"}, {3, "C"} };
	}

	void traversal() {
		for (auto i : um)
			std::cout << i.first << ": " << i.second << '\n';
	}

	void addElement(int x) { um.insert({ 2, 9 }); }

	//void insertElements() {}

	void erase() { um.erase(2); }

	void getElement() { 
		um[2];
		auto it = um.find(2);

		if (it != um.end())
			std::cout << it->first << ": " << it->second;
	}

	void querySize() { um.size(); um.empty(); }
};

