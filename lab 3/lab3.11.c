/*Да се напише програма во која од стандарден влез се чита мобилен број во следниот формат XXYYYZZZ (пр. 71298486).
Програмата треба да го испечати во формат XXX/YYY-ZZZ (пр. 071/298-486). Дополнително, треба да го испечати и името на иницијалниот оператор:
070/071/072 - T-Mobile,
075/076/077/078 - А1.
079 - Lycamobile*/
#include <stdio.h>
int main(){
int n;
scanf("%d", &n);
int a=n/1000000, b=(n/1000)%1000, c=n%1000;
printf("0%d/%03d-%03d ", a, b, c);
if (a<=72) printf("T-mobile");
else if (a<=78) printf("A1");
else printf("LycaMobile");
return 0;
}