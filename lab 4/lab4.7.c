/*Од стандарден влез се чита еден природен број n, по што се читаат n цели броеви. Да се најде најголемата разлика помеѓу два броја, од вака внесените броеви.*/
#include <stdio.h>
#include <math.h>
int main(){
int n;
scanf("%d", &n);
int a[n], raz=0;
for (int i=0; i<n; i++)
    scanf("%d", &a[i]);
for (int i=0; i<n; i++)
    for (int j=i+1; j<n; j++)
        if (abs(a[i]-a[j])>raz)
            raz=abs(a[i]-a[j]);
printf("Najgolema razlika: %d", abs(raz));
return 0;
}
