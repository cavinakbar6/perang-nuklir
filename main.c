#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h> // Perlu untuk strcmp

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void tampilkanStatusNuklir(int kesehatanPemain1, int kesehatanPemain2, const char *negara1, const char *negara2) {
    printf("\nNuklir %s: ", negara1);
    for (int i = 0; i < kesehatanPemain1; i++) {
        printf("#");
    }
    printf(" (%d)\n", kesehatanPemain1);

    printf("Nuklir %s: ", negara2);
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

int kekuatanNuklir(const char *negara) {
    if (strcmp(negara, "Indonesia") == 0) return 3;
    if (strcmp(negara, "Israel") == 0) return 4;
    if (strcmp(negara, "Rusia") == 0) return 10;
    if (strcmp(negara, "Korut") == 0) return 5;
    if (strcmp(negara, "Korsel") == 0) return 6;
    return 3;
}

int kekuatanSeranganKritis(const char *negara) {
    if (strcmp(negara, "Indonesia") == 0) return 8;
    if (strcmp(negara, "Israel") == 0) return 7;
    if (strcmp(negara, "Rusia") == 0) return 4;
    if (strcmp(negara, "Korut") == 0) return 6;
    if (strcmp(negara, "Korsel") == 0) return 5;
    return 4;
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

int main() {
    printf(" /$$$$$$$  /$$$$$$$$ /$$$$$$$   /$$$$$$  /$$   /$$  /$$$$$$        /$$   /$$ /$$   /$$ /$$   /$$ /$$       /$$$$$$ /$$$$$$$ \n");
    printf("| $$__  $$| $$_____/| $$__  $$ /$$__  $$| $$$ | $$ /$$__  $$      | $$$ | $$| $$  | $$| $$  /$$/| $$      |_  $$_/| $$__  $$\n");
    printf("| $$  \\ $$| $$      | $$  \\ $$| $$  \\ $$| $$$$| $$| $$  \\__/      | $$$$| $$| $$  | $$| $$ /$$/ | $$        | $$  | $$  \\ $$\n");
    printf("| $$$$$$$/| $$$$$   | $$$$$$$/| $$$$$$$$| $$ $$ $$| $$ /$$$$      | $$ $$ $$| $$  | $$| $$$$$/  | $$        | $$  | $$$$$$$/\n");
    printf("| $$____/ | $$__/   | $$__  $$| $$__  $$| $$  $$$$| $$|_  $$      | $$  $$$$| $$  | $$| $$  $$  | $$        | $$  | $$__  $$\n");
    printf("| $$      | $$      | $$  \\ $$| $$  | $$| $$\\  $$$| $$  \\ $$      | $$\\  $$$| $$  | $$| $$\\  $$ | $$        | $$  | $$  \\ $$\n");
    printf("| $$      | $$$$$$$$| $$  | $$| $$  | $$| $$ \\  $$|  $$$$$$/      | $$ \\  $$|  $$$$$$/| $$ \\  $$| $$$$$$$$ /$$$$$$| $$  | $$\n");
    printf("|__/      |________/|__/  |__/|__/  |__/|__/  \\__/ \\______/       |__/  \\__/ \\______/ |__/  \\__/|________/|______/|__/  |__/\n\n");

    const char *negaraList[] = {"Rusia", "Indonesia", "Korut", "Korsel", "Israel"};
    srand(time(0));

    int pilihan1, pilihan2;
    bool isAI1 = false, isAI2 = false;

    printf("Pilih negara untuk Pemain 1:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, negaraList[i]);
    }
    printf("Masukkan pilihan: ");
    scanf("%d", &pilihan1);
    pilihan1--;

    const char *negaraPemain1 = negaraList[pilihan1];
    if (strcmp(negaraPemain1, "Indonesia") == 0) {
        clearScreen();
        tampilkanArtIndonesia();
    } else if (strcmp(negaraPemain1, "Rusia") == 0) {
        clearScreen();
        tampilkanArtRusia();
    } else if (strcmp(negaraPemain1, "Korut") == 0) {
        clearScreen();
        tampilkanArtKorut();
    } else if (strcmp(negaraPemain1, "Israel") == 0) {
        clearScreen();
        tampilkanArtIsrael();
    } else if (strcmp(negaraPemain1, "Korsel") == 0) {
        clearScreen();
        tampilkanArtKorsel();
    }

    printf("\nPilih lawan (1. Pemain 2 manusia, 2. Bot): ");
    int lawan;
    scanf("%d", &lawan);

    if (lawan == 1) {
        printf("Pilih negara untuk Pemain 2:\n");
        for (int i = 0; i < 5; i++) {
            if (i != pilihan1) {
                printf("%d. %s\n", i + 1, negaraList[i]);
            }
        }
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan2);
        pilihan2--;
    } else {
        isAI2 = true;
        do {
            pilihan2 = rand() % 5;
        } while (pilihan2 == pilihan1);
    }

    const char *negaraPemain2 = negaraList[pilihan2];

    // Teks ASCII sebagai intro umum
    printf(" /$$      /$$  /$$$$$$  /$$$$$$$  \n");
    printf("| $$  /$ | $$ /$$__  $$| $$__  $$\n");
    printf("| $$ /$$$| $$| $$  \\ $$| $$  \\ $$\n");
    printf("| $$/$$ $$ $$| $$$$$$$$| $$$$$$$/\n");
    printf("| $$$$_  $$$$| $$__  $$| $$__  $$\n");
    printf("| $$$/ \\  $$$| $$  | $$| $$  \\ $$\n");
    printf("| $$/   \\  $$| $$  | $$| $$  | $$\n");
    printf("|__/     \\__/|__/  |__/|__/  |__/\n");

    int kesehatanPemain1 = 20;
    int kesehatanPemain2 = 20;
    int giliran = 1;

    printf("Selamat datang di Permainan Perang Nuklir ASCII yang Lebih Rumit!\n");

    while (kesehatanPemain1 > 0 && kesehatanPemain2 > 0) {
        tampilkanStatusNuklir(kesehatanPemain1, kesehatanPemain2, negaraPemain1, negaraPemain2);

        if (giliran == 1) {
            tampilkanKarakterAscii();
            printf("\nGiliran %s!\n", negaraPemain1);
            int pilihan = pilihanPemain(negaraPemain1, isAI1);
            clearScreen();
            switch (pilihan) {
                case 1:
                    printf("%s meluncurkan nuklir dengan kekuatan %d\n", negaraPemain1, kekuatanNuklir(negaraPemain1));
                    kesehatanPemain2 -= kekuatanNuklir(negaraPemain1);
                    break;
                case 2:
                    printf("%s mempertahankan basis, menambah kesehatan sebesar 2\n", negaraPemain1);
                    kesehatanPemain1 += 2;
                    break;
                case 3:
                    printf("%s melakukan serangan kritis dengan kekuatan %d\n", negaraPemain1, kekuatanSeranganKritis(negaraPemain1));
                    kesehatanPemain2 -= kekuatanSeranganKritis(negaraPemain1);
                    break;
                default:
                    printf("Pilihan tidak valid, giliran dilewatkan!\n");
                    break;
            }
            if (kesehatanPemain2 < 0) kesehatanPemain2 = 0;
            giliran = 2;
        } else {
            tampilkanKarakterAscii();
            printf("\nGiliran %s!\n", negaraPemain2);
            int pilihan = pilihanPemain(negaraPemain2, isAI2);
            clearScreen();
            switch (pilihan) {
                case 1:
                    printf("%s meluncurkan nuklir dengan kekuatan %d\n", negaraPemain2, kekuatanNuklir(negaraPemain2));
                    kesehatanPemain1 -= kekuatanNuklir(negaraPemain2);
                    break;
                case 2:
                    printf("%s mempertahankan basis, menambah kesehatan sebesar 2\n", negaraPemain2);
                    kesehatanPemain2 += 2;
                    break;
                case 3:
                    printf("%s melakukan serangan kritis dengan kekuatan %d\n", negaraPemain2, kekuatanSeranganKritis(negaraPemain2));
                    kesehatanPemain1 -= kekuatanSeranganKritis(negaraPemain2);
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
        printf("\n%s menang!\n", negaraPemain2);
    } else {
        printf("\n%s menang!\n", negaraPemain1);
    }

    return 0;
}
