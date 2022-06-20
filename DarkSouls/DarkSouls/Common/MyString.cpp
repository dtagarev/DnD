#include "../Common/MyString.h"
#pragma warning(disable:4996)
#include <iostream>
#include <fstream>
void MyString::free()
{
	delete[] arr;
}

void MyString::copyFrom(const MyString& other)
{
	size = other.size;
	if (size % 2 == 0)
		capacity += 2;
	else
		capacity = size + 1;

	arr = new char[capacity];
	strcpy(arr, other.arr);
}

void MyString::resize()
{
	char* temp = new char[capacity *= 2];
	for (size_t i = 0; i < size; i++)
		temp[i] = arr[i];
	if (arr != nullptr)
		free();
	arr = temp;
}

MyString::MyString()
{
	capacity = 4;
	size = 0;
	arr = new char[capacity];
	arr[0] = '\0';
}

MyString::MyString(const char* other)
{
	size = strlen(other);
	if (size % 2 == 0)
		capacity += 2;
	else
		capacity = size + 1;
	arr = new char[capacity];
	strcpy(arr, other);
}

MyString::MyString(const MyString& other)
{
	copyFrom(other);
}

MyString& MyString::operator=(const MyString& other)
{
	if (this != &other)
	{
		free();
		copyFrom(other);
	}
	return *this;
}

MyString& MyString::operator=(const char* other)
{
	free();
	size = strlen(other);
	if (size % 2 == 0)
		capacity += 2;
	else
		capacity = size + 1;
	arr = new char[capacity];
	strcpy(arr, other);
	return *this;
}

MyString::~MyString()
{
	free();
}

MyString& MyString::operator+=(const char* other)
{
	size_t length = strlen(other);
	for (size_t i = 0; i < length; i++)
	{
		add(other[i]);
	}
	return *this;
}

void MyString::add(char element)
{
	if (size + 1 == capacity)
		resize();
	arr[size] = element;
	size++;
	arr[size] = '\0';
}

const size_t MyString::getSize() const
{
	return size;
}

char& MyString::operator[](int n)
{
	return arr[n];
}

void MyString::print() const
{
	for (size_t i = 0; i <= size; i++)
		std::cout << arr[i];
}
bool MyString::compare(const char* other)
{
	return strcmp(arr, other) == 0;
}
char* MyString::getPointerToChar() const
{
	return arr;
}
void MyString::writeStringToFile(std::ofstream& f)
{
	f.write((const char*)&size, sizeof(size));
	f.write(arr, size * sizeof(char));
}

void MyString::readStringFromFile(std::ifstream& f)
{
	free();
	f.read((char*)&size, sizeof(size));
	if (size % 2 == 0)
		capacity += 2;
	else
		capacity = size + 1;
	arr = new char[capacity];
	f.read(arr, size);
	arr[size] = '\0';
}
