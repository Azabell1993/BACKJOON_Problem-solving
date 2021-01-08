# Azabell1993-azabell_Cpp
C++ langauge Programming

#include <iostream>

using namespace std;

void Swap(int *pa, int *pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main()
{
	int start = 96, end = 5;

	cout << "before : start = " << start << "    " << "end = " << end << endl;

	if (start > end) {
		Swap(&start, &end);
	}
	cout << "after : start = " << start << "    " << "end = " << end << endl;
	
	return 0; 
}

