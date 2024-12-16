#include <stdio.h>

// Funzione per simulare la porta NOT
int NOT(int a) {
    // Il valore di ritorno della funzione
    return 1 - a;
}

// Funzione per simulare la porta AND
int AND(int a, int B) {
    // Il valore di ritorno della funzione
    // TODO aggiungere l'espressione matematica per soddisfare la porta AND
    return a * B;
}

// Funzione per simulare la porta OR
int OR(int a, int B) {
    // Il valore di ritorno della funzione
    // TODO aggiungere l'espressione matematica per soddisfare la porta OR
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
    }

    printf("\n\n");
}