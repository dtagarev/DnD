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
	arr = new char[size + 1];
	strcpy(arr, other.arr);
}

MyString::MyString()
{
	size = 1;
	arr = new char[size];
	arr[0] = '\0';
}

MyString::MyString(const char* other)
{
	size = strlen(other);
	arr = new char[size + 1];
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
	arr = new char[size + 1];
	strcpy(arr, other);
	return *this;
}

MyString::~MyString()
{
	free();
}

const size_t MyString::getSize() const
{
	return size;
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
void MyString::writeStringToFile(std::ofstream& f)
{
	f.write((const char*)&size, sizeof(size));
	f.write(arr, size * sizeof(char));
}

void MyString::readStringFromFile(std::ifstream& f)
{
	free();
	f.read((char*)&size, sizeof(size));
	arr = new char[size+1];
	f.read(arr, size);
	arr[size] = '\0';
}
