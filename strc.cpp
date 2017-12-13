#include <iostream>
#include <locale.h>
#include <string.h>
using namespace std;

// O objetivo do programa é concatenar as duas strings ali
//





char * my_strcat(char * name1, char * name2,int name1len, int name2len){
    char * strcatn = new char [name1len + name2len];
    cout << "Value de name 1 e name2 : " << name1 << " " << name2 << "\n";
    int i = 0;
    int a = 0;
	while(*(name1 + i) != '\0')
	{
		strcatn[i] = *(name1 + i);
		i++;
	}
	a = i; // Auxiliar da variável i
	i = 0; // Troca de valores
	
	while(*(name2 + i) != '\0')
	{
		strcatn[a] = *(name2 + i);
		a++;
		i++;
	}
	
	strcatn[name1len + name2len] = '\0' ;
	return strcatn;	
}



