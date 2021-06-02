#include<iostream>
#include<cstring>
#include<cstdlib>
#include<fstream>


using namespace std;


int map[100];
int map2[50];
std::ofstream file1;



void append();

int main() {

//task 1;

    //show and full map;
    
    for (int i = 0; i < 100; i++ ) {
        map[i] = rand();
    }
    
        for (int i = 0; i < 100; i++ ) {
        
        cout<<"Map = :"<<map[i]<<" "<<"\n";
    }
    
    cout<<endl;

    //show and full map2;
    
    for (int i = 0; i < 50; i++ ) {
        map2[i] = rand();
    }
    
        for (int i = 0; i < 50; i++ ) {
        cout<<"Map2 = :"<<map2[i]<<" "<<"\n";
    }
    
    cout<<endl;
      
      //create files and write both arrays into files;
       
       //file #1;
    std::ofstream file1("file1.txt", std::ofstream::app);
    for (int i = 0; i < 100; i++ ) {
    file1<<map[i]<<"\n";
    }
    	cout<<"Write in file1, done"<<"\n";
    file1.close();
    
    	//file #1;
    
        std::ofstream file2("file2.txt", std::ofstream::app);
    for (int i = 0; i < 50; i++ ) {
    file2<<map2[i]<<"\n";
    }
    	cout<<"Write in file1, done"<<"\n";
    file2.close();
    
         
//tasks 2; 
	cout<<"add text from file1 to file2"<<"\n";
	
	append();



    return 0;
}


void append() {

	char *buff = new char [100];
	cout<<"buff created"<<'\n';
	
	std::ifstream file1("file1.txt");
	if (!file1.is_open()){
		cout<<"file isn't available";
	}
			while(!file1.eof()) {
			file1>>buff;		
			file1.close();
			}
		cout<<"file1, was read into buffer"<<"\n";
			
			for (int i = 0; i < 100; i++ ) {
    			cout<<"Buff: = "<<buff[i]<<" "<<"\n";
    				}
    
		
}
	
	
