/* Dati N numeri stampare la somma di quelli pari e di quelli dispari.*/

#include <iostream>
using namespace std;

int main() {
	int i, N, numero, somma_p=0,somma_d=0;
    
        do{
    	        cout<<"inserisci un numero \t";
		cin>>N;
	}while (N<=0);

	i=0;
	while(i<N) {
		cout<<"Inserisci il numero: \t";
		cin>>numero;
		if(numero%2==0)
			somma_p+=numero;
		else 
			somma_d+=numero;
		i++;
	}

	cout<<"La somma dei pari è  "<<somma_p<<endl;
	cout<<"La somma dei dispari è  "<<somma_d<<endl;
}