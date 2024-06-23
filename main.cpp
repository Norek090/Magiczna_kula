#include <stdio.h>

int main() {
    char question[256];
    char continue_response;
    int simple_random = 1;

    do {
        printf("Zadaj pytanie, na ktore mozna odpowiedziec 'tak' lub 'nie':\n");
        fgets(question, sizeof(question), stdin);

        // Prosta symulacja losowości
        simple_random = (simple_random + 1) % 2;
        if (simple_random == 0) {
            printf("Magiczna kula mowi: Tak\n");
        } else {
            printf("Magiczna kula mowi: Nie\n");
        }

        printf("Czy chcesz zadac kolejne pytanie? (t/n): ");
        continue_response = getchar();
        while (getchar() != '\n');

    } while (continue_response == 't' || continue_response == 'T');

    printf("Dziekujemy za skorzystanie z Magicznej Kuli 8!\n");

    return 0;
}
