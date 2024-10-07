#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

typedef enum {
    INDONESIA,
    ISRAEL,
    RUSIA,
    KORUT,
    KORSEL,
    NUM_NEGARA
} Negara;

const char *negaraNames[] = {
    "Indonesia",
    "Israel",
    "Rusia",
    "Korut",
    "Korsel"
};

int kekuatanNuklir() {
    return 5; // Semua negara memiliki kekuatan nuklir yang sama
}

int kekuatanSeranganKritis() {
    return 5; // Semua negara memiliki kekuatan serangan kritis yang sama
}

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void tampilkanKarakterAscii() {
    printf("       .---.\n");
    printf("  ___ /_____\\\n");
    printf(" /\\.-`( '.' )\n");
    printf("/ /    \\_-/_\n");
    printf("\\ `-.-\"`'V'//-.\n");
    printf(" `.__,   |// , \\\n");
    printf("     |Ll //Ll|\\ \\\n");
    printf("     |__//   | \\_\\\n");
    printf("    /---|[]==| / /\n");
    printf("    \\__/ |   \\/\\/\n");
    printf("    /_   | Ll_\\|\n");
    printf("     |`^\"\"\"^`|\n");
    printf("     |   |   |\n");
    printf("     |   |   |\n");
    printf("     |   |   |\n");
    printf("     |   |   |\n");
    printf("     L___l___J\n");
    printf("     |_ | _|\n");
    printf("    (___|___)\n");
    printf("     ^^^ ^^^ \n");
}

void tampilkanStatusNuklir(int kesehatanPemain1, int kesehatanPemain2, Negara negara1, Negara negara2) {
    printf("\nNuklir %s: ", negaraNames[negara1]);
    for (int i = 0; i < kesehatanPemain1; i++) {
        printf("#");
    }
    printf(" (%d)\n", kesehatanPemain1);

    printf("Nuklir %s: ", negaraNames[negara2]);
    for (int i = 0; i < kesehatanPemain2; i++) {
        printf("#");
    }
    printf(" (%d)\n", kesehatanPemain2);
}

