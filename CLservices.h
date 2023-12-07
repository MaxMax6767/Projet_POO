//CLservice.h********************************************************************************
#pragma once
#include "CLcad.h"
#include "CLpersonnelTB.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLpersonnelTB^ oPersonnelTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutLePersonnel(System::String^);
		void ajouterUnPersonnel(System::String^, System::String^, System::Decimal^, System::DateTime^, System::String^, System::String^, System::Decimal^, System::Decimal^);
		void updateUnPersonnel(System::Decimal^, System::String^, System::String^, System::Decimal^, System::DateTime^, System::String^, System::String^, System::Decimal^, System::Decimal^);
		void deleteUnPersonnel(System::Decimal^);
	};
}