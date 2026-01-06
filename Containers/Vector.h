#ifndef VECTOR___
#define VECTOR___

#include <vector>

class Vector
{
private:
	std::vector<int> vec;

public:
	void initializing()
	{
		//reserved size 10 and filled with 1's
		std::vector<int> v(10, 1);

		std::vector<int> v1 = { 1, 2, 3, 4 };
	}

	void traversal()
	{
		for (int i = 0; i < vec.size(); i++)
			vec[i];

		for (auto i : vec)
			i;

		//reverse traversal
		for (int i = vec.size() - 1; i >= 0; i--)
			vec[i];
	}

	void addElement(int x) { vec.push_back(x); }
	void insertElements()
	{
		vec.insert(begin(vec) + 1, 5);
		vec.insert(begin(vec), { 7,8 });
		vec.insert(end(vec), 9);
	}

	void erase()
	{
		// does not affect capacity
		vec.pop_back();
		vec.clear();

		vec.erase(begin(vec) + 2);
		vec.erase(begin(vec) + 1, begin(vec) + 4);
	}

	void getElement()
	{
		vec[1];
		vec.front();
		vec.back();
	}

	void querySize()
	{
		vec.size();
		vec.empty();
	}
};

#endif 