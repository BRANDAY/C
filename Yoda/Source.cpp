#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <ios>
#include <vector>

using namespace std;

int main(int argc, char *const argv[])
{
	typedef vector<int> iv1;
	typedef vector<iv1> iv1D;
	int i;

	iv1 matrix;

	for ( i = 0; i < 10; i++){
		matrix.push_back(i);
	}
	for (i = 0; i < matrix.size(); i++){
		cout << matrix[i] << " ";
	}
	system("PAUSE");
/*	for (iv1 ii = 0; ii < 10; ii++){
		iv1D.push_back(ii);
	}*/


	//vector<iv1>::iterator p = iv1D.begin();
}