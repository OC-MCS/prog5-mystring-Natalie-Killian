#pragma once

#include <cstring>
#include <iostream>

using namespace std;

// MyString class declaration goes here
class MyString
{
private:
	char *str;
public:
	MyString();
	MyString(const char *s);
	MyString(const MyString&other);
	~MyString();
	MyString operator=(const MyString&other);
	MyString operator+(const MyString&other);
	bool operator==(const MyString&other);
	const char *c_str();
};
ostream&operator<<(ostream&str, MyString&other);
