//CLservice.h********************************************************************************
#pragma once
#include "CLcad.h"
#include "CLpersonnelTB.h"
#include "CLclientTB.h"
#include "CLstockTB.h"
#include "CLstatTB.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLpersonnelTB^ oPersonnelTB;
		NS_Comp_Mappage::CLclientTB^ oClientTB;
		NS_Comp_Mappage::CLstockTB^ oStockTB;
		NS_Comp_Mappage::CLstatTB^ oStatTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutLePersonnel(System::String^);
		void ajouterUnPersonnel(System::String^, System::String^, System::Decimal^, System::DateTime^, System::String^, System::String^, System::Decimal^, System::Decimal^);
		void updateUnPersonnel(System::Decimal^, System::String^, System::String^, System::Decimal^, System::DateTime^, System::String^, System::String^, System::Decimal^, System::Decimal^);
		void deleteUnPersonnel(System::Decimal^);
		System::Data::DataSet^ selectionnerToutLeClient(System::String^);
		void ajouterUnClient(System::String^, System::String^, System::DateTime^, System::DateTime^, System::String^, System::String^, System::String^, System::String^, System::Decimal^, System::Decimal^, System::Boolean^, System::String^, System::String^, System::Decimal^, System::Decimal^);
		void updateUnClient(System::Decimal^, System::String^, System::String^, System::DateTime^, System::DateTime^, System::String^, System::String^, System::String^, System::String^, System::Decimal^, System::Decimal^, System::Boolean^, System::String^, System::String^, System::Decimal^, System::Decimal^);
		void deleteUnClient(System::Decimal^);
		System::Data::DataSet^ selectionnerToutLeStock(System::String^);
		void ajouterUnStock(System::String^, System::String^, System::String^, System::Boolean^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void updateUnStock(System::Decimal^, System::String^, System::String^, System::String^, System::Boolean^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void deleteUnStock(System::Decimal^);
		System::Data::DataSet^ PanierMoyen(System::String^);
		System::Data::DataSet^ CAParMois(System::String^, System::DateTime^);
		System::Data::DataSet^ CAParClient(System::String^ , System::Decimal^);
		System::Data::DataSet^ ValeurCommercialeStock(System::String^);
		System::Data::DataSet^ ValeurAchatStock(System::String^);
		System::Data::DataSet^ SousReapro(System::String^);
		System::Data::DataSet^ Top10MVente(System::String^);
		System::Data::DataSet^ Top10PVente(System::String^);
	};
}