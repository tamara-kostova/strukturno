/*Од тастатура се читаат непознат број на позитивни цели броеви (со максимум 5 цифри) се додека не се внесе нешто различно од број. За секој број треба да се најде позицијата
(од десно на лево) на првото појавување на најголемата цифра во составот на бројот (цифрата на единици се наоѓа на позиција 0). Потоа, да се испечати статистика за позициите на 
најдените цифри со максимална вредност во следниот формат:
[позиција]: [вкупно броеви чија максимална цифра се наоѓа на таа позиција]
*/
#include <stdio.h>
int pozicijanamaxcifra (int n){
int max=0, p=0, i=0;
while (n>0){
    if (n%10>max) {max=n%10; p=i;}
    n/=10; i++;
}
return p;
}
int main()
{
    int n, a=0, b=0, c=0, d=0, e=0;
    while(scanf("%d", &n))
        switch (pozicijanamaxcifra(n)){
            case 0: e++; break; case 1: d++; break;
            case 2: c++; break; case 3: b++; break;
            case 4: a++; break;
    }
        printf("0: %d\n", e);
        printf("1: %d\n", d);
        printf("2: %d\n", c);
        printf("3: %d\n", b);
        printf("4: %d\n", a);
    return 0;
}
