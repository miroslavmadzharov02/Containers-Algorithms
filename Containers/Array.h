#pragma once
#include <array>

class Array
{
private:
	std::array<int, 6> arr;

public:
	void initializing() { std::array<int, 6> a{ 4,8,15,16,23,42 };}

	void traversal()
	{
		for (int i = 0; i < arr.size(); i++)
			arr[i];

		for (auto i : arr)
			i;

		//reverse traversal
		for (int i = arr.size() - 1; i >= 0; i--)
			arr[i];
	}

	void addElement(int x) { arr[0] = x; }

	void getElement()
	{
		arr[1];
		arr.front();
		arr.back();
	}

	void querySize()
	{
		arr.size();
		arr.empty();
	}
};

