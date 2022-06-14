#pragma once
template < typename T>
class Vector
{
	T* arr = nullptr;
	size_t numberOfElements;
	size_t capacity;
	void free();
	void copyFrom(const Vector& other);
	void resize();
public:
	Vector();
	Vector(const Vector& other);
	T& operator=(const Vector& other);
	T& operator[](size_t n);
	~Vector();

	const size_t getNumberOfElements()const;
	const T* gerArrPointer() const;
	void add(const T& item);
	void add(const T&& item);
};
template < typename T>
void Vector<T>::free()
{
	delete[] arr;
}
template < typename T>
void Vector<T>::copyFrom(const Vector& other)
{
	capacity = other.capacity;
	numberOfElements = other.numberOfElements;
	arr = new T[capacity];
	for (size_t i = 0; i < numberOfElements; i++)
		arr[i] = other[i];
}
template < typename T>
void Vector<T>::resize()
{
	T* temp = new T[capacity *= 2];
	for (size_t i = 0; i < numberOfElements; i++)
		temp[i] = arr[i];
	free();
	arr = temp;
}
template < typename T>
Vector<T>::Vector()
{
	capacity = 4;
	arr = new T[capacity];
	numberOfElements = 0;
}
template < typename T>
Vector<T>::Vector(const Vector& other)
{
	free();
	copyFrom(other);
}
template < typename T>
T& Vector<T>::operator=(const Vector& other)
{
	if (this != &other)
	{
		free();
		copyFrom(other);
	}
	return *this;
}
template<typename T>
 T& Vector<T>::operator[](size_t n)
{
	 return arr[n];
}
template < typename T>
Vector<T>::~Vector()
{
	free();
}
template<typename T>
inline const size_t Vector<T>::getNumberOfElements() const
{
	return numberOfElements;
}
template<typename T>
inline const T* Vector<T>::gerArrPointer() const
{
	return arr;
}
template < typename T>
void Vector<T>::add(const T& item)
{
	if (capacity = numberOfElements)
		resize();
	arr[numberOfElements++] = item;
}

template<typename T>
inline void Vector<T>::add(const T&& item)
{
	if (capacity = numberOfElements)
		resize();
	arr[numberOfElements++] = item;
}
