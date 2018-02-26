//============================================================================
// Name        : pointer2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a[]={1,3,8,4};

	for (int* p=a; p<a+4; p++){
		cout << *p << endl;
	}
	return 0;
}
