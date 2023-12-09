#pragma once
namespace NS_Comp_Mappage
{
	ref class CLstockTB
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		float prix_achat;
		float prix_HT;
		System::Boolean^ degressif;
		int taux_TVA;
		int qt_dispo;
		int qt_reapro;
		System::String^ type;
		System::String^ couleur;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId(int);
		void setNom(System::String^);
		void setPrix_achat(float);
		void setPrix_HT(float);
		void setDegressif(System::Boolean^);
		void setTaux_TVA(int);
		void setQt_dispo(int);
		void setQt_reapro(int);
		void setType(System::String^);
		void setCouleur(System::String^);
		int getId(void) { return Id; };
		System::String^ getNom(void) { return nom; };
		float getPrix_achat(void) { return prix_achat; };
		float getPrix_HT(void) { return prix_HT; };
		System::Boolean^ getDegressif(void) { return degressif; };
		int getTaux_TVA(void) { return taux_TVA; };
		int getQt_dispo(void) { return qt_dispo; };
		int getQt_reapro(void) { return qt_reapro; };
		System::String^ getType(void) { return type; };
		System::String^ getCouleur(void) { return couleur; };
	};
}