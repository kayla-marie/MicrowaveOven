#pragma once
#include <chrono>
#include <iostream>
#include <time.h>
#include <string>
#include <stdlib.h>
#include <sstream>



namespace MicrowaveOven {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		int powerState;
		String^ KeyInput;
		int switch_power() {
			switch (powerState) {
			case 0:
				Display->Text = "Please press for power level";
				break;
			case 1:
				Display->Text = "Warm";
				break;
			case 2:
				Display->Text = "Low";
				break;
			case 3:
				Display->Text = "Defrost";
				break;
			case 4:
				Display->Text = "Medium-Low";
				break;
			case 5:
				Display->Text = "Medium";
				break;
			case 6:
				Display->Text = "Simmer";
				break;
			case 7:
				Display->Text = "Medium-High";
				break;
			case 8:
				Display->Text = "Reheat";
				break;
			case 9:
				Display->Text = "Saute";
				break;
			case 10:
				Display->Text = "High";
				break;
			}
			powerState++;
			if (powerState == 11) {
				powerState = 0;
			}
			return powerState;
		}

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
	private: System::Windows::Forms::Button^ Sound;
	private: System::Windows::Forms::Timer^ Timer;
	private: System::Windows::Forms::Label^ DisplayText2;

	private: System::Windows::Forms::Button^ Display2;
	private: System::Windows::Forms::Button^ PowerLevel;


