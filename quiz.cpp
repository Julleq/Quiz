#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	string imie;
	string odp;
	int pkt,a;
	
	pkt=0;
	a=20;
	
	cout<<"Jak masz na imie ?"<<endl;
	cin>>imie;
	cout<<"Czesc "<<imie<<", to bedzie Quiz z C++"<<endl;
	Sleep(1000);
	cout<<"Czytaj dokladnie pytania "<<endl;
	cout<<"Quiz jest na 30 punktow, sklada sie z 6 pytan."<<endl;
	cout<<"Powodzenia "<<imie<<" !"<<endl;
	Sleep(1000);
	
	
	cout<<"Pytanie 1"<<endl;
	cout<<"Jaki typ zmiennej odpowiada za wartosci true / false ?"<<endl;
	cin>>odp;
	if (odp == "bool")
	{
		pkt=pkt+3;
		cout<<"Brawo, to jest dobra odpowiedz."<<endl;
	}
	else if ((odp == "BOOL")||(odp == "Bool"))
	{
		pkt++;
		cout<<"Prawie dobrze, nie stosuj wielkich liter."<<endl;
	}
	else
	{
		cout<<"Zla odpowiedz :("<<endl;
	}
	
	
	Sleep(1000);
	cout<<"Pytanie 2"<<endl;
	cout<<"Jaki operator sluzy do porownywania wartosci?"<<endl;
	cout<<" %   ||   ==   ++ "<<endl;
	cin>>odp;
	if (odp == "==")
	{
		pkt=pkt+2;
		cout<<"Luks, znasz sie na tym."<<endl;
	}
	else if (odp == "%")
	{
		cout<<"operator ten dotyczy reszty z dzielenia"<<endl;
		cout<<"Zla odpowiedz"<<endl;
	}
	else if (odp == "||")
	{
		cout<<"operator ten oznacza : lub"<<endl;
		cout<<"Zla odpowiedz"<<endl;
	}
	else if (odp == "++")
	{
		cout<<"operator ten powieksza wartosc o 1"<<endl;
		cout<<"Zla odpowiedz"<<endl;
	}
	else 
	{
		cout<<"Tego nie bylo w planie, "<<endl;
	}
	
	
	Sleep(1000);
	cout<<"Pytanie 3"<<endl;
	cout<<"Czy zmienna char odpowiada za pojedyncze znaki?"<<endl;
	cin>>odp;
	if ((odp == "tak")||(odp == "Tak")||(odp =="TAK"))
	{
		pkt=pkt+2;
		cout<<"Wlasnie tak, tak jest."<<endl;
	}
	else
	{
		cout<<"Nie znasz sie..."<<endl;
	}
	
	
	Sleep(1000);
	cout<<"Pytanie 4"<<endl;
	cout<<"Jaka zmienna odpowiada za ciagi znakow?"<<endl;
	cin>>odp;
	if(odp == "string")
	{
		pkt=pkt+3;
		cout<<"No niezle, to jest to"<<endl;
	}
	else if((odp == "String")||(odp == "STRING"))
	{
		pkt++;
		cout<<imie<<", pamietaj ze piszemy male litery."<<endl;
	}
	else
	{
		cout<<"No ja nie wiem. To nie o to chodzilo. "<<endl;
	}
	
	
	Sleep(1000);
	cout<<"Pytanie 5"<<endl;
	cout<<"Jaki tym zmiennej odpowiada za liczby zmiennoprzecinkowe?"<<endl;
	cin>>odp;
	if (odp == "float")
	{
	    cout<<"Dobrze."<<endl;	
	}
	else
	{	
	    	    
	    do
	    {	  
		    cout<<"To nie to, podawaj dalej do skutku... masz 20 prob"<<endl;  
		    cin>>odp;
		    a--;
				
	    }while (( odp != "float" ) && ( a!=0 ));
	    
    }
	cout<<"Tak musialo byc."<<endl;
	pkt=pkt+a;
	
	
	Sleep(1000);
	cout<<"Pytanie 6"<<endl;
	cout<<"Jak dolaczysz biblioteke?"<<endl;
	cout<<"A- #include <iostream>"<<endl;
	cout<<"B- @include <<iostream>>"<<endl;
	cout<<"C- :include {iostream}"<<endl;
	cin>>odp;
	
	
	
	
	Sleep(1000);
	cout<<imie<<" masz "<<pkt<<" pkt"<<endl;	
	if(pkt == 30)
	{
		cout<<"Brawo, wygrywasz zestaw garnkow"<<endl;
		cout<<"Widac, ze znasz sie na C++"<<endl;
	}
	else
	{
		cout<<"Zawsze moglo byc lepiej..."<<endl;
	}
		
	
	return 0;
}
