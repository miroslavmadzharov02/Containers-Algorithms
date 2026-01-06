#ifndef QUEUE__
#define QUEUE__

#include <vector>
#include <cstddef>

template <typename T>
class MyQueue
{
private:
    std::vector<T> data;
    size_t front = 0;
    size_t back = 0;

public:
    const T& front() const { return data[front]; }
    const T& back() const { return data[back - 1]; }

    void push(const T& elem)
    {
        if (back == data.size())
            data.push_back(elem);
        else
            data[back] = elem;

        ++back;
    }
    void pop() { ++front; }

    size_t size() const { return back - front; }
    bool empty() const { return size() == 0; }
};

#endif
