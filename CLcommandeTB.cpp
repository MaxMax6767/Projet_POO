#include "CLcommandeTB.h"

System::String^ NS_Comp_Mappage::CLcommandeTB::Select()
{
	return "USE POO_projet; EXEC AfficherCommande;";
}

System::String^ NS_Comp_Mappage::CLcommandeTB::Insert()
{
	return "USE POO_projet; EXEC CreerCommande @date_livraison = '" + this->dateLivraison + "', @date_expedition = '" + this->dateExpedition + "', @moyen_paiement = '" + this->moyenPaiement + "', @remise = " + this->remise + ", @id_client = " + this->idClient + ";";
}

System::String^ NS_Comp_Mappage::CLcommandeTB::InsertPanier()
{
	System::String^ requete = "USE POO_projet;";
	for (int i = 0; i < this->listeArticles->Count; i++)
	{
		requete += "EXEC CreerContientProduit @id_produit = " + this->listeArticles[i] + ", @qt_produit = " + this->listeQuantites[i] + ";";
	}
	return requete;
}

System::String^ NS_Comp_Mappage::CLcommandeTB::InsertPrix()
{
	return "USE POO_projet; EXEC CreerPrix;";
}

System::String^ NS_Comp_Mappage::CLcommandeTB::Update()
{
	return "USE POO_projet; EXEC ModifierCommande @id_commande = " + this->Id + ", @date_livraison = '" + this->dateLivraison + "', @date_expedition = '" + this->dateExpedition + "', @moyen_paiement = '" + this->moyenPaiement + "', @remise = " + this->remise + ", @id_client = " + this->idClient + ";";
}

System::String^ NS_Comp_Mappage::CLcommandeTB::UpdatePanier()
{
	System::String^ requete = "USE POO_projet;";
	for (int i = 0; i < this->listeArticles->Count; i++)
	{
		requete += "EXEC ModifierContientProduit @id_commande = " + this->Id + ", @id_produit = " + this->listeArticles[i] + ", @qt_produit = " + this->listeQuantites[i] + ";";
	}
	return requete;
}

System::String^ NS_Comp_Mappage::CLcommandeTB::UpdatePrix()
{
	return "USE POO_projet; EXEC ModifierPrix @id_commande = " + this->Id + ";";
}

System::String^ NS_Comp_Mappage::CLcommandeTB::Delete()
{
	return "USE POO_projet; EXEC SupprimerCommande @id_commande = " + this->Id + ";";
}

void NS_Comp_Mappage::CLcommandeTB::setId(int id)
{
	this->Id = id;
}

void NS_Comp_Mappage::CLcommandeTB::setDateExpedition(System::DateTime^ date)
{
	this->dateExpedition = date;
}

void NS_Comp_Mappage::CLcommandeTB::setDateLivraison(System::DateTime^ date)
{
	this->dateLivraison = date;
}

void NS_Comp_Mappage::CLcommandeTB::setMoyenPaiement(System::String^ moyen)
{
	this->moyenPaiement = moyen;
}

void NS_Comp_Mappage::CLcommandeTB::setNbArticles(int nb)
{
	this->nbArticles = nb;
}

void NS_Comp_Mappage::CLcommandeTB::setRemise(int remise)
{
	this->remise = remise;
}

void NS_Comp_Mappage::CLcommandeTB::setIdClient(int id)
{
	this->idClient = id;
}

void NS_Comp_Mappage::CLcommandeTB::addToListeArticles(int id)
{
	this->listeArticles->Add(id);
}

void NS_Comp_Mappage::CLcommandeTB::addToListeQuantites(int quantite)
{
	this->listeQuantites->Add(quantite);
}

void NS_Comp_Mappage::CLcommandeTB::supprFromListeArticles(int index)
{
	this->listeArticles->RemoveAt(index);

}

void NS_Comp_Mappage::CLcommandeTB::supprFromListeQuantites(int index)
{
	this->listeQuantites->RemoveAt(index);
}

void NS_Comp_Mappage::CLcommandeTB::emptyListeArticles()
{
	this->listeArticles->Clear();
}

void NS_Comp_Mappage::CLcommandeTB::emptyListeQuantites()
{
	this->listeQuantites->Clear();
}

