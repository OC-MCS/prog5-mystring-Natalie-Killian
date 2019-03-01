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
		cout << "***initialized MyString\n";
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
		cout << "***copy constructor\n";
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
	cout << "***destructor\n";
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
	
// overloaded + operator
// accepts a MyString as a parameter
MyString MyString::operator+(const MyString &other)
{
	int size = strlen(this->str) + strlen(other.str) + 1;

	MyString temp;
	temp = new char[size];
	strcpy_s(temp.str, size , this->str);
	strcat_s(temp.str, size, other.str);

	return temp;
}


// overloaded == operator
// accepts a MyString as a parameter
bool MyString::operator==(const MyString &other) 
{
	bool equal = true;

	if (strlen(this->str) == strlen(other.str))
	{
		if (strcmp(this->str, other.str) != 0)
		{
			equal = false;
		}
	}
	else
	{
		equal = false;
	}
	return equal;
}

// getter function for strings
const char * MyString::c_str()
{
	return str;
}

// overloaded output operator
// accepts a MyString as a parameter
// NOT a member of MyString
ostream &operator<<(ostream&str, MyString&other)
{
	str << other.c_str() << endl;

	return str;
}

