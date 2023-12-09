#pragma once
namespace NS_Comp_Mappage
{
	ref class CLclientTB
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ prenom;
		System::DateTime^ dateNaissance;
		System::DateTime^ date1erAchat;
		System::String^ logo;
		System::String^ nomEntreprise;
		System::String^ villeLivraison;
		System::String^ rueLivraison;
		int numeroLivraison;
		int cpLivraison;
		int idAdresseLivraison;
		System::String^ villeFacturation;
		System::String^ rueFacturation;
		int numeroFacturation;
		int cpFacturation;
		int idAdresseFacturation;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setDateNaissance(System::DateTime^);
		void setDate1erAchat(System::DateTime^);
		void setLogo(System::String^);
		void setNomEntreprise(System::String^);
		void setVilleLivraison(System::String^);
		void setRueLivraison(System::String^);
		void setNumeroLivraison(int);
		void setCpLivraison(int);
		void setIdAdresseLivraison(int);
		void setVilleFacturation(System::String^);
		void setRueFacturation(System::String^);
		void setNumeroFacturation(int);
		void setCpFacturation(int);
		void setIdAdresseFacturation(int);
		int getId(void) { return Id; };
		System::String^ getNom(void) { return nom; };
		System::String^ getPrenom(void) { return prenom; };
		System::DateTime^ getDateNaissance(void) { return dateNaissance; };
		System::DateTime^ getDate1erAchat(void) { return date1erAchat; };
		System::String^ getLogo(void) { return logo; };
		System::String^ getNomEntreprise(void) { return nomEntreprise; };
		System::String^ getVilleLivraison(void) { return villeLivraison; };
		System::String^ getRueLivraison(void) { return rueLivraison; };
		int getNumeroLivraison(void) { return numeroLivraison; };
		int getCpLivraison(void) { return cpLivraison; };
		int getIdAdresseLivraison(void) { return idAdresseLivraison; };
		System::String^ getVilleFacturation(void) { return villeFacturation; };
		System::String^ getRueFacturation(void) { return rueLivraison; };
		int getNumeroFacturation(void) { return numeroFacturation; };
		int getCpFacturation(void) { return cpFacturation; };
		int getIdAdresseFacturation(void) { return idAdresseFacturation; };
	};
}