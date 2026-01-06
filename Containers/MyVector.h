#ifndef VECTOR__
#define VECTOR__

template <typename T>
class MyVector
{
private:
	T* data;
	size_t capacity;
	size_t length;

	void copyFrom(const MyVector<T>& other);
	void free();
public:
	MyVector();

	MyVector(const MyVector<T>& other);
	MyVector& operator=(const MyVector<T>& other);

	~MyVector();

	void pushBack(const T& elemToAdd);

	size_t getLength() const;

	T& operator[](size_t index);
	const T& operator[](size_t index) const;
};

template<typename T>
inline void MyVector<T>::copyFrom(const MyVector<T>& other)
{
	capacity = other.capacity;
	length = other.length;

	data = new T[capacity];
	for (size_t i = 0; i < length; i++)
		data[i] = other.data[i];
}

template<typename T>
inline void MyVector<T>::free()
{
	delete[] data;
}

template<typename T>
inline MyVector<T>::MyVector()
	: capacity(8), length(0)
{
	data = new T[capacity];
}

template<typename T>
inline MyVector<T>::MyVector(const MyVector<T>& other)
{
	copyFrom(other);
}

template<typename T>
inline MyVector<T>& MyVector<T>::operator=(const MyVector<T>& other)
{
	if (this != &other)
	{
		free();
		copyFrom(other);
	}
	return *this;
}

template<typename T>
inline MyVector<T>::~MyVector()
{
	free();
}

template<typename T>
inline void MyVector<T>::pushBack(const T& elemToAdd)
{
	if (length >= capacity)
	{
		capacity *= 2;
		T* temp = new T[capacity];
		for (size_t i = 0; i < length; i++)
			temp[i] = data[i];

		delete[] data;
		data = temp;
	}

	data[length++] = elemToAdd;
}

template<typename T>
inline size_t MyVector<T>::getLength() const
{
	return length;
}

template<typename T>
inline T& MyVector<T>::operator[](size_t index)
{
	return data[index];
}

template<typename T>
inline const T& MyVector<T>::operator[](size_t index) const
{
	return data[index];
}

#endif