#include "gra.h"
#include "wyniki.h"
#include <windows.h>
#include <conio.h>

int main(){	
	char no1[dlug_nick+2]={0}
	char no2[dlug_nick+2]={0};
	char no3[dlug_nick+2]={0};
	char no4[dlug_nick+2]={0};
	char no5[dlug_nick+2]={0};
	char no6[dlug_nick+2]={0};
	char no7[dlug_nick+2]={0};
	char no8[dlug_nick+2]={0};
	char no9[dlug_nick+2]={0};
	char no10[dlug_nick+2]={0};
	char *miejsce[]={no1,no2,no3,no4,no5,no6,no7,no8,no9,no10};
	int wyniki[10]={0};
	char opcja;

	ukryjkursor();
	odczytaj(wyniki,miejsce);
	menu();

	while(1){
		if (kbhit()){
			opcja = _getch();}

		switch(opcja){
			case 's':{
				gra(wyniki,miejsce);}
			case 'n':{
				naj_wyniki(wyniki,miejsce);
				break;}
			case 27:{
				return 0;}
			}

		opcja=NULL;
	}

}
