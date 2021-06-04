#include<iostream>
#include<cstring>
#include<cstdlib>
#include<fstream>
#include<string>


using namespace std;


int map[20];
int map2[20];
std::ofstream file1;



void append();

int main(int argc, const char** argv) {

//task 1;

    //show and full map;
    
    for (int i = 0; i < 20; i++ ) {
        map[i] = rand();
    }
    
        for (int i = 0; i < 20; i++ ) {
        
        cout<<"Map = :"<<map[i]<<" ";
    }
    
    cout<<endl;

    //show and full map2;
    
    for (int i = 0; i < 20; i++ ) {
        map2[i] = rand();
    }
    
        for (int i = 0; i < 20; i++ ) {
        cout<<"Map2 = :"<<map2[i]<<" "<<"\n";
    }
    
    cout<<endl;
      
      //create files and write both arrays into files;
       
       //file #1;
    std::ofstream file1("file1.txt", std::ofstream::app);
    for (int i = 0; i < 20; i++ ) {
    file1<<map[i]<<"\n";
    }
    	cout<<"Write in file1, done"<<"\n";
    file1.close();
    
    	//file #2
    
        std::ofstream file2("file2.txt", std::ofstream::app);
    for (int i = 0; i < 20; i++ ) {
    file2<<map2[i]<<"\n";
    }
    	cout<<"Write in file2, done"<<"\n";
    file2.close();
    
         
//tasks 2; 
	cout<<"add text from file1 to file2"<<"\n";
	
	append();



    return 0;
}


    //taks 3;

    std::cout << argc << std::endl;

    for (int i = 0; i < argc; i++) {
        printf("%s ", argv[i]);
    }
    std::cout << std::endl;

void append() {
	//create buffer;
	char *buff = new char[1000];
	//string buffe;
	string b = "some text";
	cout<<"buffer created"<<'\n';
	
<<<<<<< HEAD
	std::ifstream file1("file1.txt", std::ios::ate);
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

                    cout<<buff;
    	
=======
	//open file for read;
	std::ifstream file1("file1.txt");
	
		if (!file1.is_open()){
		cout<<"file isn't available"<<"\n";
		}
		
			//getline(file1, buffe,'\0' );
			file1.read(buff,1000);
			file1.close();	
		cout<<"file1, was read into buffer"<<"\n";
		cout<<buff<<endl;
		
		//open file2 to write text from buffer;
		std::ofstream file2("file2.txt", std::ofstream::app);
		if (!file2.is_open()){
		cout<<"file isn't available"<<"\n";
		}
			file2<<buff;
			file2<<b;
			file2.close();
			cout<<"text was added into file2"<<"\n";
			delete [] buff;
			cout<<"buffer was deleted"<<"\n";		
>>>>>>> 8d9ca0db4ea01a09636cdfb18ae39725953c13de
}
	
	