	private: System::ComponentModel::IContainer^ components;









	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
			/// <summary>
			/// Required method for Designer support - do not modify
			/// the contents of this method with the code editor.
			/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Turntable = (gcnew System::Windows::Forms::Button());
			this->Light = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->PowerLevel = (gcnew System::Windows::Forms::Button());
			this->Sound = (gcnew System::Windows::Forms::Button());
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
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->DisplayText2 = (gcnew System::Windows::Forms::Label());
			this->Display2 = (gcnew System::Windows::Forms::Button());
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
			this->Turntable->Location = System::Drawing::Point(19, 12);
			this->Turntable->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Turntable->Name = L"Turntable";
			this->Turntable->Size = System::Drawing::Size(148, 58);
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
			this->Light->Location = System::Drawing::Point(19, 98);
			this->Light->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Light->Name = L"Light";
			this->Light->Size = System::Drawing::Size(76, 33);
			this->Light->TabIndex = 1;
			this->Light->Text = L"Light";
			this->Light->UseVisualStyleBackColor = false;
			this->Light->Click += gcnew System::EventHandler(this, &MyForm::Light_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->PowerLevel);
			this->panel1->Controls->Add(this->Sound);
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
			this->panel1->Location = System::Drawing::Point(172, 758);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(2048, 177);
			this->panel1->TabIndex = 2;
			// 
			// PowerLevel
			// 
			this->PowerLevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PowerLevel->Location = System::Drawing::Point(1014, 85);
			this->PowerLevel->Name = L"PowerLevel";
			this->PowerLevel->Size = System::Drawing::Size(120, 55);
			this->PowerLevel->TabIndex = 26;
			this->PowerLevel->Text = L"Power Level";
			this->PowerLevel->UseVisualStyleBackColor = true;
			this->PowerLevel->Click += gcnew System::EventHandler(this, &MyForm::PowerLevel_Click);
			// 
			// Sound
			// 
			this->Sound->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sound->Location = System::Drawing::Point(1014, 21);
			this->Sound->Name = L"Sound";
			this->Sound->Size = System::Drawing::Size(120, 49);
			this->Sound->TabIndex = 24;
			this->Sound->Text = L"Sound";
			this->Sound->UseVisualStyleBackColor = true;
			this->Sound->Click += gcnew System::EventHandler(this, &MyForm::Sound_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(1913, 65);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 20);
			this->label2->TabIndex = 23;
			this->label2->Text = L"3 sec";
			// 
			// StopClear
			// 
			this->StopClear->BackColor = System::Drawing::Color::Transparent;
			this->StopClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StopClear->Location = System::Drawing::Point(1893, 85);
			this->StopClear->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->StopClear->Name = L"StopClear";
			this->StopClear->Size = System::Drawing::Size(92, 60);
			this->StopClear->TabIndex = 22;
			this->StopClear->Text = L"STOP CLEAR";
			this->StopClear->UseVisualStyleBackColor = false;
			this->StopClear->Click += gcnew System::EventHandler(this, &MyForm::StopClear_Click);
			// 
			// Increase30Sec
			// 
			this->Increase30Sec->BackColor = System::Drawing::Color::Transparent;
			this->Increase30Sec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Increase30Sec->Location = System::Drawing::Point(1801, 88);
			this->Increase30Sec->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Increase30Sec->Name = L"Increase30Sec";
			this->Increase30Sec->Size = System::Drawing::Size(80, 56);
			this->Increase30Sec->TabIndex = 21;
			this->Increase30Sec->Text = L"+30 sec";
			this->Increase30Sec->UseVisualStyleBackColor = false;
			this->Increase30Sec->Click += gcnew System::EventHandler(this, &MyForm::Increase30Sec_Click);
			// 
			// Options
			// 
			this->Options->BackColor = System::Drawing::Color::Transparent;
			this->Options->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Options->Location = System::Drawing::Point(1681, 88);
			this->Options->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Options->Name = L"Options";
			this->Options->Size = System::Drawing::Size(102, 56);
			this->Options->TabIndex = 20;
			this->Options->Text = L"Options";
			this->Options->UseVisualStyleBackColor = false;
			this->Options->Click += gcnew System::EventHandler(this, &MyForm::Options_Click);
			// 
			// KeepWarm
			// 
			this->KeepWarm->BackColor = System::Drawing::Color::Transparent;
			this->KeepWarm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KeepWarm->Location = System::Drawing::Point(1585, 85);
			this->KeepWarm->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->KeepWarm->Name = L"KeepWarm";
			this->KeepWarm->Size = System::Drawing::Size(76, 60);
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
			this->Start->Location = System::Drawing::Point(1893, 21);
			this->Start->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(92, 50);
			this->Start->TabIndex = 17;
			this->Start->Text = L"START";
			this->Start->UseVisualStyleBackColor = false;
			this->Start->Click += gcnew System::EventHandler(this, &MyForm::Start_Click);
			// 
			// EcoMode
			// 
			this->EcoMode->BackColor = System::Drawing::Color::Transparent;
			this->EcoMode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EcoMode->Location = System::Drawing::Point(1801, 21);
			this->EcoMode->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->EcoMode->Name = L"EcoMode";
			this->EcoMode->Size = System::Drawing::Size(80, 60);
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
			this->KitchenTimer->Location = System::Drawing::Point(1681, 17);
			this->KitchenTimer->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->KitchenTimer->Name = L"KitchenTimer";
			this->KitchenTimer->Size = System::Drawing::Size(102, 62);
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
			this->OK->Location = System::Drawing::Point(1585, 21);
			this->OK->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(76, 56);
			this->OK->TabIndex = 14;
			this->OK->Text = L"OK";
			this->OK->UseVisualStyleBackColor = false;
			this->OK->Click += gcnew System::EventHandler(this, &MyForm::OK_Click);
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
			this->panel3->Location = System::Drawing::Point(1217, 21);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(356, 119);
			this->panel3->TabIndex = 13;
			// 
			// keyID0
			// 
			this->keyID0->BackColor = System::Drawing::Color::Transparent;
			this->keyID0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID0->Location = System::Drawing::Point(284, 65);
			this->keyID0->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->keyID0->Name = L"keyID0";
			this->keyID0->Size = System::Drawing::Size(60, 38);
			this->keyID0->TabIndex = 9;
			this->keyID0->Text = L"0";
			this->keyID0->UseVisualStyleBackColor = false;
			this->keyID0->Click += gcnew System::EventHandler(this, &MyForm::keyID0_Click);
			// 
			// keyID9
			// 
			this->keyID9->BackColor = System::Drawing::Color::Transparent;
			this->keyID9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID9->Location = System::Drawing::Point(216, 65);
			this->keyID9->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->keyID9->Name = L"keyID9";
			this->keyID9->Size = System::Drawing::Size(60, 38);
			this->keyID9->TabIndex = 8;
			this->keyID9->Text = L"9";
			this->keyID9->UseVisualStyleBackColor = false;
			this->keyID9->Click += gcnew System::EventHandler(this, &MyForm::keyID9_Click);
			// 
			// keyID8
			// 
			this->keyID8->BackColor = System::Drawing::Color::Transparent;
			this->keyID8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID8->Location = System::Drawing::Point(148, 65);
			this->keyID8->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->keyID8->Name = L"keyID8";
			this->keyID8->Size = System::Drawing::Size(60, 38);
			this->keyID8->TabIndex = 7;
			this->keyID8->Text = L"8";
			this->keyID8->UseVisualStyleBackColor = false;
			this->keyID8->Click += gcnew System::EventHandler(this, &MyForm::keyID8_Click);
			// 
			// keyID7
			// 
			this->keyID7->BackColor = System::Drawing::Color::Transparent;
			this->keyID7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID7->Location = System::Drawing::Point(72, 65);
			this->keyID7->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->keyID7->Name = L"keyID7";
			this->keyID7->Size = System::Drawing::Size(60, 38);
			this->keyID7->TabIndex = 6;
			this->keyID7->Text = L"7";
			this->keyID7->UseVisualStyleBackColor = false;
			this->keyID7->Click += gcnew System::EventHandler(this, &MyForm::keyID7_Click);
			// 
			// keyID6
			// 
			this->keyID6->BackColor = System::Drawing::Color::Transparent;
			this->keyID6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID6->Location = System::Drawing::Point(4, 65);
			this->keyID6->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->keyID6->Name = L"keyID6";
			this->keyID6->Size = System::Drawing::Size(60, 38);
			this->keyID6->TabIndex = 5;
			this->keyID6->Text = L"6";
			this->keyID6->UseVisualStyleBackColor = false;
			this->keyID6->Click += gcnew System::EventHandler(this, &MyForm::keyID6_Click);
			// 
			// keyID5
			// 
			this->keyID5->BackColor = System::Drawing::Color::Transparent;
			this->keyID5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID5->Location = System::Drawing::Point(284, 13);
			this->keyID5->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->keyID5->Name = L"keyID5";
			this->keyID5->Size = System::Drawing::Size(60, 38);
			this->keyID5->TabIndex = 4;
			this->keyID5->Text = L"5";
			this->keyID5->UseVisualStyleBackColor = false;
			this->keyID5->Click += gcnew System::EventHandler(this, &MyForm::keyID5_Click);
			// 
			// keyID4
			// 
			this->keyID4->BackColor = System::Drawing::Color::Transparent;
			this->keyID4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID4->Location = System::Drawing::Point(216, 12);
			this->keyID4->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->keyID4->Name = L"keyID4";
			this->keyID4->Size = System::Drawing::Size(60, 38);
			this->keyID4->TabIndex = 3;
			this->keyID4->Text = L"4";
			this->keyID4->UseVisualStyleBackColor = false;
			this->keyID4->Click += gcnew System::EventHandler(this, &MyForm::keyID4_Click);
			// 
			// keyID3
			// 
			this->keyID3->BackColor = System::Drawing::Color::Transparent;
			this->keyID3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID3->Location = System::Drawing::Point(148, 12);
			this->keyID3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->keyID3->Name = L"keyID3";
			this->keyID3->Size = System::Drawing::Size(60, 38);
			this->keyID3->TabIndex = 2;
			this->keyID3->Text = L"3";
			this->keyID3->UseVisualStyleBackColor = false;
			this->keyID3->Click += gcnew System::EventHandler(this, &MyForm::keyID3_Click);
			// 
			// keyID2
			// 
			this->keyID2->BackColor = System::Drawing::Color::Transparent;
			this->keyID2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID2->Location = System::Drawing::Point(72, 12);
			this->keyID2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->keyID2->Name = L"keyID2";
			this->keyID2->Size = System::Drawing::Size(60, 38);
			this->keyID2->TabIndex = 1;
			this->keyID2->Text = L"2";
			this->keyID2->UseVisualStyleBackColor = false;
			this->keyID2->Click += gcnew System::EventHandler(this, &MyForm::keyID2_Click);
			// 
			// keyID1
			// 
			this->keyID1->BackColor = System::Drawing::Color::Transparent;
			this->keyID1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyID1->Location = System::Drawing::Point(4, 12);
			this->keyID1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->keyID1->Name = L"keyID1";
			this->keyID1->Size = System::Drawing::Size(60, 38);
			this->keyID1->TabIndex = 0;
			this->keyID1->Text = L"1";
			this->keyID1->UseVisualStyleBackColor = false;
			this->keyID1->Click += gcnew System::EventHandler(this, &MyForm::keyID1_Click);
			// 
			// Decrease10Sec
			// 
			this->Decrease10Sec->BackColor = System::Drawing::Color::Transparent;
			this->Decrease10Sec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Decrease10Sec->Location = System::Drawing::Point(1165, 77);
			this->Decrease10Sec->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Decrease10Sec->Name = L"Decrease10Sec";
			this->Decrease10Sec->Size = System::Drawing::Size(44, 48);
			this->Decrease10Sec->TabIndex = 12;
			this->Decrease10Sec->Text = L"v";
			this->Decrease10Sec->UseVisualStyleBackColor = false;
			this->Decrease10Sec->Click += gcnew System::EventHandler(this, &MyForm::Decrease10Sec_Click);
			// 
			// Increase10Sec
			// 
			this->Increase10Sec->BackColor = System::Drawing::Color::Transparent;
			this->Increase10Sec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Increase10Sec->Location = System::Drawing::Point(1165, 31);
			this->Increase10Sec->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Increase10Sec->Name = L"Increase10Sec";
			this->Increase10Sec->Size = System::Drawing::Size(44, 48);
			this->Increase10Sec->TabIndex = 11;
			this->Increase10Sec->Text = L"^";
			this->Increase10Sec->UseVisualStyleBackColor = false;
			this->Increase10Sec->Click += gcnew System::EventHandler(this, &MyForm::Increase10Sec_Click);
			// 
			// PowerGrillAuto
			// 
			this->PowerGrillAuto->BackColor = System::Drawing::Color::Transparent;
			this->PowerGrillAuto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PowerGrillAuto->Location = System::Drawing::Point(867, 86);
			this->PowerGrillAuto->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->PowerGrillAuto->Name = L"PowerGrillAuto";
			this->PowerGrillAuto->Size = System::Drawing::Size(129, 56);
			this->PowerGrillAuto->TabIndex = 9;
			this->PowerGrillAuto->Text = L"Power\nGrillAuto";
			this->PowerGrillAuto->UseVisualStyleBackColor = false;
			this->PowerGrillAuto->Click += gcnew System::EventHandler(this, &MyForm::PowerGrillAuto_Click);
			// 
			// PoundDefrost
			// 
			this->PoundDefrost->BackColor = System::Drawing::Color::Transparent;
			this->PoundDefrost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PoundDefrost->Location = System::Drawing::Point(721, 85);
			this->PoundDefrost->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->PoundDefrost->Name = L"PoundDefrost";
			this->PoundDefrost->Size = System::Drawing::Size(118, 55);
			this->PoundDefrost->TabIndex = 8;
			this->PoundDefrost->Text = L"1 Pound \nDefrost";
			this->PoundDefrost->UseVisualStyleBackColor = false;
			this->PoundDefrost->Click += gcnew System::EventHandler(this, &MyForm::PoundDefrost_Click);
			// 
			// AutoDefrost
			// 
			this->AutoDefrost->BackColor = System::Drawing::Color::Transparent;
			this->AutoDefrost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AutoDefrost->Location = System::Drawing::Point(577, 85);
			this->AutoDefrost->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->AutoDefrost->Name = L"AutoDefrost";
			this->AutoDefrost->Size = System::Drawing::Size(132, 52);
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
			this->GrillMicrowave->Location = System::Drawing::Point(868, 21);
			this->GrillMicrowave->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->GrillMicrowave->Name = L"GrillMicrowave";
			this->GrillMicrowave->Size = System::Drawing::Size(128, 51);
			this->GrillMicrowave->TabIndex = 6;
			this->GrillMicrowave->Text = L"Grill + \nMicrowave";
			this->GrillMicrowave->UseVisualStyleBackColor = false;
			this->GrillMicrowave->Click += gcnew System::EventHandler(this, &MyForm::GrillMicrowave_Click);
			// 
			// PowerGrill
			// 
			this->PowerGrill->BackColor = System::Drawing::Color::Transparent;
			this->PowerGrill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PowerGrill->Location = System::Drawing::Point(721, 21);
			this->PowerGrill->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->PowerGrill->Name = L"PowerGrill";
			this->PowerGrill->Size = System::Drawing::Size(118, 38);
			this->PowerGrill->TabIndex = 5;
			this->PowerGrill->Text = L"PowerGrill";
			this->PowerGrill->UseVisualStyleBackColor = false;
			this->PowerGrill->Click += gcnew System::EventHandler(this, &MyForm::PowerGrill_Click);
			// 
			// Microwave
			// 
			this->Microwave->BackColor = System::Drawing::Color::Transparent;
			this->Microwave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Microwave->Location = System::Drawing::Point(577, 19);
			this->Microwave->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Microwave->Name = L"Microwave";
			this->Microwave->Size = System::Drawing::Size(132, 40);
			this->Microwave->TabIndex = 4;
			this->Microwave->Text = L"Microwave";
			this->Microwave->UseVisualStyleBackColor = false;
			this->Microwave->Click += gcnew System::EventHandler(this, &MyForm::Microwave_Click);
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
			this->panel2->Location = System::Drawing::Point(185, 2);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(356, 140);
			this->panel2->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(220, 60);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 20);
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
			this->label1->Location = System::Drawing::Point(124, 62);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Sensor Cook";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(4, 60);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 20);
			this->label3->TabIndex = 24;
			this->label3->Text = L"______________";
			// 
			// Veggies
			// 
			this->Veggies->BackColor = System::Drawing::Color::Transparent;
			this->Veggies->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Veggies->Location = System::Drawing::Point(236, 94);
			this->Veggies->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Veggies->Name = L"Veggies";
			this->Veggies->Size = System::Drawing::Size(112, 33);
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
			this->Reheat->Location = System::Drawing::Point(120, 94);
			this->Reheat->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Reheat->Name = L"Reheat";
			this->Reheat->Size = System::Drawing::Size(112, 33);
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
			this->Cook->Location = System::Drawing::Point(4, 92);
			this->Cook->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Cook->Name = L"Cook";
			this->Cook->Size = System::Drawing::Size(112, 33);
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
			this->Pizza->Location = System::Drawing::Point(236, 17);
			this->Pizza->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Pizza->Name = L"Pizza";
			this->Pizza->Size = System::Drawing::Size(112, 33);
			this->Pizza->TabIndex = 2;
			this->Pizza->Text = L"Pizza";
			this->Pizza->UseVisualStyleBackColor = false;
			this->Pizza->Click += gcnew System::EventHandler(this, &MyForm::Pizza_Click);
			// 
			// Potato
			// 
			this->Potato->BackColor = System::Drawing::Color::Transparent;
			this->Potato->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Potato->Location = System::Drawing::Point(120, 17);
			this->Potato->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Potato->Name = L"Potato";
			this->Potato->Size = System::Drawing::Size(112, 33);
			this->Potato->TabIndex = 1;
			this->Potato->Text = L"Potato";
			this->Potato->UseVisualStyleBackColor = false;
			this->Potato->Click += gcnew System::EventHandler(this, &MyForm::Potato_Click);
			// 
			// Popcorn
			// 
			this->Popcorn->BackColor = System::Drawing::Color::Transparent;
			this->Popcorn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Popcorn->Location = System::Drawing::Point(4, 17);
			this->Popcorn->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Popcorn->Name = L"Popcorn";
			this->Popcorn->Size = System::Drawing::Size(112, 33);
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
			this->Vent->Location = System::Drawing::Point(99, 98);
			this->Vent->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Vent->Name = L"Vent";
			this->Vent->Size = System::Drawing::Size(68, 33);
			this->Vent->TabIndex = 2;
			this->Vent->Text = L"Vent";
			this->Vent->UseVisualStyleBackColor = false;
			this->Vent->Click += gcnew System::EventHandler(this, &MyForm::Vent_Click);
			// 
			// Display
			// 
			this->Display->AutoSize = true;
			this->Display->BackColor = System::Drawing::Color::Gainsboro;
			this->Display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Display->Location = System::Drawing::Point(1927, 586);
			this->Display->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(160, 48);
			this->Display->TabIndex = 24;
			this->Display->Text = L"Hey Hot Stuff!\nI\'m Mr. Waves ;)";
			// 
			// DisplayBox
			// 
			this->DisplayBox->Location = System::Drawing::Point(1872, 451);
			this->DisplayBox->Margin = System::Windows::Forms::Padding(4);
			this->DisplayBox->Name = L"DisplayBox";
			this->DisplayBox->Size = System::Drawing::Size(280, 292);
			this->DisplayBox->TabIndex = 3;
			this->DisplayBox->UseVisualStyleBackColor = true;
			// 
			// DisplayText2
			// 
			this->DisplayText2->AutoSize = true;
			this->DisplayText2->BackColor = System::Drawing::Color::Gainsboro;
			this->DisplayText2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayText2->Location = System::Drawing::Point(1988, 362);
			this->DisplayText2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DisplayText2->Name = L"DisplayText2";
			this->DisplayText2->Size = System::Drawing::Size(54, 24);
			this->DisplayText2->TabIndex = 26;
			this->DisplayText2->Text = L"1234";
			// 
			// Display2
			// 
			this->Display2->Location = System::Drawing::Point(1872, 313);
			this->Display2->Margin = System::Windows::Forms::Padding(4);
			this->Display2->Name = L"Display2";
			this->Display2->Size = System::Drawing::Size(280, 121);
			this->Display2->TabIndex = 25;
			this->Display2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(2508, 1175);
			this->Controls->Add(this->DisplayText2);
			this->Controls->Add(this->Display2);
			this->Controls->Add(this->Display);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->DisplayBox);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


