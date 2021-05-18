#include<iostream>
#include<cstring>
#include<cstdlib>

int t = 7; // gloabl variable;

extern int w;
static int y = 37;

int main(){

	using namespace std;

	char number = 72;

	//--------------
	float c =7.7;
	double h = 1.33434534;

	//Cout variables into cmd;

	cout<<"float:\n"<<c<<"\n"<<"double:\n"<<h<<"\n"<<"static:\n"<<y<<"\n";
	cout<<number<<"\n";


	// bool variables;
// 	bool b = false;
// 	bool a = true;

	enum game_x_and_0 {zero, crsoss, empty = 18};
    
    using Game = enum game_x_and_0;
    
    Game field_b = empty;
    cout<<field_b<<" \n";

	int gameF [3][3];
	
	cout<<"Game_field:\n";		
	for ( int i = 0; i < 3; i++){
	    for ( int g = 0; g < 3; g++){
	    	gameF[i][g] = t;
	}
}

	cout<<"Display gameField \n";
	for ( int i = 0; i < 3; i++){
	    for ( int g = 0; g < 3; g++){
	    	cout<<gameF [i][g]<<" ";
	}
}

		//Create structure for game X_and_0;
		struct setG_F
		{
			char Pl1_n[18];

			char Pl2_n[18];

			int first_step;

			int gameF [3] [3];

		};
		
        // set union;
		union Byte_fields{
			struct {
				unsigned char byte0;
				unsigned char byte1;
				unsigned char byte2;
				unsigned char byte3;
			} bytes;
			struct {
				unsigned short low;
				unsigned short high;
			} slova;
			unsigned word;
		};

			typedef union Byte_fields REG_;

			REG_ reg;
			reg.word = 0x0000C0FF;
		//----------------------------------------------
			cout<<"word:\n"<<reg.word<<"\n";
			cout<<"slova_low:\n"<<reg.slova.low<<"\n";
			cout<<"slova_high:\n"<<reg.slova.high<<"\n";
			cout<<"bytes_0:\n"<<reg.bytes.byte0<<"\n";


	return 0;
}

