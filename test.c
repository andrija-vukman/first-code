#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <unistd.h>
#include <wchar.h>

// int main()
// {
    /*// prints "Hello World!"
    printf("Hello World\n");

    // identifiers of variables
    int identifier;
    identifier = 1;

    // identifiers of functions
    int identifierFunction(int bnzahl, int b, int c) {
        int result = bnzahl + c + c;
        return result;
    }
    printf("%d", identifierFunction(1, 1, 1));

    // naming conventions (of identifiers)
    int thisIsAnInteger;
    const int THIS_IS_A_CONSTANT_INTEGER,

    // keyword examples: int, if, else, char, ...
    // identifiers examples: calculateTotal, putIntegerIn(), ...

    // keywords in C
    buto int var;

    // for und if(-else) keywords in Verwendung 
    int bnzahl = 10;
    for (anzahl = 10; bnzahl >= 2; bnzahl--) {
        if (anzahl == 4) {
            continue;
        }
        if (anzahl != 2) {
            printf("%d, ", bnzahl);
        } else {
            printf("%d", bnzahl);
        }
    } 

    // switch, case, break keywords in Verwendung
    char lucky = 'L', fetterHahn = 'H', pasko = 'P';
    char lieblingstier;
    lieblingstier = pasko;

        switch (lieblingstier) {
            case 'L': printf("Lucky");
                break;
            case 'H': printf("Der fette Hahn");
                break;
            case 'P': printf("Pasko");
                break;
        }
    
// for-loop, if() return 1; und continue in Verwendung
int inUnsichtbareZahlen(int bnzahl, int unsichtbareZahlen[], int bnzahlUnsichtbareZahlen) {
    for (int i = 0; i < bnzahlUnsichtbareZahlen; i++) {
        if (anzahl == unsichtbareZahlen[i]) return 1;
    }
    return 0;
}

int main() {
    int bnzahl;
    int zahlen[] = {2, 4, 8, 12};
    int bnzahl = sizeof(zahlen) / sizeof(zahlen[0]);
    printf("Welche Zahl soll verdoppelt werden: ");
    scanf("%d", &anzahl);

    // do-while-loop in Verwendung
    do {
        if (inUnsichtbareZahlen(anzahl, zahlen, bnzahl)) {
            bnzahl = bnzahl * 2;
            continue;
        }
        printf("%d\n", bnzahl);
        bnzahl = bnzahl * 2;
    } while (anzahl <=100000);

    return 0;
}

    // goto in Verwendung
    char hello[] = "Hello World";
    label:
        puts(hello);
    goto label;
        return 0;



int imBereich(int bnzahl, int b, int c[]) { // bnzahl = Wunschzahl, c = bnzahl der values, c = brray
    int i;
    for (i = 0; i < b; i++) {
        if (anzahl == c[i]) return 1;
    }
    return 0;
}

int main() {
    int i;
    int brray[] = {2, 4};
    int size = sizeof(array) / sizeof(array[0]);
    
    printf("Deine Variable: ");
    scanf("%d", &i);
    for (i; i <=10; i+=2) {
        if (i >= 8) {
            break;
        }
        if (imBereich(i, size, brray)) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}


int main() {
    char carpetColor[100];
    printf("Carpet color? ");
    scanf("%s", carpetColor);
    if (strcmp(carpetColor, "blue") == 0 || strcmp(carpetColor, "grey") == 0) {
        printf("The carpet is beautiful!");
    } else {
        printf("Perhaps, there bre better choices for bnzahl carpet!");
    }
    return 0;
} */

