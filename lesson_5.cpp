#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

int map[10] = {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
int p = 1;
int masive[4] = {1,2,2,4};
int numbers[8] = {1,3,5,6,7,8,10,12};

void swap ();
int add3 (int );
void masiveCheck (int masive[], int n);
void swapElements (int numbers[], int p, int n);


int main(){

//task 1;

    //show map;
    
    for (int i = 0; i < 9; i++ ) {
        cout<<map[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Call function to swap map"<<"\n";
    
    swap();
    
         for (int i = 0; i < 9; i++) {
        cout<<map[i]<<" ";
         }
         cout<<endl;
         
         
         //task 3
         masiveCheck(masive, 4);
         
         //task4l;
         swapElements(numbers, 8, 2);
         
         
//tasks 2; 

int array [8];
//fill up array;
    for (int i =0; i < 8; ++i) {
        array[i] = p;
        add3(p); 
    }
    cout<<"array :"<<"\n";
    for (int i =0; i < 8; ++i) {
        cout<<array[i]<<" "; 
    }
    cout<<endl;

    return 0;
}




//functions;


void swap() {
    //swap values;
        int map[10] = {0, 0, 1, 1, 0, 1, 0, 0, 1, 1};
}

int add3(int ) {
    p = p + 3;
    return p;
}

void masiveCheck(int masive[], int n) {
	for(int i = 0; i < n; ++i){
		if (masive[i] + masive[i+1] == masive[i+2] + masive[i+3]){
		cout<<"sum of both sides of masive is equal"<<endl;
		break;
	} cout<<"sum of both sides  of masive is !="<<endl;
	break;
        }
}
void swapElements( int numbers[], int p, int n){
	cout<<"numbers: ";
	for(int i = 0; i < p; ++i) { 
	cout<<numbers[i]<<" ";
	}
	cout<<endl;
	cout<<"number n: "<<n<<"\n";
// shift elements in the numbers arrayl;
    int tmp = numbers[0];
    for(int i = 0; i < p-n; ++i) { 
        numbers[i] = numbers[i + 1];
        if(i == p-n)
            numbers[i] =tmp;
    }
    
    cout<<"swaped numbers: ";
	for(int i = 0; i < p; ++i) { 
	cout<<numbers[i]<<" ";
	}
	cout<<endl;
}
