#include <iostream>
#include <conio.h>
using namespace std;
//####################################
class transport
{
public:
	virtual void out()=0;
	virtual void get() = 0;

	double weight;
	int seats;
	int price;

	void basicInfo()
	{
		cout << "- вага: "<< weight << endl;
		cout << "- кiлькiсть мiсць: "<< seats << endl;
		  	}




  	};


//####################################
class privat: public transport
{
public:

void get(){
cout << "¬ага: ";
cin >> weight;
cout << " iлькiсть мiсць: ";
cin >> seats;

}
};

class publ: public transport
{
public:
 virtual void out() = 0;
 double price;
 int standPlaces;

void get(){
cout << "¬ведiть вагу: ";
cin >> weight;
cout << "¬ведiть кiлькiсть мiсць дл€ сидiнн€: ";
cin >> seats;
 cout << "¬ведiть цiну за проњзд: ";
 cin >> price;
 cout << "¬ведiть кiлькiсть мiсць дл€ сто€нн€: ";
 cin >> standPlaces;


}
};
//####################################
class avto: public privat
{
public:
	void out()
	{
	
	}
};

class vavto: public privat
{
public:
 double maxWeight;
	void get(){
         cout << "¬ведiть вагу транспорту: ";
 cin >> weight;

 cout << "¬ведiть кiлькiсть мiсць: ";
 cin >> seats;

 cout << "¬ведiть максимальну вагу вантажу: ";
 cin >> maxWeight;
 }
	void out()
	{
 cout << "- вантажопiдйомнiсть: " << maxWeight << endl;
	}
};

class lavto: public privat
{
public:
	void out()
	{
		cout<<"3.Ћегковий автомобiль\n";
	}
};


class bus: public publ
{
public:
	void out()
	{
 cout << "- цiна за проњзд: " << price << endl;
 cout << "- мiсц€ дл€ сто€чих: " << standPlaces << endl;
	}

};

class tbus: public publ
{
public:
	void out()
	{
 cout << "- цiна за проњзд: " << price << endl;
 cout << "- мiсц€ дл€сто€чих: " << standPlaces << endl;
	}

};

class tram: public publ
{
public:
	void out()
	{
 cout << "- цiна за проњзд: " << price << endl;
 cout << "- мiсц€ дл€сто€чих: " << standPlaces << endl;
	}

};


int main()
 {
    int t;
    setlocale(LC_ALL, "Russian");
/*
	avto *a=new avto;
	vavto *va=new vavto;
	lavto *la=new lavto;
	bus *b=new bus;
	tbus *tb=new tbus;
	tram *tr=new tram;
*/
	transport *mas[6];

	mas[1]=new avto;
	mas[2]=new vavto;
	mas[3]=new lavto;
	mas[4]=new bus;
	mas[5]=new tbus;
	mas[7]=new tram;
   // mas[7]=new tram2;

 cout << "“ранспортнi засоби: \n";
 cout << " 1. јвтомобiль\n";
 cout << " 2. ¬антажний автомобiль\n";
 cout << " 3. Ћегковий автомобiль\n";
 cout << " 4. јвтобус\n";
 cout << " 5. “ролейбус\n";
 cout << " 6. “рамвай\n";


	cout << endl;
	cin >> t; if(t==6) t++;
    cout << endl;


    mas[t]->get();
	cout << endl;
	mas[t]->basicInfo();
	mas[t]->out();


	getch();
    return 0;
 }
