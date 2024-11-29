
#include <iostream>
#include "pch.h"
#include "DateLibDyn.h"

//j'essaye de travailler avec pch.h et le compilater n'accepte pas 

int main()
{
    Date* d = new Date(03, 11, 2024);
    d->afficherdate();
    delete d;

    DateLibDyn* date=new DateLibDyn(03, 11, 2024);
    date->afficherdate();
    delete date;
}
