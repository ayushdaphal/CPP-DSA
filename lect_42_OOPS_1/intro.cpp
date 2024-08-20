#include <iostream>
using namespace std;

class Hero
{
// properties
public: // access modifier
    int health;
    char level;

    Hero()
    {
        cout << "Construction called " << endl;
    }
}; 

int main()
{

    // object creation
    Hero Ramesh;

    // property access
    Ramesh.health = 70;
    Ramesh.level = 'A';

    cout << "Size is " << sizeof(Ramesh) << endl;
    cout << "Health is " << Ramesh.health << endl;
    cout << "Level is " << Ramesh.level << endl;

    Hero *Ayush = new Hero; // dynamic object creation (Heap memory)

    (*Ayush).health = 20;
    (*Ayush).level = 'b';

    cout << "Size is " << sizeof(*Ayush) << endl;
    cout << "Health is " << (*Ayush).health << endl; // can use Ayush->health as well
    cout << "Level is " << (*Ayush).level << endl;   // can use Ayush->level as well

    return 0;
}



