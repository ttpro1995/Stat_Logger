#include <iostream>
using namespace std;
#include "Logger.h"


int main()
{
	
	Logger log(5, 0);
	log.MarkWinner(3);
	log.MarkWinner(2);


	string player[10][6];
	player[0][0] = "1a";
	player[0][1] = "2b";
	player[0][2] = "3c";
	player[0][3] = "4d";
	player[0][4] = "5e";
	player[0][5] = "6f";

	player[1][0] = "1a";
	player[1][1] = "2b";
	player[1][2] = "1c";
	player[1][3] = "4d";
	player[1][4] = "5e";
	

	player[2][0] = "1a";
	player[2][1] = "2b";
	player[2][2] = "3c";
	player[2][3] = "4d";
	player[2][4] = "5e";

	player[3][0] = "1a";
	player[3][1] = "2b";
	player[3][2] = "3c";
	player[3][3] = "4d";
	player[3][4] = "5e";

	player[4][0] = "1a";
	player[4][1] = "2b";
	player[4][2] = "3a";
	player[4][3] = "4d";
	player[4][4] = "5e";

	player[5][0] = "1a";
	player[5][1] = "2b";
	player[5][2] = "3c";
	player[5][3] = "4d";
	player[5][4] = "5e";

	log.CardLog(player);//log
}