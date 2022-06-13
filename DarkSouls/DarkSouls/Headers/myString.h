#pragma once
#include <iostream>
#include <istream>
class MyString
{
	char* arr;
	size_t size;
	void free();
	void copyFrom(const MyString&);
public:
	MyString();
	MyString(const char*);
	MyString(const MyString&);
	MyString& operator=(const MyString&);
	MyString& operator=(const char*);
	~MyString();
	const size_t getSize() const;
	void print() const;
	bool compare(const char*);
	void writeStringToFile(std::ofstream& f);
	void readStringFromFile(std::ifstream& f);
};