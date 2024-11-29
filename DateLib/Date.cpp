#include "pch.h"
#include "Date.h"


Date::Date():jour(19),mois(10), annee(2024)
{
}

Date::Date(int jour, int mois, int annee):jour(jour), mois(mois), annee(annee)
{
}


void Date::afficherdate() const
{
	std::cout << "la date avec biblio static est : " << jour << "/" << mois << "/" << annee << std::endl;
}

Date::~Date()
{
}
