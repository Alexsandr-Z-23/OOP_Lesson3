#include <iostream>
using namespace std;
const string STD = "===================================================\n";
class Person
{
private:// модификатор доступен только в нутри класса и его методах
    char namech;

public: // модификатор доступа к членам или полям класса (открыт для всех)
    string name;  // поля класса или члены класса
    unsigned int age;
    //int count =0;
    Person(string p_name,unsigned int p_age) // конструктор класса c параметрами
    {
        name = p_name;
        age = p_age;
        cout << " Person created.\n";
    };
    Person(string p_name) 
    {
        
       
        name = p_name;
        age = 18;
        
        cout << " Person created.\n";
    };
    Person()// конструктор без параметров
    {
        name = "Undefined";
        age = 18;
        
        cout << " Person created.\n";
    };

   

    //Person(string p_name, unsigned int p_age) // конструктор класса c параметрами
    //{
    //    name = p_name;
    //    age = p_age;
    //    cout << " First constructor\n";
    //};
    //Person(string p_name) :Person(p_name, 18) { cout << "Two construcktor\n"; }// Делегирование конструкторов
    //Person() :Person(string("Undefined")) { cout << "Third construcktor\n"; }


    void print()      // функции-члены класса или методы класса
    {
        cout << "Name : " << name << "\t Age : " << age << endl<<endl;
    }
    ~Person() 
    {
        
        cout << " Person " << name << " delete .\n\n";
    };
};


int main()
{
    //Person humen;  // создание обьекта класса Person
    //humen.name = "Tom";
    //humen.age = 28;
    //humen.print();
    //Person humen2;
    //humen2.age = 28;
    //humen2.print();
    //Person humen3;
    //humen3.name = "Nini";
    //humen3.print();
    //Person* ptr = &humen; // указате на обьект класса Person
    //ptr->name = "BRED";
    //ptr->age = 35;
    //ptr->print();
    /* string nameuser = humen1.name;
    unsigned int ageuser = humen1.age;
    cout << "Name : " << nameuser << "\t Age : " << ageuser << endl;*/


    /*   Person tom("Tom", 16);
       Person pit("Piter", 34);
       Person bred("Bredli", 25);
       tom.print();
       pit.print();
       bred.print();*/
    {
        Person Lusi("Lusi", 38);
        Person Bob{ "Bob",28 };
        Person Sam;
        Lusi.print(); Bob.print(); Sam.print();
    }
        cout<<STD;
        Person* PL = new Person("Bred", 38);
        Person* PB = new Person("Nik", 28);
        Person* PS = new Person("Sony");
        PL->print();
        PB->print();
        PS->print();
        delete PL;
        delete PB;
        delete PS;
       
}


