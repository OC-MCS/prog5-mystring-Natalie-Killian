//================                                                                                                                                                 =====================================
// Natalie Killian
// March 1st, 2019
// Programming Assignment #5
// Description: MyString
// Bugs: No known bugs
//=====================================================

#include <iostream>
#include <cstring>
#include "MyString.h"

using namespace std;

// Function prototypes
void passMyString(MyString s);
MyString returnMyString();

int main()
{
	// test default constructor
	MyString s;

	// test constructor with passed parameters
	MyString s1("Natalie");
	MyString s2(" made");
	MyString s3(" a");
	MyString s4(" sentence!");
	cout << "MyString s1 is " << s1 << endl;

	// test copy constructor
	MyString sCopy(s1);
	cout << "MyString sCopy is " << sCopy << endl;

	// test overloaded + operator
	MyString sentence = s1 + s2 + s3 + s4;
	cout << "Generating a sentence...\n";
	cout << sentence << endl;

	// test overloaded assignment operator
	MyString s20(" created");
	s2 = s20;
	cout << "Assigning " << s20 << " to " << s2 << endl;
	cout << "After assignment: \n";
	cout << "s2 is:" << s2 << endl;
	cout << "s20 is:" << s20 << endl;
	MyString sentence2 = s1 + s2 + s3 + s4;
	cout << "Generating new sentence with updated s2...\n";
	cout << sentence2 << endl;
	// test 2
	cout << "Assigning s1 (" << s1 << ") to s3 (" << s3 << ") and s4 (" << s4 << ").\n";
	cout << "s3 = s4 = s1 (assigns from right to left)\n";
	s3 = s4 = s1;
	cout << "After assignment: \n";
	cout << "s1:" << s1 << endl;
	cout << "s3:" << s3 << endl;
	cout << "s4:" << s4 << endl;

	// test overloaded == operator
	cout << "These strings are equal.\n";
	if (s1 == sCopy)
	{
		cout << "Yay! " << s1 << " = " << sCopy << endl;
	}
	else
	{
		cout << "Aww... " << s1 << " isn't the same as " << sCopy << endl;
	}
	cout << "These strings are not equal.\n";
	if (s1 == s2)
	{
		cout << "Yay! " << s1 << " = " << s2 << endl;
	}
	else
	{
		cout << "Aww... " << s1 << " isn't the same as " << s2 << endl;
	}


	// test passing a MyString by value to a function
	// uses copy constructor
	passMyString(s1);

	// test returning a MyString from a function
	// uses copy constructor
	cout << "Creating a MyString in a function...\n";
	MyString funcString = returnMyString();
	cout << "Here is the MyString from a function:\n";
	cout << funcString;

	// test if MyString can be set equal to itself
	s1 = s1;
	cout << "Assigning " << s1 << " to " << s1 << endl;
	cout << "After assignment: ";
	cout << "s1: " << s1 << endl;

	// test if MyString constructor gets called automatically
	MyString s5 = "March is here!\n";
	cout << s5 << endl;

	// test literal c-string operations
	char tester[] = "Welcome Spring!!!\n";
	MyString s6(tester);
	cout << s6 << endl;

	return 0;
}

// function to test if a MyString can be passed as parameter
void passMyString(MyString s)
{
	cout << "Passing MyString to a function...\n";
	cout << "Here is my string!\n";
	cout << s << endl;
}

// function to test if a MyString can be returned
MyString returnMyString()
{
	MyString funcString("I was created in a function!");

	return funcString;
}