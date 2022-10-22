#include <chrono>
#pragma once

namespace MicrowaveOven {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Turntable;
	private: System::Windows::Forms::Button^ Light;
	protected:


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Vent;
	private: System::Windows::Forms::Button^ PowerGrillAuto;




	private: System::Windows::Forms::Button^ PoundDefrost;


	private: System::Windows::Forms::Button^ AutoDefrost;

	private: System::Windows::Forms::Button^ GrillMicrowave;


	private: System::Windows::Forms::Button^ PowerGrill;

	private: System::Windows::Forms::Button^ Microwave;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Veggies;

	private: System::Windows::Forms::Button^ Reheat;

	private: System::Windows::Forms::Button^ Cook;

	private: System::Windows::Forms::Button^ Pizza;

	private: System::Windows::Forms::Button^ Potato;

	private: System::Windows::Forms::Button^ Popcorn;
	private: System::Windows::Forms::Button^ StopClear;
	private: System::Windows::Forms::Button^ Increase30Sec;
	private: System::Windows::Forms::Button^ Options;
	private: System::Windows::Forms::Button^ KeepWarm;





	private: System::Windows::Forms::Button^ Start;
	private: System::Windows::Forms::Button^ EcoMode;
	private: System::Windows::Forms::Button^ KitchenTimer;




	private: System::Windows::Forms::Button^ OK;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ keyID0;

	private: System::Windows::Forms::Button^ keyID9;

	private: System::Windows::Forms::Button^ keyID8;

	private: System::Windows::Forms::Button^ keyID7;

	private: System::Windows::Forms::Button^ keyID6;

	private: System::Windows::Forms::Button^ keyID5;

	private: System::Windows::Forms::Button^ keyID4;

	private: System::Windows::Forms::Button^ keyID3;

	private: System::Windows::Forms::Button^ keyID2;

	private: System::Windows::Forms::Button^ keyID1;

	private: System::Windows::Forms::Button^ Decrease10Sec;

