/*Од стандарден влез се вчитуваат следните податоци за еден студент на ФИНКИ:

индекс (шестцифрен цел број)
шест оценки од последниот семестар кој го слушал
Да се напише програма која што на стандарден излез ќе ги испечати следните информации за студентот: (погледнете во тест примерите за форматот на печатење)

просек на студентот
просекот да се испечати со точност од 3 децимали
година на студии
студентите чијшто индекс почнува на 17 се трета година, на 16 се четврта година, на 15 се петта година итн.
дали е награден (1 = награден, 0 = не е награден)
Еден студент се наградува доколку има просек еднаков или поголем од 9.5*/
#include <stdio.h>
int main(){
    int indeks, ocena[6], suma=0, nagraden;
    scanf ("%d", &indeks);
    for (int i=0; i<6; i++) {
            scanf("%d", &ocena[i]);
            suma+=ocena[i];}
    printf("Prosek: %.3f\n", suma/6.0);
    printf("Student: %d\n", indeks);
    int godina=indeks/10000;
    printf ("%d godina\n", 20-godina);
    if (suma/6.0>=9.5)
        nagraden=1;
    else nagraden=0;
    printf("Nagraden: %d", nagraden);
return 0;
    }
