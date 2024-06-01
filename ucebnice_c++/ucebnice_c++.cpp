#include <iostream>
#include <string>
using namespace std;

void vypisPole(int pole[], int velikost); // Tato funkce vypíše prvky zadaného pole
double prumerPole(int pole[], int delka); // Tato funkce vrátí průměr prvků zadaného pole
int soucetPole(int pole[], int delka); // Tato funkce vrátí součet prvků zadaného pole
int secti(int a, int b); // Tato funkce vrátí součet dvou čísel

int main() {
    cout << "Vitejte v ucebnici o programovani! Pro zvoleni moznosti vyuzijte POUZE cislo pred moznosti" << endl;
    cout << " " << endl;
    cout << "1. Funkce" << endl;
    cout << "2. For cyklus" << endl;
    cout << "3. While cyklus" << endl;
    cout << "4. If podminka" << endl;
    cout << "5. Switch podminka" << endl;
    cout << "6. Datova pole" << endl;
    cout << "7. Promenna string" << endl;
    cout << "8. Komentare" << endl;
    cout << "9. Obecne informace o programovani" << endl;
    cout << "10. Informace o autorech" << endl;
    cout << "----------------------------------------------------" << ends;
    cout << " " << endl;
    cout << "Vyberte si moznost: " << ends;
    int moznost;
    cin >> moznost;
    cout << "----------------------------------------------------" << endl;
    int cisla[5] = { 1, 2, 3, 4, 5 };
    string jmeno = "John";
    string prijmeni = "Doe";
    switch (moznost) {
    case 1:
        cout << "Funkce je blok kodu, ktery je navrzen k provedeni urcite ulohy." << endl;
        cout << " " << endl;
        cout << "Jak funguje funkce:" << endl;
        cout << "1. Deklarace funkce - definuje typ navratove hodnoty, nazev funkce a parametry." << endl;
        cout << "2. Definice funkce - obsahuje telo funkce, ktere obsahuje kod, ktery se ma provest." << endl;
        cout << "3. Pouziti funkce - volani funkce v kodu." << endl;
        cout << " " << endl;
        cout << "Funkce se nejcasteji pise pod main() a deklarace nad main(), ale neni pravidlem, ze se to tak musi delat, jen to musi byt mimo main(). Dela se to pro lepsi prehlednost." << endl;
        cout << " " << endl;
        cout << "Syntaxe funkce: typ nazev_funkce(parametry) { Telo funkce }" << endl;
        cout << " " << endl;
        cout << "Priklad funkce, ktera secte dve cisla:" << endl;
        cout << "int secti(int a, int b) { return a + b; }" << endl;
        cout << " " << endl;
        cout << "Vysledek cisel 5 a 3: " << secti(5, 3) << endl;
        cout << "----------------------------------------------------" << ends;
        break;
    case 2:
        cout << "For cyklus opakuje kod, ktery se nachazi v jeho tele, dokud plati podminka. Inicializace se provede pouze jednou na zacatku, pote se vyhodnocuje podminka a po kazde iteraci se provede inkrementace." << endl;
        cout << " " << endl;
        cout << "Cely cyklus funguje tak, ze:" << endl;
        cout << "1. Inicializace - provede se pouze jednou na zacatku" << endl;
        cout << "2. Podminka - vyhodnocuje se na zacatku kazde iterace" << endl;
        cout << "3. Inkrementace - provede se na konci kazde iterace" << endl;
        cout << "4. Opakuje kroky 2 a 3, dokud neni podminka nepravdiva." << endl;
        cout << "Syntaxe for cyklu: for (inicializace; podminka; aktualizace) { Telo cyklu }" << endl;
        cout << " " << endl;
        cout << "Znazorneni priklad vypise sude cisla od 1-10:" << endl;
        cout << "for (int i = 0; i <= 10; i += 2) {cout << i << " "} " << endl;
        cout << " " << endl;
        cout << "Vysledek for cyklu: " << ends;
        for (int i = 0; i <= 10; i += 2) {
            cout << i << ", ";
        }
        cout << " " << endl;
        cout << "----------------------------------------------------" << ends;
        break;
    case 3:
        cout << "While cyklus" << endl;
        break;
    case 4:
        cout << "If podmínka" << endl;
        break;
    case 5:
        cout << "Switch podminka umoznuje provadet ruzne casti kodu na zaklade hodnoty vyrazu." << endl;
        cout << " " << endl;
        cout << "Jak funguje switch:" << endl;
        cout << "1. Vyhodnoti se vyraz za 'switch'." << endl;
        cout << "2. Porovna se hodnota vyrazu s hodnotami 'case'." << endl;
        cout << "3. Pokud se najde shoda, provede se kod za odpovidajicim 'case'." << endl;
        cout << "4. Pokud zadna shoda neni, provede se kod za 'default' (pokud je pritomen)." << endl;
        cout << "5. Po provedeni kodu se vykona 'break', pokud je pritomen, a tim se ukonci switch." << endl;
        cout << "Syntaxe switch podminky: switch (vyraz) { case hodnota1: // kod break; case hodnota2: // kod break; default: // kod }" << endl;
        cout << " " << endl;
        cout << "Priklad: Rozpoznani dne v tydnu na zaklade cisla:" << endl;
        cout << "int den = 3;" << endl;
        cout << "switch (den) {" << endl;
        cout << "    case 1:" << endl;
        cout << "        cout << 'Pondeli';" << endl;
        cout << "        break;" << endl;
        cout << "    case 2:" << endl;
        cout << "        cout << 'Utery';" << endl;
        cout << "        break;" << endl;
        cout << "    case 3:" << endl;
        cout << "        cout << 'Streda';" << endl;
        cout << "        break;" << endl;
        cout << "    case 4:" << endl;
        cout << "        cout << 'Ctvrtek';" << endl;
        cout << "        break;" << endl;
        cout << "    case 5:" << endl;
        cout << "        cout << 'Patek';" << endl;
        cout << "        break;" << endl;
        cout << "    case 6:" << endl;
        cout << "        cout << 'Sobota';" << endl;
        cout << "        break;" << endl;
        cout << "    case 7:" << endl;
        cout << "        cout << 'Nedele';" << endl;
        cout << "        break;" << endl;
        cout << "    default:" << endl;
        cout << "        cout << 'Neplatny den';" << endl;
        cout << "}" << endl;
        cout << " " << endl;
        cout << "Kdyz budeme chtit vypsat den, tak vysledek switch podminky je Streda, protoze v int je den = 3 a 3 se rovna pro case 3 => Streda." << endl;
        cout << " " << endl;
        cout << "----------------------------------------------------" << ends;
        break;
    case 6:
        cout << "Datova pole (arrays) jsou struktury, ktere umoznuji ulozit vice hodnot stejneho typu pod jeden nazev." << endl;
        cout << " " << endl;
        cout << "Syntaxe datoveho pole: typ pole[prvky];" << endl;
        cout << " " << endl;
        cout << "Priklady pro toto datove pole: int cisla[5] = {1, 2, 3, 4, 5};" << endl;
        cout << "Priklad c. 1: Ulozeni a zobrazeni prvku pole:" << endl;
        cout << "Kdyz budeme chtit pole vypsat tak vysledek je: ";
        vypisPole(cisla, 5);
        cout << " " << endl;
        cout << "Priklad c. 2: Vypocet prumeru v poli:" << endl;
        cout << "Prumer pole je: " << prumerPole(cisla, 5) << endl;
        cout << " " << endl;
        cout << "Priklad c. 3: Vypocet souctu v poli:" << endl;
        cout << "Soucet prvku pole je: " << soucetPole(cisla, 5) << endl;
        cout << " " << endl;
        cout << "Pro priklady byly pouzity funkce, ktere jsou definovany na zacatku programu v kodu." << endl;
        cout << "----------------------------------------------------" << ends;
        break;
    case 7:
        cout << "Promenna typu string umoznuje uchovavat textove hodnoty." << endl;
        cout << " " << endl;
        cout << "Priklad pouziti promenne typu string:" << endl;
        cout << "string jmeno = 'John';" << endl;
        cout << "string prijmeni = 'Doe';" << endl;
        cout << " " << endl;
        cout << "Vysledek promennych:" << endl;
        cout << "Jmeno: " << jmeno << endl;
        cout << "Prijmeni: " << prijmeni << endl;
        cout << "----------------------------------------------------" << ends;
        break;
    case 8:
        cout << "Komentare slouzi k popisu kodu a jsou ignorovany prekladacem." << endl;
        cout << " " << endl;
        cout << "Druhy komentaru:" << endl;
        cout << "1. Jednoradkovy komentar: // komentar" << endl;
        cout << "2. Viceradkovy komentar: /* komentar */" << endl;
        cout << " " << endl;
        cout << "Priklad pouziti komentaru:" << endl;
        cout << "// Toto je jednoradkovy komentar" << endl;
        cout << "/* Toto je viceradkovy komentar" << endl;
        cout << "Komentar pokracuje na dalsim radku" << endl;
        cout << "Komentar konci zde */" << endl;
        cout << " " << endl;
        cout << "----------------------------------------------------" << ends;
        break;
    case 9:
        cout << "Obecne informace o programovani:" << endl;
        cout << " " << endl;
        cout << "Programovani je proces tvorby a implementace sady instrukci, ktere pocitac vykonava k dosazeni urciteho vysledku." << endl;
        cout << " " << endl;
        cout << "Historie:" << endl;
        cout << "Programovani se vyvinulo jako reakce na potrebu automatizace v prubehu 20. stoleti." << endl;
        cout << "Prvni programy byly psany v strojovem kodu, ale pozdeji byly vyvinuty vyssi programovaci jazyky, ktere umoznily abstrakci a snadnejsi psani kodu." << endl;
        cout << "Mezi klicove milniky patri vznik jazyka Fortran v roce 1957, C v roce 1972, a nasledne jazyku C++ a Java." << endl;
        cout << "Dnes existuje sira skala programovacich jazyku, ktere se pouzivaji pro ruzne uceni, od weboveho vyvoje az po vyvoj softwaru pro vestavene systemy." << endl;
        cout << " " << endl;
        cout << "Soucasnost:" << endl;
        cout << "V dnesni dobe je programovani nezbytnou dovednosti v mnoha oborech, at uz jde o technologicky sektor, obchod, medicinu, vedu nebo umeni." << endl;
        cout << "Vyvoj softwaru a informacni technologie jsou dynamicke oblasti s neustalym rustem a inovacemi." << endl;
        cout << "Moderni vyvojari maji k dispozici bohate zdroje a nastroje, ktere jim umoznuji rychle vytvaret sofistikovane aplikace a systemy." << endl;
        cout << "----------------------------------------------------" << ends;
        break;
    case 10:
        cout << "Informace o autorech:" << endl;
        cout << " " << endl;
        cout << "Autor: Filip Novak" << endl;
        cout << "Procentualni podilenost: 30%" << endl;
        cout << " " << endl;
        cout << "Autor: Tomas Picha" << endl;
        cout << "Procentualni podilenost: 30%" << endl;
        cout << " " << endl;
        cout << "Autor: Jan Nosek" << endl;
        cout << "Procentualni podilenost: 20%" << endl;
        cout << " " << endl;
        cout << "Autor: Lukas Pavlat" << endl;
        cout << "Procentualni podilenost: 20%" << endl;
        cout << " " << endl;
        cout << "Program byl vytvoren v ramci predmetu Programovani na Stredni prumyslove skole, Teplice." << endl;
        cout << "Datum vytvoreni: 1. 6. 2024" << endl;
        cout << "----------------------------------------------------" << ends;
        break;
    default:
        cout << "Zadali jste neplatnou moznost." << endl;
    }
    cout << " " << endl;
    cout << "Chcete se vratit zpet na vyber? (ano/ne): " << ends;
    string navrat;
    cin >> navrat;
    if (navrat == "ano") {
        system("cls");
        main();
    }
}
void vypisPole(int pole[], int velikost) {
    for (int i = 0; i < velikost; i++) {
        cout << pole[i] << " ";
    }
    cout << endl;
}

double prumerPole(int pole[], int delka) {
    double soucet = 0;
    for (int i = 0; i < delka; i++) {
        soucet += pole[i];
    }
    return soucet / delka;
}

int soucetPole(int pole[], int delka) {
    int soucet = 0;
    for (int i = 0; i < delka; i++) {
        soucet += pole[i];
    }
    return soucet;
}

int secti(int a, int b) {
    return a + b;
}