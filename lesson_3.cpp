#include<iostream>
#include<cstring>
#include<cstdlib>
#include "lesson_3.h"
#include "lesson_3_0.cpp"

extern int k, l, z, x;

int main(){

	using namespace std;

	const int a = 25;
	const int b = 77;
	const int c = 99;
	const float d = 83;
	
    float result = a * (b + (c / d));

	cout <<"Result of a * (b + (c / d)) = "<<result<<"\n";


int i = 25;
int p = 21;

//Ternar operator
int m = (i > p) ? i*2 : p;
cout<<"Result of (i >p) : "<<m<<"\n";
	
int result_1 = i - p;
cout<<"Diference: \n"<<result_1<<"\n";
	
//Set massive 3x3x3

int array [3] [3] [3];
int val =0;

for (int i =0; i < 3; i++){
    
    for (int p =0; p < 3; p++){
        
    for (int t =0; t < 3; t++)
        array [i][p][t] = val++;
    }
}

cout<<"Element - [][][] = "<<*(*(*(array + 2) +2) +2)<<"\n";


	return 0;
}

