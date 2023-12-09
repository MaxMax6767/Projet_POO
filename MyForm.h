//MyForm.H*********************************************************************************************
#pragma once
#include "CLservices.h"

namespace P6new {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r sum e de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis es.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_personnel;


	protected:



	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::Label^ label_id_employe;
	private: System::Windows::Forms::Label^ label_nom_employe;
	private: System::Windows::Forms::Label^ label_prenom_employe;
	private: System::Windows::Forms::Label^ Rue_employe;
	private: System::Windows::Forms::Label^ ville_employe;
	private: System::Windows::Forms::TextBox^ rue_personnel;




	private: System::Windows::Forms::TextBox^ ville_personnel;

	private: System::Windows::Forms::TextBox^ nom_personnel;
	private: System::Windows::Forms::TextBox^ prenom_personnel;



	private: System::Windows::Forms::Label^ Numero_employe;



	private: System::Windows::Forms::TabControl^ Catégories;
	private: System::Windows::Forms::TabPage^ tab_personnel;
	private: System::Windows::Forms::TabPage^ tab_clients;
	private: System::Windows::Forms::RadioButton^ radio_suppr_personnel;




	private: System::Windows::Forms::RadioButton^ radio_edit_personnel;

	private: System::Windows::Forms::RadioButton^ radio_add_personnel;

	private: System::Windows::Forms::GroupBox^ Actions_Personnel;
	private: System::Windows::Forms::GroupBox^ userEntry_personnel;

	private: System::Windows::Forms::Label^ ID_supp_employe;
	private: System::Windows::Forms::Label^ label_date_embauche;




	private: System::Windows::Forms::Label^ CP_employe;
	private: System::Windows::Forms::NumericUpDown^ id_personnel;
	private: System::Windows::Forms::DateTimePicker^ date_embauche;
	private: System::Windows::Forms::NumericUpDown^ cp_personnel;




	private: System::Windows::Forms::NumericUpDown^ id_supp;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ radio_delete_client;

	private: System::Windows::Forms::RadioButton^ radio_edit_client;

	private: System::Windows::Forms::RadioButton^ radio_add_client;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ userEntry_clients;



	private: System::Windows::Forms::NumericUpDown^ id_client;


	private: System::Windows::Forms::DateTimePicker^ date_naissance;


	private: System::Windows::Forms::Label^ label_date_naissance;



	private: System::Windows::Forms::TextBox^ logo_link;

	private: System::Windows::Forms::Label^ label_logo;

	private: System::Windows::Forms::Label^ label_prenom_client;
private: System::Windows::Forms::TextBox^ nom_entreprise;



private: System::Windows::Forms::Label^ label_nom_client;
private: System::Windows::Forms::TextBox^ nom_client;


private: System::Windows::Forms::Label^ label_id_client;
private: System::Windows::Forms::Label^ label_nom_entreprise;



private: System::Windows::Forms::TextBox^ prenom_client;
private: System::Windows::Forms::DateTimePicker^ date_1er_achat;
private: System::Windows::Forms::Label^ label_date_1er_achat;
private: System::Windows::Forms::DataGridView^ dgv_clients;
private: System::Windows::Forms::CheckBox^ adresse_check;

private: System::Windows::Forms::NumericUpDown^ cp_client_1;

private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ ville_client_1;

private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ rue_client_1;

private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label10;


private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::NumericUpDown^ cp_client_2;

private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ ville_client_2;

private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ rue_client_2;


private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;

private: System::Windows::Forms::TabPage^ Stock;
private: System::Windows::Forms::TabPage^ Commandes;
private: System::Windows::Forms::TabPage^ Statistiques;

private: System::Windows::Forms::TabPage^ Informations;
private: System::Windows::Forms::GroupBox^ groupBox1;
















































private: System::Windows::Forms::NumericUpDown^ numero_personnel;




private: System::Windows::Forms::Button^ btn_valider_employe;
private: System::Windows::Forms::Label^ label_stat_panier_moyen;
private: System::Windows::Forms::Button^ btn_rld_panier_moyen;


private: System::Windows::Forms::TextBox^ stat_panier_moyen;

private: System::Windows::Forms::GroupBox^ stats_grp;
private: System::Windows::Forms::DateTimePicker^ date_stat_ca;

private: System::Windows::Forms::Label^ label_stat_ca;
private: System::Windows::Forms::TextBox^ stat_ca;
private: System::Windows::Forms::Button^ btn_rld_ca;
private: System::Windows::Forms::Button^ btn_rld_seuil_reapro;
private: System::Windows::Forms::Label^ label_stats_seuil_reapro;
private: System::Windows::Forms::DataGridView^ dgv_seuil_reapro;
private: System::Windows::Forms::Button^ btn_rld_pires_ventes;

private: System::Windows::Forms::Label^ label_pires_ventes;
private: System::Windows::Forms::DataGridView^ dgv_pires_ventes;
private: System::Windows::Forms::Button^ btn_rld_meilleures_ventes;



private: System::Windows::Forms::Label^ label_meilleures_ventes;
private: System::Windows::Forms::DataGridView^ dgv_meilleures_ventes;


private: System::Windows::Forms::TextBox^ stat_valeur_achat;
private: System::Windows::Forms::Label^ label_valeur_achat_stock;
private: System::Windows::Forms::Button^ btn_rld_valeur_achat;
private: System::Windows::Forms::TextBox^ stat_valeur_commerciale;
private: System::Windows::Forms::Label^ label_valeur_commerciale;
private: System::Windows::Forms::Button^ btn_rld_valeur_commerciale;
private: System::Windows::Forms::NumericUpDown^ stat_id_client;
private: System::Windows::Forms::Label^ laben_stat_total_client;
private: System::Windows::Forms::TextBox^ stat_total_client;
private: System::Windows::Forms::Button^ btn_rld_total_client;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::GroupBox^ valider_stock;

private: System::Windows::Forms::RadioButton^ radio_suppr_stock;

private: System::Windows::Forms::RadioButton^ radio_edit_stock;

private: System::Windows::Forms::RadioButton^ radio_ajouter_stock;
private: System::Windows::Forms::Button^ btn_valider_stock;


private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::TextBox^ nom_produit_stock;

private: System::Windows::Forms::TextBox^ qt_dispo;
private: System::Windows::Forms::TextBox^ seuil_reapro;
private: System::Windows::Forms::Label^ label_type;
private: System::Windows::Forms::Label^ label_couleur;
private: System::Windows::Forms::TextBox^ couleur;
private: System::Windows::Forms::Label^ label_qt_dispo;
private: System::Windows::Forms::Label^ label_nom_produit;
private: System::Windows::Forms::TextBox^ type;
private: System::Windows::Forms::Label^ label_seuil_reapro;
private: System::Windows::Forms::CheckBox^ prix_degressif;
private: System::Windows::Forms::NumericUpDown^ id_produit;
private: System::Windows::Forms::TextBox^ taux_tva;
private: System::Windows::Forms::Label^ label_id_produit;
private: System::Windows::Forms::TextBox^ prix_ht;
private: System::Windows::Forms::Label^ label_prix_ht;
private: System::Windows::Forms::Label^ label_taux_tva;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::NumericUpDown^ numero_client_2;
private: System::Windows::Forms::NumericUpDown^ numero_client_1;
private: System::Windows::Forms::TabPage^ tabPage1;























	protected:

