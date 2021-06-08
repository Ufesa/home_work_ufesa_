#include <iostream>
#include <stdio.h>

using namespace std;

#define C_CHECK(value, arg) ( (((value >= 0) && ((value) < (arg))) ? (true) : (false) ))

#define A_CHECK(array, row, colum)   (*(*((array) + (row) + (colum)) ))


int main( )
{


//Task 1;


	int value = 7;
	int arg = 7;

    cout<<"First task, check: = "<<value, arg<<C_CHECK(value, arg);
    cout<<"\n";

	
//Task 2;

int ** array = new int*[2];

    array[0] = new int [3] {0, 1, 2 };
    array[1] = new int [3] {3, 4, 5 };

    int row, colum;
    
    for(row = 0; row < 2; ++row) {
        for(colum = 0; colum < 2; ++colum) {
            cout<<"Array = "<<row, colum<<A_CHECK(array, row, colum);
            cout<<"\n";

        }
    }
    
	return 0;
}