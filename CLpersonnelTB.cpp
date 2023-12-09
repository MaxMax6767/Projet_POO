#include "CLpersonnelTB.h"

System::String^ NS_Comp_Mappage::CLpersonnelTB::Select()
{
	return "USE POO_projet; EXEC AfficherPersonnel;";
}

System::String^ NS_Comp_Mappage::CLpersonnelTB::Insert()
{
	return "USE POO_projet; EXEC CreerPersonnel @nom_personnel = '" + this->nom + "', @prenom_personnel = '" + this->prenom + "', @id_supperieur = " + this->idSupperieur + ", @date_embauche = '" + this->dateEmbauche + "', @ville_personnel = '" + this->ville + "', @rue_personnel = '" + this->rue + "', @numero_personnel = " + this->numero + ", @code_postal_personnel = " + this->cp + ";";
}

System::String^ NS_Comp_Mappage::CLpersonnelTB::Update()
{
	return "USE POO_projet; EXEC ModifierPersonnel @id_personnel = " + this->Id + ", @nom_personnel = '" + this->nom + "', @prenom_personnel = '" + this->prenom + "', @id_supperieur = " + this->idSupperieur + ", @date_embauche = '" + this->dateEmbauche + "', @ville_personnel = '" + this->ville + "', @rue_personnel = '" + this->rue + "', @numero_personnel = " + this->numero + ", @code_postal_personnel = " + this->cp + ";";
}

System::String^ NS_Comp_Mappage::CLpersonnelTB::Delete()
{
	return "USE POO_Projet; EXEC SupprimerPersonnel @id_personnel = " + this->Id + ";";
}

void NS_Comp_Mappage::CLpersonnelTB::setId(int id)
{
	this->Id = id;
}

void NS_Comp_Mappage::CLpersonnelTB::setNom(System::String^ nom)
{
	this->nom = nom;
}


void NS_Comp_Mappage::CLpersonnelTB::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}

void NS_Comp_Mappage::CLpersonnelTB::setDateEmbauche(System::DateTime^ dateEmbauche)
{
	this->dateEmbauche = dateEmbauche;
}

void NS_Comp_Mappage::CLpersonnelTB::setIdAdresse(int idAdresse)
{
	this->idAdresse = idAdresse;
}

void NS_Comp_Mappage::CLpersonnelTB::setIdSupperieur(int idSupperieur)
{
	this->idSupperieur = idSupperieur;
}

void NS_Comp_Mappage::CLpersonnelTB::setVille(System::String^ ville)
{
	this->ville = ville;
}

void NS_Comp_Mappage::CLpersonnelTB::setRue(System::String^ rue)
{
	this->rue = rue;
}

void NS_Comp_Mappage::CLpersonnelTB::setNumero(int numero)
{
	this->numero = numero;
}

void NS_Comp_Mappage::CLpersonnelTB::setCp(int cp)
{
	this->cp = cp;
}
