#include <iostream>
#include <conio.h>
using namespace std;
//####################################
class transport    //CLASS GENERAL
{
public:
	virtual void out()=0;
	virtual void get() = 0;

	double weight;
	int seats;
	int price;

	void basicInfo()
	{
		cout << "- ����: "<< weight << endl;
		cout << "- �i���i��� �i���: "<< seats << endl;
	}
};


//####################################
class privat: public transport      //SUBCLASS
{
public:

void get()
	{
		cout << "����: ";
		cin >> weight;
		cout << "�i���i��� �i���: ";
		cin >> seats;
	}
};

class publ: public transport
{
	public:
	virtual void out() = 0;
	double price;
	int standPlaces;
	
	void get()
	{
		cout << "����i�� ����: ";
		cin >> weight;
		cout << "����i�� �i���i��� �i��� ��� ���i���: ";
		cin >> seats;
		cout << "����i�� �i�� �� �����: ";
		cin >> price;
		cout << "����i�� �i���i��� �i��� ��� �������: ";
		cin >> standPlaces;
	}
};


class avto: public privat
{
	public:
	void out()
	{
	
	}
};


class vavto: public privat //CLASS PRIVATE AUTO
{
	public:
	double maxWeight;
	void get()
	{
        cout << "����i�� ���� ����������: ";
		cin >> weight;
 		cout << "����i�� �i���i��� �i���: ";
 		cin >> seats;
		cout << "����i�� ����������� ���� �������: ";
		cin >> maxWeight;
	}
	
	void out()
	{
 		cout << "- ��������i�����i���: " << maxWeight << endl;
	}
};


class lavto: public privat
{
	public:
	void out()
	{
		cout<<"3.�������� �������i��\n";
	}
};


class bus: public publ
{
	public:
	void out()
	{
 		cout << "- �i�� �� �����: " << price << endl;
 		cout << "- �i��� ��� �������: " << standPlaces << endl;
	}
};


class tbus: public publ
{
	public:
	void out()
	{
 		cout << "- �i�� �� �����: " << price << endl;
 		cout << "- �i��� ����������: " << standPlaces << endl;
	}
};


class tram: public publ
{
	public:
	void out()
	{
		 cout << "- �i�� �� �����: " << price << endl;
		 cout << "- �i��� ����������: " << standPlaces << endl;
	}
};


int main()
{
    int t;
    setlocale(LC_ALL, "Russian");  //INTRODUCTION  OF CARS
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
	cout << "����������i ������: \n"; //CAR OUTPUT
	cout << " 1. �������i��\n";
	cout << " 2. ��������� �������i��\n";
	cout << " 3. �������� �������i��\n";
	cout << " 4. �������\n";
	cout << " 5. ���������\n";
	cout << " 6. �������\n";


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
