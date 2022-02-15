#pragma once
#include<iostream>
using namespace std;
class Int2D
{
private:
	int* arr;
	int size;
	int rows, coloumns;
public:
	Int2D();
	Int2D(int ith, int jth);
	Int2D(const Int2D& obj);
	void setElement(int ith, int jth, int val);
	void printMatrix();
	void transpose();
	void printSubMatrix(int r1, int r2, int c1, int c2);
	void printMatrix(Int2D mat);
	void clear(int n);
	Int2D* operator+(Int2D add);
};