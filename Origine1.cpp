#include <iostream>

int main()
{
    int i;

    if InizioGioco()
        contesto();
        stanza1();
        stanza2();
        stanza3();

    return 0;
}



int InizioGioco(void)
{
    int i, amswer;

    /* indicazioni gioco */

    std::cout << " devi scappare dalle stanze dove sei intrappolato ";

    /* richiesta di continuare o uscire */

    bool accept();
        std::cout << " Vuoi procedere (s o n)?\n ";

    char answer = 0;
    std::cin >> answer;

    if (amswer == 's') return true;
    return false;

    return 0;
}

int contesto(void)
{
    int i, amswer;

    /* spiegazione storia */

    std::cout << " sei stato imprigionato da uno sconosciuto e devi fuggire, ci saranno tante prove, riuscirai a fuggire? ";

    /* richiesta di continuare o uscire */

    bool accept();
        std::cout << " Vuoi cominciare (s o n)?\n ";

    char answer = 0;
    std::cin >> answer;

    switch (answer) {
    case 's':
        return true;
    case 'n':
        return false;
    default:
        std::cout << "ok, allora ciao";
    return false;
    }


    return 0;
}


int stanza1(void)
{
	
    cout << " Sono nella prima stanza e davanti a me ci sono tre porte, di fianco a me c'è un tavolo con una chiave con scritto su un bigliettino usami, quale porta scelgo? " << endl;

	float porta1, porta2, porta3;


	if (porta1)
	{
		cout << " provai a aprire la prima stanza ma appena metto la chiave una scarica di corrente mi colpì\n sei morto "; /*batteria collegata al lucchetto*/
	}
    return stanza1();
    

	if (porta2)
	{
		cout << " aprì la porta numero due e trovai l'uscita "; /*uscita*/
	}

	if (porta3)
	{
		cout << "  provai a aprire la prima stanza ma appena aprì la porta mi trovai una canna di fucile che mi puntava\n sei morto "; /*fucile collegato alla maniglia*/
	}
    return stanza1();
    
    return 0;
}

int stanza2(void)
{

    cout << " Sono nella seconda stanza e di fianco a me ci sono tre oggetti su un tavolo, all'improvviso però salzò una nube tossica, quale oggetto scelgo? " << endl;

    float MascherAntigass, fazzoletto, AsseDiLegno;


    if (MascherAntigass)
    {
        cout << " presi la cosa più ovvia, indossai la maschera ma scopri che era rotta\n sei morto "; /*MascherAntigass*/
    }
    return stanza2();


   if (fazzoletto)
   {
       cout << " presi il fazzoletto, non semrava molto saggio, ma poi vidi che la nube si dissolse e la porta si aprì "; /*uscita*/
   }

    if (AsseDiLegno)
    {
        cout << " provai a prendere l'Asse Di Legno, ma mi sebrava inutile e anche troppo tardi\n sei morto "; /*AsseDiLegno*/
    }
    return stanza2();

   return 0;
}

int stanza3(void)
{

    cout << "  Sono nella terza stanza e davanti a me ci sono tre leve, quale scelgo? " << endl;

    float leva1, leva2, leva3;


    if (leva1)
    {
        cout << " tirai la leva uno, ma sentì una specie di clik e poi la stanza esplose\n sei morto "; /*esplosione*/
    }
    return stanza3();


    if (leva2)
    {
        cout << " tirai la leva due, si apri una porta ma quella sbagliata, uscì da quella porta una grossa tigre che corse contro di me, io non potetti fare nulla e mi saltò addosso\n sei morto "; /*stanza tigre*/
    }
    return stanza3();

    if (leva3)
    {
        cout << " tirai la terza, e si aprì una porta, vidi una luce e non sembrava quella del paradiso, era quella dell'uscita, ero libero\n sei uscito, hai vinto "; /*uscita*/
    }

   return 0;
}