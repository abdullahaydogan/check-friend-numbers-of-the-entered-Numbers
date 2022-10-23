#include <stdio.h>
#include <stdlib.h>

      int sum1=0,sum2=0;
     void kontrol(int *a, int *b){
     for(int i=0;i< *a;i++){
            if(*a %i==0){
                sum1 +=i;
            }
         }
     for(int i=0;i< *b;i++){
        if(*b %i==0){
            sum2 +=i;
        }
     }
     if(sum1==*b && sum2==*a){
        printf("Girdiginiz syilar arkadas sayilardir... \n");
     }
     else{printf("Girdiginiz sayilar arkadas sayi degildir\n");}
     }

int main()
{

    int a,b;
    int *pnt1=&a;
    int *pnt2=&b;
    printf("Iki sayi giriniz=");
    scanf("%d%d",&a,&b);
    kontrol(&a,&b);


    return 0;
}
