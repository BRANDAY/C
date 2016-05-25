// write_file.cpp: ���������� ����� ����� ��� ����������� ����������.

//#include "stdafx.h"
#include <iostream>
#include <fstream> // ������ � �������
#include <iomanip> // ������������ �����/������
using namespace std;

int main(int argc, char* argv[])
{
	//setlocale(LC_ALL, "rus");

	// ��������� ������ � ������, ��� ���� ���� ��������� � ������ ������, �������������� ������ ��� ������ �� ����
	ofstream fout("data_types.txt", ios_base::out | ios_base::trunc);

	if (!fout.is_open()) // ���� ���� ����� ������
	{
		cout << "���� �� ����� ���� ������ ��� ������\n"; // ���������� ��������������� ���������
		return 1; // ��������� ����� �� ���������
	}

	fout << "data type" << "byte" << " " << "max value" << endl // ��������� ��������
		<< "bool               =  " << sizeof(bool) << "         " << fixed << setprecision(2)
		/*��������� ������������ �������� ��� ���� ������ bool*/ << (pow(2, sizeof(bool) * 8.0) - 1) << endl
		<< "char               =  " << sizeof(char) << "         " << fixed << setprecision(2)
		/*��������� ������������ �������� ��� ���� ������ char*/ << (pow(2, sizeof(char) * 8.0) - 1) << endl
		<< "short int          =  " << sizeof(short int) << "         " << fixed << setprecision(2)
		/*��������� ������������ �������� ��� ���� ������ short int*/ << (pow(2, sizeof(short int) * 8.0 - 1) - 1) << endl
		<< "unsigned short int =  " << sizeof(unsigned short int) << "         " << fixed << setprecision(2)
		/*��������� ������������ �������� ��� ���� ������ unsigned short int*/ << (pow(2, sizeof(unsigned short int) * 8.0) - 1) << endl
		<< "int                =  " << sizeof(int) << "         " << fixed << setprecision(2)
		/*��������� ������������ �������� ��� ���� ������ int*/ << (pow(2, sizeof(int) * 8.0 - 1) - 1) << endl
		<< "unsigned int       =  " << sizeof(unsigned int) << "         " << fixed << setprecision(2)
		/*��������� ������������ �������� ��� ���� ������ unsigned int*/ << (pow(2, sizeof(unsigned int) * 8.0) - 1) << endl
		<< "long int           =  " << sizeof(long int) << "         " << fixed << setprecision(2)
		/*��������� ������������ �������� ��� ���� ������ long int*/ << (pow(2, sizeof(long int) * 8.0 - 1) - 1) << endl
		<< "unsigned long int  =  " << sizeof(unsigned long int) << "         " << fixed << setprecision(2)
		/*��������� ������������ �������� ��� ���� ������ undigned long int*/ << (pow(2, sizeof(unsigned long int) * 8.0) - 1) << endl
		<< "float              =  " << sizeof(float) << "         " << fixed << setprecision(2)
		/*��������� ������������ �������� ��� ���� ������ float*/ << (pow(2, sizeof(float) * 8.0 - 1) - 1) << endl
		<< "long float         =  " << sizeof(long float) << "         " << fixed << setprecision(2)
		/*��������� ������������ �������� ��� ���� ������ long float*/ << (pow(2, sizeof(long float) * 8.0 - 1) - 1) << endl
		<< "double             =  " << sizeof(double) << "         " << fixed << setprecision(2)
		/*��������� ������������ �������� ��� ���� ������ double*/ << (pow(2, sizeof(double) * 8.0 - 1) - 1) << endl;
	fout.close(); // ��������� ������ �� ���������� ����, ������� ��� ����� �������
	cout << "������ ������� �������� � ���� data_types.txt\n";
	system("pause");
	return 0;
}