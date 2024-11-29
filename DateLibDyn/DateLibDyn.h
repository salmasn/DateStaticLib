#pragma once
#include<iostream>

class DateLibDyn
{
private:
	int jour;
	int mois;
	int annee;
public:
	DateLibDyn():jour(19), mois(10), annee(2024){}
	DateLibDyn(int jour, int mois, int annee) :jour(jour), mois(mois), annee(annee){}
	void afficherdate() const
	{
		std::cout << "la date avec biblio dynamic est : " << jour << "/" << mois << "/" << annee << std::endl;
	}
	~DateLibDyn()
	{

	}
};



