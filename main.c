#include <stdio.h>

int main(void) {

  caratteri_ascii();


  return 0;
}

caratteri_ascii(void) {  // void: la funzione non ha nessun parametro

	printf("*** funzione caratteri_ascii()\n"); // <= \n è un carattere speciale: fa andare a capo il "cursore"

	printf("\\ si chiama \"backslash\" ovvero \"Escape Character\". \n");

	printf("/ si chiama \"slash\" ovvero \"forward slash\". \n");

	printf("\\n è un carattere singolo che ha codice ASCII 10, viene chiamato \"line feed\" o \"new line\"\n");

	printf("\\n è un carattere speciale: si dice che è una Escape Sequence; è come premere Enter in un editor...vai a capo e si sposta a sinistra.\n");

	printf("ad esempio, un altro carattere speciale è \\t (tab): 123\t456 , introduce un certo numero di spazi.\n");

	printf("ASCII chart:\nhttps://en.cppreference.com/w/cpp/language/ascii\n");

	printf("i caratteri ASCII sono 128 e sono numerati da 0 a 127\n");

	printf("i caratteri ASCII stampabili a video sono i seguenti:\n\n");

	for (char ch = 32; ch < 127; ch++) {
		putchar(ch);
		if (ch % 16 == 15)
			putchar('\n');
	}

	printf("\n\n");
}