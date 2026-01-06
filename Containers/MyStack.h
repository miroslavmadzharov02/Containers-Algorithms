#ifndef STACK__
#define STACK__

#include <vector>
#include <cassert>

template <typename T>
class MyStack
{
private:
    std::vector<T> data;

public:
    void push(const T& elem) { data.push_back(elem); };
    void pop() { data.pop_back(); };
    bool empty() const { return data.empty(); };
    size_t size() const { return data.size(); };

    const T& top() const { return data.back(); };
};

#endif
