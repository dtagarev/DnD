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
	~Vector();

	void add(const T& item);
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
	temp = new T[capacity *= 2];
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

}
