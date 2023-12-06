//CLmap.CPP*****************************************************************************************
#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::getAdressId(void)
{
	return "USE Gestion; SELECT id_adresse FROM Adresse WHERE ville = '" + this->ville + "' AND rue = '" + this->adresse + "' AND cp = '" + this->cp + "';";
}

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT C.[id_client], C.[nom], C.[prenom], A.[ville], A.[rue], A.[cp] FROM [Gestion].[dbo].[Client] C JOIN [Gestion].[dbo].[Adresse] A ON A.id_adresse = C.id_adresse;";
}

System::String^ NS_Comp_Mappage::CLmapTB::Select2(void)
{
	return "SELECT C.[id_client] AS 'Identifiant', C.[nom] AS 'Nom', C.[prenom] AS 'Prenom', A.[ville] AS 'Ville', A.[rue] AS 'Adresse', A.[cp] AS 'Code Postal' FROM [Gestion].[dbo].[Client] C JOIN [Gestion].[dbo].[Adresse] A ON A.id_adresse = C.id_adresse;";
}

// FLAG
System::String^ NS_Comp_Mappage::CLmapTB::InsertAdresse(void)
{
	return "USE Gestion; INSERT INTO Adresse (ville, rue, cp) VALUES('" + this->ville + "','" + this->adresse + "','" + this->cp + "');";
}

System::String^ NS_Comp_Mappage::CLmapTB::InsertClient(void)
{
	return "USE Gestion; INSERT INTO Client (nom, prenom, id_adresse) VALUES('" + this->nom + "','" + this->prenom + "', " + this->adressId + ");";
}


System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
	return "DELETE FROM Client WHERE id_client = " + this->Id + ";";
}
System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
	return "USE Gestion; BEGIN TRANSACTION; UPDATE Client SET Client.nom = '" + this->nom + "', Client.prenom = '" + this->prenom + "' FROM Client C, Adresse A WHERE C.id_adresse = A.id_adresse AND C.id_client = '" + this->Id + "'; UPDATE Adresse SET Adresse.ville = '" + this->ville + "', Adresse.rue = '" + this->adresse + "', Adresse.cp = '" + this->cp + "' FROM Client C, Adresse A WHERE C.id_adresse = A.id_adresse AND C.id_client = '" + this->Id + "'; COMMIT;";
}
void NS_Comp_Mappage::CLmapTB::setId(int Id)
{
	this->Id = Id;
}
void NS_Comp_Mappage::CLmapTB::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
void NS_Comp_Mappage::CLmapTB::setVille(System::String^ ville)
{
	this->ville = ville;
}
void NS_Comp_Mappage::CLmapTB::setAdresse(System::String^ adresse)
{
	this->adresse = adresse;
}
void NS_Comp_Mappage::CLmapTB::setCp(System::String^ cp)
{
	this->cp = cp;
}
void NS_Comp_Mappage::CLmapTB::SetAdressId(System::String^ adressId)
{
	this->adressId = System::Convert::ToInt32(adressId);
}

int NS_Comp_Mappage::CLmapTB::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->prenom; }
System::String^ NS_Comp_Mappage::CLmapTB::getVille(void) { return this->ville; }
System::String^ NS_Comp_Mappage::CLmapTB::getAdresse(void) { return this->adresse; }
System::String^ NS_Comp_Mappage::CLmapTB::getCp(void) { return this->cp; }