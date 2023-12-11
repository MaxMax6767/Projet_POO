//CLservice.CPP***************************************************************************************
#include "CLservices.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oPersonnelTB = gcnew NS_Comp_Mappage::CLpersonnelTB();
	this->oClientTB = gcnew NS_Comp_Mappage::CLclientTB();
	this->oStockTB = gcnew NS_Comp_Mappage::CLstockTB();
	this->oStatTB = gcnew NS_Comp_Mappage::CLstatTB();
	this->oCommandeTB = gcnew NS_Comp_Mappage::CLcommandeTB();
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

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutLeStock(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oStockTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnStock(System::String^ nom, System::String^ prix_achat, System::String^ prix_ht, System::Boolean^ degressif, System::String^ tva, System::String^ qt_dispo, System::String^ qt_reapro, System::String^ type, System::String^ couleur)
{
	System::String^ sql;

	this->oStockTB->setNom(nom);
	this->oStockTB->setPrix_achat(System::Convert::ToDouble(prix_achat));
	this->oStockTB->setPrix_HT(System::Convert::ToDouble(prix_ht));
	this->oStockTB->setDegressif(degressif);
	this->oStockTB->setTaux_TVA(System::Convert::ToInt32(tva));
	this->oStockTB->setQt_dispo(System::Convert::ToInt32(qt_dispo));
	this->oStockTB->setQt_reapro(System::Convert::ToInt32(qt_reapro));
	this->oStockTB->setType(type);
	this->oStockTB->setCouleur(couleur);
	sql = this->oStockTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateUnStock(System::Decimal^ id, System::String^ nom, System::String^ prix_achat, System::String^ prix_ht, System::Boolean^ degressif, System::String^ tva, System::String^ qt_dispo, System::String^ qt_reapro, System::String^ type, System::String^ couleur)
{
	System::String^ sql;

	this->oStockTB->setId(System::Convert::ToInt32(id));
	this->oStockTB->setNom(nom);
	this->oStockTB->setPrix_achat(System::Convert::ToDouble(prix_achat));
	this->oStockTB->setPrix_HT(System::Convert::ToDouble(prix_ht));
	this->oStockTB->setDegressif(degressif);
	this->oStockTB->setTaux_TVA(System::Convert::ToInt32(tva));
	this->oStockTB->setQt_dispo(System::Convert::ToInt32(qt_dispo));
	this->oStockTB->setQt_reapro(System::Convert::ToInt32(qt_reapro));
	this->oStockTB->setType(type);
	this->oStockTB->setCouleur(couleur);
	sql = this->oStockTB->Update();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::deleteUnStock(System::Decimal^ id)
{
	System::String^ sql;

	this->oStockTB->setId(System::Convert::ToInt32(id));
	sql = this->oStockTB->Delete();

	this->oCad->actionRows(sql);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesCommandes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oCommandeTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUneCommande(System::DateTime^ dateExpedition, System::DateTime^ dateLivraison, System::String^ moyenPaiement, System::Decimal^ remise, System::Decimal^ idClient)
{
	System::String^ sql;
	System::String^ sql2;

	this->oCommandeTB->setDateExpedition(dateExpedition);
	this->oCommandeTB->setDateLivraison(dateLivraison);
	this->oCommandeTB->setMoyenPaiement(moyenPaiement);
	this->oCommandeTB->setRemise(System::Convert::ToInt32(remise));
	this->oCommandeTB->setIdClient(System::Convert::ToInt32(idClient));
	sql = this->oCommandeTB->Insert();
	sql2 = this->oCommandeTB->InsertPanier();

	this->oCad->actionRows(sql);
	this->oCad->actionRows(sql2);
}

void NS_Comp_Svc::CLservices::updateUneCommande(System::Decimal^ id, System::DateTime^ dateExpedition, System::DateTime^ dateLivraison, System::String^ moyenPaiement, System::Decimal^ remise, System::Decimal^ idClient)
{
	System::String^ sql;
	System::String^ sql2;

	this->oCommandeTB->setId(System::Convert::ToInt32(id));
	this->oCommandeTB->setDateExpedition(dateExpedition);
	this->oCommandeTB->setDateLivraison(dateLivraison);
	this->oCommandeTB->setMoyenPaiement(moyenPaiement);
	this->oCommandeTB->setRemise(System::Convert::ToInt32(remise));
	this->oCommandeTB->setIdClient(System::Convert::ToInt32(idClient));
	sql = this->oCommandeTB->Update();
	sql2 = this->oCommandeTB->UpdatePanier();

	this->oCad->actionRows(sql);
	this->oCad->actionRows(sql2);
}

void NS_Comp_Svc::CLservices::deleteUneCommande(System::Decimal^ id)
{
	System::String^ sql;

	this->oCommandeTB->setId(System::Convert::ToInt32(id));
	sql = this->oCommandeTB->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::ajouterUneLigneCommande(System::Decimal^ idProduit, System::Decimal^ qtProduit)
{
	System::String^ sql;

	this->oCommandeTB->addToListeArticles(System::Convert::ToInt32(idProduit));
	this->oCommandeTB->addToListeQuantites(System::Convert::ToInt32(qtProduit));
}

void NS_Comp_Svc::CLservices::updateUneLigneCommande(System::Decimal^ idPanier, System::Decimal^ idProduit, System::Decimal^ qtProduit)
{
	this->oCommandeTB->supprFromListeArticles(System::Convert::ToInt32(idPanier));
	this->oCommandeTB->supprFromListeQuantites(System::Convert::ToInt32(idPanier));
	this->oCommandeTB->addToListeArticles(System::Convert::ToInt32(idProduit));
	this->oCommandeTB->addToListeQuantites(System::Convert::ToInt32(qtProduit));
}

void NS_Comp_Svc::CLservices::deleteUneLigneCommande(System::Decimal^ idPanier)
{
	this->oCommandeTB->supprFromListeArticles(System::Convert::ToInt32(idPanier));
	this->oCommandeTB->supprFromListeQuantites(System::Convert::ToInt32(idPanier));
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::PanierMoyen(System::String^ dgv)
{
	System::String^ sql;

	sql = this->oStatTB->PanierMoyen();
	return this->oCad->getRows(sql, dgv);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::CAParMois(System::String^ dgv, System::DateTime^ date)
{
	System::String^ sql;

	this->oStatTB->setDate(date);
	sql = this->oStatTB->CAParMois();
	return this->oCad->getRows(sql, dgv);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::CAParClient(System::String^ dgv, System::Decimal^ id)
{
	System::String^ sql;

	this->oStatTB->setIdClient(System::Convert::ToInt32(id));
	sql = this->oStatTB->CAParClient();
	return this->oCad->getRows(sql, dgv);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::ValeurCommercialeStock(System::String^ dgv)
{
	System::String^ sql;

	sql = this->oStatTB->ValeurCommercialeStock();
	return this->oCad->getRows(sql, dgv);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::ValeurAchatStock(System::String^ dgv)
{
	System::String^ sql;

	sql = this->oStatTB->ValeurAchatStock();
	return this->oCad->getRows(sql, dgv);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::SousReapro(System::String^ dgv)
{
	System::String^ sql;

	sql = this->oStatTB->SousReapro();
	return this->oCad->getRows(sql, dgv);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::Top10MVente(System::String^ dgv)
{
	System::String^ sql;

	sql = this->oStatTB->Top10MVente();
	return this->oCad->getRows(sql, dgv);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::Top10PVente(System::String^ dgv)
{
	System::String^ sql;

	sql = this->oStatTB->Top10PVente();
	return this->oCad->getRows(sql, dgv);
}