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
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
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
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::NumericUpDown^ cp_client_1;

private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ ville_client_1;

private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ rue_client_1;

private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ numero_client_1;

private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::NumericUpDown^ cp_client_2;

private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ ville_client_2;

private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ rue_client_2;


private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ numero_client_2;
private: System::Windows::Forms::TabPage^ Stock;
private: System::Windows::Forms::TabPage^ Commandes;
private: System::Windows::Forms::TabPage^ Statistiques;

private: System::Windows::Forms::TabPage^ Informations;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::CheckBox^ prix_degressif;

private: System::Windows::Forms::NumericUpDown^ id_produit;

private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
private: System::Windows::Forms::TextBox^ taux_tva;

private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label_id_produit;
private: System::Windows::Forms::TextBox^ couleur;


private: System::Windows::Forms::TextBox^ type;
private: System::Windows::Forms::Label^ label_couleur;


private: System::Windows::Forms::TextBox^ prix_ht;

private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label_seuil_reapro;

private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label_type;

private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TextBox^ seuil_reapro;

private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Label^ label_prix_ht;
private: System::Windows::Forms::Label^ label_taux_tva;
private: System::Windows::Forms::Label^ label_qt_dispo;




private: System::Windows::Forms::Label^ label_nom_produit;

private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ qt_dispo;
private: System::Windows::Forms::NumericUpDown^ numero_personnel;