	private: System::Windows::Forms::Button^ Increase10Sec;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ DisplayBox;
	private: System::Windows::Forms::Label^ Display;









	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Turntable = (gcnew System::Windows::Forms::Button());
			this->Light = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->StopClear = (gcnew System::Windows::Forms::Button());
			this->Increase30Sec = (gcnew System::Windows::Forms::Button());
			this->Options = (gcnew System::Windows::Forms::Button());
			this->KeepWarm = (gcnew System::Windows::Forms::Button());
			this->Start = (gcnew System::Windows::Forms::Button());
			this->EcoMode = (gcnew System::Windows::Forms::Button());
			this->KitchenTimer = (gcnew System::Windows::Forms::Button());
			this->OK = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->keyID0 = (gcnew System::Windows::Forms::Button());
			this->keyID9 = (gcnew System::Windows::Forms::Button());
			this->keyID8 = (gcnew System::Windows::Forms::Button());
			this->keyID7 = (gcnew System::Windows::Forms::Button());
			this->keyID6 = (gcnew System::Windows::Forms::Button());
			this->keyID5 = (gcnew System::Windows::Forms::Button());
			this->keyID4 = (gcnew System::Windows::Forms::Button());
			this->keyID3 = (gcnew System::Windows::Forms::Button());
			this->keyID2 = (gcnew System::Windows::Forms::Button());
			this->keyID1 = (gcnew System::Windows::Forms::Button());
			this->Decrease10Sec = (gcnew System::Windows::Forms::Button());
			this->Increase10Sec = (gcnew System::Windows::Forms::Button());
			this->PowerGrillAuto = (gcnew System::Windows::Forms::Button());
			this->PoundDefrost = (gcnew System::Windows::Forms::Button());
			this->AutoDefrost = (gcnew System::Windows::Forms::Button());
			this->GrillMicrowave = (gcnew System::Windows::Forms::Button());
			this->PowerGrill = (gcnew System::Windows::Forms::Button());
			this->Microwave = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Veggies = (gcnew System::Windows::Forms::Button());
			this->Reheat = (gcnew System::Windows::Forms::Button());
			this->Cook = (gcnew System::Windows::Forms::Button());
			this->Pizza = (gcnew System::Windows::Forms::Button());
			this->Potato = (gcnew System::Windows::Forms::Button());
			this->Popcorn = (gcnew System::Windows::Forms::Button());
			this->Vent = (gcnew System::Windows::Forms::Button());
			this->Display = (gcnew System::Windows::Forms::Label());
			this->DisplayBox = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// Turntable
			// 
			this->Turntable->BackColor = System::Drawing::Color::Transparent;
			this->Turntable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Turntable->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Turntable->Location = System::Drawing::Point(2, 6);
			this->Turntable->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Turntable->Name = L"Turntable";
			this->Turntable->Size = System::Drawing::Size(74, 30);
			this->Turntable->TabIndex = 0;
			this->Turntable->Text = L"Turntable \nOn/Off";
			this->Turntable->UseVisualStyleBackColor = false;
			this->Turntable->Click += gcnew System::EventHandler(this, &MyForm::Turntable_Click);
			// 
			// Light
			// 
			this->Light->BackColor = System::Drawing::Color::Transparent;
			this->Light->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Light->Location = System::Drawing::Point(2, 51);
			this->Light->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Light->Name = L"Light";
			this->Light->Size = System::Drawing::Size(38, 17);
			this->Light->TabIndex = 1;
			this->Light->Text = L"Light";
			this->Light->UseVisualStyleBackColor = false;
			this->Light->Click += gcnew System::EventHandler(this, &MyForm::Light_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->StopClear);
			this->panel1->Controls->Add(this->Increase30Sec);
			this->panel1->Controls->Add(this->Options);
			this->panel1->Controls->Add(this->KeepWarm);
			this->panel1->Controls->Add(this->Start);
			this->panel1->Controls->Add(this->EcoMode);
			this->panel1->Controls->Add(this->KitchenTimer);
			this->panel1->Controls->Add(this->OK);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->Decrease10Sec);
			this->panel1->Controls->Add(this->Increase10Sec);
			this->panel1->Controls->Add(this->PowerGrillAuto);
			this->panel1->Controls->Add(this->PoundDefrost);
			this->panel1->Controls->Add(this->AutoDefrost);
			this->panel1->Controls->Add(this->GrillMicrowave);
			this->panel1->Controls->Add(this->PowerGrill);
			this->panel1->Controls->Add(this->Microwave);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->Vent);
			this->panel1->Controls->Add(this->Turntable);
			this->panel1->Controls->Add(this->Light);
			this->panel1->Location = System::Drawing::Point(66, 394);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1024, 92);
			this->panel1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(986, 34);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 9);
			this->label2->TabIndex = 23;
			this->label2->Text = L"3 sec";
			// 
			// StopClear
			// 
			this->StopClear->BackColor = System::Drawing::Color::Transparent;
			this->StopClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StopClear->Location = System::Drawing::Point(976, 44);
			this->StopClear->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->StopClear->Name = L"StopClear";
			this->StopClear->Size = System::Drawing::Size(46, 31);
			this->StopClear->TabIndex = 22;
			this->StopClear->Text = L"STOP CLEAR";
			this->StopClear->UseVisualStyleBackColor = false;
			this->StopClear->Click += gcnew System::EventHandler(this, &MyForm::Stop_Click);
			// 
			// Increase30Sec
			// 
			this->Increase30Sec->BackColor = System::Drawing::Color::Transparent;
			this->Increase30Sec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Increase30Sec->Location = System::Drawing::Point(930, 46);
			this->Increase30Sec->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Increase30Sec->Name = L"Increase30Sec";
			this->Increase30Sec->Size = System::Drawing::Size(40, 29);
			this->Increase30Sec->TabIndex = 21;
			this->Increase30Sec->Text = L"+30 sec";
			this->Increase30Sec->UseVisualStyleBackColor = false;
			// 
			// Options
			// 
			this->Options->BackColor = System::Drawing::Color::Transparent;
			this->Options->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Options->Location = System::Drawing::Point(870, 46);
			this->Options->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Options->Name = L"Options";
			this->Options->Size = System::Drawing::Size(51, 29);
			this->Options->TabIndex = 20;
			this->Options->Text = L"Options";
			this->Options->UseVisualStyleBackColor = false;
			// 
			// KeepWarm
			// 
			this->KeepWarm->BackColor = System::Drawing::Color::Transparent;
			this->KeepWarm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KeepWarm->Location = System::Drawing::Point(822, 44);
			this->KeepWarm->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->KeepWarm->Name = L"KeepWarm";
			this->KeepWarm->Size = System::Drawing::Size(42, 31);
			this->KeepWarm->TabIndex = 19;
			this->KeepWarm->Text = L"Keep Warm";
			this->KeepWarm->UseVisualStyleBackColor = false;
			this->KeepWarm->Click += gcnew System::EventHandler(this, &MyForm::KeepWarm_Click);
			// 
			// Start
			// 
			this->Start->BackColor = System::Drawing::Color::Transparent;
			this->Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Start->Location = System::Drawing::Point(976, 11);
			this->Start->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(46, 26);
			this->Start->TabIndex = 17;
			this->Start->Text = L"START";
			this->Start->UseVisualStyleBackColor = false;
			// 
			// EcoMode
			// 
			this->EcoMode->BackColor = System::Drawing::Color::Transparent;
			this->EcoMode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EcoMode->Location = System::Drawing::Point(930, 11);
			this->EcoMode->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->EcoMode->Name = L"EcoMode";
			this->EcoMode->Size = System::Drawing::Size(40, 31);
			this->EcoMode->TabIndex = 16;
			this->EcoMode->Text = L"Eco\nMode";
			this->EcoMode->UseVisualStyleBackColor = false;
			this->EcoMode->Click += gcnew System::EventHandler(this, &MyForm::EcoMode_Click);
			// 
			// KitchenTimer
			// 
			this->KitchenTimer->BackColor = System::Drawing::Color::Transparent;
			this->KitchenTimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KitchenTimer->Location = System::Drawing::Point(870, 9);
			this->KitchenTimer->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->KitchenTimer->Name = L"KitchenTimer";
			this->KitchenTimer->Size = System::Drawing::Size(51, 32);
			this->KitchenTimer->TabIndex = 15;
			this->KitchenTimer->Text = L"Kitchen\nTimer";
			this->KitchenTimer->UseVisualStyleBackColor = false;
			this->KitchenTimer->Click += gcnew System::EventHandler(this, &MyForm::KitchenTimer_Click);
			// 
			// OK
			// 
			this->OK->BackColor = System::Drawing::Color::Transparent;
			this->OK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OK->Location = System::Drawing::Point(822, 11);
			this->OK->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(38, 29);
			this->OK->TabIndex = 14;
			this->OK->Text = L"OK";
			this->OK->UseVisualStyleBackColor = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->keyID0);
			this->panel3->Controls->Add(this->keyID9);
			this->panel3->Controls->Add(this->keyID8);
			this->panel3->Controls->Add(this->keyID7);
			this->panel3->Controls->Add(this->keyID6);
			this->panel3->Controls->Add(this->keyID5);
			this->panel3->Controls->Add(this->keyID4);
			this->panel3->Controls->Add(this->keyID3);
			this->panel3->Controls->Add(this->keyID2);
			this->panel3->Controls->Add(this->keyID1);
			this->panel3->Location = System::Drawing::Point(638, 11);
			this->panel3->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(178, 62);
			this->panel3->TabIndex = 13;
			// 
			// keyID0
			// 
			this->keyID0->BackColor = System::Drawing::Color::Transparent;
			this->keyID0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID0->Location = System::Drawing::Point(142, 34);
			this->keyID0->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->keyID0->Name = L"keyID0";
			this->keyID0->Size = System::Drawing::Size(30, 20);
			this->keyID0->TabIndex = 9;
			this->keyID0->Text = L"0";
			this->keyID0->UseVisualStyleBackColor = false;
			// 
			// keyID9
			// 
			this->keyID9->BackColor = System::Drawing::Color::Transparent;
			this->keyID9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID9->Location = System::Drawing::Point(108, 34);
			this->keyID9->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->keyID9->Name = L"keyID9";
			this->keyID9->Size = System::Drawing::Size(30, 20);
			this->keyID9->TabIndex = 8;
			this->keyID9->Text = L"9";
			this->keyID9->UseVisualStyleBackColor = false;
			// 
			// keyID8
			// 
			this->keyID8->BackColor = System::Drawing::Color::Transparent;
			this->keyID8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID8->Location = System::Drawing::Point(74, 34);
			this->keyID8->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->keyID8->Name = L"keyID8";
			this->keyID8->Size = System::Drawing::Size(30, 20);
			this->keyID8->TabIndex = 7;
			this->keyID8->Text = L"8";
			this->keyID8->UseVisualStyleBackColor = false;
			// 
			// keyID7
			// 
			this->keyID7->BackColor = System::Drawing::Color::Transparent;
			this->keyID7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID7->Location = System::Drawing::Point(36, 34);
			this->keyID7->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->keyID7->Name = L"keyID7";
			this->keyID7->Size = System::Drawing::Size(30, 20);
			this->keyID7->TabIndex = 6;
			this->keyID7->Text = L"7";
			this->keyID7->UseVisualStyleBackColor = false;
			// 
			// keyID6
			// 
			this->keyID6->BackColor = System::Drawing::Color::Transparent;
			this->keyID6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID6->Location = System::Drawing::Point(2, 34);
			this->keyID6->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->keyID6->Name = L"keyID6";
			this->keyID6->Size = System::Drawing::Size(30, 20);
			this->keyID6->TabIndex = 5;
			this->keyID6->Text = L"6";
			this->keyID6->UseVisualStyleBackColor = false;
			// 
			// keyID5
			// 
			this->keyID5->BackColor = System::Drawing::Color::Transparent;
			this->keyID5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID5->Location = System::Drawing::Point(142, 7);
			this->keyID5->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->keyID5->Name = L"keyID5";
			this->keyID5->Size = System::Drawing::Size(30, 20);
			this->keyID5->TabIndex = 4;
			this->keyID5->Text = L"5";
			this->keyID5->UseVisualStyleBackColor = false;
			// 
			// keyID4
			// 
			this->keyID4->BackColor = System::Drawing::Color::Transparent;
			this->keyID4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID4->Location = System::Drawing::Point(108, 6);
			this->keyID4->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->keyID4->Name = L"keyID4";
			this->keyID4->Size = System::Drawing::Size(30, 20);
			this->keyID4->TabIndex = 3;
			this->keyID4->Text = L"4";
			this->keyID4->UseVisualStyleBackColor = false;
			// 
			// keyID3
			// 
			this->keyID3->BackColor = System::Drawing::Color::Transparent;
			this->keyID3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID3->Location = System::Drawing::Point(74, 6);
			this->keyID3->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->keyID3->Name = L"keyID3";
			this->keyID3->Size = System::Drawing::Size(30, 20);
			this->keyID3->TabIndex = 2;
			this->keyID3->Text = L"3";
			this->keyID3->UseVisualStyleBackColor = false;
			// 
			// keyID2
			// 
			this->keyID2->BackColor = System::Drawing::Color::Transparent;
			this->keyID2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID2->Location = System::Drawing::Point(36, 6);
			this->keyID2->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->keyID2->Name = L"keyID2";
			this->keyID2->Size = System::Drawing::Size(30, 20);
			this->keyID2->TabIndex = 1;
			this->keyID2->Text = L"2";
			this->keyID2->UseVisualStyleBackColor = false;
			// 
			// keyID1
			// 
			this->keyID1->BackColor = System::Drawing::Color::Transparent;
			this->keyID1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID1->Location = System::Drawing::Point(2, 6);
			this->keyID1->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->keyID1->Name = L"keyID1";
			this->keyID1->Size = System::Drawing::Size(30, 20);
			this->keyID1->TabIndex = 0;
			this->keyID1->Text = L"1";
			this->keyID1->UseVisualStyleBackColor = false;
			// 
			// Decrease10Sec
			// 
			this->Decrease10Sec->BackColor = System::Drawing::Color::Transparent;
			this->Decrease10Sec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Decrease10Sec->Location = System::Drawing::Point(612, 40);
			this->Decrease10Sec->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Decrease10Sec->Name = L"Decrease10Sec";
			this->Decrease10Sec->Size = System::Drawing::Size(22, 25);
			this->Decrease10Sec->TabIndex = 12;
			this->Decrease10Sec->Text = L"v";
			this->Decrease10Sec->UseVisualStyleBackColor = false;
			// 
			// Increase10Sec
			// 
			this->Increase10Sec->BackColor = System::Drawing::Color::Transparent;
			this->Increase10Sec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Increase10Sec->Location = System::Drawing::Point(612, 16);
			this->Increase10Sec->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Increase10Sec->Name = L"Increase10Sec";
			this->Increase10Sec->Size = System::Drawing::Size(22, 25);
			this->Increase10Sec->TabIndex = 11;
			this->Increase10Sec->Text = L"^";
			this->Increase10Sec->UseVisualStyleBackColor = false;
			// 
			// PowerGrillAuto
			// 
			this->PowerGrillAuto->BackColor = System::Drawing::Color::Transparent;
			this->PowerGrillAuto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PowerGrillAuto->Location = System::Drawing::Point(402, 44);
			this->PowerGrillAuto->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->PowerGrillAuto->Name = L"PowerGrillAuto";
			this->PowerGrillAuto->Size = System::Drawing::Size(58, 30);
			this->PowerGrillAuto->TabIndex = 9;
			this->PowerGrillAuto->Text = L"Power\nGrillAuto";
			this->PowerGrillAuto->UseVisualStyleBackColor = false;
			// 
			// PoundDefrost
			// 
			this->PoundDefrost->BackColor = System::Drawing::Color::Transparent;
			this->PoundDefrost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PoundDefrost->Location = System::Drawing::Point(334, 44);
			this->PoundDefrost->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->PoundDefrost->Name = L"PoundDefrost";
			this->PoundDefrost->Size = System::Drawing::Size(59, 31);
			this->PoundDefrost->TabIndex = 8;
			this->PoundDefrost->Text = L"1 Pound \nDefrost";
			this->PoundDefrost->UseVisualStyleBackColor = false;
			// 
			// AutoDefrost
			// 
			this->AutoDefrost->BackColor = System::Drawing::Color::Transparent;
			this->AutoDefrost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AutoDefrost->Location = System::Drawing::Point(264, 44);
			this->AutoDefrost->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->AutoDefrost->Name = L"AutoDefrost";
			this->AutoDefrost->Size = System::Drawing::Size(58, 31);
			this->AutoDefrost->TabIndex = 7;
			this->AutoDefrost->Text = L"Auto \nDefrost";
			this->AutoDefrost->UseVisualStyleBackColor = false;
			this->AutoDefrost->Click += gcnew System::EventHandler(this, &MyForm::AutoDefrost_Click);
			// 
			// GrillMicrowave
			// 
			this->GrillMicrowave->BackColor = System::Drawing::Color::Transparent;
			this->GrillMicrowave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GrillMicrowave->Location = System::Drawing::Point(396, 9);
			this->GrillMicrowave->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->GrillMicrowave->Name = L"GrillMicrowave";
			this->GrillMicrowave->Size = System::Drawing::Size(64, 29);
			this->GrillMicrowave->TabIndex = 6;
			this->GrillMicrowave->Text = L"Grill + \nMicrowave";
			this->GrillMicrowave->UseVisualStyleBackColor = false;
			// 
			// PowerGrill
			// 
			this->PowerGrill->BackColor = System::Drawing::Color::Transparent;
			this->PowerGrill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PowerGrill->Location = System::Drawing::Point(334, 11);
			this->PowerGrill->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->PowerGrill->Name = L"PowerGrill";
			this->PowerGrill->Size = System::Drawing::Size(59, 20);
			this->PowerGrill->TabIndex = 5;
			this->PowerGrill->Text = L"PowerGrill";
			this->PowerGrill->UseVisualStyleBackColor = false;
			// 
			// Microwave
			// 
			this->Microwave->BackColor = System::Drawing::Color::Transparent;
			this->Microwave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Microwave->Location = System::Drawing::Point(264, 10);
			this->Microwave->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Microwave->Name = L"Microwave";
			this->Microwave->Size = System::Drawing::Size(66, 21);
			this->Microwave->TabIndex = 4;
			this->Microwave->Text = L"Microwave";
			this->Microwave->UseVisualStyleBackColor = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->Veggies);
			this->panel2->Controls->Add(this->Reheat);
			this->panel2->Controls->Add(this->Cook);
			this->panel2->Controls->Add(this->Pizza);
			this->panel2->Controls->Add(this->Potato);
			this->panel2->Controls->Add(this->Popcorn);
			this->panel2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(80, 1);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(178, 73);
			this->panel2->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(110, 31);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 9);
			this->label4->TabIndex = 25;
			this->label4->Text = L"_____________";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(62, 32);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 9);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Sensor Cook";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(2, 31);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 9);
			this->label3->TabIndex = 24;
			this->label3->Text = L"______________";
			// 
			// Veggies
			// 
			this->Veggies->BackColor = System::Drawing::Color::Transparent;
			this->Veggies->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Veggies->Location = System::Drawing::Point(118, 49);
			this->Veggies->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Veggies->Name = L"Veggies";
			this->Veggies->Size = System::Drawing::Size(56, 17);
			this->Veggies->TabIndex = 5;
			this->Veggies->Text = L"Veggies";
			this->Veggies->UseVisualStyleBackColor = false;
			this->Veggies->Click += gcnew System::EventHandler(this, &MyForm::Veggies_Click);
			// 
			// Reheat
			// 
			this->Reheat->BackColor = System::Drawing::Color::Transparent;
			this->Reheat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reheat->Location = System::Drawing::Point(60, 49);
			this->Reheat->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Reheat->Name = L"Reheat";
			this->Reheat->Size = System::Drawing::Size(56, 17);
			this->Reheat->TabIndex = 4;
			this->Reheat->Text = L"Reheat";
			this->Reheat->UseVisualStyleBackColor = false;
			this->Reheat->Click += gcnew System::EventHandler(this, &MyForm::Reheat_Click);
			// 
			// Cook
			// 
			this->Cook->BackColor = System::Drawing::Color::Transparent;
			this->Cook->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cook->Location = System::Drawing::Point(2, 48);
			this->Cook->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Cook->Name = L"Cook";
			this->Cook->Size = System::Drawing::Size(56, 17);
			this->Cook->TabIndex = 3;
			this->Cook->Text = L"Cook";
			this->Cook->UseVisualStyleBackColor = false;
			this->Cook->Click += gcnew System::EventHandler(this, &MyForm::Cook_Click);
			// 
			// Pizza
			// 
			this->Pizza->BackColor = System::Drawing::Color::Transparent;
			this->Pizza->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pizza->Location = System::Drawing::Point(118, 9);
			this->Pizza->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Pizza->Name = L"Pizza";
			this->Pizza->Size = System::Drawing::Size(56, 17);
			this->Pizza->TabIndex = 2;
			this->Pizza->Text = L"Pizza";
			this->Pizza->UseVisualStyleBackColor = false;
			// 
			// Potato
			// 
			this->Potato->BackColor = System::Drawing::Color::Transparent;
			this->Potato->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Potato->Location = System::Drawing::Point(60, 9);
			this->Potato->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Potato->Name = L"Potato";
			this->Potato->Size = System::Drawing::Size(56, 17);
			this->Potato->TabIndex = 1;
			this->Potato->Text = L"Potato";
			this->Potato->UseVisualStyleBackColor = false;
			// 
			// Popcorn
			// 
			this->Popcorn->BackColor = System::Drawing::Color::Transparent;
			this->Popcorn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Popcorn->Location = System::Drawing::Point(2, 9);
			this->Popcorn->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Popcorn->Name = L"Popcorn";
			this->Popcorn->Size = System::Drawing::Size(56, 17);
			this->Popcorn->TabIndex = 0;
			this->Popcorn->Text = L"Popcorn";
			this->Popcorn->UseVisualStyleBackColor = false;
			this->Popcorn->Click += gcnew System::EventHandler(this, &MyForm::Popcorn_Click);
			// 
			// Vent
			// 
			this->Vent->BackColor = System::Drawing::Color::Transparent;
			this->Vent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Vent->Location = System::Drawing::Point(42, 51);
			this->Vent->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Vent->Name = L"Vent";
			this->Vent->Size = System::Drawing::Size(34, 17);
			this->Vent->TabIndex = 2;
			this->Vent->Text = L"Vent";
			this->Vent->UseVisualStyleBackColor = false;
			// 
			// Display
			// 
			this->Display->AutoSize = true;
			this->Display->BackColor = System::Drawing::Color::Gainsboro;
			this->Display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Display->Location = System::Drawing::Point(956, 271);
			this->Display->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(98, 26);
			this->Display->TabIndex = 24;
			this->Display->Text = L"Hey Hot Stuff!\nI\'m Mr. Waves ;)";
			// 
			// DisplayBox
			// 
			this->DisplayBox->Location = System::Drawing::Point(936, 200);
			this->DisplayBox->Margin = System::Windows::Forms::Padding(2);
			this->DisplayBox->Name = L"DisplayBox";
			this->DisplayBox->Size = System::Drawing::Size(140, 152);
			this->DisplayBox->TabIndex = 3;
			this->DisplayBox->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1254, 611);
			this->Controls->Add(this->Display);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->DisplayBox);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Turntable_Click(System::Object^ sender, System::EventArgs^ e) {
		static bool isOn = true;
		if (isOn == false)
		{
			Display->Text = "Turntable OFF";
		}
		else
		{
			Display->Text = "Turntable ON";
		}
		isOn = !isOn;
		//if else / turnery statements
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PowerGrillAuto_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Popcorn_Click(System::Object^ sender, System::EventArgs^ e) {
		Display->Text = "Popcorn";

	}

	private: System::Void Cook_Click(System::Object^ sender, System::EventArgs^ e) {
		Display->Text = "Hey good lookin'\nWhat cha got cookin'?";

	}
	private: System::Void Reheat_Click(System::Object^ sender, System::EventArgs^ e) {
		Display->Text = "Did you just come out\nof the oven?\nYou're HOT!";
	}
	private: System::Void KeepWarm_Click(System::Object^ sender, System::EventArgs^ e) {
		Display->Text = "Keeping Warm";
	}
	private: System::Void KitchenTimer_Click(System::Object^ sender, System::EventArgs^ e) {
		Display->Text = "T...";
	}
	private: System::Void Stop_Click(System::Object^ sender, System::EventArgs^ e) {
		Display->Text = "Oh do behave";
	}
	private: System::Void Veggies_Click(System::Object^ sender, System::EventArgs^ e) {
		Display->Text = "Veggin' out\nwith my cucumber out";
	}

	private: System::Void EcoMode_Click(System::Object^ sender, System::EventArgs^ e) {
		static bool isOn = true;
		if (isOn == false)
		{
			Display->Text = "EcoMode OFF";
		}
		else
		{
			Display->Text = "EcoMode ON";
		}
		isOn = !isOn;

	}

	private: System::Void Light_Click_1(System::Object^ sender, System::EventArgs^ e) {
		static int lightState = 0;
		switch (lightState) {
		case 0:
			Display->Text = "Light Off";
			break;
		case 1:
			Display->Text = "Light Low";
			break;
		case 2:
			Display->Text = "Light Medium";
			break;
		case 3:
			Display->Text = "Light High";
			break;
		}
		lightState++;
		if (lightState == 4) {
			lightState = 0;
		}
	}
	private: System::Void AutoDefrost_Click(System::Object^ sender, System::EventArgs^ e) {
		Display->Text = "Start Defrost";
	}
};
}
