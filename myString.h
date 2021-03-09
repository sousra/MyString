#ifndef MYSTRING_H_
#define MYSTRING_H_

class MyString {
public:
	MyString(const char* s);
	MyString(const MyString& s);
	~MyString();
	MyString& operator = (const MyString& s);
	MyString& operator = (const char* s);
	MyString operator + (const MyString& s);
	MyString operator + (const char* s);

	unsigned Size() const;
	void resize(unsigned n_size);
	void print() const;
	void addChar(char c, unsigned pos);
	void replaceChar(char c, unsigned pos);
	void deleteChar(unsigned pos);
	void concatenate(MyString s);
	void concatenate(char* s);

private:
	unsigned size;
	char* str;
};


#endif // MYSTRING_H_
