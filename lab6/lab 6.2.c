/*Да се напише програма која за даден број К ќе дешифрира која буква во латинската азбука се појавува после К букви од почетната
буква C. К може да биде поголемо од бројот на букви во азбуката, при што броењето ќе продолжи од почеток (циклично). Се земаат во
предвид само големи букви. На влез се читаат C и К, а на излез се печати дешифрираната буква. Задачата да се реши користејќи низа
за големите букви од латинската азбука и при дешифрирање да се користат стандардните операции за низи.*/
#include <stdio.h>
int main(){
char c;
int k;
scanf("%c %d", &c, &k);
k%=26;
for (c; k>0; c++, k--);
    if (c>'Z') printf("%c", c-26);
    else printf("%c", c);
return 0;
}

