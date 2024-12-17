#include <stdio.h>

// Funzione per simulare la porta NOT
int NOT(int a) {
    return 1 - a;
}

// Funzione per simulare la porta AND
int AND(int a, int B) {
    return a * B;
}

// Funzione per simulare la porta OR
int OR(int a, int B) {
    return (a + B) - (a * B);
}

int LAB(int a, int B) {
    return 1 - a + 1 - B;
}

int main() {
    // Dichiara una variabile
    int A, B, C, D, E, F;

    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di A (0 o 1):\n");
    scanf("%d", &A);
    printf("Hai inserito il valore A: %d\n", A);

    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di B (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &B);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore B: %d\n", B);

     printf("Inserisci il valore di C (0 o 1):\n");
    scanf("%d", &C);
    printf("Hai inserito il valore C: %d\n", C);

     printf("Inserisci il valore di D (0 o 1):\n");
    scanf("%d", &D);
    printf("Hai inserito il valore D: %d\n", D);

     printf("Inserisci il valore di E (0 o 1):\n");
    scanf("%d", &E);
    printf("Hai inserito il valore E: %d\n", E);

     printf("Inserisci il valore di F (0 o 1):\n");
    scanf("%d", &F);
    printf("Hai inserito il valore F: %d\n", F);

    if (A != 0 && A != 1 || B != 0 && B != 1 || C != 0 && C != 1 || D != 0 && D != 1 || E != 0 && E != 1 || F != 0 && F != 1) {
        printf("I valori inseriti non sono 1 o 0\n");
    } else {
        // Procediamo con l'esecuzione solo se il numero è 1 o 0
        printf("I valori inseriti sono 1 o 0\n");

        // Esempio di porta NOT
        printf("Il valore di A viene trasformato da una porta NOT\n");
        int notA = NOT(A);
        printf("Il valore di uscita della porta NOT è: %d\n", notA);

        // Esempio di porta AND
        printf("I valori di A e B vengono trasformati da una porta AND\n");
        int andAB = AND(A, B);
        printf("Il valore di uscita della porta AND è: %d\n", andAB);

        // Esempio di porta OR
        printf("I valori di A e B vengono trasformati da una porta OR\n");
        int orAB = OR(A, B);
        printf("Il valore di uscita della porta OR è: %d\n", orAB);

        // Labirinto Tautologico
        int r1 = OR(A, NOT(A)); // Sempre 1
        int r2 = OR(B, NOT(B)); // Sempre 1
        int r3 = OR(C, NOT(C)); // Sempre 1
        int r4 = OR(D, NOT(D)); // Sempre 1
        int r5 = OR(E, NOT(E)); // Sempre 1
        int r6 = OR(F, NOT(F)); // Sempre 1

        // Combiniamo tutti i risultati con AND (poiché tutti sono 1, l'AND sarà 1)
     int risultato = AND(AND(r1, r2), AND(AND(r3, r4), AND(r5, r6)));

        // Stampa del risultato
     printf("\nRisultato finale: %d\n", risultato);
    }

    printf("\n\n");
}
