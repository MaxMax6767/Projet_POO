#include <vector>



#pragma once
namespace NS_Comp_Mappage
{
	ref class CLcommandeTB
	{
	private:
		System::String^ sSql;
		int Id;
		System::DateTime^ dateExpedition;
		System::DateTime^ dateLivraison;
		System::String^ moyenPaiement;
		int nbArticles;
		int remise;
		int idClient;
		System::Collections::ArrayList^ listeArticles = gcnew System::Collections::ArrayList;
		System::Collections::ArrayList^ listeQuantites = gcnew System::Collections::ArrayList;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ InsertPanier(void);
		System::String^ InsertPrix(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		System::String^ UpdatePanier(void);
		System::String^ UpdatePrix(void);
		void setId(int);
		void setDateExpedition(System::DateTime^);
		void setDateLivraison(System::DateTime^);
		void setMoyenPaiement(System::String^);
		void setNbArticles(int);
		void setRemise(int);
		void setIdClient(int);
		void addToListeArticles(int);
		void addToListeQuantites(int);
		void supprFromListeArticles(int);
		void supprFromListeQuantites(int);
		void emptyListeArticles(void);
		void emptyListeQuantites(void);
		int getId(void) { return this->Id; };
		System::DateTime^ getDateExpedition(void) { return this->dateExpedition; };
		System::DateTime^ getDateLivraison(void) { return this->dateLivraison; };
		System::String^ getMoyenPaiement(void) { return this->moyenPaiement; };
		int getNbArticles(void) { return this->nbArticles; };
		int getRemise(void) { return this->remise; };
		int getIdClient(void) { return this->idClient; };
		System::Collections::ArrayList^ getListeArticles(void) { return this->listeArticles; };
		System::Collections::ArrayList^ getListeQuantites(void) { return this->listeQuantites; };
		int getTailleListeArticles(void) { return this->listeArticles->Count; };
		int getTailleListeQuantites(void) { return this->listeQuantites->Count; };
		int getValeurListeArticles(int i) { return (int)this->listeArticles[i]; };
		int getValeurListeQuantites(int i) { return (int)this->listeQuantites[i]; };
	};
}