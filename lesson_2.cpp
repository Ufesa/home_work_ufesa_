#include<iostream>
#include<cstring>
#include<cstdlib>

int t = 17; // gloabl variable;

extern int w;
static int y = 37;

int main(){

	using namespace std;

	char number = 72;

	//--------------
	float c = 7.7;
	double h = 1.33434534;

	//Cout variables into cmd;

	cout<<"float:\n"<<c<<"\n"<<"double:\n"<<h<<"\n"<<"static:\n"<<y<<"\n";
	cout<<number<<"\n";


	// bool variables;
// 	bool b = false;
// 	bool a = true;

	enum game_x_and_0 {zero, crsoss, empty};

	int gameF [3][3] = {0};
	
	cout<<"Game_field:\n";
	
	for ( int i = 0; i < 3; ++i){
	    for ( int g = 0; g < 3; ++g){
	cout<<gameF [i][g];
}
}

		//Create structure for game X_and_0;
		struct setG_F
		{
			char Pl1_n[18];

			char Pl2_n[18];

			int first step;

			int gameF [3] [3];

		};

		union	

	return 0;
}

