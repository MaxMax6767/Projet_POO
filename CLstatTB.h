#pragma once
namespace NS_Comp_Mappage
{
	ref class CLstatTB
	{
	private:
		System::String^ sSql;
		System::DateTime^ date;
		int idClient;
	public:
		System::String^ PanierMoyen(void);
		System::String^ CAParMois(void);
		System::String^ CAParClient(void);
		System::String^ ValeurCommercialeStock(void);
		System::String^ ValeurAchatStock(void);
		System::String^ SousReapro(void);
		System::String^ Top10MVente(void);
		System::String^ Top10PVente(void);
		void setDate(System::DateTime^);
		void setIdClient(int);
		System::DateTime^ getDate(void) { return date; };
		int getIdClient(void) { return idClient; };
	};
}