#include"2D.h"
//mpstly values are hardcoded
int main()
{
	int dim;
	int sDim1;
	int sDim2;
	cout << "Enter sizes of both dimensions:\n";
	cout << "size of DIM 1: ";
	cin >> sDim1;
	cout << "\nsize of DIM 2: ";
	cin >> sDim2;
	Int2D obj(sDim1,sDim2);
	int elem;
	cout << "\nEnter " << sDim1 * sDim2 << " elements :\n";
	for (int i = 0; i < sDim1; i++)
	{
		for (int j = 0; j < sDim2; j++)
		{
			cin >> elem;
			obj.setElement(i, j, elem);
		}
	}
	cout << "Matrix:\n";
	obj.printMatrix();
	Int2D obj2;
	obj2= obj;
	cout << "\nprint matrix\n";
	obj.printMatrix(obj2);
	cout << "\ntranspose:\n";
	obj.transpose();
	cout << "\nSubMatrix::\n";
	//hardcoded
	obj.printSubMatrix(0, 2, 0, 2);
	cout << "\nclear:\n";
	obj.clear(1);
	obj.printMatrix();
	cout << "\ncopy:\n";
	Int2D copy;
	copy = obj;
	copy.printMatrix();
	cout << "\n+ Operatot\n";
	Int2D *op; 
	op = new Int2D;
	op=obj + obj;
	op->printMatrix();

}