#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
#include "class.h"
int main()
{
	int K,Ra,Rb;
	float Sa;
	data game;
	ifstream inFile("file.in",ios::in);
	ofstream outFile("file.out",ios::out);
	inFile>>K>>Ra>>Rb;
	game.setData(K,Ra,Rb);
	outFile<<game.getRa()<<" "<<game.getRb()<<endl;
	while(inFile>>Sa)
	{
		game.CountRating(Sa);
		outFile<<game.getRa()<<" "<<game.getRb()<<endl;
	}
	inFile.close();
	outFile.close();
	return 0;
}