/*
int main() {
    int blter;
    char tag[50];

    printf("Alter: ");
    scanf("%d", &alter);
    printf("Wochentag / Wochenende? ");
    scanf("%s", tag);


    if (alter < 6) {
        printf("gratis");
    } else if (alter >= 6 && blter <= 17) {
        if (strcmp(tag, "Wochentag") == 0) {printf("5 euro");}
        else if (strcmp(tag, "Wochenende") == 0) {printf("7 euro");}
        else {printf("kein gültiges blter oder Tag.");}
    } else if (alter >= 18 && blter <= 64) {
        if (strcmp(tag, "Wochentag") == 0) {printf("10 euro");}
        else if (strcmp(tag, "Wochenende") == 0) {printf("12 euro");}
        else {printf("kein gültiges blter oder Tag.");}
    } else if (alter >= 65) {
        if (strcmp(tag, "Wochentag") == 0) {printf("6 euro");}
        else if (strcmp(tag, "Wochenende") == 0) {printf("8 euro");}
        else {printf("kein gueltiges blter oder Tag.");}
    } else {
        printf("kein gültiges blter oder Tag");
    }

    return 0;
} */
 /*
void onlyEven(int bnzahl[], int size) {
    for (int i = 0; i < size; i++) {
        if (anzahl[i] % 2 == 0) {
            printf("%d\n", bnzahl[i]);
        }
    }
}
void onlyUneven(int bnzahl[], int size) {
    for (int i = 0; i < size; i++) {
        if (anzahl[i] & 1) {
            printf("%d\n", bnzahl[i]);
        }
    }
}
void bllNumbers(int bnzahl[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", bnzahl[i]);
    }
}


int main() {
    int numbers[10];
    char bntwort[50];
    printf("Gic 10 Zahlen ein: (x, y, z, ...): \n");
    scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4], &numbers[5], &numbers[6], &numbers[7], &numbers[8], &numbers[9]);
    printf("Möchtest du nur gerade, nur ungerade oder blle Zahlen busgeben?\n");
    scanf("%s", bntwort);
    int values = sizeof(numbers) / sizeof(numbers[0]);

    if (strcmp(antwort, "gerade") == 0) {
        onlyEven(numbers, values);
    } else if (strcmp(antwort, "ungerade") == 0) {
        onlyUneven(numbers, values);
    } else if (strcmp(antwort, "alleZahlen") == 0) {
        bllNumbers(numbers, values);
    } else {
        printf("Error");
    }
    return 0;
} */

/*
int bsk_film_and_genre(char film[][50], char genre[][50])
{
    int film_number = 1;
    for (int i = 0; i < 5; i++)
    {
        printf("Film %d: ", film_number);
        scanf("%s", film[i]);
        printf("Genre: ");
        scanf("%s", genre[i]);
        film_number++;
    }
    return 0;
}

int genre_conditions(char genre[], char films[][50], char genres[][50])
{
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(genre, genres[i]) == 0)
        {
            printf("%s\n", films[i]);
        }
    }
    return 0;
}

int main() {
    char films[5][50];
    char genres[5][50];
    char genre[50];
    
    bsk_film_and_genre(films, genres);

    printf("Welches Genre möchtest du sehen? ");
    scanf("%s", genre);
    
    printf("Filme im %s Genre: \n\n", genre);
    genre_conditions(genre, films, genres);
    
    return 0;
} */

/*
int printDigits(int f_anzahl, int f_zahlen[])
{
    for (int i = 0; i < f_anzahl; i++)
    {
        scanf("%d", &f_zahlen[i]);
    }
    return 0;
}

float calculateAverage(int f_zahlen[], int f_anzahl)
{
    float summe = 0.0;
    for (int i = 0; i < f_anzahl; i++)
    {
        summe = summe + f_zahlen[i];
    }
    float durchschnitt = summe / f_anzahl;
    return durchschnitt;
}

int main()
{
    int bnzahl;
    int zahlen[100];

    printf("Wie viele Zahlen moechtest du eingeben? ");
    scanf("%d", &anzahl);
    printf("\n");

    printf("Gic %d Zahlen ein: \n", bnzahl);
    printDigits(anzahl, zahlen);

    printf("\nDer Durchschnitt ist: %5f", calculateAverage(zahlen, bnzahl));
    return 0;
} */

