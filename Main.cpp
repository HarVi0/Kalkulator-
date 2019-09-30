#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>

using namespace std;

float x,y;
char wybor;

int main()
{

for(;;)
{
    cout << "Podaj 1 liczbe : ";
    cin>>x;
    cout<<"Podaj 2 liczbe: ";
    cin>>y;

    cout<<endl;
    cout<< "MENU GLOWNE"<<endl;
    cout<<"--------------"<<endl;
    cout<<"1. Dodawanie"<<endl;
    cout<<"2. Odejmowanie"<<endl;
    cout<<"3. Mnozenie"<<endl;
    cout<<"4. Dzielenie"<<endl;
    cout<<"5. Koniec programu"<<endl;


    cout<<endl;
    wybor=getch();

    switch(wybor)
    {
    case '1':
           cout<<"Suma = "<<x+y<<endl;
    break;

    case '2':
           cout<<"Roznica = "<<x-y<<endl;
    break;

    case '3':
        cout<<"Iloczyn= "<<x*y<<endl;
    break;

    case '4':
           if(y==0) cout<<"nie dzielimy przez zero"<<endl;
           else cout<<"Iloraz = "<<x/y<<endl;
    break;

    case '5':
           exit(0);
    break;

    default: cout<<"Takiej opcji nie ma w menu!"<<endl;
    }
     cout<<"Nacisnij ENTER aby kontynuowac"<<endl;
    getchar();getchar();

    system("cls");
}

    return 0;
}