private: System::Windows::Forms::Button^ btn_valider_employe;

















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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->userEntry_clients = (gcnew System::Windows::Forms::GroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->cp_client_2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->ville_client_2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->rue_client_2 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->numero_client_2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
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
			this->numero_client_1 = (gcnew System::Windows::Forms::TextBox());
			this->label_nom_client = (gcnew System::Windows::Forms::Label());
			this->date_1er_achat = (gcnew System::Windows::Forms::DateTimePicker());
			this->label_prenom_client = (gcnew System::Windows::Forms::Label());
			this->label_date_1er_achat = (gcnew System::Windows::Forms::Label());
			this->label_date_naissance = (gcnew System::Windows::Forms::Label());
			this->date_naissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->Stock = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->qt_dispo = (gcnew System::Windows::Forms::TextBox());
			this->seuil_reapro = (gcnew System::Windows::Forms::TextBox());
			this->label_type = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_couleur = (gcnew System::Windows::Forms::Label());
			this->couleur = (gcnew System::Windows::Forms::TextBox());
			this->label_qt_dispo = (gcnew System::Windows::Forms::Label());
			this->label_nom_produit = (gcnew System::Windows::Forms::Label());
			this->type = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label_seuil_reapro = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->prix_degressif = (gcnew System::Windows::Forms::CheckBox());
			this->id_produit = (gcnew System::Windows::Forms::NumericUpDown());
			this->taux_tva = (gcnew System::Windows::Forms::TextBox());
			this->label_id_produit = (gcnew System::Windows::Forms::Label());
			this->prix_ht = (gcnew System::Windows::Forms::TextBox());
			this->label_prix_ht = (gcnew System::Windows::Forms::Label());
			this->label_taux_tva = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->Commandes = (gcnew System::Windows::Forms::TabPage());
			this->Statistiques = (gcnew System::Windows::Forms::TabPage());
			this->Informations = (gcnew System::Windows::Forms::TabPage());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->userEntry_clients->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cp_client_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cp_client_1))->BeginInit();
			this->Stock->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_produit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
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
			this->tab_personnel->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
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
			this->userEntry_personnel->Size = System::Drawing::Size(284, 400);
			this->userEntry_personnel->TabIndex = 25;
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
			this->tab_clients->Controls->Add(this->dataGridView1);
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
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(317, 17);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(861, 611);
			this->dataGridView1->TabIndex = 29;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->groupBox3->Controls->Add(this->radioButton4);
			this->groupBox3->Controls->Add(this->radioButton5);
			this->groupBox3->Controls->Add(this->radioButton6);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Location = System::Drawing::Point(6, 538);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(305, 90);
			this->groupBox3->TabIndex = 27;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Actions";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 65);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(72, 17);
			this->radioButton4->TabIndex = 23;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Supprimer";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 42);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(62, 17);
			this->radioButton5->TabIndex = 22;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Modifier";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(6, 19);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(58, 17);
			this->radioButton6->TabIndex = 21;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Ajouter";
			this->radioButton6->UseVisualStyleBackColor = true;
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
			this->panel1->Controls->Add(this->cp_client_2);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->ville_client_2);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->rue_client_2);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->numero_client_2);
			this->panel1->Controls->Add(this->checkBox1);
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
			this->panel1->Controls->Add(this->numero_client_1);
			this->panel1->Controls->Add(this->label_nom_client);
			this->panel1->Controls->Add(this->date_1er_achat);
			this->panel1->Controls->Add(this->label_prenom_client);
			this->panel1->Controls->Add(this->label_date_1er_achat);
			this->panel1->Controls->Add(this->label_date_naissance);
			this->panel1->Controls->Add(this->date_naissance);
			this->panel1->Location = System::Drawing::Point(6, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(290, 483);
			this->panel1->TabIndex = 30;
			// 
			// cp_client_2
			// 
			this->cp_client_2->Location = System::Drawing::Point(3, 628);
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
			// numero_client_2
			// 
			this->numero_client_2->Location = System::Drawing::Point(3, 582);
			this->numero_client_2->Name = L"numero_client_2";
			this->numero_client_2->Size = System::Drawing::Size(266, 20);
			this->numero_client_2->TabIndex = 42;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(2, 458);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(238, 17);
			this->checkBox1->TabIndex = 37;
			this->checkBox1->Text = L"Adresse de livraison = Adresse de facturation";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// id_client
			// 
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
			// numero_client_1
			// 
			this->numero_client_1->Location = System::Drawing::Point(2, 386);
			this->numero_client_1->Name = L"numero_client_1";
			this->numero_client_1->Size = System::Drawing::Size(266, 20);
			this->numero_client_1->TabIndex = 33;
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
			this->Stock->Controls->Add(this->groupBox1);
			this->Stock->Controls->Add(this->textBox10);
			this->Stock->Controls->Add(this->label22);
			this->Stock->Controls->Add(this->label20);
			this->Stock->Controls->Add(this->textBox8);
			this->Stock->Controls->Add(this->label16);
			this->Stock->Controls->Add(this->numericUpDown5);
			this->Stock->Location = System::Drawing::Point(4, 22);
			this->Stock->Name = L"Stock";
			this->Stock->Padding = System::Windows::Forms::Padding(3);
			this->Stock->Size = System::Drawing::Size(1240, 638);
			this->Stock->TabIndex = 2;
			this->Stock->Text = L"Stock";
			this->Stock->UseVisualStyleBackColor = true;
			this->Stock->Click += gcnew System::EventHandler(this, &MyForm::Stock_Click);
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
			this->panel2->Controls->Add(this->textBox11);
			this->panel2->Controls->Add(this->qt_dispo);
			this->panel2->Controls->Add(this->seuil_reapro);
			this->panel2->Controls->Add(this->label_type);
			this->panel2->Controls->Add(this->numericUpDown1);
			this->panel2->Controls->Add(this->label_couleur);
			this->panel2->Controls->Add(this->couleur);
			this->panel2->Controls->Add(this->label_qt_dispo);
			this->panel2->Controls->Add(this->label_nom_produit);
			this->panel2->Controls->Add(this->type);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label_seuil_reapro);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->textBox3);
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
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(4, 58);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(266, 20);
			this->textBox11->TabIndex = 47;
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
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(3, 628);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(266, 20);
			this->numericUpDown1->TabIndex = 45;
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 612);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Code Postal";
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 499);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(266, 20);
			this->textBox1->TabIndex = 38;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 483);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(26, 13);
			this->label6->TabIndex = 40;
			this->label6->Text = L"Ville";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(3, 538);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(266, 20);
			this->textBox2->TabIndex = 39;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(4, 566);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 13);
			this->label9->TabIndex = 43;
			this->label9->Text = L"Numero";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(4, 522);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(27, 13);
			this->label15->TabIndex = 41;
			this->label15->Text = L"Rue";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(3, 582);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(266, 20);
			this->textBox3->TabIndex = 42;
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
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(758, 306);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(266, 20);
			this->textBox10->TabIndex = 33;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(759, 246);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(27, 13);
			this->label22->TabIndex = 32;
			this->label22->Text = L"Rue";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(759, 290);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(44, 13);
			this->label20->TabIndex = 34;
			this->label20->Text = L"Numero";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(758, 262);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(266, 20);
			this->textBox8->TabIndex = 30;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(759, 336);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(64, 13);
			this->label16->TabIndex = 35;
			this->label16->Text = L"Code Postal";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(758, 352);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(266, 20);
			this->numericUpDown5->TabIndex = 36;
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
			this->Statistiques->Location = System::Drawing::Point(4, 22);
			this->Statistiques->Name = L"Statistiques";
			this->Statistiques->Padding = System::Windows::Forms::Padding(3);
			this->Statistiques->Size = System::Drawing::Size(1240, 638);
			this->Statistiques->TabIndex = 4;
			this->Statistiques->Text = L"Statistiques";
			this->Statistiques->UseVisualStyleBackColor = true;
			// 
			// Informations
			// 
			this->Informations->Location = System::Drawing::Point(4, 22);
			this->Informations->Name = L"Informations";
			this->Informations->Padding = System::Windows::Forms::Padding(3);
			this->Informations->Size = System::Drawing::Size(1240, 638);
			this->Informations->TabIndex = 5;
			this->Informations->Text = L"Informations";
			this->Informations->UseVisualStyleBackColor = true;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->userEntry_clients->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cp_client_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cp_client_1))->EndInit();
			this->Stock->ResumeLayout(false);
			this->Stock->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_produit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
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
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
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
}
private: System::Void label7_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
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
};
}