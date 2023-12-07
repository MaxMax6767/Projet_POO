//CLservice.CPP***************************************************************************************
#include "CLservices.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oPersonnelTB = gcnew NS_Comp_Mappage::CLpersonnelTB();
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutLePersonnel(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oPersonnelTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnPersonnel(System::String^ nom, System::String^ prenom, System::Decimal^ id_supp, System::DateTime^ date, System::String^ ville, System::String^ rue, System::Decimal^ numero, System::Decimal^ cp)
{
	System::String^ sql;

	this->oPersonnelTB->setNom(nom);
	this->oPersonnelTB->setPrenom(prenom);
	this->oPersonnelTB->setIdSupperieur(System::Convert::ToInt32(id_supp));
	this->oPersonnelTB->setDateEmbauche(date);
	this->oPersonnelTB->setVille(ville);
	this->oPersonnelTB->setRue(rue);
	this->oPersonnelTB->setNumero(System::Convert::ToInt32(numero));
	this->oPersonnelTB->setCp(System::Convert::ToInt32(cp));
	sql = this->oPersonnelTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateUnPersonnel(System::Decimal^ id, System::String^ nom, System::String^ prenom, System::Decimal^ id_supp, System::DateTime^ date, System::String^ ville, System::String^ rue, System::Decimal^ numero, System::Decimal^ cp)
{
	System::String^ sql;

	this->oPersonnelTB->setId(System::Convert::ToInt32(id));
	this->oPersonnelTB->setNom(nom);
	this->oPersonnelTB->setPrenom(prenom);
	this->oPersonnelTB->setIdSupperieur(System::Convert::ToInt32(id_supp));
	this->oPersonnelTB->setDateEmbauche(date);
	this->oPersonnelTB->setVille(ville);
	this->oPersonnelTB->setRue(rue);
	this->oPersonnelTB->setNumero(System::Convert::ToInt32(numero));
	this->oPersonnelTB->setCp(System::Convert::ToInt32(cp));
	sql = this->oPersonnelTB->Update();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::deleteUnPersonnel(System::Decimal^ id)
{
	System::String^ sql;

	this->oPersonnelTB->setId(System::Convert::ToInt32(id));
	sql = this->oPersonnelTB->Delete();

	this->oCad->actionRows(sql);
}