#pragma endregion

	private: System::String^ getPresentTime() {
		time_t tt;
		struct tm* st;
		string input;
		time(&tt);
		st = localtime(&tt);
		input = asctime(st);
		String^ output = gcnew String(input.data());
		return output;

		//Display2->Text = asctime(st);
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
	}
	private: System::Void Light_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void Vent_Click(System::Object^ sender, System::EventArgs^ e) {
		static int ventState = 0;
		switch (ventState) {
		case 0:
			Display->Text = "Fan Off";
			break;
		case 1:
			Display->Text = "Fan Low";
			break;
		case 2:
			Display->Text = "Fan Medium";
			break;
		case 3:
			Display->Text = "Fan High";
			break;
		}
		ventState++;
		if (ventState == 4) {
			ventState = 0;
		}
	}
	private: System::Void Popcorn_Click(System::Object^ sender, System::EventArgs^ e) {
		Display->Text = "Popping Popcorn";
	}
	private: System::Void Potato_Click(System::Object^ sender, System::EventArgs^ e) {
		Display->Text = "Baking Potato";
	}
	private: System::Void Pizza_Click(System::Object^ sender, System::EventArgs^ e) {
		Display->Text = "Making a Pizza";
	}
	private: System::Void Cook_Click(System::Object^ sender, System::EventArgs^ e) {
		Display->Text = "Hey good lookin'\nWhat cha got cookin'?";
	}
	private: System::Void Reheat_Click(System::Object^ sender, System::EventArgs^ e) {
		Display->Text = "Did you just come out\nof the oven?\nYou're HOT!";
	}
	private: System::Void Veggies_Click(System::Object^ sender, System::EventArgs^ e) {
		Display->Text = "Veggin' out\nwith my cucumber out";
	}
	private: System::Void Microwave_Click(System::Object^ sender, System::EventArgs^ e) {
		powerState = 6;
		Display->Text = "Oven set to Microwave. Power Level: Simmer ";
	}
	private: System::Void PowerGrill_Click(System::Object^ sender, System::EventArgs^ e) {
		powerState = 9;
		Display->Text = "Oven set to PowerGrill. Power Level: Saute";
	}
	private: System::Void GrillMicrowave_Click(System::Object^ sender, System::EventArgs^ e) {
		powerState = 10;
		Display->Text = "Oven set to Grill. Power Level: High";
	}
	private: System::Void AutoDefrost_Click(System::Object^ sender, System::EventArgs^ e) {
		powerState = 3;
		Display->Text = "Oven set to AutoDefrost.";
	}
	private: System::Void PoundDefrost_Click(System::Object^ sender, System::EventArgs^ e) {
		powerState = 3;
		Display->Text = "Oven set to Defrost. Power Level: Defrost";
	}
	private: System::Void PowerGrillAuto_Click(System::Object^ sender, System::EventArgs^ e) {
		powerState = 10;
		Display->Text = "Oven set to Auto PowerGrill. Power Level: High";
	}

	private: System::Void Sound_Click(System::Object^ sender, System::EventArgs^ e) {
		static int soundState = 0;
		switch (soundState) {
		case 0:
			Display->Text = "Sound Off";
			break;
		case 1:
			Display->Text = "Sound Low";
			break;
		case 2:
			Display->Text = "Sound High";
			break;
		}
		soundState++;
		if (soundState == 3) {
			soundState = 0;
		}
	}
	private: System::Void PowerLevel_Click(System::Object^ sender, System::EventArgs^ e) {
		switch_power();
	}
	private: System::Void Increase10Sec_Click(System::Object^ sender, System::EventArgs^ e) {
		/*int currentTime;
		string math;

		if (Display2->Text == asctime(st))
			Display2->Text = "10";
		else
		{
			KeyInput = Display->Text;
			currentTime = stoi(KeyInput);
			currentTime += 10;
			math = itoa((currentTime / 60)) + ':' + itoa((currentTime % 60));
			KeyInput = math;
			Display2->Text = KeyInput;
		}*/
	}
	private: System::Void Decrease10Sec_Click(System::Object^ sender, System::EventArgs^ e) {
		int currentTime;
		String^ math;
		string str;
		if (Display2->Text == getPresentTime())
			Display2->Text = "10";
		else
		{
			KeyInput = Display->Text;
			for (int i = 0; i < 5; ++i)
			{
				str += KeyInput[i];
			}
			stringstream x(str);
			x >> currentTime;
			//currentTime = int str;
			currentTime -= 10;
			str = to_string((currentTime / 60)) + to_string((currentTime % 60));
			KeyInput = gcnew String(str.c_str());
			Display2->Text = KeyInput;
		}
	}
	private: System::Void OK_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void KeepWarm_Click(System::Object^ sender, System::EventArgs^ e) {
		Display->Text = "Keeping Food \nWarm";
	}
	private: System::Void KitchenTimer_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Options_Click(System::Object^ sender, System::EventArgs^ e) {

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

	private: System::Void Increase30Sec_Click(System::Object^ sender, System::EventArgs^ e) {
		/*int currentTime;
		string math;

		if (Display2->Text == asctime(st))
			Display2->Text = "30";
		else
		{
			KeyInput = Display->Text;
			currentTime = stoi(KeyInput);
			currentTime += 30;
			math = itoa((currentTime / 60)) + ':' + itoa((currentTime % 60));
			KeyInput = math;
			Display2->Text = KeyInput;
		}*/
	}
	private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void StopClear_Click(System::Object^ sender, System::EventArgs^ e) {


	}
		   //private: System::Void Timer_Display(System::Object^ sender, System::EventArgs^ e) {
			/*   Second++;
			   if (Second == 60) {
				   Second = 0;
				   Minute++;
			   }
			   Sec = Convert::ToString(Second);
			   Min = Convert::ToString(Minute);*/
			   //Time_Display->Text = Min + ":" + Sec;

			  // //TODO:
			  // // Create an input using the numbers, if button clicked 
			  // // Need to allow timer to Pause and not stop using the stop button
			  // // Need to allow timer to reset when double pressed on stop
			   //We can either set the timer to what the user specifies and decrement, or we can increment starting and 0 and stopping at user input time (which may be easier)

	private: System::Void keyID1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (Display2->Text == asctime(st))
		{
			Display2->Text = "1";
		}*/
		//else
		//{
			/*KeyInput = Display->Text;
			KeyInput += "1";
			Display2->Text = KeyInput;*/
			//}*/
	}
	private: System::Void keyID2_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (Display2->Text == asctime(st))
			Display2->Text = "2";
		else
		{
			KeyInput = Display->Text;
			KeyInput += "2";
			Display2->Text = KeyInput;
		}*/
	}
	private: System::Void keyID3_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (Display2->Text == asctime(st))
			Display2->Text = "3";
		else
		{
			KeyInput = Display->Text;
			KeyInput += "3";
			Display2->Text = KeyInput;
		}*/
	}
	private: System::Void keyID4_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (Display2->Text == asctime(st))
			Display2->Text = "4";
		else
		{
			KeyInput = Display->Text;
			KeyInput += "4";
			Display2->Text = KeyInput;
		}*/
	}
	private: System::Void keyID5_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (Display2->Text == asctime(st))
			Display2->Text = "5";
		else
		{
			KeyInput = Display->Text;
			KeyInput += "5";
			Display2->Text = KeyInput;
		}*/
	}
	private: System::Void keyID6_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (Display2->Text == asctime(st))
			Display2->Text = "6";
		else
		{
			KeyInput = Display->Text;
			KeyInput += "6";
			Display2->Text = KeyInput;
		}*/
	}
	private: System::Void keyID7_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (Display2->Text == asctime(st))
			Display2->Text = "7";
		else
		{
			KeyInput = Display->Text;
			KeyInput += "7";
			Display2->Text = KeyInput;
		}*/
	}
	private: System::Void keyID8_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (Display2->Text == asctime(st))
			Display2->Text = "8";
		else
		{
			KeyInput = Display->Text;
			KeyInput += "8";
			Display2->Text = KeyInput;
		}*/
	}
	private: System::Void keyID9_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (Display2->Text == asctime(st))
			Display2->Text = "9";
		else
		{
			KeyInput = Display->Text;
			KeyInput += "9";
			Display2->Text = KeyInput;
		}*/
	}
	private: System::Void keyID0_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (Display2->Text == asctime(st))
			Display2->Text = asctime(st);
		else
		{
			KeyInput = Display->Text;
			KeyInput += "0";
			Display2->Text = KeyInput;
		}*/
	}
	};
}

