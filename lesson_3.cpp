#include<iostream>
#include<cstring>
#include<cstdlib>

<<<<<<< HEAD

=======
>>>>>>> 59cfaa1fa58522dc9c57000887d17a34a92e1177
int main(){

	using namespace std;

	 int a;
	 int b;
	
    int result = a + b;\

    cout <<"Please enter variable 'a'\n";
    cin>>a;

    cout <<"Please enter variable 'b'\n";
    cin>>b;

    	if (result <= 10) {
    		cout <<"Result of a + b = true "<<result<<"\n";
    	} 
    	if (result => 20) {
    		cout <<"Result of a + b = false "<<result<<"\n";	
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

<<<<<<< HEAD
=======
task_1();

>>>>>>> 59cfaa1fa58522dc9c57000887d17a34a92e1177
	return 0;
}

