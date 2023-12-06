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
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	private: System::Windows::Forms::Button^ btn_valider_employe;
	protected:


	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_update;

	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_prenom;



	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ Rue_employe;
	private: System::Windows::Forms::Label^ ville_employe;



	private: System::Windows::Forms::TextBox^ txt_adresse;

	private: System::Windows::Forms::TextBox^ txt_ville;
	private: System::Windows::Forms::Label^ Numero_employe;


	private: System::Windows::Forms::TextBox^ txt_cp;
	private: System::Windows::Forms::TabControl^ Catégories;
	private: System::Windows::Forms::TabPage^ tab_personnel;
	private: System::Windows::Forms::TabPage^ tab_clients;



	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::GroupBox^ Actions_Personnel;
	private: System::Windows::Forms::GroupBox^ userEntry_personnel;

	private: System::Windows::Forms::Label^ ID_supp_employe;
	private: System::Windows::Forms::Label^ date_embauche;


	private: System::Windows::Forms::Label^ CP_employe;
	private: System::Windows::Forms::NumericUpDown^ id_personnel;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
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
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_valider_employe = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Rue_employe = (gcnew System::Windows::Forms::Label());
			this->ville_employe = (gcnew System::Windows::Forms::Label());
			this->txt_adresse = (gcnew System::Windows::Forms::TextBox());
			this->txt_ville = (gcnew System::Windows::Forms::TextBox());
			this->Numero_employe = (gcnew System::Windows::Forms::Label());
			this->txt_cp = (gcnew System::Windows::Forms::TextBox());
			this->Catégories = (gcnew System::Windows::Forms::TabControl());
			this->tab_personnel = (gcnew System::Windows::Forms::TabPage());
			this->userEntry_personnel = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->id_personnel = (gcnew System::Windows::Forms::NumericUpDown());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->ID_supp_employe = (gcnew System::Windows::Forms::Label());
			this->date_embauche = (gcnew System::Windows::Forms::Label());
			this->CP_employe = (gcnew System::Windows::Forms::Label());
			this->Actions_Personnel = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->tab_clients = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->userEntry_clients = (gcnew System::Windows::Forms::GroupBox());
			this->id_client = (gcnew System::Windows::Forms::NumericUpDown());
			this->date_naissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->label_date_naissance = (gcnew System::Windows::Forms::Label());
			this->logo_link = (gcnew System::Windows::Forms::TextBox());
			this->label_logo = (gcnew System::Windows::Forms::Label());
			this->label_prenom_client = (gcnew System::Windows::Forms::Label());
			this->nom_entreprise = (gcnew System::Windows::Forms::TextBox());
			this->label_nom_client = (gcnew System::Windows::Forms::Label());
			this->nom_client = (gcnew System::Windows::Forms::TextBox());
			this->label_id_client = (gcnew System::Windows::Forms::Label());
			this->label_nom_entreprise = (gcnew System::Windows::Forms::Label());
			this->prenom_client = (gcnew System::Windows::Forms::TextBox());
			this->label_date_1er_achat = (gcnew System::Windows::Forms::Label());
			this->date_1er_achat = (gcnew System::Windows::Forms::DateTimePicker());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->cp_client_1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ville_client_1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->rue_client_1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numero_client_1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->cp_client_2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->ville_client_2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->rue_client_2 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->numero_client_2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->Catégories->SuspendLayout();
			this->tab_personnel->SuspendLayout();
			this->userEntry_personnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_personnel))->BeginInit();
			this->Actions_Personnel->SuspendLayout();
			this->tab_clients->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->userEntry_clients->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cp_client_1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cp_client_2))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(296, 18);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(887, 648);
			this->dgv_enr->TabIndex = 0;
			// 
			// btn_valider_employe
			// 
			this->btn_valider_employe->Location = System::Drawing::Point(155, 19);
			this->btn_valider_employe->Name = L"btn_valider_employe";
			this->btn_valider_employe->Size = System::Drawing::Size(117, 56);
			this->btn_valider_employe->TabIndex = 1;
			this->btn_valider_employe->Text = L"Valider";
			this->btn_valider_employe->UseVisualStyleBackColor = true;
			this->btn_valider_employe->Click += gcnew System::EventHandler(this, &MyForm::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(889, 36);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(133, 37);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"Nouveau";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(889, 128);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(133, 37);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"Supprimer";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(889, 82);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(133, 37);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"Mettre à jour";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &MyForm::btn_update_Click);
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(6, 80);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(266, 20);
			this->txt_nom->TabIndex = 6;
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(6, 119);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(266, 20);
			this->txt_prenom->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"ID";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Nom";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Prénom";
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
			// txt_adresse
			// 
			this->txt_adresse->Location = System::Drawing::Point(6, 278);
			this->txt_adresse->Name = L"txt_adresse";
			this->txt_adresse->Size = System::Drawing::Size(266, 20);
			this->txt_adresse->TabIndex = 16;
			// 
			// txt_ville
			// 
			this->txt_ville->Location = System::Drawing::Point(6, 239);
			this->txt_ville->Name = L"txt_ville";
			this->txt_ville->Size = System::Drawing::Size(266, 20);
			this->txt_ville->TabIndex = 15;
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
			// txt_cp
			// 
			this->txt_cp->Location = System::Drawing::Point(6, 322);
			this->txt_cp->Name = L"txt_cp";
			this->txt_cp->Size = System::Drawing::Size(266, 20);
			this->txt_cp->TabIndex = 19;
			this->txt_cp->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// Catégories
			// 
			this->Catégories->Controls->Add(this->tab_personnel);
			this->Catégories->Controls->Add(this->tab_clients);
			this->Catégories->Location = System::Drawing::Point(10, 12);
			this->Catégories->Name = L"Catégories";
			this->Catégories->SelectedIndex = 0;
			this->Catégories->Size = System::Drawing::Size(1198, 664);
			this->Catégories->TabIndex = 21;
			// 
			// tab_personnel
			// 
			this->tab_personnel->Controls->Add(this->userEntry_personnel);
			this->tab_personnel->Controls->Add(this->Actions_Personnel);
			this->tab_personnel->Controls->Add(this->btn_update);
			this->tab_personnel->Controls->Add(this->btn_delete);
			this->tab_personnel->Controls->Add(this->btn_insert);
			this->tab_personnel->Controls->Add(this->dgv_enr);
			this->tab_personnel->Location = System::Drawing::Point(4, 22);
			this->tab_personnel->Name = L"tab_personnel";
			this->tab_personnel->Padding = System::Windows::Forms::Padding(3);
			this->tab_personnel->Size = System::Drawing::Size(1190, 638);
			this->tab_personnel->TabIndex = 0;
			this->tab_personnel->Text = L"Personnel";
			this->tab_personnel->UseVisualStyleBackColor = true;
			this->tab_personnel->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// userEntry_personnel
			// 
			this->userEntry_personnel->Controls->Add(this->numericUpDown3);
			this->userEntry_personnel->Controls->Add(this->numericUpDown2);
			this->userEntry_personnel->Controls->Add(this->id_personnel);
			this->userEntry_personnel->Controls->Add(this->dateTimePicker1);
			this->userEntry_personnel->Controls->Add(this->ID_supp_employe);
			this->userEntry_personnel->Controls->Add(this->date_embauche);
			this->userEntry_personnel->Controls->Add(this->CP_employe);
			this->userEntry_personnel->Controls->Add(this->txt_ville);
			this->userEntry_personnel->Controls->Add(this->ville_employe);
			this->userEntry_personnel->Controls->Add(this->label3);
			this->userEntry_personnel->Controls->Add(this->txt_adresse);
			this->userEntry_personnel->Controls->Add(this->Numero_employe);
			this->userEntry_personnel->Controls->Add(this->label2);
			this->userEntry_personnel->Controls->Add(this->txt_nom);
			this->userEntry_personnel->Controls->Add(this->label1);
			this->userEntry_personnel->Controls->Add(this->Rue_employe);
			this->userEntry_personnel->Controls->Add(this->txt_cp);
			this->userEntry_personnel->Controls->Add(this->txt_prenom);
			this->userEntry_personnel->Location = System::Drawing::Point(6, 14);
			this->userEntry_personnel->Name = L"userEntry_personnel";
			this->userEntry_personnel->Size = System::Drawing::Size(284, 400);
			this->userEntry_personnel->TabIndex = 25;
			this->userEntry_personnel->TabStop = false;
			this->userEntry_personnel->Text = L"Entrée utilisateur";
			this->userEntry_personnel->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter_1);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(6, 368);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(266, 20);
			this->numericUpDown3->TabIndex = 28;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(6, 159);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(266, 20);
			this->numericUpDown2->TabIndex = 27;
			// 
			// id_personnel
			// 
			this->id_personnel->Location = System::Drawing::Point(6, 41);
			this->id_personnel->Name = L"id_personnel";
			this->id_personnel->Size = System::Drawing::Size(266, 20);
			this->id_personnel->TabIndex = 26;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(6, 200);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(266, 20);
			this->dateTimePicker1->TabIndex = 25;
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
			// date_embauche
			// 
			this->date_embauche->AutoSize = true;
			this->date_embauche->Location = System::Drawing::Point(7, 182);
			this->date_embauche->Name = L"date_embauche";
			this->date_embauche->Size = System::Drawing::Size(91, 13);
			this->date_embauche->TabIndex = 24;
			this->date_embauche->Text = L"Date d\'embauche";
			this->date_embauche->Click += gcnew System::EventHandler(this, &MyForm::label4_Click_1);
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
			this->Actions_Personnel->Controls->Add(this->radioButton3);
			this->Actions_Personnel->Controls->Add(this->radioButton2);
			this->Actions_Personnel->Controls->Add(this->radioButton1);
			this->Actions_Personnel->Controls->Add(this->btn_valider_employe);
			this->Actions_Personnel->Location = System::Drawing::Point(6, 576);
			this->Actions_Personnel->Name = L"Actions_Personnel";
			this->Actions_Personnel->Size = System::Drawing::Size(284, 90);
			this->Actions_Personnel->TabIndex = 24;
			this->Actions_Personnel->TabStop = false;
			this->Actions_Personnel->Text = L"Actions";
			this->Actions_Personnel->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 65);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(72, 17);
			this->radioButton3->TabIndex = 23;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Supprimer";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 42);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(62, 17);
			this->radioButton2->TabIndex = 22;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Modifier";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(58, 17);
			this->radioButton1->TabIndex = 21;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Ajouter";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// tab_clients
			// 
			this->tab_clients->Controls->Add(this->dataGridView1);
			this->tab_clients->Controls->Add(this->groupBox3);
			this->tab_clients->Controls->Add(this->userEntry_clients);
			this->tab_clients->Location = System::Drawing::Point(4, 22);
			this->tab_clients->Name = L"tab_clients";
			this->tab_clients->Padding = System::Windows::Forms::Padding(3);
			this->tab_clients->Size = System::Drawing::Size(1190, 638);
			this->tab_clients->TabIndex = 1;
			this->tab_clients->Text = L"Clients";
			this->tab_clients->UseVisualStyleBackColor = true;
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
			// id_client
			// 
			this->id_client->Location = System::Drawing::Point(3, 19);
			this->id_client->Name = L"id_client";
			this->id_client->Size = System::Drawing::Size(266, 20);
			this->id_client->TabIndex = 26;
			// 
			// date_naissance
			// 
			this->date_naissance->Location = System::Drawing::Point(3, 138);
			this->date_naissance->Name = L"date_naissance";
			this->date_naissance->Size = System::Drawing::Size(266, 20);
			this->date_naissance->TabIndex = 25;
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
			// logo_link
			// 
			this->logo_link->Location = System::Drawing::Point(3, 216);
			this->logo_link->Name = L"logo_link";
			this->logo_link->Size = System::Drawing::Size(266, 20);
			this->logo_link->TabIndex = 15;
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
			// label_prenom_client
			// 
			this->label_prenom_client->AutoSize = true;
			this->label_prenom_client->Location = System::Drawing::Point(4, 81);
			this->label_prenom_client->Name = L"label_prenom_client";
			this->label_prenom_client->Size = System::Drawing::Size(72, 13);
			this->label_prenom_client->TabIndex = 14;
			this->label_prenom_client->Text = L"Prénom Client";
			// 
			// nom_entreprise
			// 
			this->nom_entreprise->Location = System::Drawing::Point(3, 257);
			this->nom_entreprise->Name = L"nom_entreprise";
			this->nom_entreprise->Size = System::Drawing::Size(266, 20);
			this->nom_entreprise->TabIndex = 16;
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
			// nom_client
			// 
			this->nom_client->Location = System::Drawing::Point(3, 58);
			this->nom_client->Name = L"nom_client";
			this->nom_client->Size = System::Drawing::Size(266, 20);
			this->nom_client->TabIndex = 6;
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
			// label_nom_entreprise
			// 
			this->label_nom_entreprise->AutoSize = true;
			this->label_nom_entreprise->Location = System::Drawing::Point(4, 241);
			this->label_nom_entreprise->Name = L"label_nom_entreprise";
			this->label_nom_entreprise->Size = System::Drawing::Size(78, 13);
			this->label_nom_entreprise->TabIndex = 18;
			this->label_nom_entreprise->Text = L"Nom entreprise";
			// 
			// prenom_client
			// 
			this->prenom_client->Location = System::Drawing::Point(3, 97);
			this->prenom_client->Name = L"prenom_client";
			this->prenom_client->Size = System::Drawing::Size(266, 20);
			this->prenom_client->TabIndex = 7;
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
			// date_1er_achat
			// 
			this->date_1er_achat->Location = System::Drawing::Point(3, 177);
			this->date_1er_achat->Name = L"date_1er_achat";
			this->date_1er_achat->Size = System::Drawing::Size(266, 20);
			this->date_1er_achat->TabIndex = 28;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(317, 17);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(861, 611);
			this->dataGridView1->TabIndex = 29;
			// 
			// cp_client_1
			// 
			this->cp_client_1->Location = System::Drawing::Point(2, 432);
			this->cp_client_1->Name = L"cp_client_1";
			this->cp_client_1->Size = System::Drawing::Size(266, 20);
			this->cp_client_1->TabIndex = 36;
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
			// ville_client_1
			// 
			this->ville_client_1->Location = System::Drawing::Point(2, 303);
			this->ville_client_1->Name = L"ville_client_1";
			this->ville_client_1->Size = System::Drawing::Size(266, 20);
			this->ville_client_1->TabIndex = 29;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(2, 287);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 13);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Ville";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click_1);
			// 
			// rue_client_1
			// 
			this->rue_client_1->Location = System::Drawing::Point(2, 342);
			this->rue_client_1->Name = L"rue_client_1";
			this->rue_client_1->Size = System::Drawing::Size(266, 20);
			this->rue_client_1->TabIndex = 30;
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
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 326);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 13);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Rue";
			// 
			// numero_client_1
			// 
			this->numero_client_1->Location = System::Drawing::Point(2, 386);
			this->numero_client_1->Name = L"numero_client_1";
			this->numero_client_1->Size = System::Drawing::Size(266, 20);
			this->numero_client_1->TabIndex = 33;
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1217, 689);
			this->Controls->Add(this->Catégories);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->Catégories->ResumeLayout(false);
			this->tab_personnel->ResumeLayout(false);
			this->userEntry_personnel->ResumeLayout(false);
			this->userEntry_personnel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_personnel))->EndInit();
			this->Actions_Personnel->ResumeLayout(false);
			this->Actions_Personnel->PerformLayout();
			this->tab_clients->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->userEntry_clients->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cp_client_1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cp_client_2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// FLAG
		this->oSvc->ajouterUnePersonne(this->txt_nom->Text, this->txt_prenom->Text, this->txt_ville->Text, this->txt_adresse->Text, this->txt_cp->Text);

		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
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
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->updateUnePersonne(this->id_personnel->Text, this->txt_nom->Text, this->txt_prenom->Text, this->txt_ville->Text, this->txt_adresse->Text, this->txt_cp->Text);
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->deleteUnePersonne(this->id_personnel->Text);
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}

private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
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
};
}