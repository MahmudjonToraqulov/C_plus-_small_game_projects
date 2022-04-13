#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
     char a[30]; int z;
    cout<<"\t\t\tKOMPYUTER O'YLAGAN SONNI TOPING\n"<<endl;

   k: cout<<"O'yinchining ismi: "; gets(a);
     int x, y=0, n=0, j=1;
srand(time(NULL));
x=rand()%1000+1;
     cout<<a<< " Men Mahmudjonman 1000gacha bo'lgan bir son o'ylayman shuni topingchi."<<endl;
     cout<<"\n Topish uchun sizga 10ta imkoniyat beraman"<<endl;
      cout<<endl;
      cout<< "Qani boshladik sonni kiriting: \n\tImkoniyat: 1"<<endl;
      while (x!=y)
{
          cin>>y;
      n++; j++;

      if (x>y) cout<< "Men o'ylagan son "<<y<<" dan katta"<<endl;

      if (x<y) cout<< "Men o'ylagan son "<<y<<" dan kichik"<<endl;
      cout<<"\tImkoniyat: "<<j<<endl;
      if (n==10) {cout<<"\n"<<a<<"Siz yutqazdingiz ! ! ! :-) \nMen o'ylagan son *** " <<x<< " *** edi"<<endl; goto m;}

   }
    cout <<a<< "Qoyil topdingiz ! ! !:-) \nMen o'ylagan son "<<y<<" edi\n" <<endl;
    cout<<"Topish uchun "<<n<<" marta urindingiz"<<endl;
    m: cout<<"\nQayta o'ynash: 1"<< endl;
    cout<<"\nO'yindan chiqish: o" <<endl;
    cout<< "\nRaqamni tanlang: ";
    cin>>z;
    switch(z)
    {
        case 1: goto k;
        case 0: cout <<"\nO'YIN MUALLIFI: ***TO'RAQULOV MAHMUDJON KOMILJON O'G'LI*** \n"; return 0;
        default : cout<<"XATO !!! \n"; goto m;
    }
    system("PAUZE");
    return 0;
      }