int pilihanPemain(const char *negara, bool isAI) {
    if (isAI) {
        return (rand() % 3) + 1;
    } else {
        int pilihan;
        printf("\n%s, pilih aksi Anda:\n", negara);
        printf("1. Luncurkan Nuklir\n2. Pertahankan Basis\n3. Serangan Kritis\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);
        return pilihan;
    }
}

void tampilkanArtIndonesia() {
    printf(" /$$$$$$ /$$   /$$ /$$$$$$$   /$$$$$$  /$$   /$$ /$$$$$$$$  /$$$$$$  /$$$$$$  /$$$$$$ \n");
    printf("|_  $$_/| $$$ | $$| $$__  $$ /$$__  $$| $$$ | $$| $$_____/ /$$__  $$|_  $$_/ /$$__  $$\n");
    printf("  | $$  | $$$$| $$| $$  \\ $$| $$  \\ $$| $$$$| $$| $$      | $$  \\__/  | $$  | $$  \\ $$\n");
    printf("  | $$  | $$ $$ $$| $$  | $$| $$  | $$| $$ $$ $$| $$$$$   |  $$$$$$   | $$  | $$$$$$$$\n");
    printf("  | $$  | $$  $$$$| $$  | $$| $$  | $$| $$  $$$$| $$__/    \\____  $$  | $$  | $$__  $$\n");
    printf("  | $$  | $$\\  $$$| $$  | $$| $$  | $$| $$\\  $$$| $$       /$$  \\ $$  | $$  | $$  | $$\n");
    printf(" /$$$$$$| $$ \\  $$| $$$$$$$/|  $$$$$$/| $$ \\  $$| $$$$$$$$|  $$$$$$/ /$$$$$$| $$  | $$\n");
    printf("|______/|__/  \\__/|_______/  \\______/ |__/  \\__/|________/ \\______/ |______/|__/  |__/\n\n");
}

void tampilkanArtRusia() {
    printf(" /$$$$$$$  /$$   /$$  /$$$$$$  /$$$$$$  /$$$$$$ \n");
    printf("| $$__  $$| $$  | $$ /$$__  $$|_  $$_/ /$$__  $$\n");
    printf("| $$  \\ $$| $$  | $$| $$  \\__/  | $$  | $$  \\ $$\n");
    printf("| $$$$$$$/| $$  | $$|  $$$$$$   | $$  | $$$$$$$$\n");
    printf("| $$__  $$| $$  | $$ \\____  $$  | $$  | $$__  $$\n");
    printf("| $$  \\ $$| $$  | $$ /$$  \\ $$  | $$  | $$  | $$\n");
    printf("| $$  | $$|  $$$$$$/|  $$$$$$/ /$$$$$$| $$  | $$\n");
    printf("|__/  |__/ \\______/  \\______/ |______/|__/  |__/\n\n");
}

void tampilkanArtKorut() {
    printf("$$\\   $$\\  $$$$$$\\  $$$$$$$\\  $$$$$$$$\\  $$$$$$\\        $$\\   $$\\ $$$$$$$$\\  $$$$$$\\  $$$$$$$\\   $$$$$$\\  \n");
    printf("$$ | $$  |$$  __$$\\ $$  __$$\\ $$  _____|$$  __$$\\       $$ |  $$ |\\__$$  __|$$  __$$\\ $$  __$$\\ $$  __$$\\ \n");
    printf("$$ |$$  / $$ /  $$ |$$ |  $$ |$$ |      $$ /  $$ |      $$ |  $$ |   $$ |   $$ /  $$ |$$ |  $$ |$$ /  $$ |\n");
    printf("$$$$$  /  $$ |  $$ |$$$$$$$  |$$$$$\\    $$$$$$$$ |      $$ |  $$ |   $$ |   $$$$$$$$ |$$$$$$$  |$$$$$$$$ |\n");
    printf("$$  $$<   $$ |  $$ |$$  __$$< $$  __|   $$  __$$ |      $$ |  $$ |   $$ |   $$  __$$ |$$  __$$< $$  __$$ |\n");
    printf("$$ |\\$$\\  $$ |  $$ |$$ |  $$ |$$ |      $$ |  $$ |      $$ |  $$ |   $$ |   $$ |  $$ |$$ |  $$ |$$ |  $$ |\n");
    printf("$$ | \\$$\\  $$$$$$  |$$ |  $$ |$$$$$$$$\\ $$ |  $$ |      \\$$$$$$  |   $$ |   $$ |  $$ |$$ |  $$ |$$ |  $$ |\n");
    printf("\\__|  \\__| \\______/ \\__|  \\__|\\________|\\__|  \\__|       \\______/    \\__|   \\__|  \\__|\\__|  \\__|\\__|  \\__|\n\n");
}

void tampilkanArtIsrael() {
    printf(" ______   ______   _______    ______   ________  __       \n");
    printf("|      \\ /      \\ |       \\  /      \\ |        \\|  \\      \n");
    printf(" \\$$$$$$|  $$$$$$\\| $$$$$$$\\|  $$$$$$\\| $$$$$$$$| $$      \n");
    printf("  | $$  | $$___\\$$| $$__| $$| $$__| $$| $$__    | $$      \n");
    printf("  | $$   \\$$    \\ | $$    $$| $$    $$| $$  \\   | $$      \n");
    printf("  | $$   _\\$$$$$$\\| $$$$$$$\\| $$$$$$$$| $$$$$   | $$      \n");
    printf(" _| $$_ |  \\__| $$| $$  | $$| $$  | $$| $$_____ | $$_____ \n");
    printf("|   $$ \\ \\$$    $$| $$  | $$| $$  | $$| $$     \\| $$     \\\n");
    printf(" \\$$$$$$  \\$$$$$$  \\$$   \\$$ \\$$   \\$$ \\$$$$$$$$ \\$$$$$$$$\n\n");
}

void tampilkanArtKorsel() {
    printf("$$\\   $$\\  $$$$$$\\  $$$$$$$\\  $$$$$$$$\\  $$$$$$\\         $$$$$$\\  $$$$$$$$\\ $$\\        $$$$$$\\ $$$$$$$$\\  $$$$$$\\  $$\\   $$\\ \n");
    printf("$$ | $$  |$$  __$$\\ $$  __$$\\ $$  _____|$$  __$$\\       $$  __$$\\ $$  _____|$$ |      $$  __$$\\\\__$$  __|$$  __$$\\ $$$\\  $$ |\n");
    printf("$$ |$$  / $$ /  $$ |$$ |  $$ |$$ |      $$ /  $$ |      $$ /  \\__|$$ |      $$ |      $$ /  $$ |  $$ |   $$ /  $$ |$$$$\\ $$ |\n");
    printf("$$$$$  /  $$ |  $$ |$$$$$$$  |$$$$$\\    $$$$$$$$ |      \\$$$$$$\\  $$$$$\\    $$ |      $$$$$$$$ |  $$ |   $$$$$$$$ |$$ $$\\$$ |\n");
    printf("$$  $$<   $$ |  $$ |$$  __$$< $$  __|   $$  __$$ |       \\____$$\\ $$  __|   $$ |      $$  __$$ |  $$ |   $$  __$$ |$$ \\$$$$ |\n");
    printf("$$ |\\$$\\  $$ |  $$ |$$ |  $$ |$$ |      $$ |  $$ |      $$\\   $$ |$$ |      $$ |      $$ |  $$ |  $$ |   $$ |  $$ |$$ |\\$$$ |\n");
    printf("$$ | \\$$\\  $$$$$$  |$$ |  $$ |$$$$$$$$\\ $$ |  $$ |      \\$$$$$$  |$$$$$$$$\\ $$$$$$$$\\ $$ |  $$ |  $$ |   $$ |  $$ |$$ | \\$$ |\n");
    printf("\\__|  \\__| \\______/ \\__|  \\__|\\________|\\__|  \\__|       \\______/ \\________|\\________|\\__|  \\__|  \\__|   \\__|  \\__|\\__|  \\__|\n\n");
}

void tampilkanArtGame() {
    printf(" /$$$$$$$  /$$$$$$$$ /$$$$$$$   /$$$$$$  /$$   /$$  /$$$$$$        /$$   /$$ /$$   /$$ /$$   /$$ /$$       /$$$$$$ /$$$$$$$ \n");
    printf("| $$__  $$| $$_____/| $$__  $$ /$$__  $$| $$$ | $$ /$$__  $$      | $$$ | $$| $$  | $$| $$  /$$/| $$      |_  $$_/| $$__  $$\n");
    printf("| $$  \\ $$| $$      | $$  \\ $$| $$  \\ $$| $$$$| $$| $$  \\__/      | $$$$| $$| $$  | $$| $$ /$$/ | $$        | $$  | $$  \\ $$\n");
    printf("| $$$$$$$/| $$$$$   | $$$$$$$/| $$$$$$$$| $$ $$ $$| $$ /$$$$      | $$ $$ $$| $$  | $$| $$$$$/  | $$        | $$  | $$$$$$$/\n");
    printf("| $$____/ | $$__/   | $$__  $$| $$__  $$| $$  $$$$| $$|_  $$      | $$  $$$$| $$  | $$| $$  $$  | $$        | $$  | $$__  $$\n");
    printf("| $$      | $$      | $$  \\ $$| $$  | $$| $$\\  $$$| $$  \\ $$      | $$\\  $$$| $$  | $$| $$\\  $$ | $$        | $$  | $$  \\ $$\n");
    printf("| $$      | $$$$$$$$| $$  | $$| $$  | $$| $$ \\  $$|  $$$$$$/      | $$ \\  $$|  $$$$$$/| $$ \\  $$| $$$$$$$$ /$$$$$$| $$  | $$\n");
    printf("|__/      |________/|__/  |__/|__/  |__/|__/  \\__/ \\______/       |__/  \\__/ \\______/ |__/  \\__/|________/|______/|__/  |__/\n\n");
}

int main() {
    srand(time(0));

    // Tampilkan teks ASCII di awal permainan
    tampilkanArtGame();

    int pilihan1, pilihan2;
    bool isAI1 = false, isAI2 = false;

    printf("Pilih negara untuk Pemain 1:\n");
    for (int i = 0; i < NUM_NEGARA; i++) {
        printf("%d. %s\n", i + 1, negaraNames[i]);
    }
    printf("Masukkan pilihan: ");
    scanf("%d", &pilihan1);
    pilihan1--;

    Negara negaraPemain1 = (Negara)pilihan1;
    clearScreen(); // Clear setelah pemilihan negara 1

    // Jika pemain memilih Indonesia, tampilkan seni ASCII untuk Indonesia
    if (negaraPemain1 == INDONESIA) {
        tampilkanArtIndonesia();
    }

    // Jika pemain memilih Rusia, tampilkan seni ASCII untuk Rusia
    if (negaraPemain1 == RUSIA) {
        tampilkanArtRusia();
    }

    // Jika pemain memilih Korut, tampilkan seni ASCII untuk Korut
    if (negaraPemain1 == KORUT) {
        tampilkanArtKorut();
    }

    // Jika pemain memilih Israel, tampilkan seni ASCII untuk Israel
    if (negaraPemain1 == ISRAEL) {
        tampilkanArtIsrael();
    }

    // Jika pemain memilih Korsel, tampilkan seni ASCII untuk Korsel
    if (negaraPemain1 == KORSEL) {
        tampilkanArtKorsel();
    }

    printf("\nPilih lawan (1. Pemain 2 manusia, 2. Bot): ");
    int lawan;
    scanf("%d", &lawan);

    if (lawan == 1) {
        printf("Pilih negara untuk Pemain 2:\n");
        for (int i = 0; i < NUM_NEGARA; i++) {
            if (i != pilihan1) {
                printf("%d. %s\n", i + 1, negaraNames[i]);
            }
        }
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan2);
        pilihan2--;
    } else {
        isAI2 = true;
        do {
            pilihan2 = rand() % NUM_NEGARA;
        } while (pilihan2 == pilihan1);
    }
    clearScreen(); // Clear setelah pemilihan negara 2

    Negara negaraPemain2 = (Negara)pilihan2;

    int kesehatanPemain1 = 20;
    int kesehatanPemain2 = 20;
    int giliran = 1;

    while (kesehatanPemain1 > 0 && kesehatanPemain2 > 0) {
        tampilkanStatusNuklir(kesehatanPemain1, kesehatanPemain2, negaraPemain1, negaraPemain2);

        // Tampilkan karakter ASCII di awal giliran
        tampilkanKarakterAscii();

        if (giliran == 1) {
            printf("\nGiliran %s!\n", negaraNames[negaraPemain1]);
            int pilihan = pilihanPemain(negaraNames[negaraPemain1], isAI1);
            clearScreen(); // Clear setelah membuat pilihan
            switch (pilihan) {
                case 1:
                    printf("%s meluncurkan nuklir dengan kekuatan %d\n", negaraNames[negaraPemain1], kekuatanNuklir());
                    kesehatanPemain2 -= kekuatanNuklir();
                    break;
                case 2:
                    printf("%s mempertahankan basis, menambah kesehatan sebesar 2\n", negaraNames[negaraPemain1]);
                    kesehatanPemain1 += 2;
                    break;
                case 3:
                    printf("%s melakukan serangan kritis dengan kekuatan %d\n", negaraNames[negaraPemain1], kekuatanSeranganKritis());
                    kesehatanPemain2 -= kekuatanSeranganKritis();
                    break;
                default:
                    printf("Pilihan tidak valid, giliran dilewatkan!\n");
                    break;
            }
            if (kesehatanPemain2 < 0) kesehatanPemain2 = 0;
            giliran = 2;
        } else {
            printf("\nGiliran %s!\n", negaraNames[negaraPemain2]);
            int pilihan = pilihanPemain(negaraNames[negaraPemain2], isAI2);
            clearScreen(); // Clear setelah membuat pilihan
            switch (pilihan) {
                case 1:
                    printf("%s meluncurkan nuklir dengan kekuatan %d\n", negaraNames[negaraPemain2], kekuatanNuklir());
                    kesehatanPemain1 -= kekuatanNuklir();
                    break;
                case 2:
                    printf("%s mempertahankan basis, menambah kesehatan sebesar 2\n", negaraNames[negaraPemain2]);
                    kesehatanPemain2 += 2;
                    break;
                case 3:
                    printf("%s melakukan serangan kritis dengan kekuatan %d\n", negaraNames[negaraPemain2], kekuatanSeranganKritis());
                    kesehatanPemain1 -= kekuatanSeranganKritis();
                    break;
                default:
                    printf("Pilihan tidak valid, giliran dilewatkan!\n");
                    break;
            }
            if (kesehatanPemain1 < 0) kesehatanPemain1 = 0;
            giliran = 1;
        }
    }

    tampilkanStatusNuklir(kesehatanPemain1, kesehatanPemain2, negaraPemain1, negaraPemain2);
    if (kesehatanPemain1 <= 0) {
        printf("\n%s menang!\n", negaraNames[negaraPemain2]);
    } else {
        printf("\n%s menang!\n", negaraNames[negaraPemain1]);
    }

    return 0;
}
