/*  Determinare la somma dei numeri negativi e positivi di un insieme di N numeri relativi.*/

#include <iostream>
using namespace std;

int main() {
	int i, N, numero, conta_pos=0,conta_neg=0, conta_n=0;
    
        do{
    	        cout<<"inserisci un numero ";
		cin>>N;
	}while (N<=0);

	i=0;
	while(i<N) {
		cout<<"Inserisci il numero: \t";
		cin>>numero;
		if(numero>0)
			conta_pos++;
		else if (numero==0)
			conta_neg++;
		else 
			conta_n++;
		i++;
	}

	cout<<"Hai inserito "<<conta_pos<<" numeri positivi. "<<endl;
	cout<<"Hai inserito "<<conta_neg<<" numeri nulli. "<<endl;
	cout<<"Hai inserito "<<conta_n<<" numeri negativi. ";
return 0;
}