	private:
		/// <summary>
		/// Variable n cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m thode avec l' diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_personnel = (gcnew System::Windows::Forms::DataGridView());
			this->nom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->prenom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->label_id_employe = (gcnew System::Windows::Forms::Label());
			this->label_nom_employe = (gcnew System::Windows::Forms::Label());
			this->label_prenom_employe = (gcnew System::Windows::Forms::Label());
			this->Rue_employe = (gcnew System::Windows::Forms::Label());
			this->ville_employe = (gcnew System::Windows::Forms::Label());
			this->rue_personnel = (gcnew System::Windows::Forms::TextBox());
			this->ville_personnel = (gcnew System::Windows::Forms::TextBox());
			this->Numero_employe = (gcnew System::Windows::Forms::Label());
			this->Catégories = (gcnew System::Windows::Forms::TabControl());
			this->tab_personnel = (gcnew System::Windows::Forms::TabPage());
			this->userEntry_personnel = (gcnew System::Windows::Forms::GroupBox());
			this->numero_personnel = (gcnew System::Windows::Forms::NumericUpDown());
			this->cp_personnel = (gcnew System::Windows::Forms::NumericUpDown());
			this->id_supp = (gcnew System::Windows::Forms::NumericUpDown());
			this->id_personnel = (gcnew System::Windows::Forms::NumericUpDown());
			this->date_embauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->ID_supp_employe = (gcnew System::Windows::Forms::Label());
			this->label_date_embauche = (gcnew System::Windows::Forms::Label());
			this->CP_employe = (gcnew System::Windows::Forms::Label());
			this->Actions_Personnel = (gcnew System::Windows::Forms::GroupBox());
			this->btn_valider_employe = (gcnew System::Windows::Forms::Button());
			this->radio_suppr_personnel = (gcnew System::Windows::Forms::RadioButton());
			this->radio_edit_personnel = (gcnew System::Windows::Forms::RadioButton());
			this->radio_add_personnel = (gcnew System::Windows::Forms::RadioButton());
			this->tab_clients = (gcnew System::Windows::Forms::TabPage());
			this->dgv_clients = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radio_delete_client = (gcnew System::Windows::Forms::RadioButton());
			this->radio_edit_client = (gcnew System::Windows::Forms::RadioButton());
			this->radio_add_client = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->userEntry_clients = (gcnew System::Windows::Forms::GroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->numero_client_1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numero_client_2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->cp_client_2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->ville_client_2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->rue_client_2 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->adresse_check = (gcnew System::Windows::Forms::CheckBox());
			this->id_client = (gcnew System::Windows::Forms::NumericUpDown());
			this->cp_client_1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->prenom_client = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label_id_client = (gcnew System::Windows::Forms::Label());
			this->ville_client_1 = (gcnew System::Windows::Forms::TextBox());
			this->nom_entreprise = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->nom_client = (gcnew System::Windows::Forms::TextBox());
			this->rue_client_1 = (gcnew System::Windows::Forms::TextBox());
			this->label_logo = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label_nom_entreprise = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->logo_link = (gcnew System::Windows::Forms::TextBox());
			this->label_nom_client = (gcnew System::Windows::Forms::Label());
			this->date_1er_achat = (gcnew System::Windows::Forms::DateTimePicker());
			this->label_prenom_client = (gcnew System::Windows::Forms::Label());
			this->label_date_1er_achat = (gcnew System::Windows::Forms::Label());
			this->label_date_naissance = (gcnew System::Windows::Forms::Label());
			this->date_naissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->Stock = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->valider_stock = (gcnew System::Windows::Forms::GroupBox());
			this->radio_suppr_stock = (gcnew System::Windows::Forms::RadioButton());
			this->radio_edit_stock = (gcnew System::Windows::Forms::RadioButton());
			this->radio_ajouter_stock = (gcnew System::Windows::Forms::RadioButton());
			this->btn_valider_stock = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->nom_produit_stock = (gcnew System::Windows::Forms::TextBox());
			this->qt_dispo = (gcnew System::Windows::Forms::TextBox());
			this->seuil_reapro = (gcnew System::Windows::Forms::TextBox());
			this->label_type = (gcnew System::Windows::Forms::Label());
			this->label_couleur = (gcnew System::Windows::Forms::Label());
			this->couleur = (gcnew System::Windows::Forms::TextBox());
			this->label_qt_dispo = (gcnew System::Windows::Forms::Label());
			this->label_nom_produit = (gcnew System::Windows::Forms::Label());
			this->type = (gcnew System::Windows::Forms::TextBox());
			this->label_seuil_reapro = (gcnew System::Windows::Forms::Label());
			this->prix_degressif = (gcnew System::Windows::Forms::CheckBox());
			this->id_produit = (gcnew System::Windows::Forms::NumericUpDown());
			this->taux_tva = (gcnew System::Windows::Forms::TextBox());
			this->label_id_produit = (gcnew System::Windows::Forms::Label());
			this->prix_ht = (gcnew System::Windows::Forms::TextBox());
			this->label_prix_ht = (gcnew System::Windows::Forms::Label());
			this->label_taux_tva = (gcnew System::Windows::Forms::Label());
			this->Commandes = (gcnew System::Windows::Forms::TabPage());
			this->Statistiques = (gcnew System::Windows::Forms::TabPage());
			this->stats_grp = (gcnew System::Windows::Forms::GroupBox());
			this->stat_valeur_achat = (gcnew System::Windows::Forms::TextBox());
			this->label_valeur_achat_stock = (gcnew System::Windows::Forms::Label());
			this->btn_rld_valeur_achat = (gcnew System::Windows::Forms::Button());
			this->stat_valeur_commerciale = (gcnew System::Windows::Forms::TextBox());
			this->label_valeur_commerciale = (gcnew System::Windows::Forms::Label());
			this->btn_rld_valeur_commerciale = (gcnew System::Windows::Forms::Button());
			this->stat_id_client = (gcnew System::Windows::Forms::NumericUpDown());
			this->laben_stat_total_client = (gcnew System::Windows::Forms::Label());
			this->stat_total_client = (gcnew System::Windows::Forms::TextBox());
			this->btn_rld_total_client = (gcnew System::Windows::Forms::Button());
			this->btn_rld_pires_ventes = (gcnew System::Windows::Forms::Button());
			this->label_pires_ventes = (gcnew System::Windows::Forms::Label());
			this->dgv_pires_ventes = (gcnew System::Windows::Forms::DataGridView());
			this->btn_rld_meilleures_ventes = (gcnew System::Windows::Forms::Button());
			this->label_meilleures_ventes = (gcnew System::Windows::Forms::Label());
			this->dgv_meilleures_ventes = (gcnew System::Windows::Forms::DataGridView());
			this->btn_rld_seuil_reapro = (gcnew System::Windows::Forms::Button());
			this->label_stats_seuil_reapro = (gcnew System::Windows::Forms::Label());
			this->dgv_seuil_reapro = (gcnew System::Windows::Forms::DataGridView());
			this->label_stat_ca = (gcnew System::Windows::Forms::Label());
			this->stat_ca = (gcnew System::Windows::Forms::TextBox());
			this->btn_rld_ca = (gcnew System::Windows::Forms::Button());
			this->date_stat_ca = (gcnew System::Windows::Forms::DateTimePicker());
			this->stat_panier_moyen = (gcnew System::Windows::Forms::TextBox());
			this->label_stat_panier_moyen = (gcnew System::Windows::Forms::Label());
			this->btn_rld_panier_moyen = (gcnew System::Windows::Forms::Button());
			this->Informations = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_personnel))->BeginInit();
			this->Catégories->SuspendLayout();
			this->tab_personnel->SuspendLayout();
			this->userEntry_personnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numero_personnel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cp_personnel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_supp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_personnel))->BeginInit();
			this->Actions_Personnel->SuspendLayout();
			this->tab_clients->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_clients))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->userEntry_clients->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numero_client_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numero_client_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cp_client_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cp_client_1))->BeginInit();
			this->Stock->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->valider_stock->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_produit))->BeginInit();
			this->Statistiques->SuspendLayout();
			this->stats_grp->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stat_id_client))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_pires_ventes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_meilleures_ventes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_seuil_reapro))->BeginInit();
			this->Informations->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgv_personnel
			// 
			this->dgv_personnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_personnel->Location = System::Drawing::Point(296, 18);
			this->dgv_personnel->Name = L"dgv_personnel";
			this->dgv_personnel->Size = System::Drawing::Size(918, 648);
			this->dgv_personnel->TabIndex = 0;
			// 
			// nom_personnel
			// 
			this->nom_personnel->Location = System::Drawing::Point(6, 80);
			this->nom_personnel->Name = L"nom_personnel";
			this->nom_personnel->Size = System::Drawing::Size(266, 20);
			this->nom_personnel->TabIndex = 6;
			// 
			// prenom_personnel
			// 
			this->prenom_personnel->Location = System::Drawing::Point(6, 119);
			this->prenom_personnel->Name = L"prenom_personnel";
			this->prenom_personnel->Size = System::Drawing::Size(266, 20);
			this->prenom_personnel->TabIndex = 7;
			// 
			// label_id_employe
			// 
			this->label_id_employe->AutoSize = true;
			this->label_id_employe->Location = System::Drawing::Point(7, 22);
			this->label_id_employe->Name = L"label_id_employe";
			this->label_id_employe->Size = System::Drawing::Size(18, 13);
			this->label_id_employe->TabIndex = 12;
			this->label_id_employe->Text = L"ID";
			this->label_id_employe->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label_nom_employe
			// 
			this->label_nom_employe->AutoSize = true;
			this->label_nom_employe->Location = System::Drawing::Point(7, 64);
			this->label_nom_employe->Name = L"label_nom_employe";
			this->label_nom_employe->Size = System::Drawing::Size(29, 13);
			this->label_nom_employe->TabIndex = 13;
			this->label_nom_employe->Text = L"Nom";
			this->label_nom_employe->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label_prenom_employe
			// 
			this->label_prenom_employe->AutoSize = true;
			this->label_prenom_employe->Location = System::Drawing::Point(7, 103);
			this->label_prenom_employe->Name = L"label_prenom_employe";
			this->label_prenom_employe->Size = System::Drawing::Size(43, 13);
			this->label_prenom_employe->TabIndex = 14;
			this->label_prenom_employe->Text = L"Prénom";
			// 
			// Rue_employe
			// 
			this->Rue_employe->AutoSize = true;
			this->Rue_employe->Location = System::Drawing::Point(7, 262);
			this->Rue_employe->Name = L"Rue_employe";
			this->Rue_employe->Size = System::Drawing::Size(27, 13);
			this->Rue_employe->TabIndex = 18;
			this->Rue_employe->Text = L"Rue";
			this->Rue_employe->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// ville_employe
			// 
			this->ville_employe->AutoSize = true;
			this->ville_employe->Location = System::Drawing::Point(6, 223);
			this->ville_employe->Name = L"ville_employe";
			this->ville_employe->Size = System::Drawing::Size(26, 13);
			this->ville_employe->TabIndex = 17;
			this->ville_employe->Text = L"Ville";
			// 
			// rue_personnel
			// 
			this->rue_personnel->Location = System::Drawing::Point(6, 278);
			this->rue_personnel->Name = L"rue_personnel";
			this->rue_personnel->Size = System::Drawing::Size(266, 20);
			this->rue_personnel->TabIndex = 16;
			// 
			// ville_personnel
			// 
			this->ville_personnel->Location = System::Drawing::Point(6, 239);
			this->ville_personnel->Name = L"ville_personnel";
			this->ville_personnel->Size = System::Drawing::Size(266, 20);
			this->ville_personnel->TabIndex = 15;
			// 
			// Numero_employe
			// 
			this->Numero_employe->AutoSize = true;
			this->Numero_employe->Location = System::Drawing::Point(7, 306);
			this->Numero_employe->Name = L"Numero_employe";
			this->Numero_employe->Size = System::Drawing::Size(44, 13);
			this->Numero_employe->TabIndex = 20;
			this->Numero_employe->Text = L"Numero";
			this->Numero_employe->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// Catégories
			// 
			this->Catégories->Controls->Add(this->tab_personnel);
			this->Catégories->Controls->Add(this->tab_clients);
			this->Catégories->Controls->Add(this->Stock);
			this->Catégories->Controls->Add(this->Commandes);
			this->Catégories->Controls->Add(this->Statistiques);
			this->Catégories->Controls->Add(this->Informations);
			this->Catégories->Controls->Add(this->tabPage1);
			this->Catégories->Location = System::Drawing::Point(10, 12);
			this->Catégories->Name = L"Catégories";
			this->Catégories->SelectedIndex = 0;
			this->Catégories->Size = System::Drawing::Size(1248, 664);
			this->Catégories->TabIndex = 21;
			// 
			// tab_personnel
			// 
			this->tab_personnel->Controls->Add(this->userEntry_personnel);
			this->tab_personnel->Controls->Add(this->Actions_Personnel);
			this->tab_personnel->Controls->Add(this->dgv_personnel);
			this->tab_personnel->Location = System::Drawing::Point(4, 22);
			this->tab_personnel->Name = L"tab_personnel";
			this->tab_personnel->Padding = System::Windows::Forms::Padding(3);
			this->tab_personnel->Size = System::Drawing::Size(1240, 638);
			this->tab_personnel->TabIndex = 0;
			this->tab_personnel->Text = L"Personnel";
			this->tab_personnel->UseVisualStyleBackColor = true;
			this->tab_personnel->Click += gcnew System::EventHandler(this, &MyForm::tab_client_Click);
			// 
			// userEntry_personnel
			// 
			this->userEntry_personnel->Controls->Add(this->numero_personnel);
			this->userEntry_personnel->Controls->Add(this->cp_personnel);
			this->userEntry_personnel->Controls->Add(this->id_supp);
			this->userEntry_personnel->Controls->Add(this->id_personnel);
			this->userEntry_personnel->Controls->Add(this->date_embauche);
			this->userEntry_personnel->Controls->Add(this->ID_supp_employe);
			this->userEntry_personnel->Controls->Add(this->label_date_embauche);
			this->userEntry_personnel->Controls->Add(this->CP_employe);
			this->userEntry_personnel->Controls->Add(this->ville_personnel);
			this->userEntry_personnel->Controls->Add(this->ville_employe);
			this->userEntry_personnel->Controls->Add(this->label_prenom_employe);
			this->userEntry_personnel->Controls->Add(this->rue_personnel);
			this->userEntry_personnel->Controls->Add(this->Numero_employe);
			this->userEntry_personnel->Controls->Add(this->label_nom_employe);
			this->userEntry_personnel->Controls->Add(this->nom_personnel);
			this->userEntry_personnel->Controls->Add(this->label_id_employe);
			this->userEntry_personnel->Controls->Add(this->Rue_employe);
			this->userEntry_personnel->Controls->Add(this->prenom_personnel);
			this->userEntry_personnel->Location = System::Drawing::Point(6, 14);
			this->userEntry_personnel->Name = L"userEntry_personnel";
			this->userEntry_personnel->Size = System::Drawing::Size(284, 522);
			this->userEntry_personnel->TabIndex = 25;
			this->userEntry_personnel->TabStop = false;
			this->userEntry_personnel->Text = L"Entrée utilisateur";
			this->userEntry_personnel->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter_1);
			// 
			// numero_personnel
			// 
			this->numero_personnel->Location = System::Drawing::Point(6, 322);
			this->numero_personnel->Name = L"numero_personnel";
			this->numero_personnel->Size = System::Drawing::Size(266, 20);
			this->numero_personnel->TabIndex = 29;
			// 
			// cp_personnel
			// 
			this->cp_personnel->Location = System::Drawing::Point(6, 368);
			this->cp_personnel->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
			this->cp_personnel->Name = L"cp_personnel";
			this->cp_personnel->Size = System::Drawing::Size(266, 20);
			this->cp_personnel->TabIndex = 28;
			// 
			// id_supp
			// 
			this->id_supp->Location = System::Drawing::Point(6, 159);
			this->id_supp->Name = L"id_supp";
			this->id_supp->Size = System::Drawing::Size(266, 20);
			this->id_supp->TabIndex = 27;
			// 
			// id_personnel
			// 
			this->id_personnel->Enabled = false;
			this->id_personnel->Location = System::Drawing::Point(6, 41);
			this->id_personnel->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->id_personnel->Name = L"id_personnel";
			this->id_personnel->Size = System::Drawing::Size(266, 20);
			this->id_personnel->TabIndex = 26;
			// 
			// date_embauche
			// 
			this->date_embauche->Location = System::Drawing::Point(6, 200);
			this->date_embauche->Name = L"date_embauche";
			this->date_embauche->Size = System::Drawing::Size(266, 20);
			this->date_embauche->TabIndex = 25;
			// 
			// ID_supp_employe
			// 
			this->ID_supp_employe->AutoSize = true;
			this->ID_supp_employe->Location = System::Drawing::Point(7, 143);
			this->ID_supp_employe->Name = L"ID_supp_employe";
			this->ID_supp_employe->Size = System::Drawing::Size(72, 13);
			this->ID_supp_employe->TabIndex = 24;
			this->ID_supp_employe->Text = L"ID Suppérieur";
			// 
			// label_date_embauche
			// 
			this->label_date_embauche->AutoSize = true;
			this->label_date_embauche->Location = System::Drawing::Point(7, 182);
			this->label_date_embauche->Name = L"label_date_embauche";
			this->label_date_embauche->Size = System::Drawing::Size(91, 13);
			this->label_date_embauche->TabIndex = 24;
			this->label_date_embauche->Text = L"Date d\'embauche";
			this->label_date_embauche->Click += gcnew System::EventHandler(this, &MyForm::label4_Click_1);
			// 
			// CP_employe
			// 
			this->CP_employe->AutoSize = true;
			this->CP_employe->Location = System::Drawing::Point(7, 352);
			this->CP_employe->Name = L"CP_employe";
			this->CP_employe->Size = System::Drawing::Size(64, 13);
			this->CP_employe->TabIndex = 22;
			this->CP_employe->Text = L"Code Postal";
			// 
			// Actions_Personnel
			// 
			this->Actions_Personnel->Controls->Add(this->btn_valider_employe);
			this->Actions_Personnel->Controls->Add(this->radio_suppr_personnel);
			this->Actions_Personnel->Controls->Add(this->radio_edit_personnel);
			this->Actions_Personnel->Controls->Add(this->radio_add_personnel);
			this->Actions_Personnel->Location = System::Drawing::Point(6, 542);
			this->Actions_Personnel->Name = L"Actions_Personnel";
			this->Actions_Personnel->Size = System::Drawing::Size(284, 90);
			this->Actions_Personnel->TabIndex = 24;
			this->Actions_Personnel->TabStop = false;
			this->Actions_Personnel->Text = L"Actions";
			this->Actions_Personnel->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// btn_valider_employe
			// 
			this->btn_valider_employe->Location = System::Drawing::Point(155, 22);
			this->btn_valider_employe->Name = L"btn_valider_employe";
			this->btn_valider_employe->Size = System::Drawing::Size(117, 56);
			this->btn_valider_employe->TabIndex = 26;
			this->btn_valider_employe->Text = L"Valider";
			this->btn_valider_employe->UseVisualStyleBackColor = true;
			this->btn_valider_employe->Click += gcnew System::EventHandler(this, &MyForm::btn_valider_employe_Click);
			// 
			// radio_suppr_personnel
			// 
			this->radio_suppr_personnel->AutoSize = true;
			this->radio_suppr_personnel->Location = System::Drawing::Point(6, 65);
			this->radio_suppr_personnel->Name = L"radio_suppr_personnel";
			this->radio_suppr_personnel->Size = System::Drawing::Size(72, 17);
			this->radio_suppr_personnel->TabIndex = 23;
			this->radio_suppr_personnel->Text = L"Supprimer";
			this->radio_suppr_personnel->UseVisualStyleBackColor = true;
			this->radio_suppr_personnel->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radio_suppr_personnel_CheckedChanged);
			// 
			// radio_edit_personnel
			// 
			this->radio_edit_personnel->AutoSize = true;
			this->radio_edit_personnel->Location = System::Drawing::Point(6, 42);
			this->radio_edit_personnel->Name = L"radio_edit_personnel";
			this->radio_edit_personnel->Size = System::Drawing::Size(62, 17);
			this->radio_edit_personnel->TabIndex = 22;
			this->radio_edit_personnel->Text = L"Modifier";
			this->radio_edit_personnel->UseVisualStyleBackColor = true;
			this->radio_edit_personnel->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radio_edit_personnel_CheckedChanged);
			// 
			// radio_add_personnel
			// 
			this->radio_add_personnel->AutoSize = true;
			this->radio_add_personnel->Checked = true;
			this->radio_add_personnel->Location = System::Drawing::Point(6, 19);
			this->radio_add_personnel->Name = L"radio_add_personnel";
			this->radio_add_personnel->Size = System::Drawing::Size(58, 17);
			this->radio_add_personnel->TabIndex = 21;
			this->radio_add_personnel->TabStop = true;
			this->radio_add_personnel->Text = L"Ajouter";
			this->radio_add_personnel->UseVisualStyleBackColor = true;
			this->radio_add_personnel->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// tab_clients
			// 
			this->tab_clients->Controls->Add(this->dgv_clients);
			this->tab_clients->Controls->Add(this->groupBox3);
			this->tab_clients->Controls->Add(this->userEntry_clients);
			this->tab_clients->Location = System::Drawing::Point(4, 22);
			this->tab_clients->Name = L"tab_clients";
			this->tab_clients->Padding = System::Windows::Forms::Padding(3);
			this->tab_clients->Size = System::Drawing::Size(1240, 638);
			this->tab_clients->TabIndex = 1;
			this->tab_clients->Text = L"Clients";
			this->tab_clients->UseVisualStyleBackColor = true;
			// 
			// dgv_clients
			// 
			this->dgv_clients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_clients->Location = System::Drawing::Point(317, 17);
			this->dgv_clients->Name = L"dgv_clients";
			this->dgv_clients->Size = System::Drawing::Size(900, 611);
			this->dgv_clients->TabIndex = 29;
			this->dgv_clients->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgv_clients_CellContentClick);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->groupBox3->Controls->Add(this->radio_delete_client);
			this->groupBox3->Controls->Add(this->radio_edit_client);
			this->groupBox3->Controls->Add(this->radio_add_client);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Location = System::Drawing::Point(6, 538);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(305, 90);
			this->groupBox3->TabIndex = 27;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Actions";
			// 
			// radio_delete_client
			// 
			this->radio_delete_client->AutoSize = true;
			this->radio_delete_client->Location = System::Drawing::Point(6, 65);
			this->radio_delete_client->Name = L"radio_delete_client";
			this->radio_delete_client->Size = System::Drawing::Size(72, 17);
			this->radio_delete_client->TabIndex = 23;
			this->radio_delete_client->Text = L"Supprimer";
			this->radio_delete_client->UseVisualStyleBackColor = true;
			this->radio_delete_client->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radio_delete_client_CheckedChanged);
			// 
			// radio_edit_client
			// 
			this->radio_edit_client->AutoSize = true;
			this->radio_edit_client->Location = System::Drawing::Point(6, 42);
			this->radio_edit_client->Name = L"radio_edit_client";
			this->radio_edit_client->Size = System::Drawing::Size(62, 17);
			this->radio_edit_client->TabIndex = 22;
			this->radio_edit_client->Text = L"Modifier";
			this->radio_edit_client->UseVisualStyleBackColor = true;
			this->radio_edit_client->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radio_edit_client_CheckedChanged);
			// 
			// radio_add_client
			// 
			this->radio_add_client->AutoSize = true;
			this->radio_add_client->Checked = true;
			this->radio_add_client->Location = System::Drawing::Point(6, 19);
			this->radio_add_client->Name = L"radio_add_client";
			this->radio_add_client->Size = System::Drawing::Size(58, 17);
			this->radio_add_client->TabIndex = 21;
			this->radio_add_client->TabStop = true;
			this->radio_add_client->Text = L"Ajouter";
			this->radio_add_client->UseVisualStyleBackColor = true;
			this->radio_add_client->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radio_add_client_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(168, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 56);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// userEntry_clients
			// 
			this->userEntry_clients->Controls->Add(this->panel1);
			this->userEntry_clients->Location = System::Drawing::Point(6, 15);
			this->userEntry_clients->Name = L"userEntry_clients";
			this->userEntry_clients->Size = System::Drawing::Size(305, 516);
			this->userEntry_clients->TabIndex = 26;
			this->userEntry_clients->TabStop = false;
			this->userEntry_clients->Text = L"Entrée Utilisateur";
			// 
			// panel1
			// 
			this->panel1->AllowDrop = true;
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->numero_client_1);
			this->panel1->Controls->Add(this->numero_client_2);
			this->panel1->Controls->Add(this->cp_client_2);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->ville_client_2);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->rue_client_2);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->adresse_check);
			this->panel1->Controls->Add(this->id_client);
			this->panel1->Controls->Add(this->cp_client_1);
			this->panel1->Controls->Add(this->prenom_client);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label_id_client);
			this->panel1->Controls->Add(this->ville_client_1);
			this->panel1->Controls->Add(this->nom_entreprise);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->nom_client);
			this->panel1->Controls->Add(this->rue_client_1);
			this->panel1->Controls->Add(this->label_logo);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label_nom_entreprise);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->logo_link);
			this->panel1->Controls->Add(this->label_nom_client);
			this->panel1->Controls->Add(this->date_1er_achat);
			this->panel1->Controls->Add(this->label_prenom_client);
			this->panel1->Controls->Add(this->label_date_1er_achat);
			this->panel1->Controls->Add(this->label_date_naissance);
			this->panel1->Controls->Add(this->date_naissance);
			this->panel1->Location = System::Drawing::Point(6, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(290, 486);
			this->panel1->TabIndex = 30;
			// 
			// numero_client_1
			// 
			this->numero_client_1->Location = System::Drawing::Point(3, 386);
			this->numero_client_1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
			this->numero_client_1->Name = L"numero_client_1";
			this->numero_client_1->Size = System::Drawing::Size(266, 20);
			this->numero_client_1->TabIndex = 47;
			// 
			// numero_client_2
			// 
			this->numero_client_2->Enabled = false;
			this->numero_client_2->Location = System::Drawing::Point(3, 582);
			this->numero_client_2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
			this->numero_client_2->Name = L"numero_client_2";
			this->numero_client_2->Size = System::Drawing::Size(266, 20);
			this->numero_client_2->TabIndex = 46;
			// 
			// cp_client_2
			// 
			this->cp_client_2->Enabled = false;
			this->cp_client_2->Location = System::Drawing::Point(3, 628);
			this->cp_client_2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
			this->cp_client_2->Name = L"cp_client_2";
			this->cp_client_2->Size = System::Drawing::Size(266, 20);
			this->cp_client_2->TabIndex = 45;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(4, 612);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(64, 13);
			this->label11->TabIndex = 44;
			this->label11->Text = L"Code Postal";
			// 
			// ville_client_2
			// 
			this->ville_client_2->Enabled = false;
			this->ville_client_2->Location = System::Drawing::Point(3, 499);
			this->ville_client_2->Name = L"ville_client_2";
			this->ville_client_2->Size = System::Drawing::Size(266, 20);
			this->ville_client_2->TabIndex = 38;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(3, 483);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(26, 13);
			this->label12->TabIndex = 40;
			this->label12->Text = L"Ville";
			// 
			// rue_client_2
			// 
			this->rue_client_2->Enabled = false;
			this->rue_client_2->Location = System::Drawing::Point(3, 538);
			this->rue_client_2->Name = L"rue_client_2";
			this->rue_client_2->Size = System::Drawing::Size(266, 20);
			this->rue_client_2->TabIndex = 39;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(4, 566);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(44, 13);
			this->label13->TabIndex = 43;
			this->label13->Text = L"Numero";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(4, 522);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(27, 13);
			this->label14->TabIndex = 41;
			this->label14->Text = L"Rue";
			// 
			// adresse_check
			// 
			this->adresse_check->AutoSize = true;
			this->adresse_check->Checked = true;
			this->adresse_check->CheckState = System::Windows::Forms::CheckState::Checked;
			this->adresse_check->Location = System::Drawing::Point(2, 458);
			this->adresse_check->Name = L"adresse_check";
			this->adresse_check->Size = System::Drawing::Size(238, 17);
			this->adresse_check->TabIndex = 37;
			this->adresse_check->Text = L"Adresse de livraison = Adresse de facturation";
			this->adresse_check->UseVisualStyleBackColor = true;
			this->adresse_check->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// id_client
			// 
			this->id_client->Enabled = false;
			this->id_client->Location = System::Drawing::Point(3, 19);
			this->id_client->Name = L"id_client";
			this->id_client->Size = System::Drawing::Size(266, 20);
			this->id_client->TabIndex = 26;
			// 
			// cp_client_1
			// 
			this->cp_client_1->Location = System::Drawing::Point(2, 432);
			this->cp_client_1->Name = L"cp_client_1";
			this->cp_client_1->Size = System::Drawing::Size(266, 20);
			this->cp_client_1->TabIndex = 36;
			// 
			// prenom_client
			// 
			this->prenom_client->Location = System::Drawing::Point(3, 97);
			this->prenom_client->Name = L"prenom_client";
			this->prenom_client->Size = System::Drawing::Size(266, 20);
			this->prenom_client->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 416);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Code Postal";
			// 
			// label_id_client
			// 
			this->label_id_client->AutoSize = true;
			this->label_id_client->Location = System::Drawing::Point(4, 0);
			this->label_id_client->Name = L"label_id_client";
			this->label_id_client->Size = System::Drawing::Size(18, 13);
			this->label_id_client->TabIndex = 12;
			this->label_id_client->Text = L"ID";
			// 
			// ville_client_1
			// 
			this->ville_client_1->Location = System::Drawing::Point(2, 303);
			this->ville_client_1->Name = L"ville_client_1";
			this->ville_client_1->Size = System::Drawing::Size(266, 20);
			this->ville_client_1->TabIndex = 29;
			// 
			// nom_entreprise
			// 
			this->nom_entreprise->Location = System::Drawing::Point(3, 257);
			this->nom_entreprise->Name = L"nom_entreprise";
			this->nom_entreprise->Size = System::Drawing::Size(266, 20);
			this->nom_entreprise->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(2, 287);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 13);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Ville (Livraison)";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click_1);
			// 
			// nom_client
			// 
			this->nom_client->Location = System::Drawing::Point(3, 58);
			this->nom_client->Name = L"nom_client";
			this->nom_client->Size = System::Drawing::Size(266, 20);
			this->nom_client->TabIndex = 6;
			// 
			// rue_client_1
			// 
			this->rue_client_1->Location = System::Drawing::Point(2, 342);
			this->rue_client_1->Name = L"rue_client_1";
			this->rue_client_1->Size = System::Drawing::Size(266, 20);
			this->rue_client_1->TabIndex = 30;
			// 
			// label_logo
			// 
			this->label_logo->AutoSize = true;
			this->label_logo->Location = System::Drawing::Point(4, 200);
			this->label_logo->Name = L"label_logo";
			this->label_logo->Size = System::Drawing::Size(31, 13);
			this->label_logo->TabIndex = 17;
			this->label_logo->Text = L"Logo";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 370);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 13);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Numero";
			// 
			// label_nom_entreprise
			// 
			this->label_nom_entreprise->AutoSize = true;
			this->label_nom_entreprise->Location = System::Drawing::Point(4, 241);
			this->label_nom_entreprise->Name = L"label_nom_entreprise";
			this->label_nom_entreprise->Size = System::Drawing::Size(78, 13);
			this->label_nom_entreprise->TabIndex = 18;
			this->label_nom_entreprise->Text = L"Nom entreprise";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 326);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 13);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Rue";
			// 
			// logo_link
			// 
			this->logo_link->Location = System::Drawing::Point(3, 216);
			this->logo_link->Name = L"logo_link";
			this->logo_link->Size = System::Drawing::Size(266, 20);
			this->logo_link->TabIndex = 15;
			// 
			// label_nom_client
			// 
			this->label_nom_client->AutoSize = true;
			this->label_nom_client->Location = System::Drawing::Point(4, 42);
			this->label_nom_client->Name = L"label_nom_client";
			this->label_nom_client->Size = System::Drawing::Size(58, 13);
			this->label_nom_client->TabIndex = 13;
			this->label_nom_client->Text = L"Nom Client";
			this->label_nom_client->Click += gcnew System::EventHandler(this, &MyForm::label_nom_client_Click);
			// 
			// date_1er_achat
			// 
			this->date_1er_achat->Location = System::Drawing::Point(3, 177);
			this->date_1er_achat->Name = L"date_1er_achat";
			this->date_1er_achat->Size = System::Drawing::Size(266, 20);
			this->date_1er_achat->TabIndex = 28;
			// 
			// label_prenom_client
			// 
			this->label_prenom_client->AutoSize = true;
			this->label_prenom_client->Location = System::Drawing::Point(4, 81);
			this->label_prenom_client->Name = L"label_prenom_client";
			this->label_prenom_client->Size = System::Drawing::Size(72, 13);
			this->label_prenom_client->TabIndex = 14;
			this->label_prenom_client->Text = L"Prénom Client";
			// 
			// label_date_1er_achat
			// 
			this->label_date_1er_achat->AutoSize = true;
			this->label_date_1er_achat->Location = System::Drawing::Point(3, 161);
			this->label_date_1er_achat->Name = L"label_date_1er_achat";
			this->label_date_1er_achat->Size = System::Drawing::Size(112, 13);
			this->label_date_1er_achat->TabIndex = 27;
			this->label_date_1er_achat->Text = L"Date de permier achat";
			// 
			// label_date_naissance
			// 
			this->label_date_naissance->AutoSize = true;
			this->label_date_naissance->Location = System::Drawing::Point(4, 120);
			this->label_date_naissance->Name = L"label_date_naissance";
			this->label_date_naissance->Size = System::Drawing::Size(96, 13);
			this->label_date_naissance->TabIndex = 24;
			this->label_date_naissance->Text = L"Date de naissance";
			// 
			// date_naissance
			// 
			this->date_naissance->Location = System::Drawing::Point(3, 138);
			this->date_naissance->Name = L"date_naissance";
			this->date_naissance->Size = System::Drawing::Size(266, 20);
			this->date_naissance->TabIndex = 25;
			// 
			// Stock
			// 
			this->Stock->Controls->Add(this->dataGridView2);
			this->Stock->Controls->Add(this->valider_stock);
			this->Stock->Controls->Add(this->groupBox1);
			this->Stock->Location = System::Drawing::Point(4, 22);
			this->Stock->Name = L"Stock";
			this->Stock->Padding = System::Windows::Forms::Padding(3);
			this->Stock->Size = System::Drawing::Size(1240, 638);
			this->Stock->TabIndex = 2;
			this->Stock->Text = L"Stock";
			this->Stock->UseVisualStyleBackColor = true;
			this->Stock->Click += gcnew System::EventHandler(this, &MyForm::Stock_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(317, 15);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(900, 611);
			this->dataGridView2->TabIndex = 30;
			// 
			// valider_stock
			// 
			this->valider_stock->BackColor = System::Drawing::Color::WhiteSmoke;
			this->valider_stock->Controls->Add(this->radio_suppr_stock);
			this->valider_stock->Controls->Add(this->radio_edit_stock);
			this->valider_stock->Controls->Add(this->radio_ajouter_stock);
			this->valider_stock->Controls->Add(this->btn_valider_stock);
			this->valider_stock->Location = System::Drawing::Point(6, 537);
			this->valider_stock->Name = L"valider_stock";
			this->valider_stock->Size = System::Drawing::Size(305, 90);
			this->valider_stock->TabIndex = 28;
			this->valider_stock->TabStop = false;
			this->valider_stock->Text = L"Actions";
			// 
			// radio_suppr_stock
			// 
			this->radio_suppr_stock->AutoSize = true;
			this->radio_suppr_stock->Location = System::Drawing::Point(6, 65);
			this->radio_suppr_stock->Name = L"radio_suppr_stock";
			this->radio_suppr_stock->Size = System::Drawing::Size(72, 17);
			this->radio_suppr_stock->TabIndex = 23;
			this->radio_suppr_stock->Text = L"Supprimer";
			this->radio_suppr_stock->UseVisualStyleBackColor = true;
			this->radio_suppr_stock->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radio_suppr_stock_CheckedChanged);
			// 
			// radio_edit_stock
			// 
			this->radio_edit_stock->AutoSize = true;
			this->radio_edit_stock->Location = System::Drawing::Point(6, 42);
			this->radio_edit_stock->Name = L"radio_edit_stock";
			this->radio_edit_stock->Size = System::Drawing::Size(62, 17);
			this->radio_edit_stock->TabIndex = 22;
			this->radio_edit_stock->Text = L"Modifier";
			this->radio_edit_stock->UseVisualStyleBackColor = true;
			this->radio_edit_stock->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radio_edit_stock_CheckedChanged);
			// 
			// radio_ajouter_stock
			// 
			this->radio_ajouter_stock->AutoSize = true;
			this->radio_ajouter_stock->Checked = true;
			this->radio_ajouter_stock->Location = System::Drawing::Point(6, 19);
			this->radio_ajouter_stock->Name = L"radio_ajouter_stock";
			this->radio_ajouter_stock->Size = System::Drawing::Size(58, 17);
			this->radio_ajouter_stock->TabIndex = 21;
			this->radio_ajouter_stock->TabStop = true;
			this->radio_ajouter_stock->Text = L"Ajouter";
			this->radio_ajouter_stock->UseVisualStyleBackColor = true;
			this->radio_ajouter_stock->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// btn_valider_stock
			// 
			this->btn_valider_stock->BackColor = System::Drawing::Color::Transparent;
			this->btn_valider_stock->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn_valider_stock->Location = System::Drawing::Point(168, 21);
			this->btn_valider_stock->Name = L"btn_valider_stock";
			this->btn_valider_stock->Size = System::Drawing::Size(117, 56);
			this->btn_valider_stock->TabIndex = 1;
			this->btn_valider_stock->Text = L"Valider";
			this->btn_valider_stock->UseVisualStyleBackColor = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->panel2);
			this->groupBox1->Location = System::Drawing::Point(6, 15);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(305, 516);
			this->groupBox1->TabIndex = 27;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Entrée Utilisateur";
			// 
			// panel2
			// 
			this->panel2->AllowDrop = true;
			this->panel2->AutoScroll = true;
			this->panel2->Controls->Add(this->nom_produit_stock);
			this->panel2->Controls->Add(this->qt_dispo);
			this->panel2->Controls->Add(this->seuil_reapro);
			this->panel2->Controls->Add(this->label_type);
			this->panel2->Controls->Add(this->label_couleur);
			this->panel2->Controls->Add(this->couleur);
			this->panel2->Controls->Add(this->label_qt_dispo);
			this->panel2->Controls->Add(this->label_nom_produit);
			this->panel2->Controls->Add(this->type);
			this->panel2->Controls->Add(this->label_seuil_reapro);
			this->panel2->Controls->Add(this->prix_degressif);
			this->panel2->Controls->Add(this->id_produit);
			this->panel2->Controls->Add(this->taux_tva);
			this->panel2->Controls->Add(this->label_id_produit);
			this->panel2->Controls->Add(this->prix_ht);
			this->panel2->Controls->Add(this->label_prix_ht);
			this->panel2->Controls->Add(this->label_taux_tva);
			this->panel2->Location = System::Drawing::Point(6, 24);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(290, 483);
			this->panel2->TabIndex = 30;
			// 
			// nom_produit_stock
			// 
			this->nom_produit_stock->Location = System::Drawing::Point(4, 58);
			this->nom_produit_stock->Name = L"nom_produit_stock";
			this->nom_produit_stock->Size = System::Drawing::Size(266, 20);
			this->nom_produit_stock->TabIndex = 47;
			// 
			// qt_dispo
			// 
			this->qt_dispo->Location = System::Drawing::Point(4, 175);
			this->qt_dispo->Name = L"qt_dispo";
			this->qt_dispo->Size = System::Drawing::Size(266, 20);
			this->qt_dispo->TabIndex = 46;
			this->qt_dispo->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// seuil_reapro
			// 
			this->seuil_reapro->Location = System::Drawing::Point(4, 214);
			this->seuil_reapro->Name = L"seuil_reapro";
			this->seuil_reapro->Size = System::Drawing::Size(266, 20);
			this->seuil_reapro->TabIndex = 15;
			// 
			// label_type
			// 
			this->label_type->AutoSize = true;
			this->label_type->Location = System::Drawing::Point(6, 237);
			this->label_type->Name = L"label_type";
			this->label_type->Size = System::Drawing::Size(31, 13);
			this->label_type->TabIndex = 18;
			this->label_type->Text = L"Type";
			this->label_type->Click += gcnew System::EventHandler(this, &MyForm::label21_Click);
			// 
			// label_couleur
			// 
			this->label_couleur->AutoSize = true;
			this->label_couleur->Location = System::Drawing::Point(6, 276);
			this->label_couleur->Name = L"label_couleur";
			this->label_couleur->Size = System::Drawing::Size(43, 13);
			this->label_couleur->TabIndex = 31;
			this->label_couleur->Text = L"Couleur";
			// 
			// couleur
			// 
			this->couleur->Location = System::Drawing::Point(6, 292);
			this->couleur->Name = L"couleur";
			this->couleur->Size = System::Drawing::Size(266, 20);
			this->couleur->TabIndex = 29;
			// 
			// label_qt_dispo
			// 
			this->label_qt_dispo->AutoSize = true;
			this->label_qt_dispo->Location = System::Drawing::Point(4, 159);
			this->label_qt_dispo->Name = L"label_qt_dispo";
			this->label_qt_dispo->Size = System::Drawing::Size(97, 13);
			this->label_qt_dispo->TabIndex = 27;
			this->label_qt_dispo->Text = L"Quantité disponible";
			this->label_qt_dispo->Click += gcnew System::EventHandler(this, &MyForm::label25_Click);
			// 
			// label_nom_produit
			// 
			this->label_nom_produit->AutoSize = true;
			this->label_nom_produit->Location = System::Drawing::Point(5, 42);
			this->label_nom_produit->Name = L"label_nom_produit";
			this->label_nom_produit->Size = System::Drawing::Size(79, 13);
			this->label_nom_produit->TabIndex = 24;
			this->label_nom_produit->Text = L"Nom du produit";
			// 
			// type
			// 
			this->type->Location = System::Drawing::Point(5, 253);
			this->type->Name = L"type";
			this->type->Size = System::Drawing::Size(266, 20);
			this->type->TabIndex = 16;
			this->type->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label_seuil_reapro
			// 
			this->label_seuil_reapro->AutoSize = true;
			this->label_seuil_reapro->Location = System::Drawing::Point(5, 198);
			this->label_seuil_reapro->Name = L"label_seuil_reapro";
			this->label_seuil_reapro->Size = System::Drawing::Size(151, 13);
			this->label_seuil_reapro->TabIndex = 17;
			this->label_seuil_reapro->Text = L"Seuil de Réapprovisionnement";
			// 
			// prix_degressif
			// 
			this->prix_degressif->AutoSize = true;
			this->prix_degressif->Checked = true;
			this->prix_degressif->CheckState = System::Windows::Forms::CheckState::Checked;
			this->prix_degressif->Location = System::Drawing::Point(181, 100);
			this->prix_degressif->Name = L"prix_degressif";
			this->prix_degressif->Size = System::Drawing::Size(88, 17);
			this->prix_degressif->TabIndex = 37;
			this->prix_degressif->Text = L"Prix dégressif";
			this->prix_degressif->UseVisualStyleBackColor = true;
			// 
			// id_produit
			// 
			this->id_produit->Enabled = false;
			this->id_produit->Location = System::Drawing::Point(3, 19);
			this->id_produit->Name = L"id_produit";
			this->id_produit->Size = System::Drawing::Size(266, 20);
			this->id_produit->TabIndex = 26;
			// 
			// taux_tva
			// 
			this->taux_tva->Location = System::Drawing::Point(4, 136);
			this->taux_tva->Name = L"taux_tva";
			this->taux_tva->Size = System::Drawing::Size(265, 20);
			this->taux_tva->TabIndex = 7;
			// 
			// label_id_produit
			// 
			this->label_id_produit->AutoSize = true;
			this->label_id_produit->Location = System::Drawing::Point(4, 0);
			this->label_id_produit->Name = L"label_id_produit";
			this->label_id_produit->Size = System::Drawing::Size(18, 13);
			this->label_id_produit->TabIndex = 12;
			this->label_id_produit->Text = L"ID";
			// 
			// prix_ht
			// 
			this->prix_ht->Location = System::Drawing::Point(4, 97);
			this->prix_ht->Name = L"prix_ht";
			this->prix_ht->Size = System::Drawing::Size(171, 20);
			this->prix_ht->TabIndex = 6;
			// 
			// label_prix_ht
			// 
			this->label_prix_ht->AutoSize = true;
			this->label_prix_ht->Location = System::Drawing::Point(5, 81);
			this->label_prix_ht->Name = L"label_prix_ht";
			this->label_prix_ht->Size = System::Drawing::Size(42, 13);
			this->label_prix_ht->TabIndex = 13;
			this->label_prix_ht->Text = L"Prix HT";
			// 
			// label_taux_tva
			// 
			this->label_taux_tva->AutoSize = true;
			this->label_taux_tva->Location = System::Drawing::Point(5, 120);
			this->label_taux_tva->Name = L"label_taux_tva";
			this->label_taux_tva->Size = System::Drawing::Size(55, 13);
			this->label_taux_tva->TabIndex = 14;
			this->label_taux_tva->Text = L"Taux TVA";
			// 
			// Commandes
			// 
			this->Commandes->Location = System::Drawing::Point(4, 22);
			this->Commandes->Name = L"Commandes";
			this->Commandes->Padding = System::Windows::Forms::Padding(3);
			this->Commandes->Size = System::Drawing::Size(1240, 638);
			this->Commandes->TabIndex = 3;
			this->Commandes->Text = L"Commandes";
			this->Commandes->UseVisualStyleBackColor = true;
			// 
			// Statistiques
			// 
			this->Statistiques->Controls->Add(this->stats_grp);
			this->Statistiques->Location = System::Drawing::Point(4, 22);
			this->Statistiques->Name = L"Statistiques";
			this->Statistiques->Padding = System::Windows::Forms::Padding(3);
			this->Statistiques->Size = System::Drawing::Size(1240, 638);
			this->Statistiques->TabIndex = 4;
			this->Statistiques->Text = L"Statistiques";
			this->Statistiques->UseVisualStyleBackColor = true;
			// 
			// stats_grp
			// 
			this->stats_grp->Controls->Add(this->stat_valeur_achat);
			this->stats_grp->Controls->Add(this->label_valeur_achat_stock);
			this->stats_grp->Controls->Add(this->btn_rld_valeur_achat);
			this->stats_grp->Controls->Add(this->stat_valeur_commerciale);
			this->stats_grp->Controls->Add(this->label_valeur_commerciale);
			this->stats_grp->Controls->Add(this->btn_rld_valeur_commerciale);
			this->stats_grp->Controls->Add(this->stat_id_client);
			this->stats_grp->Controls->Add(this->laben_stat_total_client);
			this->stats_grp->Controls->Add(this->stat_total_client);
			this->stats_grp->Controls->Add(this->btn_rld_total_client);
			this->stats_grp->Controls->Add(this->btn_rld_pires_ventes);
			this->stats_grp->Controls->Add(this->label_pires_ventes);
			this->stats_grp->Controls->Add(this->dgv_pires_ventes);
			this->stats_grp->Controls->Add(this->btn_rld_meilleures_ventes);
			this->stats_grp->Controls->Add(this->label_meilleures_ventes);
			this->stats_grp->Controls->Add(this->dgv_meilleures_ventes);
			this->stats_grp->Controls->Add(this->btn_rld_seuil_reapro);
			this->stats_grp->Controls->Add(this->label_stats_seuil_reapro);
			this->stats_grp->Controls->Add(this->dgv_seuil_reapro);
			this->stats_grp->Controls->Add(this->label_stat_ca);
			this->stats_grp->Controls->Add(this->stat_ca);
			this->stats_grp->Controls->Add(this->btn_rld_ca);
			this->stats_grp->Controls->Add(this->date_stat_ca);
			this->stats_grp->Controls->Add(this->stat_panier_moyen);
			this->stats_grp->Controls->Add(this->label_stat_panier_moyen);
			this->stats_grp->Controls->Add(this->btn_rld_panier_moyen);
			this->stats_grp->Location = System::Drawing::Point(17, 16);
			this->stats_grp->Name = L"stats_grp";
			this->stats_grp->Size = System::Drawing::Size(1207, 616);
			this->stats_grp->TabIndex = 3;
			this->stats_grp->TabStop = false;
			this->stats_grp->Text = L"Statistiques";
			this->stats_grp->Enter += gcnew System::EventHandler(this, &MyForm::stats_grp_Enter);
			// 
			// stat_valeur_achat
			// 
			this->stat_valeur_achat->Enabled = false;
			this->stat_valeur_achat->Location = System::Drawing::Point(65, 318);
			this->stat_valeur_achat->Name = L"stat_valeur_achat";
			this->stat_valeur_achat->Size = System::Drawing::Size(292, 20);
			this->stat_valeur_achat->TabIndex = 24;
			// 
			// label_valeur_achat_stock
			// 
			this->label_valeur_achat_stock->AutoSize = true;
			this->label_valeur_achat_stock->Location = System::Drawing::Point(65, 302);
			this->label_valeur_achat_stock->Name = L"label_valeur_achat_stock";
			this->label_valeur_achat_stock->Size = System::Drawing::Size(119, 13);
			this->label_valeur_achat_stock->TabIndex = 26;
			this->label_valeur_achat_stock->Text = L"Valeur d\'achat du stock";
			// 
			// btn_rld_valeur_achat
			// 
			this->btn_rld_valeur_achat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->btn_rld_valeur_achat->Location = System::Drawing::Point(16, 298);
			this->btn_rld_valeur_achat->Name = L"btn_rld_valeur_achat";
			this->btn_rld_valeur_achat->Size = System::Drawing::Size(43, 40);
			this->btn_rld_valeur_achat->TabIndex = 25;
			this->btn_rld_valeur_achat->Text = L"↻";
			this->btn_rld_valeur_achat->UseVisualStyleBackColor = true;
			// 
			// stat_valeur_commerciale
			// 
			this->stat_valeur_commerciale->Enabled = false;
			this->stat_valeur_commerciale->Location = System::Drawing::Point(65, 260);
			this->stat_valeur_commerciale->Name = L"stat_valeur_commerciale";
			this->stat_valeur_commerciale->Size = System::Drawing::Size(292, 20);
			this->stat_valeur_commerciale->TabIndex = 21;
			// 
			// label_valeur_commerciale
			// 
			this->label_valeur_commerciale->AutoSize = true;
			this->label_valeur_commerciale->Location = System::Drawing::Point(65, 244);
			this->label_valeur_commerciale->Name = L"label_valeur_commerciale";
			this->label_valeur_commerciale->Size = System::Drawing::Size(143, 13);
			this->label_valeur_commerciale->TabIndex = 23;
			this->label_valeur_commerciale->Text = L"Valeur commerciale du stock";
			// 
			// btn_rld_valeur_commerciale
			// 
			this->btn_rld_valeur_commerciale->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->btn_rld_valeur_commerciale->Location = System::Drawing::Point(16, 240);
			this->btn_rld_valeur_commerciale->Name = L"btn_rld_valeur_commerciale";
			this->btn_rld_valeur_commerciale->Size = System::Drawing::Size(43, 40);
			this->btn_rld_valeur_commerciale->TabIndex = 22;
			this->btn_rld_valeur_commerciale->Text = L"↻";
			this->btn_rld_valeur_commerciale->UseVisualStyleBackColor = true;
			// 
			// stat_id_client
			// 
			this->stat_id_client->Location = System::Drawing::Point(64, 181);
			this->stat_id_client->Name = L"stat_id_client";
			this->stat_id_client->Size = System::Drawing::Size(293, 20);
			this->stat_id_client->TabIndex = 20;
			// 
			// laben_stat_total_client
			// 
			this->laben_stat_total_client->AutoSize = true;
			this->laben_stat_total_client->Location = System::Drawing::Point(65, 161);
			this->laben_stat_total_client->Name = L"laben_stat_total_client";
			this->laben_stat_total_client->Size = System::Drawing::Size(158, 13);
			this->laben_stat_total_client->TabIndex = 19;
			this->laben_stat_total_client->Text = L"Montant total d\'achats par client";
			// 
			// stat_total_client
			// 
			this->stat_total_client->Enabled = false;
			this->stat_total_client->Location = System::Drawing::Point(65, 207);
			this->stat_total_client->Name = L"stat_total_client";
			this->stat_total_client->Size = System::Drawing::Size(292, 20);
			this->stat_total_client->TabIndex = 18;
			// 
			// btn_rld_total_client
			// 
			this->btn_rld_total_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->btn_rld_total_client->Location = System::Drawing::Point(16, 161);
			this->btn_rld_total_client->Name = L"btn_rld_total_client";
			this->btn_rld_total_client->Size = System::Drawing::Size(43, 40);
			this->btn_rld_total_client->TabIndex = 17;
			this->btn_rld_total_client->Text = L"↻";
			this->btn_rld_total_client->UseVisualStyleBackColor = true;
			// 
			// btn_rld_pires_ventes
			// 
			this->btn_rld_pires_ventes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->btn_rld_pires_ventes->Location = System::Drawing::Point(640, 411);
			this->btn_rld_pires_ventes->Name = L"btn_rld_pires_ventes";
			this->btn_rld_pires_ventes->Size = System::Drawing::Size(43, 40);
			this->btn_rld_pires_ventes->TabIndex = 15;
			this->btn_rld_pires_ventes->Text = L"↻";
			this->btn_rld_pires_ventes->UseVisualStyleBackColor = true;
			// 
			// label_pires_ventes
			// 
			this->label_pires_ventes->AutoSize = true;
			this->label_pires_ventes->Location = System::Drawing::Point(689, 411);
			this->label_pires_ventes->Name = L"label_pires_ventes";
			this->label_pires_ventes->Size = System::Drawing::Size(101, 13);
			this->label_pires_ventes->TabIndex = 14;
			this->label_pires_ventes->Text = L"Top 10 pires ventes";
			this->label_pires_ventes->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// dgv_pires_ventes
			// 
			this->dgv_pires_ventes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_pires_ventes->Location = System::Drawing::Point(689, 427);
			this->dgv_pires_ventes->Name = L"dgv_pires_ventes";
			this->dgv_pires_ventes->Size = System::Drawing::Size(498, 166);
			this->dgv_pires_ventes->TabIndex = 13;
			// 
			// btn_rld_meilleures_ventes
			// 
			this->btn_rld_meilleures_ventes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->btn_rld_meilleures_ventes->Location = System::Drawing::Point(640, 213);
			this->btn_rld_meilleures_ventes->Name = L"btn_rld_meilleures_ventes";
			this->btn_rld_meilleures_ventes->Size = System::Drawing::Size(43, 40);
			this->btn_rld_meilleures_ventes->TabIndex = 12;
			this->btn_rld_meilleures_ventes->Text = L"↻";
			this->btn_rld_meilleures_ventes->UseVisualStyleBackColor = true;
			// 
			// label_meilleures_ventes
			// 
			this->label_meilleures_ventes->AutoSize = true;
			this->label_meilleures_ventes->Location = System::Drawing::Point(689, 213);
			this->label_meilleures_ventes->Name = L"label_meilleures_ventes";
			this->label_meilleures_ventes->Size = System::Drawing::Size(125, 13);
			this->label_meilleures_ventes->TabIndex = 11;
			this->label_meilleures_ventes->Text = L"Top 10 meilleures ventes";
			this->label_meilleures_ventes->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_3);
			// 
			// dgv_meilleures_ventes
			// 
			this->dgv_meilleures_ventes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_meilleures_ventes->Location = System::Drawing::Point(689, 229);
			this->dgv_meilleures_ventes->Name = L"dgv_meilleures_ventes";
			this->dgv_meilleures_ventes->Size = System::Drawing::Size(498, 166);
			this->dgv_meilleures_ventes->TabIndex = 10;
			// 
			// btn_rld_seuil_reapro
			// 
			this->btn_rld_seuil_reapro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->btn_rld_seuil_reapro->Location = System::Drawing::Point(640, 19);
			this->btn_rld_seuil_reapro->Name = L"btn_rld_seuil_reapro";
			this->btn_rld_seuil_reapro->Size = System::Drawing::Size(43, 40);
			this->btn_rld_seuil_reapro->TabIndex = 9;
			this->btn_rld_seuil_reapro->Text = L"↻";
			this->btn_rld_seuil_reapro->UseVisualStyleBackColor = true;
			// 
			// label_stats_seuil_reapro
			// 
			this->label_stats_seuil_reapro->AutoSize = true;
			this->label_stats_seuil_reapro->Location = System::Drawing::Point(689, 19);
			this->label_stats_seuil_reapro->Name = L"label_stats_seuil_reapro";
			this->label_stats_seuil_reapro->Size = System::Drawing::Size(153, 13);
			this->label_stats_seuil_reapro->TabIndex = 8;
			this->label_stats_seuil_reapro->Text = L"Produits sous le seuil de réapro";
			// 
			// dgv_seuil_reapro
			// 
			this->dgv_seuil_reapro->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_seuil_reapro->Location = System::Drawing::Point(689, 35);
			this->dgv_seuil_reapro->Name = L"dgv_seuil_reapro";
			this->dgv_seuil_reapro->Size = System::Drawing::Size(498, 166);
			this->dgv_seuil_reapro->TabIndex = 7;
			// 
			// label_stat_ca
			// 
			this->label_stat_ca->AutoSize = true;
			this->label_stat_ca->Location = System::Drawing::Point(65, 83);
			this->label_stat_ca->Name = L"label_stat_ca";
			this->label_stat_ca->Size = System::Drawing::Size(119, 13);
			this->label_stat_ca->TabIndex = 6;
			this->label_stat_ca->Text = L"Chiffre d\'affaire par mois";
			this->label_stat_ca->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_2);
			// 
			// stat_ca
			// 
			this->stat_ca->Enabled = false;
			this->stat_ca->Location = System::Drawing::Point(65, 129);
			this->stat_ca->Name = L"stat_ca";
			this->stat_ca->Size = System::Drawing::Size(292, 20);
			this->stat_ca->TabIndex = 5;
			// 
			// btn_rld_ca
			// 
			this->btn_rld_ca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->btn_rld_ca->Location = System::Drawing::Point(16, 83);
			this->btn_rld_ca->Name = L"btn_rld_ca";
			this->btn_rld_ca->Size = System::Drawing::Size(43, 40);
			this->btn_rld_ca->TabIndex = 4;
			this->btn_rld_ca->Text = L"↻";
			this->btn_rld_ca->UseVisualStyleBackColor = true;
			// 
			// date_stat_ca
			// 
			this->date_stat_ca->Location = System::Drawing::Point(65, 103);
			this->date_stat_ca->Name = L"date_stat_ca";
			this->date_stat_ca->Size = System::Drawing::Size(292, 20);
			this->date_stat_ca->TabIndex = 3;
			// 
			// stat_panier_moyen
			// 
			this->stat_panier_moyen->Enabled = false;
			this->stat_panier_moyen->Location = System::Drawing::Point(65, 46);
			this->stat_panier_moyen->Name = L"stat_panier_moyen";
			this->stat_panier_moyen->Size = System::Drawing::Size(292, 20);
			this->stat_panier_moyen->TabIndex = 0;
			// 
			// label_stat_panier_moyen
			// 
			this->label_stat_panier_moyen->AutoSize = true;
			this->label_stat_panier_moyen->Location = System::Drawing::Point(65, 30);
			this->label_stat_panier_moyen->Name = L"label_stat_panier_moyen";
			this->label_stat_panier_moyen->Size = System::Drawing::Size(75, 13);
			this->label_stat_panier_moyen->TabIndex = 2;
			this->label_stat_panier_moyen->Text = L"Panier Moyen ";
			this->label_stat_panier_moyen->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// btn_rld_panier_moyen
			// 
			this->btn_rld_panier_moyen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->btn_rld_panier_moyen->Location = System::Drawing::Point(16, 26);
			this->btn_rld_panier_moyen->Name = L"btn_rld_panier_moyen";
			this->btn_rld_panier_moyen->Size = System::Drawing::Size(43, 40);
			this->btn_rld_panier_moyen->TabIndex = 1;
			this->btn_rld_panier_moyen->Text = L"↻";
			this->btn_rld_panier_moyen->UseVisualStyleBackColor = true;
			// 
			// Informations
			// 
			this->Informations->Controls->Add(this->label1);
			this->Informations->Location = System::Drawing::Point(4, 22);
			this->Informations->Name = L"Informations";
			this->Informations->Padding = System::Windows::Forms::Padding(3);
			this->Informations->Size = System::Drawing::Size(1240, 638);
			this->Informations->TabIndex = 5;
			this->Informations->Text = L"Informations";
			this->Informations->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(363, 264);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1240, 638);
			this->tabPage1->TabIndex = 6;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1270, 689);
			this->Controls->Add(this->Catégories);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_personnel))->EndInit();
			this->Catégories->ResumeLayout(false);
			this->tab_personnel->ResumeLayout(false);
			this->userEntry_personnel->ResumeLayout(false);
			this->userEntry_personnel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numero_personnel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cp_personnel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_supp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_personnel))->EndInit();
			this->Actions_Personnel->ResumeLayout(false);
			this->Actions_Personnel->PerformLayout();
			this->tab_clients->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_clients))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->userEntry_clients->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numero_client_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numero_client_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cp_client_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cp_client_1))->EndInit();
			this->Stock->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->valider_stock->ResumeLayout(false);
			this->valider_stock->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_produit))->EndInit();
			this->Statistiques->ResumeLayout(false);
			this->stats_grp->ResumeLayout(false);
			this->stats_grp->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stat_id_client))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_pires_ventes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_meilleures_ventes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_seuil_reapro))->EndInit();
			this->Informations->ResumeLayout(false);
			this->Informations->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_personnel->Refresh();
		this->oDs = this->oSvc->selectionnerToutLePersonnel("Personnel");
		this->dgv_personnel->DataSource = this->oDs;
		this->dgv_personnel->DataMember = "Personnel";

		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_clients->Refresh();
		this->oDs = this->oSvc->selectionnerToutLeClient("Clients");
		this->dgv_clients->DataSource = this->oDs;
		this->dgv_clients->DataMember = "Clients";
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void tab_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_Comp_Svc::CLservices();
	this->dgv_personnel->Refresh();
	this->oDs = this->oSvc->selectionnerToutLePersonnel("Personnel");
	this->dgv_personnel->DataSource = this->oDs;
	this->dgv_personnel->DataMember = "Personnel";
}
private: System::Void tab_client_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_Comp_Svc::CLservices();
	this->dgv_clients->Refresh();
	this->oDs = this->oSvc->selectionnerToutLeClient("Clients");
	this->dgv_clients->DataSource = this->oDs;
	this->dgv_clients->DataMember = "Clients";
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->id_personnel->Enabled = false;
	this->nom_personnel->Enabled = true;
	this->prenom_personnel->Enabled = true;
	this->id_supp->Enabled = true;
	this->date_embauche->Enabled = true;
	this->ville_personnel->Enabled = true;
	this->rue_personnel->Enabled = true;
	this->numero_personnel->Enabled = true;
	this->cp_personnel->Enabled = true;
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_nom_client_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->adresse_check->Checked) {
		this->ville_client_2->Enabled = false;
		this->rue_client_2->Enabled = false;
		this->numero_client_2->Enabled = false;
		this->cp_client_2->Enabled = false;
	}
	else
	{
		this->ville_client_2->Enabled = true;
		this->rue_client_2->Enabled = true;
		this->numero_client_2->Enabled = true;
		this->cp_client_2->Enabled = true;
	}
}
private: System::Void label7_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->radio_add_client->Checked)
	{
		this->oSvc->ajouterUnClient(this->nom_client->Text, this->prenom_client->Text, this->date_naissance->Value, this->date_1er_achat->Value, this->logo_link->Text, this->nom_entreprise->Text, this->ville_client_1->Text, this->rue_client_1->Text, this->numero_client_1->Value, this->cp_client_1->Value, this->adresse_check->Checked, this->ville_client_2->Text, this->rue_client_2->Text, this->numero_client_2->Value, this->cp_client_2->Value);
		this->dgv_clients->Refresh();
		this->oDs = this->oSvc->selectionnerToutLeClient("Clients");
		this->dgv_clients->DataSource = this->oDs;
		this->dgv_clients->DataMember = "Clients";
	}
	else if (this->radio_edit_client->Checked)
	{
		this->oSvc->updateUnClient(this->id_client->Value, this->nom_client->Text, this->prenom_client->Text, this->date_naissance->Value, this->date_1er_achat->Value, this->logo_link->Text, this->nom_entreprise->Text, this->ville_client_1->Text, this->rue_client_1->Text, this->numero_client_1->Value, this->cp_client_1->Value, this->adresse_check->Checked, this->ville_client_2->Text, this->rue_client_2->Text, this->numero_client_2->Value, this->cp_client_2->Value);
		this->dgv_clients->Refresh();
		this->oDs = this->oSvc->selectionnerToutLeClient("Clients");
		this->dgv_clients->DataSource = this->oDs;
		this->dgv_clients->DataMember = "Clients";
	}
	else if (this->radio_delete_client->Checked)
	{
		this->oSvc->deleteUnClient(this->id_client->Value);
		this->dgv_clients->Refresh();
		this->oDs = this->oSvc->selectionnerToutLeClient("Clients");
		this->dgv_clients->DataSource = this->oDs;
		this->dgv_clients->DataMember = "Clients";
	}
}
private: System::Void groupBox1_Enter_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Stock_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_valider_employe_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->radio_add_personnel->Checked)
	{
		this->oSvc->ajouterUnPersonnel(this->nom_personnel->Text, this->prenom_personnel->Text, this->id_supp->Value, this->date_embauche->Value, this->ville_personnel->Text, this->rue_personnel->Text, this->numero_personnel->Value, this->cp_personnel->Value);
		this->dgv_personnel->Refresh();
		this->oDs = this->oSvc->selectionnerToutLePersonnel("Personnel");
		this->dgv_personnel->DataSource = this->oDs;
		this->dgv_personnel->DataMember = "Personnel";
	}
	else if (this->radio_edit_personnel->Checked)
	{
		this->oSvc->updateUnPersonnel(this->id_personnel->Value, this->nom_personnel->Text, this->prenom_personnel->Text, this->id_supp->Value, this->date_embauche->Value, this->ville_personnel->Text, this->rue_personnel->Text, this->numero_personnel->Value, this->cp_personnel->Value);
		this->dgv_personnel->Refresh();
		this->oDs = this->oSvc->selectionnerToutLePersonnel("Personnel");
		this->dgv_personnel->DataSource = this->oDs;
		this->dgv_personnel->DataMember = "Personnel";
	}
	else if (this->radio_suppr_personnel->Checked)
	{
		this->oSvc->deleteUnPersonnel(this->id_personnel->Value);
		this->dgv_personnel->Refresh();
		this->oDs = this->oSvc->selectionnerToutLePersonnel("Personnel");
		this->dgv_personnel->DataSource = this->oDs;
		this->dgv_personnel->DataMember = "Personnel";
	}
}
private: System::Void radio_edit_personnel_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->id_personnel->Enabled = true;
	this->nom_personnel->Enabled = true;
	this->prenom_personnel->Enabled = true;
	this->id_supp->Enabled = true;
	this->date_embauche->Enabled = true;
	this->ville_personnel->Enabled = true;
	this->rue_personnel->Enabled = true;
	this->numero_personnel->Enabled = true;
	this->cp_personnel->Enabled = true;
}
private: System::Void radio_suppr_personnel_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->id_personnel->Enabled = true;
	this->nom_personnel->Enabled = false;
	this->prenom_personnel->Enabled = false;
	this->id_supp->Enabled = false;
	this->date_embauche->Enabled = false;
	this->ville_personnel->Enabled = false;
	this->rue_personnel->Enabled = false;
	this->numero_personnel->Enabled = false;
	this->cp_personnel->Enabled = false;
}
private: System::Void radio_add_client_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->id_client->Enabled = false;
	this->nom_client->Enabled = true;
	this->prenom_client->Enabled = true;
	this->date_naissance->Enabled = true;
	this->date_1er_achat->Enabled = true;
	this->logo_link->Enabled = true;
	this->ville_client_1->Enabled = true;
	this->rue_client_1->Enabled = true;
	this->numero_client_1->Enabled = true;
	this->cp_client_1->Enabled = true;
	this->nom_entreprise->Enabled = true;
	this->adresse_check->Enabled = true;
	if (this->adresse_check->Checked) {
		this->ville_client_2->Enabled = false;
		this->rue_client_2->Enabled = false;
		this->numero_client_2->Enabled = false;
		this->cp_client_2->Enabled = false;
	}
	else
	{
		this->ville_client_2->Enabled = true;
		this->rue_client_2->Enabled = true;
		this->numero_client_2->Enabled = true;
		this->cp_client_2->Enabled = true;
	}
}
private: System::Void radio_edit_client_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->id_client->Enabled = true;
	this->nom_client->Enabled = true;
	this->prenom_client->Enabled = true;
	this->date_naissance->Enabled = true;
	this->date_1er_achat->Enabled = true;
	this->logo_link->Enabled = true;
	this->ville_client_1->Enabled = true;
	this->rue_client_1->Enabled = true;
	this->numero_client_1->Enabled = true;
	this->cp_client_1->Enabled = true;
	this->nom_entreprise->Enabled = true;
	this->adresse_check->Enabled = true;
	if (this->adresse_check->Checked) {
		this->ville_client_2->Enabled = false;
		this->rue_client_2->Enabled = false;
		this->numero_client_2->Enabled = false;
		this->cp_client_2->Enabled = false;
	}
	else
	{
		this->ville_client_2->Enabled = true;
		this->rue_client_2->Enabled = true;
		this->numero_client_2->Enabled = true;
		this->cp_client_2->Enabled = true;
	}
}
private: System::Void radio_delete_client_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
this->id_client->Enabled = true;
	this->nom_client->Enabled = false;
	this->prenom_client->Enabled = false;
	this->date_naissance->Enabled = false;
	this->date_1er_achat->Enabled = false;
	this->logo_link->Enabled = false;
	this->ville_client_1->Enabled = false;
	this->rue_client_1->Enabled = false;
	this->numero_client_1->Enabled = false;
	this->cp_client_1->Enabled = false;
	this->nom_entreprise->Enabled = false;
	this->adresse_check->Enabled = false;
	this->ville_client_2->Enabled = false;
	this->rue_client_2->Enabled = false;
	this->numero_client_2->Enabled = false;
	this->cp_client_2->Enabled = false;
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void stats_grp_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_3(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
this->id_produit->Enabled = false;
	this->prix_ht->Enabled = true;
	this->taux_tva->Enabled = true;
	this->seuil_reapro->Enabled = true;
	this->qt_dispo->Enabled = true;
	this->type->Enabled = true;
	this->couleur->Enabled = true;
	this->prix_degressif->Enabled = true;
	this->nom_produit_stock->Enabled = true;
}
private: System::Void radio_edit_stock_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
this->id_produit->Enabled = true;
	this->prix_ht->Enabled = true;
	this->taux_tva->Enabled = true;
	this->seuil_reapro->Enabled = true;
	this->qt_dispo->Enabled = true;
	this->type->Enabled = true;
	this->couleur->Enabled = true;
	this->prix_degressif->Enabled = true;
	this->nom_produit_stock->Enabled = true;
}
private: System::Void radio_suppr_stock_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
this->id_produit->Enabled = true;
	this->prix_ht->Enabled = false;
	this->taux_tva->Enabled = false;
	this->seuil_reapro->Enabled = false;
	this->qt_dispo->Enabled = false;
	this->type->Enabled = false;
	this->couleur->Enabled = false;
	this->prix_degressif->Enabled = false;
	this->nom_produit_stock->Enabled = false;
}
private: System::Void dgv_clients_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}