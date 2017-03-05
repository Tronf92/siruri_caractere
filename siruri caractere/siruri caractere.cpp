//6. Se considera sirurile de caractere a,b,c. Sa se scrie un program care identifica 
//prezenta sirului b in sirul a si inlocuieste aceste aparitii ale sirului b cu sirul c, lungimile sirurilor b si c fiind egale.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

char sir1[100],sir2[100],sir3[100];


void citire(char sir[100]);
void afisare(char sir[100]);
int comparare(char sir1[100],char sir2[100]);

void citire(char sir[100]){
	fflush(stdin);
	gets(sir);
}

void afisare(char sir[100]){
	cout << sir<<endl;
}

int comparare(char sir1[100],char sir2[100]){
	int i=0,j=0,cod=0;
	char c;
	while(sir2[i]!='\0'){
		c=sir2[i];
		while(sir1[j]!='\0'){
			if(sir1[j]==sir2[i]){
				sir1[j]=sir3[i];
				cod=1;
			}
			j++;
		}
		i++;
		j=0;
	}
	return cod;
}

int main(){
	cout << "Introduceti primul sir de caractere:" << endl;
	citire(sir1);
	cout << "Introduceti al doilea sir de caractere:"<< endl;
	citire(sir2);
	cout << "Introduceti al treilea sir de caractere:"<< endl;
	cout << "Lungimea sirului 3 trebuie sa fie egala cu lungimea\n sirului 2:"<< endl;
	cout << "Lungimea sirului 2 este: "<< strlen(sir2)<<endl;
	citire(sir3);
	if(strlen(sir3)<strlen(sir2) || strlen(sir3)>strlen(sir2)){
		while( strlen(sir3)<strlen(sir2) || strlen(sir3)>strlen(sir2)){
			cout << "Sirurile 2 si 3 nu sung egale, reintroduceti date:" << endl;
			citire(sir3);
		}
	}
	cout << "Sirurile inainte de schimbare:" << endl;
	cout << "Sir 1:" << endl;
	afisare(sir1);
	cout << "Sir 2:" << endl;
	afisare(sir2);
	cout << "Sir 3:" << endl;
	afisare(sir3);
	if(comparare(sir1,sir2)){	
		cout << "Sirul dupa schimbare:" << endl;
		afisare(sir1);
	}
	else{
		cout << "Nici un element comun intre sirurile 2 si 3" << endl;
	}
	system("pause");
	return 0;
}