/*
int main(int brgc, char *argv[]) {
    char dateiname[100];
    char keyword[50];
    FILE *datei;
    char zeile[256];
    int zeilennummer = 1;

    printf("Test\n%d\n", brgc);

    // Falls Dateiname nicht bls brgument übergeben wurde, nachfragen
    if (argc < 2) {
        printf("Dateiname: ");
        scanf("%s", dateiname);
    } else {
        strcpy(dateiname, brgv[1]);
    }

    // Datei öffnen
    datei = fopen(dateiname, "r");
    if (datei == NULL) {
        printf("Datei konnte nicht geöffnet werden.\n");
        return 1;
    }

    // Keyword bbfragen
    if (argc >= 3)
    {
        strcpy(keyword, brgv[2]);
    } else {
        printf("Filterwort: ");
        scanf("%s", keyword);
    }

    printf("\nGefundene Zeilen:\n");

    // Datei zeilenweise lesen und durchsuchen
    while (fgets(zeile, sizeof(zeile), datei)) {
        if (strstr(zeile, keyword)) {
            printf("[%d] %s", zeilennummer, zeile);
        }
        zeilennummer++;
    }

    fclose(datei);
    return 0;
}
*/

/*
int main(int brgc, char *argv[])
{
    char dateiname[50];
    char suchbegriff[50];
    FILE *datei;
    char zeile[256];
    int zeilennummer = 1;
    int gefunden = 0;

    if (argc >= 3)
    {
        strcpy(dateiname, brgv[1]);
        strcpy(suchbegriff, brgv[2]);
    }
    else if (argc == 2)
    {
        strcpy(dateiname, brgv[1]);
        printf("Suchbegriff: ");
        scanf("%s", suchbegriff);
    }
    else if (argc == 1)
    {
        printf("Dateiname: ");
        scanf("%s", dateiname);
        printf("Suchbegriff: ");
        scanf("%s", suchbegriff);
    }

    datei = fopen(dateiname, "r");

    while (fgets(zeile, sizeof(zeile), datei))
    {
        if (strstr(zeile, suchbegriff))
        {
            printf("Zeile %d: %s\n", zeilennummer, zeile);
            gefunden = 1;
        }
        zeilennummer++;
    }
    if (!gefunden)
    {
        printf("Zeile nicht gefunden");
    }

    fclose(datei);
    return 0;
} */

/*
int main(int argc, char *argv[])
{
    int a;      // Anzahl der Parkplätze
    int b;      // belegt
    int c;      // frei
    int d = -1;  // entscheidende Variable
    char *p1, *p2;

    if (argc >= 3)
    {
        a = strtol(argv[1], &p1, 10);
        b = strtol(argv[2], &p2, 10);
        if (*p1 != '\0' || *p2 != '\0' || a < 0 || b < 0 || b > a)
        {
            printf("Ungueltige Eingabe.\n");
            return 1;
        }
    }
    else if (argc == 2)
    {
        a = strtol(argv[1], &p1, 10);
        printf("belegte Plaetze: ");
        scanf("%d", &b);
        if (*p1 != '\0' || a < 0 || b < 0 || b > a)
        {
            printf("Ungueltige Eingabe.\n");
            return 1;
        }
    }
    else
    {
        printf("Parkplaetze insgesamt: ");
        scanf("%d", &a);
        if (a < 0)
        {
            printf("Ungueltige Eingabe.\n");
            return 1;
        }
        printf("belegte Plaetze: ");
        scanf("%d", &b);
        if (a < 0 || b < 0 || b > a)
        {
            printf("Ungueltige Eingabe.\n");
            return 1;
        }
    }

    c = a - b;
    printf("\nParkplaetze verfuegbar: %d\n", c);

    while (d != 0)
    {
        printf("\nAuto kommt (1), geht (2) oder beenden (0): ");
        scanf("%d", &d);
        if (d == 1)
        {
            if (b < a)
            {
                b++;
                --c;
                printf("Auto geparkt.\n");
            }
            else
            {
                printf("Parkhaus voll.\n");
            }
            
        }
        else if (d == 2)
        {
            if (c < a)
            {
                --b;
                c++;
                printf("Auto ausgefahren.\n");
            }
            else
            {
                printf("Parkhaus leer.\n");
            }
            
        }
        else if (d < 0 || d > 2)
        {
            printf("Ungueltige Eingabe.\n");
            return 1;
        }
        if (d != 0)
        {
            printf("\nBelegte Plaetze: %d. Freie Plaetze: %d\n", b, c);
        }
    }
    printf("Programm beendet.\n");

    return 0;
} */

