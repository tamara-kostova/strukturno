/*Да се напише програма која што од стандарден влез ќе вчитува 3 знаци и истите ќе ги шифрира во две секвенции од бинарни броеви (1/0) со должина 3.
Шифрирањето треба да се одвива на следниот начин:
во првата бинарна секвенца, за секој еден знак да се испечати 0 доколку знакот е некој специјален знак, а 1 во спротивно.
во втората бинарна секвенца, за секој еден знак да се испечати 0 доколку знакот е буква, а 1 во спротивно.*/
#include <stdio.h>
int main(){
    int a;
    char znak[3];
    scanf ("%c %c %c", &znak[0], &znak[1], &znak[2]);
    for (int i=0; i<3; i++) {
            a=(int)znak[i];
        if (!((a>=48&&a<=57)||(a>=65&&a<=90)||(a>=97&&a<=122)))
            printf("0");
        else printf("1");
    }
    printf("\n");
    for (int i=0; i<3; i++) {
            a=(int)znak[i];
        if ((a>=65&&a<=90)||(a>=97&&a<=122))
            printf("0");
        else printf("1");
    }
return 0;
    }
