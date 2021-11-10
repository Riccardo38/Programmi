/*  Dati N numeri calcolare la media aritmetica.*/

#include <iostream>
using namespace std;

int main() {
	int i, N;
        float numero, somma, media;
        somma=0;
    
        do{
    	        cout<<"Quanti numeri vuoi inserire? \t";
		cin>>N;
	}while (N<=0);

	i=0;
	
	while(i<N) {
		cout<<"Inserisci il numero \t";
		cin>>numero;
		somma=somma+numero;
		i++;
	}
	media=somma/N;
	cout<<"La media dei numeri è \t"<<media<<endl;
}