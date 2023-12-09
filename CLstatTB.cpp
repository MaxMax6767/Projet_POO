#include "CLstatTB.h"

System::String^ NS_Comp_Mappage::CLstatTB::PanierMoyen()
{
	return "USE POO_projet; EXEC PanierMoyen;";
}

System::String^ NS_Comp_Mappage::CLstatTB::CAParMois()
{
	return "USE POO_projet; EXEC ChiffreAffaire @mois = '" + this->date + "';";
}

System::String^ NS_Comp_Mappage::CLstatTB::CAParClient()
{
	return "USE POO_projet; EXEC TotalAchat @id_client = '" + this->idClient + "';";
}

System::String^ NS_Comp_Mappage::CLstatTB::ValeurCommercialeStock()
{
	return "USE POO_projet; EXEC ValeurCommercialStock;";
}

System::String^ NS_Comp_Mappage::CLstatTB::ValeurAchatStock()
{
	return "USE POO_projet; EXEC ValeurAchatStock;";
}

System::String^ NS_Comp_Mappage::CLstatTB::SousReapro()
{
	return "USE POO_projet; EXEC SousReapro;";
}

System::String^ NS_Comp_Mappage::CLstatTB::Top10MVente()
{
	return "USE POO_projet; EXEC Top10;";
}

System::String^ NS_Comp_Mappage::CLstatTB::Top10PVente()
{
	return "USE POO_projet; EXEC Bottom10;";
}

void NS_Comp_Mappage::CLstatTB::setDate(System::DateTime^ date)
{
	this->date = date;
}

void NS_Comp_Mappage::CLstatTB::setIdClient(int idClient)
{
	this->idClient = idClient;
}