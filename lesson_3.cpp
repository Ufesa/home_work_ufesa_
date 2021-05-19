#include<iostream>
#include<cstring>
#include<cstdlib>




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
cout<<"Diference: \n"<<result_1;
	
	return 0;
}

