// RecapGAME2303.cpp : Defines the entry point for the console application.
//



/*
I can't get it to work in VS, but I can't figure out why, 
it works in this web IDE
*/
/* https://ide.geeksforgeeks.org/10s786L26v */


#include "stdafx.h"
#include <iostream>
#include <string>
#include <list>
using namespace std;

void test(int x, int y) {

	for (int i = 0; i<1001; i++) {
		if (i%x == 0) {
			if (i%y == 0) {
				cout << i << endl;
			}
		}
	}
}

void test(string str) {

	// list of characters
	list<char> chars;
	for (char c : str) {
		chars.push_back(c);
	}

	chars.remove('a');
	chars.remove('e');
	chars.remove('i');
	chars.remove('o');
	chars.remove('u');

	chars.remove('A');
	chars.remove('E');
	chars.remove('I');
	chars.remove('O');
	chars.remove('U');


	// print list
	for (char c : chars) {
		cout << c;
	}
}

static string process(string s)
{
	string result;
	for (int i = 0; i < s.size(); i++)
		result = s[i] + result;
	return(result);
}

static void show(string s)
{
	cout << s << " -> " << process(s) << "\n";
}


int main()
{
	int x, y;
	string entry, entry2;

	cout << "Find all numbers between 1 and 1000 divisible by two numbers" << endl;
	cout << "enter first number" << endl;
	cin >> x;
	cout << "enter second number" << endl;
	cin >> y;
	test(x, y);

	cout << "enter a string to reverse: ";
	cin >> entry;
	show(entry);

	cout << "enter a string to remove vowels: ";
	cin >> entry2;
	test(entry2);

	return(0);
}