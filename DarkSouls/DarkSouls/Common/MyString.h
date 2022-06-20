#pragma once
#include <iostream>
#include <istream>
class MyString
{
	char* arr;
	size_t size;
	size_t capacity;
	void free();
	void copyFrom(const MyString&);
	void resize();
public:
	MyString();
	MyString(const char*);
	MyString(const MyString&);
	MyString& operator=(const MyString&);
	MyString& operator=(const char*);
	~MyString();
	void add(char element);
	MyString& operator+=(const char*);
	const size_t getSize() const;
	char& operator[](int n);
	void print() const;
	bool compare(const char*);
	char* getPointerToChar() const;
	void writeStringToFile(std::ofstream& f);
	void readStringFromFile(std::ifstream& f);
};