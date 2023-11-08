#include <stdio.h>

int main() {
    int number1,number2,temporaryNumber,flag;
    float sum,bolumSayisi;
    printf("Aralarindaki Asal Sayilari Bulacagimiz 2 Tane Dogal Sayi Giriniz\n");
    scanf("%d%d",&number1,&number2);

    if(number1>number2){
        number1=temporaryNumber;
        number1=number2;
        number2=temporaryNumber;
    }
    if(number1<0){
        printf("Yanlis Tuslama 0 dan Kucuk Sayi %d Giremezsiniz",number1);
        return 1;}
    for (int i = number1+1; i < number2; ++i) {
        flag=0;
        for (int j = 2; j <i ; ++j)
        {
            if(i%j == 0)
            {
                flag++;
            }
        }
        if(flag==0&&i!=1)
        {
            bolumSayisi++;
            printf("%d\n",i);
            sum=sum+i;
        }

    }
    printf("\tAsal Sayilarin Toplami : %0.1f\n\tToplam Asal Sayi : %0.0f\n\tAsal Sayilarin Ortalamasi : %f",sum,bolumSayisi,sum/bolumSayisi);



    return 0;
}
