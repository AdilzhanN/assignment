//============================================================================
// Name        : asd.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

struct list {
	int number;
	list* nodeptr;
};

int main() {
	ifstream infile;
	ofstream outfile;

	string infilename;
	cin>>infilename;

	infile.open(infilename.c_str());
	if(!infile.is_open()){
		cout<<"could not open input file"<<endl;
		exit(EXIT_FAILURE);

	}

	string outfilename;
	cin >> outfilename;

	outfile.open(outfilename.c_str());
		if(!outfile.is_open()){
			cout<<"could not open input file"<<endl;
			exit(EXIT_FAILURE);

		}

	infile.close();
	outfile.close();
	return 0;
}
