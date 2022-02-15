#include"2D.h"
Int2D::Int2D()
{
	//initializing with 0(default)
	rows = 0; 
	coloumns = 0;
	size = rows * coloumns;
	arr = new int[size];
}
Int2D::Int2D(int ith, int jth)
{
	//initializing with passed parameters
	rows = ith; coloumns = jth;
	size = rows * coloumns;
	arr = new int[size];
}
void Int2D::setElement(int ith, int jth, int val)
{
	//mapping 2D Matrix to 1D array
	arr[ith * coloumns + jth] = val;
}
void Int2D::printMatrix()
{
	for (int k = 0; k < rows; k++)
	{
		for(int j = 0 ; j < coloumns; j++)
		{
			cout << arr[k * coloumns + j]<<" ";
		}
		cout << endl;
	}
}
void Int2D::transpose()
{
	Int2D temp(coloumns,rows);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < coloumns; j++)
		{
			temp.setElement(j, i, arr[i * coloumns + j]);//shuffling rows to coloumns for tanspose
		}
	}
	temp.printMatrix();
}
void Int2D::printSubMatrix(int r1, int r2, int c1, int c2)
{
	for (int i = r1; i <= r2&&i<rows; i++)
	{
		for (int j = c1; j <= c2&&i<coloumns; j++)
		{
			cout << arr[i * coloumns + j] << " ";
		}
		cout << endl;
	}
}
void Int2D::clear(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < coloumns; j++)
		{
			arr[i * coloumns + j] = 0;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < coloumns; j++)
		{
			arr[j * coloumns + i] = 0;
		}
	}
}
Int2D ::Int2D(const Int2D& obj)
{
	//copying 1 object to other object
	size = obj.size;
	rows = obj.rows;
	coloumns = obj.coloumns;
	arr = new int[rows * coloumns];
	for (int k = 0; k < rows; k++)
	{
		for (int j = 0; j < coloumns; j++)
		{
			arr[k * coloumns + j] = obj.arr[k * coloumns + j];
		}
	}
}
void Int2D::printMatrix(Int2D mat)
{
	for (int k = 0; k < mat.rows; k++)
	{
		for (int j = 0; j < mat.coloumns; j++)
		{
			cout << mat.arr[k * mat.coloumns + j] << " ";
		}
		cout << endl;
	}
}
Int2D *Int2D:: operator+(Int2D add)
{
	for (int k = 0; k < rows; k++)
	{
		for (int j = 0; j < coloumns; j++)
		{
			arr[k * coloumns + j] = arr[k * coloumns + j] + add.arr[k * coloumns + j];
		}
	}
	return this;
}