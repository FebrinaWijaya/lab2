#include "class.h"
#include<cmath>
void data::setData(int k,float R1,float R2)
{
	Ra=R1;
	Rb=R2;
	K=k;
}
int data::getRa(){ return (int)Ra;}
int data::getRb()
{
	if((float)(Rb-(int)Rb)<0.5) return (int)Rb;
	else return (int)Rb+1;
}
void data::CountRating(float Sa)
{
	float Ea,Eb,pwrA;
	pwrA=(Rb-Ra)/400;
	Ea=1.0/(1.0+pow(10.0,pwrA));
	Eb=1.0/(1.0+pow(10.0,-pwrA));
	Ra+=(K*(Sa-Ea));
	Rb+=K*(1-Sa-Eb);
}
