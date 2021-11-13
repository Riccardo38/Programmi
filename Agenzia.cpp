/*Un agenzia di viaggi effettua le prenotazioni per i voli della compagnia "rapisardi airlines" che
applica delle tariffe standard per le seguenti destinazioni: Catania-Roma 30€; 
Catania-Praga 55€;   Catania-NewYork  400€.
Al momento della prenotazione il cliente dovrà indicare il numero di passeggeri da prenotare
e l'eventuale supplemento del bagaglio in stiva (20€) per le destinazioni Europee e 
di 50€ per i voli intercontinentali.
A novembre l'agenzia applica uno sconto del 10% se il costo della prenotazione è superiore a 500€.
Sul costo della prenotazione bisognerà calcolare le imposte di imbarco del 10% per destinazioni
Europee e 17% per destinazioni intercontinentali.
Visualizzare il totale lordo della prenotazione.
Le imposte di imbarco.
Lo sconto.
Il totale netto.
Il messaggio sconto d'autunno se è stato applicato lo sconto.
Il progranmma dovrà prevedere il controlo dell'input in modo che non possano essere
inseriti codici di destinazioni diversi da quelli prestabiliti.
Se il cliente ha bagagli in stiva visualizzare il messaggio "recarsi per il check-in allo sportello 8"
*/
#include <string>
#include <iostream>
using namespace std;
int main(){
    int destinazione, npersone, rispostabagagli, nbagagli;
    short impostaeu, scontoautunno, parziale, totale;
    cout<<"    Benventuo il Rapisardi Air-Lines"<<endl;
    cout<<"    È pregato di selezionare una delle nostre destinazioni:"<<endl;
    cout<<"    +------------------------+"<<endl;
    cout<<"    |        1. Roma         |"<<endl;
    cout<<"    |        2. Praga        |"<<endl;
    cout<<"    |        3. New-York     |"<<endl;
    cout<<"    +------------------------+"<<endl;
    cin>>destinazione;
    if(destinazione!=1 and destinazione!=2 and destinazione!=3){
        system("clear");
        cout<<"E' pregato di selezionare una destinazione esistente "<<endl;
    }
    if(destinazione==1){
        system("clear");
        cout<<"    Perfetto quante persone siete in totale? --> ";
        cin>>npersone;
        cout<<"    Ricevuto! quanti bagagli avete in stiva? --> ";
        cin>>nbagagli;
        parziale=npersone*30 + nbagagli*20;
        impostaeu=parziale*10/100;
        totale=parziale+impostaeu;
        if(totale>500){
            scontoautunno=totale*10/100;
        system("clear");
        cout<<"    Il totale lordo è "<<parziale<<endl;
        cout<<"    Le imposte di imbarco sono di "<<impostaeu<<" €"<<endl;
        cout<<"    Il totale netto è "<<totale<<endl;
        cout<<"    È stato applicato uno sconto autunnale di "<<scontoautunno<<" €"<<endl;
        cout<<"    Il totale da pagare è di "<<totale-scontoautunno<<" €"<<endl;
        }
        else{
        system("clear");
        cout<<"    Il totale lordo è "<<parziale<<" €"<<endl;
        cout<<"    Le imposte di imbarco sono di "<<impostaeu<<" €"<<endl;
        cout<<"    Il totale da pagare è di "<<totale-scontoautunno<<" €"<<endl;
            
        }
    }
    
    
    if(destinazione==2){
        system("clear");
        cout<<"    Praga... ottima scelta! quante persone siete in totale? --> ";
        cin>>npersone;
        cout<<"    Ricevuto! quanti bagagli avete in stiva? --> ";
        cin>>nbagagli;
        parziale=npersone*55 + nbagagli*20;
        impostaeu=parziale*10/100;
        totale=parziale+impostaeu;
        if(totale>500){
            scontoautunno=totale*10/100;
        system("clear");
        cout<<"    Il totale lordo è "<<parziale<<endl;
        cout<<"    Le imposte di imbarco sono di "<<impostaeu<<" €"<<endl;
        cout<<"    Il totale netto è "<<totale<<endl;
        cout<<"    È stato applicato uno sconto autunnale di "<<scontoautunno<<" €"<<endl;
        cout<<"    Il totale da pagare è di "<<totale-scontoautunno<<" €"<<endl;
        }
        else{
        system("clear");
        cout<<"    Il totale lordo è "<<parziale<<" €"<<endl;
        cout<<"    Le imposte di imbarco sono di "<<impostaeu<<" €"<<endl;
        cout<<"    Il totale da pagare è di "<<totale-scontoautunno<<" €"<<endl;
            
        }
    }
    
    
    if(destinazione==3){
        system("clear");
        cout<<"    Evidentemente ti piace viaggiare... Quante persone siete in totale? --> ";
        cin>>npersone;
        cout<<"    Ricevuto! quanti bagagli avete in stiva? --> ";
        cin>>nbagagli;
        parziale=npersone*400 + nbagagli*20;
        impostaeu=parziale*17/100;
        totale=parziale+impostaeu;
        if(totale>500){
            scontoautunno=totale*10/100;
        system("clear");
        cout<<"    Il totale lordo è "<<parziale<<endl;
        cout<<"    Le imposte di imbarco sono di "<<impostaeu<<" €"<<endl;
        cout<<"    Il totale netto è "<<totale<<endl;
        cout<<"    È stato applicato uno sconto autunnale di "<<scontoautunno<<" €"<<endl;
        cout<<"    Il totale da pagare è di "<<totale-scontoautunno<<" €"<<endl;
        }
        else{
        system("clear");
        cout<<"    Il totale lordo è "<<parziale<<" €"<<endl;
        cout<<"    Le imposte di imbarco sono di "<<impostaeu<<" €"<<endl;
        cout<<"    Il totale da pagare è di "<<totale-scontoautunno<<" €"<<endl;
            
        }
    }
}