#pragma once
namespace NS_Comp_Mappage
{
	ref class CLpersonnelTB
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ prenom;
		System::DateTime^ dateEmbauche;
		System::String^ ville;
		System::String^ rue;
		int numero;
		int cp;
		int idAdresse;
		int idSupperieur;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setDateEmbauche(System::DateTime^);
		void setVille(System::String^);
		void setRue(System::String^);
		void setNumero(int);
		void setCp(int);
		void setIdAdresse(int);
		void setIdSupperieur(int);
		int getId(void) { return Id; };
		System::String^ getNom(void) { return nom; }; 
		System::String^ getPrenom(void) { return prenom; };
		System::DateTime^ getDateEmbauche(void) { return dateEmbauche; };
		System::String^ getVille(void) { return ville; };
		System::String^ getRue(void) { return rue; };
		int getNumero(void) { return numero; };
		int getCp(void) { return cp; };
		int getIdAdresse(void) { return idAdresse; };
		int getIdSupperieur(void) { return idSupperieur; };
	};
}