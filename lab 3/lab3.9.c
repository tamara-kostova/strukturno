/*Пресметајте ја цената за електрична енергија која еден корисник треба да ја плати, во зависност од тоа колку kWh потрошил.
За помалку 500 kWh се наплаќа 5 ден/kWh. Ако трошокот ја надмине оваа граница, тогаш за наредните 150 kWh се наплаќа 7.5 ден/kWh,
за наредните 200 kWh се наплаќа 11 ден/kWh, а за секој трошок над тоа се доплаќа уште 13.5 ден/kWh. На крајот на сметката се
додава 10% ДДВ доколку изнесува 7000 денари или помалку, додека ако изнесува повеќе од тоа, се додава 18% ДДВ.*/
#include <stdio.h>
int main(){
float kwh, smetka, ddv;
scanf("%f", &kwh);
if (kwh<500) smetka=5*kwh;
else{
smetka=5*500;
kwh-=500;
    if (kwh-150<=0) smetka+=kwh*7.5;
    else{
        smetka+=150*7.5;
        kwh-=150;
            if (kwh-200<=0) smetka+=kwh*11;
                else{
                    smetka+=200*11;
                    kwh-=200;
                        if (kwh>0) smetka+=kwh*13.5;
                }
    }
}
if (smetka<=7000) ddv=0.1*smetka;
else ddv=0.18*smetka;
printf("%.2f", smetka+ddv);
return 0;
}