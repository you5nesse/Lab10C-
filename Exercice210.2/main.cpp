#include <iostream>
#include<Personne.h>
using namespace std;

int main()
{
    Personne* p = new Personne("Younesse", 19);

    p->afficher();

    delete p;
    p = nullptr;
    return 0;
}
