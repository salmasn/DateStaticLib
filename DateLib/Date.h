#pragma once
#include<iostream>

class Date
{
private:
	int jour;
	int mois;
	int annee;
public:
	Date();
	Date(int, int, int);
	void afficherdate() const;
	~Date();
};

