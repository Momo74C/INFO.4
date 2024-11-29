#include <iostream> //direttive di preprocessore per cout e cin
using namespace std; //per funzioni cout e cin
/*using... poiché stiamo usando la nuova libreria iostream (quella senza il .h) che richiede l'uso di uno spazio dei
nomi per identificare univocamente le classi. */
//definizione di una classe
class Frazione { //inizio classe con attributi e metodi della classe
private: //definizione attributi di classe
int numeratore;
int denominatore;
public:
Frazione (){}; /* Frazione (){}; è il costruttore di default. Se non si dichiarano altri costruttori viene utilizzato quello di
default che non è necessario dichiarare perché viene implementato automaticamente. Se si usano altri costruttori (con
parametri!), se si vorrà utilizzare anche il costruttore di default sarà necessario dichiararlo */
//metodi setters
void setNumeratore(int n) 
{
    numeratore = n; 
}
void setDenominatore(int n) 
{
    denominatore = n; 
}
//metodi getters
int getNumeratore() 
{ 
    return numeratore; 
}
int getDenominatore() { return denominatore; }
//metodi setters
void setNumeratoreDenom(int n, int d)
{ numeratore = n;
denominatore =d; }
//definizione metodi
void stampa() { //metodo che stampa a video la frazione
/* quando l'invocazione di un metodo è all'interno della classe non usiamo la dot notation (spiegata in seguito) */
cout << numeratore << "/" << denominatore;
/*esatta perchè metodo nella classe può usare attributi privati */
int n=getNumeratore(); /*versione alternativa e obbligatoria per metodi fuori dalla classe */
int d=getDenominatore();
cout << n<< "/" << d;
}
}; //fine classe
int main() { //funzione principale
Frazione f1, f2; //definizione oggetto di classe Frazione
f1.setNumeratore(12); //chiamata del metodo su oggetto
f1.setDenominatore(3);
f1.stampa();
system("pause");
}