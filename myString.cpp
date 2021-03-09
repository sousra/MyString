#include <iostream>
#include <cstring>

#include "myString.h"

using namespace std;

MyString::MyString(const char* s) {
	size = strlen(s);
	str = new char[size + 1];
	strcpy(str, s);
}

MyString::MyString(const MyString& s) {
	size = s.size;
	str = new char[s.size + 1];
	strcpy(str, s.str);
}

 MyString::~MyString() {
	delete[] str;
}

MyString& MyString::operator = (const MyString& s) {
	if (this != &s) {
		delete[] str;
		size = s.size;
		str = new char[s.size + 1];
		strcpy(str, s.str);
	}
	return *this;
}

MyString& MyString::operator = (const char* s) {
	delete[] str;
	size = strlen(s);
	str = new char[size + 1];
	strcpy(str, s);

	return *this;
}

MyString MyString::operator + (const MyString& s) {
	MyString res = *this;
	res.concatenate(s);
	return res;
}

MyString MyString::operator + (const char* s) {
	MyString res = *this;
	res.concatenate(s);
	return res;
}


unsigned MyString::Size() const {
	return size;
}

void MyString::resize(unsigned n_size) {
	char* res = new char[n_size + 1];
	unsigned cpy_end = size < n_size ? size : n_size;
	for (unsigned i = 0; i < cpy_end; ++i) {
		res[i] = str[i];
	}
	res[n_size] = '\0';

	delete[] str;
	str = res;
	size = n_size;
}

void MyString::print() const {
	for (int i = 0; i < size; ++i) {
		cout << str[i];
	}
	cout << endl;
}

void MyString::addChar(char c, unsigned pos) {
	--pos;
	resize(size + 1);
	for (unsigned i = size - 1; i > pos; --i) {
		str[i] = str[i - 1];
	}
	str[pos] = c;
}

void MyString::replaceChar(char c, unsigned pos) {
	--pos;
	str[pos] = c;
}

void MyString::deleteChar(unsigned pos) {
	--pos;
	for (unsigned i = pos; i < size - 1; ++i) {
		str[i] = str[i + 1];
	}
	resize(size - 1);
}
void MyString::concatenate(MyString s) {
	unsigned old_size = size;
	resize(old_size + s.size);
	for (unsigned i = old_size; i < size; ++i) {
		str[i] = s.str[i - old_size];
	}
}

void MyString::concatenate(char* s) {
	unsigned old_size = size;
	resize(old_size + strlen(s));
	for (unsigned i = old_size; i < size; ++i) {
		str[i] = s[i - old_size];
	}
}




