/*Да се напише програма каде од тастатура се внесува одреден износ на пари кој корисник го има на својата трансакциска сметка.
Потоа, во нов ред се внесуваат пет други износи оддвоени со празно место. Тие претставуваат некаква трансакција - одреден трошок
или добивка на пари. Програмата печати 1 доколку после извршените трансакции корисникот сеуште има пари на својата сметка, а 0 во
спротивно.*/
#include <stdio.h>
int main(){
    int sostojba, trosoci[4];
    scanf("%d", &sostojba);
    for (int i=0; i<5; i++) {
        scanf("%d", &trosoci[i]);
        sostojba+=trosoci[i];}
    if (sostojba>0) printf("1");
    else printf("0");
return 0;
    }