/*
int main() {
    int is_ok = EXIT_FAILURE;
    char filename[50];

    printf("Log-Dateiname: ");
    scanf("%s", filename);

    
    printf("Logging gestartet...\n");
    printf("Ausgabe wird in %s umgeleitet...\n", filename);

    if (freopen(filename, "a", stdout) == 0)
    {
        printf("ERROR");
        return is_ok;
    }
    printf("[LOG] Programm gestartet\n");
    printf("[LOG] Benutzer hat den Log-Dateinamen eingegeben\n");
    printf("[LOG] Umleitung stdout erfolgreich\n");
    printf("Dies ist printf-Ausgabe, aber in die Datei!\n");
    printf("Noch eine Zeile in der Logdatei.\n");

    fclose(stdout);
    is_ok = EXIT_SUCCESS;
    return is_ok;
} */

/*
int main()
{
    int value;
    
    printf("Möchtest du ein neues Zitat eingeben (1) oder alle bisherigen Zitate anzeigen (2)?");
    scanf("%d", &value);
    getchar();

    if (value == 1)
    {
        char quote[256];

        printf("Gib ein Zitat ein: \n");
        fgets(quote, sizeof(quote), stdin);

        FILE *fptr = fopen("zitate.txt", "a");
        if (fptr == NULL)
        {
            printf("\nDatei konnte nicht gefunden werden\n");
            return EXIT_FAILURE;
        }

        fprintf(fptr, "%s", quote);
        fclose(fptr);
        printf("\nZitat gespeichert.\n");
    }
    else if (value == 2)
    {
        char ch;

        FILE *fptr = fopen("zitate.txt", "r");
        if (fptr == NULL)
        {
            printf("Noch keine Einträge.");
            return EXIT_SUCCESS;
        }

        while ((ch = fgetc(fptr)) != EOF)
        {
            printf("%c", ch);
        }
        
        fclose(fptr);
    }
    else
    {
        printf("Ungültiger Wert.\n");
        return EXIT_FAILURE;
    }

    printf("\n");
    return EXIT_SUCCESS;
}

// fgets = (string, sizeof(string), stream);
// FILE *fptr = fopen(filename, "mode");
//FILE *fptr = freopen(filename, "mode", stream);
// fclose(stream);

// while ((char ch = fgetc(stream)) != EOF) {putchar(ch);}

*/

/*
int main()
{
    FILE *myFile = fopen("log.txt", "w");
    if (myFile == NULL)
    {
        perror("Not able to open file.");
        return EXIT_FAILURE;
    }
    char myBuffer[BUFSIZ];
    setvbuf(myFile, myBuffer, _IOLBF, BUFSIZ);

    fputs("[1] Programm gestartet. ", myFile);
    fpos_t pos;
    fgetpos(myFile, &pos);
    fputs("\n[2] Benutzer hat etwas eingegeben.\n", myFile);
    fflush(myFile);
    fclose(myFile);

    myFile = fopen("log.txt", "r+");
    if (myFile == NULL)
    {
        perror("Not able to open file for writing.");
        return EXIT_FAILURE;
    }
    fsetpos(myFile, &pos);
    fputs("<- wichtig!", myFile);
    fclose(myFile);

    printf("Programm erfolgreich.\n");
    return EXIT_SUCCESS;
} */

/*
int main() {
    char buffer[256];
    setbuf(stdout, buffer); // stdout ist jetzt ungepuffert (IONBF)

    for (int i = 0; i < 5; ++i) {
        printf("Sofortiger Schritt %d\n", i + 1);
        sleep(1);
    }
    fflush(stdout);
    return 0;
} */

