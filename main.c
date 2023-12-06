#include <stdio.h>

int main() {
    int number1,number2,temporaryNumber,flag;  //Değişkenleri atıyoruz.
    float sum,bolumSayisi;
    printf("Aralarindaki Asal Sayilari Bulacagimiz 2 Tane Sayi Giriniz\n");
    first:
    if(scanf("%d",&number1)!=1){        //Kullanıcıdan 1. değeri alıyoruz.
        printf("Lutfen Sadece Sayi Giriniz\n1. Sayiyi Tekrar Giriniz\n");
        fflush(stdin);
        goto first;
    }
    second:
    if(scanf("%d",&number2)!=1){        //Kullanıcıdan 2. değeri alıyoruz.
        printf("Lutfen Sadece Sayi Giriniz\n2. Sayiyi Tekrar Giriniz\n");
        fflush(stdin);
        goto second;
    }

    if(number1>number2){               //Girilen ilk sayı daha küçük değilse 2. sayıyla yerini değiştiriyoruz.
        number1=temporaryNumber;
        number1=number2;
        number2=temporaryNumber;
    }
    printf("Asal Sayilariniz\n-------------------------\n");
    for (int i = number1; i <= number2; ++i) {  //for döngüsüyle (sayi1,sayi2) aralıklarını i değişkeniyle teker teker dönüyoruz.
        flag=0;                                  //Her başa döndüğümüzde flag değerini sıfırlayıp diğer sayı için hazır hale getiriyoruz.
        for (int j = 2; j <i ; ++j)             //for döngüsüyle j değişkenini 2 den başlatıp i' ye kadar artırıyoruz.
        {
            if(i%j == 0)                        // Eğer i%j 0' a eşitse flag değişkenini 1 artırıyoruz.
            {
                flag++;
            }
        }
        if(flag==0&&i!=1&&i>0)                      //Eğer flag değişkeni 2. for döngüsünde artmamışsa
        {
            bolumSayisi++;                     //bolumSayisi' ni 1 artırıyoruz,
            printf("\t%d\n",i);
            sum=sum+i;                         //Toplamı i kadar artırıyoruz.
        }

    }                                          //Son olarak da mesajı yazıp istenilen değerleri giriyoruz.
    printf("\tAsal Sayilarin Toplami : %0.1f\n\tToplam Asal Sayi : %0.0f\n\tAsal Sayilarin Ortalamasi : %f",sum,bolumSayisi,sum/bolumSayisi);
   return 0;
}
