//CLservice.CPP***************************************************************************************
#include "CLservices.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oPersonnelTB = gcnew NS_Comp_Mappage::CLpersonnelTB();
	this->oClientTB = gcnew NS_Comp_Mappage::CLclientTB();
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

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutLeClient(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oClientTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnClient(System::String^ nom, System::String^ prenom, System::DateTime^ dateNaissance, System::DateTime^ date1erAchat, System::String^ logo, System::String^ nomEntreprise, System::String^ villeLivraison, System::String^ rueLivraison, System::Decimal^ numeroLivraison, System::Decimal^ cpLivraison, System::Boolean^ livraisonIsFacturation, System::String^ villeFacturation, System::String^ rueFacturation, System::Decimal^ numeroFacturation, System::Decimal^ cpFacturation)
{
	System::String^ sql;

	this->oClientTB->setNom(nom);
	this->oClientTB->setPrenom(prenom);
	this->oClientTB->setDateNaissance(dateNaissance);
	this->oClientTB->setDate1erAchat(date1erAchat);
	this->oClientTB->setLogo(logo);
	this->oClientTB->setNomEntreprise(nomEntreprise);
	this->oClientTB->setVilleLivraison(villeLivraison);
	this->oClientTB->setRueLivraison(rueLivraison);
	this->oClientTB->setNumeroLivraison(System::Convert::ToInt32(numeroLivraison));
	this->oClientTB->setCpLivraison(System::Convert::ToInt32(cpLivraison));
	if (livraisonIsFacturation)
	{
		this->oClientTB->setVilleFacturation(villeLivraison);
		this->oClientTB->setRueFacturation(rueLivraison);
		this->oClientTB->setNumeroFacturation(System::Convert::ToInt32(numeroLivraison));
		this->oClientTB->setCpFacturation(System::Convert::ToInt32(cpLivraison));
	}
	else
	{
		this->oClientTB->setVilleFacturation(villeFacturation);
		this->oClientTB->setRueFacturation(rueFacturation);
		this->oClientTB->setNumeroFacturation(System::Convert::ToInt32(numeroFacturation));
		this->oClientTB->setCpFacturation(System::Convert::ToInt32(cpFacturation));
	}
	sql = this->oClientTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateUnClient(System::Decimal^ id, System::String^ nom, System::String^ prenom, System::DateTime^ dateNaissance, System::DateTime^ date1erAchat, System::String^ logo, System::String^ nomEntreprise, System::String^ villeLivraison, System::String^ rueLivraison, System::Decimal^ numeroLivraison, System::Decimal^ cpLivraison, System::Boolean^ livraisonIsFacturation, System::String^ villeFacturation, System::String^ rueFacturation, System::Decimal^ numeroFacturation, System::Decimal^ cpFacturation)
{
	System::String^ sql;

	this->oClientTB->setId(System::Convert::ToInt32(id));
	this->oClientTB->setNom(nom);
	this->oClientTB->setPrenom(prenom);
	this->oClientTB->setDateNaissance(dateNaissance);
	this->oClientTB->setDate1erAchat(date1erAchat);
	this->oClientTB->setLogo(logo);
	this->oClientTB->setNomEntreprise(nomEntreprise);
	this->oClientTB->setVilleLivraison(villeLivraison);
	this->oClientTB->setRueLivraison(rueLivraison);
	this->oClientTB->setNumeroLivraison(System::Convert::ToInt32(numeroLivraison));
	this->oClientTB->setCpLivraison(System::Convert::ToInt32(cpLivraison));
	if (livraisonIsFacturation)
	{
		this->oClientTB->setVilleFacturation(villeLivraison);
		this->oClientTB->setRueFacturation(rueLivraison);
		this->oClientTB->setNumeroFacturation(System::Convert::ToInt32(numeroLivraison));
		this->oClientTB->setCpFacturation(System::Convert::ToInt32(cpLivraison));
	}
	else
	{
		this->oClientTB->setVilleFacturation(villeFacturation);
		this->oClientTB->setRueFacturation(rueFacturation);
		this->oClientTB->setNumeroFacturation(System::Convert::ToInt32(numeroFacturation));
		this->oClientTB->setCpFacturation(System::Convert::ToInt32(cpFacturation));
	}
	sql = this->oClientTB->Update();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::deleteUnClient(System::Decimal^ id)
{
	System::String^ sql;

	this->oClientTB->setId(System::Convert::ToInt32(id));
	sql = this->oClientTB->Delete();

	this->oCad->actionRows(sql);
}