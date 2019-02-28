// MyString implementation file
#include <iostream>
#include "MyString.h"

using namespace std;

// default constructor
MyString::MyString()
{
	str = nullptr;
}

// constructor that accepts input
MyString::MyString(const char *s)
{
	if (s != nullptr)
	{
		str = new char[strlen(s) + 1];
		strcpy_s(str, strlen(s) + 1, s);
		cout << "MyString has been initialized.\n";
	}
	else
	{
		str = nullptr;
	}

}

// a copy constructor
MyString::MyString(const MyString&other)
{
	if (other.str != nullptr)
	{
		str = new char[strlen(other.str) + 1];
		strcpy_s(str, strlen(other.str) + 1, other.str);
		cout << "MyString has been copied to second MyString.\n";
	}
	else
	{
		str = nullptr;
	}

}

// destructor
MyString::~MyString()
{
	delete[] str;
}

// overloaded assignment operator
// accepts a MyString as a parameter
MyString MyString::operator=(const MyString &other)
{
	if (this != &other)
	{

		delete[] str;
		str = new char[strlen(other.str) + 1];
		strcpy_s(str, strlen(other.str) + 1, other.str);
	}
	return *this;
}
	

