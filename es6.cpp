//SOLUZIONE ESERCIZIO 6
/*Ricevuto in ingresso un numero intero positivo n, scomponilo in unità, decine, centinaia ecc.*/

#include <iostream>

// libreria cmath per poter operare con le potenze
#include <cmath>

using namespace std;

int main() {
int n,ris,i,d,c;
d=10;
cout<<"Inserisci un numero: "<<"\n";
cin>>n;
c=n;
i=1;

//Conto il numero di cifre all'interno del numero

while(c/10!=0){
    i=i+1;
    c=c/10;
}
cout<<"Hai inserito "<<i<<" cifre\n";

// Scompongo il numero attraverso il metodo posizionale
while(i>0){
    i=i-1;
    d=pow(10,i);
    ris=n/d;
    cout<<ris<<"\n";
    n=n-(ris*d);
}
}
