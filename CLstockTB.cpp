#include "CLstockTB.h"

System::String^ NS_Comp_Mappage::CLstockTB::Select()
{
	return "USE POO_projet; EXEC AfficherProduit;";
}

System::String^ NS_Comp_Mappage::CLstockTB::Insert()
{
	return "USE POO_projet; EXEC CreerProduit @prix_achat = " + this->prix_achat + ", @prix_commerce = " + this->prix_HT + ", @prix_degressif = " + this->degressif + ", @nom_produit = '" + this->nom + "', @quantite_dispo = " + this->qt_dispo + ", @quantite_reapro = " + this->qt_reapro + ", @taux_tva = " + this->taux_TVA + ", @type_ = '" + this->type + "', @couleur = '" + this->couleur + "', @id_tarif = 1;";
}

System::String^ NS_Comp_Mappage::CLstockTB::Update()
{
	return "USE POO_projet; EXEC ModifierProduit @id_produit = " + this->Id + ", @prix_achat = " + this->prix_achat + ", @prix_commerce = " + this->prix_HT + ", @prix_degressif = " + this->degressif + ", @nom_produit = '" + this->nom + "', @quantite_dispo = " + this->qt_dispo + ", @quantite_reapro = " + this->qt_reapro + ", @taux_tva = " + this->taux_TVA + ", @type_ = '" + this->type + "', @couleur = '" + this->couleur + "', @id_tarif = 1;";
}

System::String^ NS_Comp_Mappage::CLstockTB::Delete()
{
	return "USE POO_projet; EXEC SupprimerProduit @id_produit = " + this->Id + ";";
}

void NS_Comp_Mappage::CLstockTB::setId(int id)
{
	this->Id = id;
}

void NS_Comp_Mappage::CLstockTB::setNom(System::String^ nom)
{
	this->nom = nom;
}

void NS_Comp_Mappage::CLstockTB::setPrix_achat(float prix_achat)
{
	this->prix_achat = prix_achat;
}

void NS_Comp_Mappage::CLstockTB::setPrix_HT(float prix_HT)
{
	this->prix_HT = prix_HT;
}

void NS_Comp_Mappage::CLstockTB::setDegressif(System::Boolean^ degressif)
{
	this->degressif = degressif;
}

void NS_Comp_Mappage::CLstockTB::setTaux_TVA(int taux_TVA)
{
	this->taux_TVA = taux_TVA;
}

void NS_Comp_Mappage::CLstockTB::setQt_dispo(int qt_dispo)
{
	this->qt_dispo = qt_dispo;
}

void NS_Comp_Mappage::CLstockTB::setQt_reapro(int qt_reapro)
{
	this->qt_reapro = qt_reapro;
}

void NS_Comp_Mappage::CLstockTB::setType(System::String^ type)
{
	this->type = type;
}

void NS_Comp_Mappage::CLstockTB::setCouleur(System::String^ couleur)
{
	this->couleur = couleur;
}

