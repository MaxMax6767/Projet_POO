//CLservice.CPP***************************************************************************************
#include "CLservices.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select2();
	return this->oCad->getRows(sql, dataTableName);
}

// FLAG
void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom, System::String^ ville, System::String^ adresse, System::String^ cp)
{
	System::String^ sql1;
	System::String^ sql2;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setVille(ville);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setCp(cp);
	sql1 = this->oMappTB->InsertAdresse();

	this->oCad->actionRows(sql1);
	this->oCad->getRows(this->oMappTB->getAdressId(), "Adresse");
	this->oMappTB->SetAdressId(this->oCad->getRows(this->oMappTB->getAdressId(), "Adresse")->Tables["Adresse"]->Rows[0]->ItemArray[0]->ToString());
	sql2 = this->oMappTB->InsertClient();
	this->oCad->actionRows(sql2);
}
void NS_Comp_Svc::CLservices::updateUnePersonne(System::String^ id, System::String^ nom, System::String^ prenom, System::String^ ville, System::String^ adresse, System::String^ cp)
{
	System::String^ sql;

	this->oMappTB->setId(System::Convert::ToInt32(id));
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setVille(ville);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setCp(cp);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::deleteUnePersonne(System::String^ id)
{
	System::String^ sql;

	this->oMappTB->setId(System::Convert::ToInt32(id));
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}
