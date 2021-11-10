/*Determinare quanti numeri multipli di K sono compresi nell'intervallo [A..B] (estremi compresi).*/

#include <iostream>
using namespace std;
int main()
{
    int k, a, b;
    cout<<"Inserisci il multiplo ";
    cin>>k;
    cout<<"inserisci un intervallo di numeri ";
    cin>>a>>b;
    cout<<endl;
    while(a>b){
        cout<<b<<endl;
        b=b+k;
    }
    while(a<b){
        cout<<a<<endl;
        a=a+k;
    }
    
}
