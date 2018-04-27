#include <stdio.h>

typedef enum {START, ZIEL} Type;

void zeichne(int spielfeld[3][3]);
int verschiebe(int spielfeld[3][3], int start, int ziel);
int eingabe(Type t);
int pruefe(int spielfeld[3][3]);

int main(void)
{
    int spielfeld[3][3] = { {1, 0, 0}, 
                            {2, 0, 0},
                            {3, 0, 0}};
    zeichne(spielfeld);
    // Spielfeld zeichnen
    // Eingabe
    int start = eingabe(START);
    int ziel = eingabe(ZIEL);
    // verschieben
        // Fehler?
    // pruefe
        // Fertig / Nochmal
    return 0;
}

void zeichne(int spielfeld[3][3])
{
    printf("  1     2     3\n");
    printf("  |     |     |\n");
    
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            switch(spielfeld[y][x])
            {
                case 0:
                    printf("  |  ");
                    break;
                case 1:
                    printf("  █  ");
                    break;
                case 2:
                    printf(" ███ ");
                    break;
                case 3:
                    printf("█████");
                    break;
                break;
            }
            printf(" ");
        }
        printf("\n");
    }
}

int eingabe(Type t)
{
    int wert = 0;
    printf("Bitte geben sie %s ein: ", (t == START ? "den Start" : "das Ziel"));
    scanf("%d", &wert);
    return wert;
}

int verschiebe(int spielfeld[3][3], int start, int ziel)
{
    // Obersten Stein finden (start)
        // Wenn Stange leer -> Abbruch mit Fehler

    // Obersten Stein finden (ziel) -> Freies Feld ist darueber

    // Vergleiche groessen
        // ggf. Abbruch mit Fehler

    // Bewege Steine
}

int pruefe(int spielfeld[3][3])
{
    return spielfeld[0][2] != 0;
}
