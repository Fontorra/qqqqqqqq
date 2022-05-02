
#include <iostream>
#include <cstdlib>
#include <cstring>

//утечки
#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW
//утечки

//#include <vld.h>

#include "LinkedList.h"
#include "Dynamicarray.h"
#include "Sequence.h"
#include "LinkedListSequence.h"
#include "DynamicArraySequence.h"
#include "Stack.h"
#include "SomeClasses.h"

using namespace std;
/*
int menu() {
	int* b = new int[10];
	for (int i = 0; i < 10; i++) b[i] = i;
	LinkedList <int> a(b, 10);
	LinkedList <int> c(b, 5);
	LinkedList <int> *e = a.GetSubList(2, 5);
	c.Print();
	e->Print();
	a.Append(15);
	a.Prepend(-10);
	a.InsertAt(32, 5);
	a.Print();
	LinkedList <int>* qee = a.Concat(&a);
	(*qee).Print();
	a.Print();
	(*e).Print();
	Sequence <int>* qwerty = new DynamicArraySequence <int>(b, 10);
	cout << (*qwerty).GetFirst() << endl;
	Sequence <int>* zopa = qwerty->GetSubSequence(2, 5);
	zopa->Print();
		Sequence <int>* zopa2 = qwerty->Concat(zopa);
	zopa2->Print();
	zopa2 = zopa;	
	zopa2->Print();
	Sequence <int>* zopa3(zopa2);
	zopa3->Print();
	delete[] b;
	return 0;
}

bool function(int a) {
	if (a > 5) return true;
	return false;
}

int function2(int a) {
	return 2 * a - 1;
}

int function3(int a, int b) {
	return a + b;
}

int menu2() {
	//menu();
	int* c = new int[10];
	for (int i = 0; i < 10; i++) c[i] = i;

	//Stack <int>* a = new Stack<int>(c, 10);
	DynamicArray<int>* b = new DynamicArray<int>(c, 10);
	/*a->Print();
	a->Push(1555);
	a->Print();
	a->Pop();
	a->Pop();
	a->Pop();
	a->Print();
	bool (*functionA)(int) = function;
	Stack<int>* b = a->Where(functionA);
	b->Print();
	if (a->FindSubSequence(b)) cout << "YAHOOO" << endl;
	//a->Print();*/
	//LinkedListSequence<int>* qwe = new LinkedListSequence<int>(c, 10);
	//delete[] c;
	//r/eturn 0;
//}

/*
void TestDynamicArray() {
	

}

int FunctionMap(int item) {
	return item * item;
}


bool FunctionWhereFirst(double item) {
	if (item > 5.4) return true;
	else return false;
}

*/

int main() {
	setlocale(LC_ALL, "rus");
	/*
	////menu2();
	int* c = new int[10];
	for (int i = 0; i < 10; i++) c[i] = i;
	Stack <int>* a = new Stack<int>(c, 10);
	Stack <int>* b = new Stack<int>();
	Stack <int>* e = new Stack<int>;
	//a->Print();
	//cout << "a: " << endl;
	////b->TransferTo(a);
	//a->Print();
	TowerOfHanoi(a, b, e);
	cout << b << endl;
	b->Print();
	//delete a;
	//delete b;
	//delete e;
	//delete[] c;
	//_CrtDumpMemoryLeaks();
	LinkedList<char> charList;
	charList.InsertAt(0, 91);
	//charList.GetFirst() == 91);
	cout << charList.GetLength();
	*/
	/*double* Array = new double[10];
	for (int i = 0; i < 10; i++) Array[i] = i + 0.5;
	Stack<double> StackArray(Array, 10, 1);
	StackArray.Where(&FunctionWhereFirst);
	double item = 5.5;
	while (!StackArray.isEmpty()) {
		cout << StackArray.Pop() << "     " <<  item << endl;
		item++;
	}
	*/
	LinkedList<Complex>* complexList = new LinkedList<Complex>(5);
	complexList->Set(0, Complex(1, 2));
	complexList->Set(1, Complex(2, 4));
	complexList->Set(2, Complex(3, 6));
	complexList->Set(3, Complex(4, 8));
	complexList->Set(4, Complex(5, 10));
	return 0;
}