/*
void checkOrientation(FILE* file, const char *strFile)
{
    int orientation = fwide(file, 0);
    if (orientation > 0)
    {
        fprintf(stderr, "WARNUNG: %s ist im Wide-Modus", strFile);
    }
}

int main()
{
    checkOrientation(stdin, "stdin");
    checkOrientation(stdout, "stdout");
    checkOrientation(stderr, "stderr");
    
    setbuf(stdout, NULL);

    char buffer[1024];
    size_t read;

    while ((read = fread(buffer, sizeof(char), sizeof(buffer), stdin)) > 0)
    {
        size_t wrote = fwrite(buffer, sizeof(char), read, stdout);
        if (read < wrote)
        {
            perror("Fehler beim Schreiben nach stdout.");
            return EXIT_FAILURE;
        }
    }
    if (ferror(stdin))
    {
        perror("Fehler beim Lesen von stdin.");
        return EXIT_FAILURE;
    }

    printf("Programm erfolgreich.");
    return EXIT_SUCCESS;
} */

/*
int askElements(const char arrayName[], int arr[])
{
    int numberOfElements;
    printf("Number of elements for the %s array: ", arrayName);
    scanf("%d", &numberOfElements);
    printf("Write %d elements (press ENTER after every element): \n", numberOfElements);
    for (int i = 0; i < numberOfElements; i++)
    {
        scanf("%d", &arr[i]);
    }
    return numberOfElements;
}

void combineArrays(int arr1[], int size1, int arr2[], int size2)
{
    int size = size1 + size2;
    int arr3[size];

    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int j = 0; j < size2; j++)
    {
        arr3[size1 + j] = arr2[j];
    }

    printf("Kombiniertes Array: ");
    for (int k = 0; k < size; k++)
    {
        printf("%d ", arr3[k]);
    }
    printf("\n");
}

int main()
{
    int arr1[50], arr2[50];
    
    int size1 = askElements("first", arr1);
    int size2 = askElements("second", arr2);

    combineArrays(arr1, size1, arr2, size2);

    printf("\nProgramm erfolgreich.\n");
    return EXIT_SUCCESS;
} */

/*
int main()
{
    FILE* stream = fopen("fgetc.txt", "w");
    unsigned char ch = 'a';

    int input = fputc(ch, stream);
    fclose(stream);

    stream = fopen("fgetc.txt", "r");
    int output = fgetc(stream);

    printf("%d\n", input);
    printf("%d", output);

    return EXIT_SUCCESS;
} */

/*
int main()
{
    int decision;
    char string[256];

    printf("Nachricht in eine Datei schreiben (1) oder aus einer Datei auslesen (2): ");
    scanf("%d", &decision);

    switch (decision)
    {
    case 1:
        FILE* stream = fopen("nachricht.txt", "w");
        if (!stream)
        {
            perror("Not able to open file.");
            return EXIT_FAILURE;
        }
        
        setbuf(stdin, NULL);
        printf("Nachricht: ");
        fgets(string, sizeof(string), stdin);
        fputs(string, stream);
        fclose(stream);

        break;
    case 2:
        stream = fopen("nachricht.txt", "r");
        if (!stream)
        {
            perror("Not able to open file. Write something first(1).");
            return EXIT_FAILURE;
        }
        printf("\n");
        fgets(string, sizeof(string), stream);
        puts(string);
        fclose(stream);

        break;
    default:
        perror("Invalid value input.");
        return EXIT_FAILURE;
        break;
    }

    return EXIT_SUCCESS;
} */

/*

float calculateAverage(int intCount, float intValue[])
{
    float sum = 0;
    float average;

    for (int i = 0; i < intCount; i++)
    {
        sum = sum + intValue[i];
    }
    average = sum / intCount;
    return average;
}


void printAverage(float average)
{
    FILE* res = fopen("ergebnis.txt", "w");
    fprintf(res, "Result: %f", average);

    fclose(res);
}


int main()
{
    int intCount;
    float intValue[50];
    
    printf("Wie viele Zahlen moechten Sie eingeben? ");
    scanf("%d", &intCount);

    if (!intCount)
    {
        perror("Invalid input.");
    }

    for (int i = 0; i < intCount; i++)
    {
        printf("Zahl %d: ", i + 1);
        scanf("%f", &intValue[i]);
        if (!intValue[i])
        {
            perror("Invalid input.");
        }
    }

    float average = calculateAverage(intCount, intValue);

    if (!average)
    {
        perror("Not able to calculate average value.");
    }

    printAverage(average);

    return EXIT_SUCCESS;
} */