#include "CLclientTB.h"

System::String^ NS_Comp_Mappage::CLclientTB::Select()
{
	return "USE POO_projet; EXEC AfficherClient;";
}

System::String^ NS_Comp_Mappage::CLclientTB::Insert()
{
	return "USE POO_projet; Exec CreerClient @nom_client = '" + this->nom + "', @prenom_client = '" + this->prenom + "', @date_naissance = '" + this->dateNaissance + "', @date_1er_achat = '" + this->date1erAchat + "', @logo_entreprise = '" + this->logo + "', @nom_entreprise = '" + this->nomEntreprise + "', @ville_livraison = '" + this->villeLivraison + "', @rue_livraison = '" + this->rueLivraison + "', @numero_livraison = " + this->numeroLivraison + ", @code_postal_livraison = " + this->cpLivraison + ", @ville_facturation = '" + this->villeFacturation + "', @rue_facturation = '" + this->rueFacturation + "', @numero_facturation = " + this->numeroFacturation + ", @code_postal_facturation = " + this->cpFacturation + ";";
}

System::String^ NS_Comp_Mappage::CLclientTB::Update()
{
	return "USE POO_projet; Exec ModifierClient @id_client = " + this->Id + ", @nom_client = '" + this->nom + "', @prenom_client = '" + this->prenom + "', @date_naissance = '" + this->dateNaissance + "', @date_1er_achat = '" + this->date1erAchat + "', @logo_entreprise = '" + this->logo + "', @nom_entreprise = '" + this->nomEntreprise + "', @ville_livraison = '" + this->villeLivraison + "', @rue_livraison = '" + this->rueLivraison + "', @numero_livraison = " + this->numeroLivraison + ", @code_postal_livraison = " + this->cpLivraison + ", @ville_facturation = '" + this->villeFacturation + "', @rue_facturation = '" + this->rueFacturation + "', @numero_facturation = " + this->numeroFacturation + ", @code_postal_facturation = " + this->cpFacturation + ";";
}

System::String^ NS_Comp_Mappage::CLclientTB::Delete()
{
	return "USE POO_projet; EXEC SupprimerClient @id_client = " + this->Id + ";";
}

void NS_Comp_Mappage::CLclientTB::setId(int ID)
{
	this->Id = ID;
}

void NS_Comp_Mappage::CLclientTB::setNom(System::String^ nom)
{
	this->nom = nom;
}

void NS_Comp_Mappage::CLclientTB::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}

void NS_Comp_Mappage::CLclientTB::setDateNaissance(System::DateTime^ dateNaissance)
{
	this->dateNaissance = dateNaissance;
}

void NS_Comp_Mappage::CLclientTB::setDate1erAchat(System::DateTime^ date1erAchat)
{
	this->date1erAchat = date1erAchat;
}

void NS_Comp_Mappage::CLclientTB::setLogo(System::String^ logo)
{
	this->logo = logo;
}

void NS_Comp_Mappage::CLclientTB::setNomEntreprise(System::String^ nomEntreprise)
{
	this->nomEntreprise = nomEntreprise;
}

void NS_Comp_Mappage::CLclientTB::setVilleLivraison(System::String^ villeLivraison)
{
	this->villeLivraison = villeLivraison;
}

void NS_Comp_Mappage::CLclientTB::setRueLivraison(System::String^ rueLivraison)
{
	this->rueLivraison = rueLivraison;
}

void NS_Comp_Mappage::CLclientTB::setNumeroLivraison(int numeroLivraison)
{
	this->numeroLivraison = numeroLivraison;
}

void NS_Comp_Mappage::CLclientTB::setCpLivraison(int cpLivraison)
{
	this->cpLivraison = cpLivraison;
}

void NS_Comp_Mappage::CLclientTB::setIdAdresseLivraison(int idAdresseLivraison)
{
	this->idAdresseLivraison = idAdresseLivraison;
}

void NS_Comp_Mappage::CLclientTB::setVilleFacturation(System::String^ villeFacturation)
{
	this->villeFacturation = villeFacturation;
}

void NS_Comp_Mappage::CLclientTB::setRueFacturation(System::String^ rueFacturation)
{
	this->rueFacturation = rueFacturation;
}

void NS_Comp_Mappage::CLclientTB::setNumeroFacturation(int numeroFacturation)
{
	this->numeroFacturation = numeroFacturation;
}

void NS_Comp_Mappage::CLclientTB::setCpFacturation(int cpFacturation)
{
	this->cpFacturation = cpFacturation;
}

void NS_Comp_Mappage::CLclientTB::setIdAdresseFacturation(int idAdresseFacturation)
{
	this->idAdresseFacturation = idAdresseFacturation;
}