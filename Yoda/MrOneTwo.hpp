#ifndef MR_ONE_TWO_HPP
#define MR_ONE_TWO_HPP

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <ios>
#include <vector>

using namespace std;

//template <class T, class Allocator = allocator<T>> class vector
class MrOneTwo {
	//explicit vector(const Allocator &a = Allocator());
	//vector(const vector<T, Allocator> &MrOneTwo);
public:
	typedef vector<int> tableRow;
	typedef vector<tableRow> table1D;
	typedef vector<table1D> table2D;
	typedef vector<table2D> table3D;

	
	void LoadFile(istream &infile);
	void SaveFile(ofstream &outfile);

private:
	tableRow ParseTableRow(const int &line);
};

#endif // MR_ONE_TWO_HPP