#include<iostream>
#include<cstring>
#include<cstdlib>

const int c = 10;
const int j = 5;


int main(){

	using namespace std;

//task 1;

	 int a;
	 int b;
     int result;
    
    cout <<"Please enter variable 'a'\n";
    cin>>a;

    cout <<"Please enter variable 'b'\n";
    cin>>b;
    
    result = a + b;

    	if (result >= 10 && result <=20) {
    		cout <<"Result of a + b = true - "<<result<<"\n";
    	} else {
    		cout <<"Result of a + b = false (not in this aread of 10 to 20) -  "<<result<<"\n";	
    	}
    	
    
//2 task:
    	/*/cout<<"Enter number = "<<"\n";
    	cin>>a;

    	float result_2;
    	float result_2_0;

    	result_2 = a/a;
    	result_2_0 = a/1;

    	if (result_2 == 1 && result_2_0 == a) {

    		cout <<result_2<<"\n";
    	} else {
    		cout<<"Variable isn't simple number = "<<result_2_0<<"\n";
    		}*/



//tasks 3; 

cout<<"Task 3: "<<"\n";

if (c == 10 && j == 10) {
	return true;
}

if ((c + j) == 10) {
	return true;
}
	cout<<"c + j != 10 -- "<< c + j<<"\n";
	

//task 4;

//Set massive 2x2


int array [c][j];
int val = 0;
int val_1 = 1;

for (int i =0; i < c; ++i){
    for (int p =0; p < j; ++p){
    	if( i == p || (i + p +1)) { 
    		array [i][p] = val_1;
        }
        array [i][p] = val;
	}
}

//read out array;
for (int i = 0; i < c; ++i){
	for(int p = 0; p < j; ++p){
	cout<<array [i][p]<<" "<<"\n";
	}
}

//task 5;

int Year = 0;

cout<<"Enter year: ";

cin>>Year;
	if ((Year % 4 == 0) && (Year % 100 != 0) || (Year % 400 == 0)) {
		cout<<"This is High year"<<"\n";
	}
	
	cout<<"This year isn't high ^)"<<"\n";

	return 0;
}

