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

	
};

