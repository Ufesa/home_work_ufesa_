#include<iostream>
#include<cstring>
#include<cstdlib>


int main(){

	using namespace std;

	 int a;
	 int b;
     int result;
    
    cout <<"Please enter variable 'a'\n";
    cin>>a;

    cout <<"Please enter variable 'b'\n";
    cin>>b;
    
    result = a + b;

    	if (result >= 10 && result <=20) {
    		cout <<"Result of a + b = true "<<result<<"\n";
    	} else {
    		cout <<"Result of a + b = false (not in this aread of 10 to 20) "<<result<<"\n";	
    	}
    	
    
//2 task:
    	cout<<"Enter number = "<<"\n";
    	cin>>a;

    	float result_2;
    	float result_2_0;

    	result_2 = a/a;
    	result_2_0 = a/1;

    	if (result_2 == 1 && result_2_0 == a) {

    		cout <<result_2<<"\n";
    	} else {
    		cout<<"Variable isn't simple number = "<<result_2_0<<"\n";
    	}






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

