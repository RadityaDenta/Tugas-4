#include <iostream>
#include <conio.h>

using namespace std;
class bangun
{
 protected:
       double x,y,z;
  public:
       virtual void get_data()=0;
       virtual void display_area()=0;
};


class persegi : public bangun
{
   public:
    void get_data(void)
    {
       cout<<"\n\nMenghitung Luas Persegi\n\n";
       cout<<"Sisi 1 = "; cin>>x;
       cout<<"Sisi 2 = "; cin>>y;
    }
    void display_area(void)
    {
       double luas;
       luas = x * y;
       cout<<"Luas Persegi = "<<luas;
    }
};

class persegi_panjang : public bangun
{
   public:
    void get_data(void)
    {
       cout<<"\n\nMenghitung Luas Persegi Panjang\n\n";
       cout<<"Panjang = "; cin>>x;
       cout<<"Lebar   = "; cin>>y;
    }
    void display_area(void)
    {
       double luas;
       luas = x * y;
       cout<<"Luas Persegi Panjang = "<<luas;
    }
};

class segitiga : public bangun
{
   public:
    void get_data(void)
    {
       cout<<"\n\nMenghitung Luas Segitiga\n\n";
       cout<<"Alas   = "; cin>>x;
       cout<<"Tinggi = "; cin>>y;
    }
    void display_area(void)
    {
       double luas;
       luas = 0.5 * x * y;
       cout<<"Luas Segitiga = "<<luas;
    }
};

class jajaran_genjang : public bangun
{
   public:
    void get_data(void)
    {
       cout<<"\n\nMenghitung Luas Jajaran Genjang\n\n";
       cout<<"Alas   = "; cin>>x;
       cout<<"Tinggi = "; cin>>y;
    }
    void display_area(void)
    {
       double luas;
       luas = 0.5 * x * y;
       cout<<"Luas Jajaran Genjang = "<<luas;
    }
};

class trapesium : public bangun
{
   public:
    void get_data(void)
    {
       cout<<"\n\nMenghitung Luas Trapesium\n\n";
       cout<<"Sisi 1 = "; cin>>x;
       cout<<"Sisi 2 = "; cin>>y;
       cout<<"Tinggi = "; cin>>z;
    }
    void display_area(void)
    {
       double luas;
       luas = (x + y) * z * 0.5;
       cout<<"Luas Trapesium = "<<luas;
    }
};

class lingkaran : public bangun
{
   public:
    void get_data(void)
    {
       cout<<"\n\nMenghitung Luas Lingkaran\n\n";
       cout<<"Jari-jari = "; cin>>x;
    }
    void display_area(void)
    {
       double luas;
       luas = x * x * 3.14;
       cout<<"Luas Lingkaran = "<<luas;
    }
};



int main()
{
system("cls");
persegi segi;
persegi_panjang panjang;
segitiga tiga;
jajaran_genjang genjang;
trapesium sium;
lingkaran lingkar;


bangun *list[6];

list[0]=&segi;
list[1]=&panjang;
list[2]=&tiga;
list[3]=&genjang;
list[4]=&sium;
list[5]=&lingkar;

int pilih;
while(1)
{
system("cls");
  cout<<"\nMenghitung Luas Bangun Datar\n";
  cout<<"1) Luas Persegi\n";
  cout<<"2) Luas Persegi Panjang\n";
  cout<<"3) Luas Segituga\n";
  cout<<"4) Luas Jajaran Genjang\n";
  cout<<"5) Luas Trapesium\n";
  cout<<"6) Luas Lingkaran\n";
  cout<<"Masukkan Pilihan:-";
  cin>>pilih;
  
  if(pilih==1){
          list[0]->get_data();
          list[0]->display_area();
          getch();
          }
  else if (pilih==2){
          list[1]->get_data();
          list[1]->display_area();
          getch();
          }
  else if (pilih==3){
          list[2]->get_data();
          list[2]->display_area();
          getch();
          }
  else if (pilih==4){
          list[3]->get_data();
          list[3]->display_area();
          getch();
          }
  else if (pilih==5){
          list[4]->get_data();
          list[4]->display_area();
          getch();
          }
  else if (pilih==6){
          list[5]->get_data();
          list[5]->display_area();
          getch();
          }
 else
     exit(1);
}
}
