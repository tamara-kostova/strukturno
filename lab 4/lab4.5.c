/*Да се напише код којшто од стандарден влез ќе чита информации за една фискална сметка на следниов начин:
напрво се чита број N
потоа ќе читаат уште N парови на вредности од следниот формат: износ тип_на_данаок
пр. 5 100 А 50 B 66 A 77 B 88 V
каде што првата вредност во парот изнесува износот на некој купен артикал, додека пак втората вредност е карактер (A, B, V) што означува каков тип на данок на додадена вредност се пресметува за тој артикал:
А означува 18%
B означува 5%
V означува 0%
Да се испечати на стандарден излез колку ќе изнесува повратокот на ДДВ за фискалната сметка што е вчитана од стандарден влез. Повратокот на ДДВ се пресметува како 15% од вкупно наплатеното ДДВ.*/
#include <stdio.h>
int main(){
int n;
float ddv=0;
scanf("%d", &n);
int a[n];
char c[n];
for (int i=0; i<n; i++){
    scanf("%d %c",&a[i], &c[i]);
    if (c[i]=='A')
            ddv+=a[i]*0.18;
    if (c[i]=='B')
            ddv+=a[i]*0.05;
}
printf("Total tax return is: %.2f", 0.15*ddv);
}
