#include<iostream>
#include<cstring>
#include<cstdlib>
  



using namespace std;

int map[10] = {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
int p = 1;

void swap ();
int add3(int );

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

void swap() {
    //swap values;
        int map[10] = {0, 0, 1, 1, 0, 1, 0, 0, 1, 1};
}

int add3(int ){
    p = p + 3;
    return p;
}
