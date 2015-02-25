#include <iostream>
using namespace std;
#include "Logger.h"


int main()
{
	
	Logger log(5, 0);
	log.MarkWinner(3);
	log.MarkWinner(2);


	string player[10][6];
	player[0][0] = "a";
	player[0][1] = "b";
	player[0][2] = "c";
	player[0][3] = "d";
	player[0][4] = "e";
	player[0][5] = "f";

	player[1][0] = "a";
	player[1][1] = "b";
	player[1][2] = "c";
	player[1][3] = "d";
	player[1][4] = "e";
	

	player[2][0] = "a";
	player[2][1] = "b";
	player[2][2] = "c";
	player[2][3] = "d";
	player[2][4] = "e";

	player[3][0] = "a";
	player[3][1] = "b";
	player[3][2] = "c";
	player[3][3] = "d";
	player[3][4] = "e";

	player[4][0] = "a";
	player[4][1] = "b";
	player[4][2] = "c";
	player[4][3] = "d";
	player[4][4] = "e";

	player[5][0] = "a";
	player[5][1] = "b";
	player[5][2] = "c";
	player[5][3] = "d";
	player[5][4] = "e";

	log.CardLog(player);//log
}