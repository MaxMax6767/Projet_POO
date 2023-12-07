#include "CLpersonnelTB.h"

System::String^ NS_Comp_Mappage::CLpersonnelTB::Select()
{
	return "USE POO_Projet; SELECT P.[id_personnel] AS 'Identifiant', P.[nom_personnel] AS 'Nom', P.[prenom_personnel] AS 'Prenom', P.[date_embauche] AS 'Date embauche', P.[id_supperieur] AS 'Supperieur', A.[ville] AS 'Ville', A.[rue] AS 'Rue', A.[numero] AS 'Numero', A.[code_postal] AS 'Code Postal' FROM [POO_Projet].[dbo].[Personnel] P JOIN [POO_Projet].[dbo].[Adresse] A ON A.id_adresse = P.id_adresse;";
}

System::String^ NS_Comp_Mappage::CLpersonnelTB::Insert()
{
	return "USE POO_Projet; BEGIN TRANSACTION; INSERT INTO Adresse(ville, rue, numero, code_postal) VALUES('" + this->ville + "', '" + this->rue + "', '" + this->numero + "', '" + this->cp + "'); INSERT INTO Personnel(nom_personnel, prenom_personnel, date_embauche, id_supperieur, id_adresse) VALUES('" + this->nom + "', '" + this->prenom + "', " + this->dateEmbauche + ", " + this->idSupperieur + ", (SELECT MAX(id) FROM Adresse)); COMMIT;";
}

System::String^ NS_Comp_Mappage::CLpersonnelTB::Update()
{
	return "USE POO_Projet; BEGIN TRANSACTION; UPDATE Personnel SET P.nom_personnel = '" + this->nom + "', P.prenom = '" + this->prenom + "', P.date_embauche = " + this->dateEmbauche + ", P.id_supperieur = " + this->idSupperieur + " FROM Personnel P, Adresse A WHERE P.id_adresse = A.id_adresse AND P.id_personnel = '" + this->Id + "'; UPDATE Adresse SET A.ville = '" + this->ville + "', A.rue = '" + this->rue + "', A.cp = '" + this->cp + "', A.numero = '" + this->numero + "' FROM Personnel P, Adresse A WHERE P.id_adresse = A.id_adresse AND P.id_personnel = '" + this->Id + "'; COMMIT;";
}

System::String^ NS_Comp_Mappage::CLpersonnelTB::Delete()
{
	return "USE POO_Projet; DELETE FROM Personnel WHERE id_personnel = '" + this->Id + "';";
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
