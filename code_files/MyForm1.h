#pragma once

#include "Spike.h"
#include <cstdlib>
#include <cmath>
#include <msclr\marshal_cppstd.h>
#include <string>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include "Network.h"
#include "NEURON.h"
#include "SYNAPSE.h"

#include "Parameter Configurations.h"
//#include <Engine.h>
#include "matrix.h"
#include <vector>
#include "LayerProperty.h"
#include "NetworkProperty.h"
#include "ZoomPic.h"
#include "Network.h"
#include "AXON.h"
#include "Event.h"
#include <vector>
#include "OutEvent.h"
#include <cmath>
#include <time.h>
#include "CORDINATE.h"
#include <algorithm>
#include "NEURON.h"
#include <iomanip>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "LAYER.h"


#pragma comment ( lib,"libmx.lib" )
#pragma comment ( lib,"libeng.lib" )
#pragma comment ( lib,"libmex.lib" )
#pragma comment ( lib,"libmat.lib" )
namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
		
		static int Second = 0;
		static int Minute = 0;
		String^Sec;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  TimeL;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Label^  label23;
	public: System::Windows::Forms::ListBox^  LayerList;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::TreeView^  FileManager;
	private: System::Windows::Forms::ToolStripPanel^  BottomToolStripPanel;
	private: System::Windows::Forms::ToolStripPanel^  TopToolStripPanel;
	private: System::Windows::Forms::ToolStripPanel^  RightToolStripPanel;
	private: System::Windows::Forms::ToolStripPanel^  LeftToolStripPanel;
	private: System::Windows::Forms::ToolStripContentPanel^  ContentPanel;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::CheckBox^  checkBox7;












			 String^Min;
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void Start_Net(int, vector<vector<double>>&, int, Network&,double);
		void update_M(vector<OutEvent>&, vector<OutEvent>&);
		void update_O(vector<OutEvent>&, Event, vector<int>, vector<double>,int);
		void MarshalString(String^s, string&os);
		void Connection_ADD(vector<int>*,vector<int>*,int,int);
		void LayerNeuron_ADD(vector<double>* , vector<double>* ,int,int ,double,double);
		void Connection_CHANGE(vector<int>*, vector<int>*, vector<double>*, int,int,int,vector<int>*);
		void Evaluate_Spike(int,Network);
		void Calculate_Neural_Activity(int,Network&,vector<int>*,int,vector<double>*,int);
		void Calculate_Plasticity_Weights(int ,int ,int,Network&,double,int);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;




	private:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;

	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Label^  label2;



	private: System::Windows::Forms::Label^  label5;













	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  simulatorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  parameterPropertiesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  advancedOptionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  runToolStripMenuItem;


	private: System::Windows::Forms::Label^  label9;




	private: System::Windows::Forms::RichTextBox^  ConnMap;
	private: System::Windows::Forms::ListBox^  EventLog;



	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ListBox^  InputList;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::ToolStripMenuItem^  networkToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  networkConfigurationsToolStripMenuItem;

























private: System::Windows::Forms::Panel^  panel6;
private: System::Windows::Forms::RadioButton^  radioButton8;
private: System::Windows::Forms::RadioButton^  radioButton9;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Panel^  panel5;


private: System::Windows::Forms::RadioButton^  radioButton7;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::RadioButton^  radioButton6;
private: System::Windows::Forms::Panel^  panel4;

private: System::Windows::Forms::RadioButton^  radioButton4;
private: System::Windows::Forms::RadioButton^  radioButton3;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::RadioButton^  radioButton2;
private: System::Windows::Forms::RadioButton^  radioButton1;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Timer^  timer1;










	private: System::ComponentModel::IContainer^  components;








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
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
				 System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Network"));
				 this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				 this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->simulatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->parameterPropertiesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->advancedOptionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->networkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->networkConfigurationsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->runToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
				 this->panel1 = (gcnew System::Windows::Forms::Panel());
				 this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
				 this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
				 this->button9 = (gcnew System::Windows::Forms::Button());
				 this->button8 = (gcnew System::Windows::Forms::Button());
				 this->textBox5 = (gcnew System::Windows::Forms::TextBox());
				 this->button5 = (gcnew System::Windows::Forms::Button());
				 this->panel6 = (gcnew System::Windows::Forms::Panel());
				 this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
				 this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
				 this->label16 = (gcnew System::Windows::Forms::Label());
				 this->label8 = (gcnew System::Windows::Forms::Label());
				 this->panel5 = (gcnew System::Windows::Forms::Panel());
				 this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
				 this->label15 = (gcnew System::Windows::Forms::Label());
				 this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
				 this->panel4 = (gcnew System::Windows::Forms::Panel());
				 this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
				 this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
				 this->label14 = (gcnew System::Windows::Forms::Label());
				 this->panel3 = (gcnew System::Windows::Forms::Panel());
				 this->label13 = (gcnew System::Windows::Forms::Label());
				 this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
				 this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
				 this->textBox8 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox7 = (gcnew System::Windows::Forms::TextBox());
				 this->label12 = (gcnew System::Windows::Forms::Label());
				 this->label11 = (gcnew System::Windows::Forms::Label());
				 this->label10 = (gcnew System::Windows::Forms::Label());
				 this->textBox6 = (gcnew System::Windows::Forms::TextBox());
				 this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				 this->panel2 = (gcnew System::Windows::Forms::Panel());
				 this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
				 this->button6 = (gcnew System::Windows::Forms::Button());
				 this->button4 = (gcnew System::Windows::Forms::Button());
				 this->button3 = (gcnew System::Windows::Forms::Button());
				 this->label7 = (gcnew System::Windows::Forms::Label());
				 this->InputList = (gcnew System::Windows::Forms::ListBox());
				 this->textBox4 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->textBox3 = (gcnew System::Windows::Forms::TextBox());
				 this->label6 = (gcnew System::Windows::Forms::Label());
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->label9 = (gcnew System::Windows::Forms::Label());
				 this->ConnMap = (gcnew System::Windows::Forms::RichTextBox());
				 this->EventLog = (gcnew System::Windows::Forms::ListBox());
				 this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				 this->button7 = (gcnew System::Windows::Forms::Button());
				 this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
				 this->panel7 = (gcnew System::Windows::Forms::Panel());
				 this->TimeL = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
				 this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->textBox9 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox10 = (gcnew System::Windows::Forms::TextBox());
				 this->label17 = (gcnew System::Windows::Forms::Label());
				 this->label18 = (gcnew System::Windows::Forms::Label());
				 this->label19 = (gcnew System::Windows::Forms::Label());
				 this->label20 = (gcnew System::Windows::Forms::Label());
				 this->button10 = (gcnew System::Windows::Forms::Button());
				 this->button11 = (gcnew System::Windows::Forms::Button());
				 this->button12 = (gcnew System::Windows::Forms::Button());
				 this->label21 = (gcnew System::Windows::Forms::Label());
				 this->textBox11 = (gcnew System::Windows::Forms::TextBox());
				 this->label22 = (gcnew System::Windows::Forms::Label());
				 this->textBox12 = (gcnew System::Windows::Forms::TextBox());
				 this->panel8 = (gcnew System::Windows::Forms::Panel());
				 this->button17 = (gcnew System::Windows::Forms::Button());
				 this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
				 this->label32 = (gcnew System::Windows::Forms::Label());
				 this->label31 = (gcnew System::Windows::Forms::Label());
				 this->textBox19 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox18 = (gcnew System::Windows::Forms::TextBox());
				 this->label28 = (gcnew System::Windows::Forms::Label());
				 this->textBox17 = (gcnew System::Windows::Forms::TextBox());
				 this->label26 = (gcnew System::Windows::Forms::Label());
				 this->textBox16 = (gcnew System::Windows::Forms::TextBox());
				 this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
				 this->button13 = (gcnew System::Windows::Forms::Button());
				 this->button14 = (gcnew System::Windows::Forms::Button());
				 this->button15 = (gcnew System::Windows::Forms::Button());
				 this->label23 = (gcnew System::Windows::Forms::Label());
				 this->LayerList = (gcnew System::Windows::Forms::ListBox());
				 this->textBox13 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox14 = (gcnew System::Windows::Forms::TextBox());
				 this->button16 = (gcnew System::Windows::Forms::Button());
				 this->label24 = (gcnew System::Windows::Forms::Label());
				 this->textBox15 = (gcnew System::Windows::Forms::TextBox());
				 this->label25 = (gcnew System::Windows::Forms::Label());
				 this->label27 = (gcnew System::Windows::Forms::Label());
				 this->label29 = (gcnew System::Windows::Forms::Label());
				 this->label30 = (gcnew System::Windows::Forms::Label());
				 this->FileManager = (gcnew System::Windows::Forms::TreeView());
				 this->BottomToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
				 this->TopToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
				 this->RightToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
				 this->LeftToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
				 this->ContentPanel = (gcnew System::Windows::Forms::ToolStripContentPanel());
				 this->menuStrip1->SuspendLayout();
				 this->panel1->SuspendLayout();
				 this->panel6->SuspendLayout();
				 this->panel5->SuspendLayout();
				 this->panel4->SuspendLayout();
				 this->panel3->SuspendLayout();
				 this->panel2->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				 this->panel7->SuspendLayout();
				 this->panel8->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // menuStrip1
				 // 
				 this->menuStrip1->BackColor = System::Drawing::SystemColors::ButtonFace;
				 this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
					 this->fileToolStripMenuItem,
						 this->editToolStripMenuItem, this->viewToolStripMenuItem, this->simulatorToolStripMenuItem, this->networkToolStripMenuItem, this->runToolStripMenuItem
				 });
				 this->menuStrip1->Location = System::Drawing::Point(0, 0);
				 this->menuStrip1->Name = L"menuStrip1";
				 this->menuStrip1->Size = System::Drawing::Size(1370, 24);
				 this->menuStrip1->TabIndex = 0;
				 this->menuStrip1->Text = L"menuStrip1";
				 // 
				 // fileToolStripMenuItem
				 // 
				 this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
				 this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
				 this->fileToolStripMenuItem->Text = L"File";
				 // 
				 // editToolStripMenuItem
				 // 
				 this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
				 this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
				 this->editToolStripMenuItem->Text = L"Edit";
				 // 
				 // viewToolStripMenuItem
				 // 
				 this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
				 this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
				 this->viewToolStripMenuItem->Text = L"View";
				 // 
				 // simulatorToolStripMenuItem
				 // 
				 this->simulatorToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					 this->parameterPropertiesToolStripMenuItem,
						 this->advancedOptionsToolStripMenuItem
				 });
				 this->simulatorToolStripMenuItem->Name = L"simulatorToolStripMenuItem";
				 this->simulatorToolStripMenuItem->Size = System::Drawing::Size(70, 20);
				 this->simulatorToolStripMenuItem->Text = L"Simulator";
				 // 
				 // parameterPropertiesToolStripMenuItem
				 // 
				 this->parameterPropertiesToolStripMenuItem->Name = L"parameterPropertiesToolStripMenuItem";
				 this->parameterPropertiesToolStripMenuItem->Size = System::Drawing::Size(184, 22);
				 this->parameterPropertiesToolStripMenuItem->Text = L"Parameter Properties";
				 this->parameterPropertiesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::parameterPropertiesToolStripMenuItem_Click);
				 // 
				 // advancedOptionsToolStripMenuItem
				 // 
				 this->advancedOptionsToolStripMenuItem->Name = L"advancedOptionsToolStripMenuItem";
				 this->advancedOptionsToolStripMenuItem->Size = System::Drawing::Size(184, 22);
				 this->advancedOptionsToolStripMenuItem->Text = L"Advanced Options";
				 // 
				 // networkToolStripMenuItem
				 // 
				 this->networkToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->networkConfigurationsToolStripMenuItem });
				 this->networkToolStripMenuItem->Name = L"networkToolStripMenuItem";
				 this->networkToolStripMenuItem->Size = System::Drawing::Size(64, 20);
				 this->networkToolStripMenuItem->Text = L"Network";
				 // 
				 // networkConfigurationsToolStripMenuItem
				 // 
				 this->networkConfigurationsToolStripMenuItem->Name = L"networkConfigurationsToolStripMenuItem";
				 this->networkConfigurationsToolStripMenuItem->Size = System::Drawing::Size(201, 22);
				 this->networkConfigurationsToolStripMenuItem->Text = L"Network Configurations";
				 // 
				 // runToolStripMenuItem
				 // 
				 this->runToolStripMenuItem->Name = L"runToolStripMenuItem";
				 this->runToolStripMenuItem->Size = System::Drawing::Size(40, 20);
				 this->runToolStripMenuItem->Text = L"Run";
				 // 
				 // button1
				 // 
				 this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->button1->Enabled = false;
				 this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->button1->Location = System::Drawing::Point(1259, 487);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(98, 56);
				 this->button1->TabIndex = 1;
				 this->button1->Text = L"Start";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
				 // 
				 // checkBox1
				 // 
				 this->checkBox1->AutoSize = true;
				 this->checkBox1->Location = System::Drawing::Point(3, 58);
				 this->checkBox1->Name = L"checkBox1";
				 this->checkBox1->Size = System::Drawing::Size(67, 17);
				 this->checkBox1->TabIndex = 2;
				 this->checkBox1->Text = L"Plasticity";
				 this->checkBox1->UseVisualStyleBackColor = true;
				 this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox1_CheckedChanged);
				 // 
				 // panel1
				 // 
				 this->panel1->BackColor = System::Drawing::SystemColors::GrayText;
				 this->panel1->Controls->Add(this->checkBox6);
				 this->panel1->Controls->Add(this->checkBox4);
				 this->panel1->Controls->Add(this->button9);
				 this->panel1->Controls->Add(this->button8);
				 this->panel1->Controls->Add(this->textBox5);
				 this->panel1->Controls->Add(this->button5);
				 this->panel1->Controls->Add(this->panel6);
				 this->panel1->Controls->Add(this->label8);
				 this->panel1->Controls->Add(this->panel5);
				 this->panel1->Controls->Add(this->panel4);
				 this->panel1->Controls->Add(this->panel3);
				 this->panel1->Controls->Add(this->textBox8);
				 this->panel1->Controls->Add(this->textBox7);
				 this->panel1->Controls->Add(this->label12);
				 this->panel1->Controls->Add(this->label11);
				 this->panel1->Controls->Add(this->label10);
				 this->panel1->Controls->Add(this->textBox6);
				 this->panel1->Controls->Add(this->checkBox2);
				 this->panel1->Controls->Add(this->label1);
				 this->panel1->Controls->Add(this->textBox1);
				 this->panel1->Controls->Add(this->checkBox1);
				 this->panel1->ForeColor = System::Drawing::SystemColors::Desktop;
				 this->panel1->Location = System::Drawing::Point(12, 47);
				 this->panel1->Name = L"panel1";
				 this->panel1->Size = System::Drawing::Size(329, 476);
				 this->panel1->TabIndex = 3;
				 // 
				 // checkBox6
				 // 
				 this->checkBox6->AutoSize = true;
				 this->checkBox6->Location = System::Drawing::Point(227, 115);
				 this->checkBox6->Name = L"checkBox6";
				 this->checkBox6->Size = System::Drawing::Size(90, 17);
				 this->checkBox6->TabIndex = 27;
				 this->checkBox6->Text = L"Custom Layer";
				 this->checkBox6->UseVisualStyleBackColor = true;
				 this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox6_CheckedChanged);
				 // 
				 // checkBox4
				 // 
				 this->checkBox4->AutoSize = true;
				 this->checkBox4->Location = System::Drawing::Point(3, 81);
				 this->checkBox4->Name = L"checkBox4";
				 this->checkBox4->Size = System::Drawing::Size(95, 17);
				 this->checkBox4->TabIndex = 26;
				 this->checkBox4->Text = L"Good Network";
				 this->checkBox4->UseVisualStyleBackColor = true;
				 this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox4_CheckedChanged);
				 // 
				 // button9
				 // 
				 this->button9->Location = System::Drawing::Point(222, 414);
				 this->button9->Name = L"button9";
				 this->button9->Size = System::Drawing::Size(75, 23);
				 this->button9->TabIndex = 25;
				 this->button9->Text = L"Save";
				 this->button9->UseVisualStyleBackColor = true;
				 this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
				 // 
				 // button8
				 // 
				 this->button8->Location = System::Drawing::Point(109, 414);
				 this->button8->Name = L"button8";
				 this->button8->Size = System::Drawing::Size(87, 23);
				 this->button8->TabIndex = 24;
				 this->button8->Text = L"Network File";
				 this->button8->UseVisualStyleBackColor = true;
				 this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
				 // 
				 // textBox5
				 // 
				 this->textBox5->Location = System::Drawing::Point(130, 112);
				 this->textBox5->Name = L"textBox5";
				 this->textBox5->Size = System::Drawing::Size(82, 20);
				 this->textBox5->TabIndex = 23;
				 this->textBox5->Text = L"1";
				 this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox5_TextChanged);
				 this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox5_KeyPress);
				 // 
				 // button5
				 // 
				 this->button5->Location = System::Drawing::Point(8, 414);
				 this->button5->Name = L"button5";
				 this->button5->Size = System::Drawing::Size(75, 23);
				 this->button5->TabIndex = 21;
				 this->button5->Text = L"Default";
				 this->button5->UseVisualStyleBackColor = true;
				 this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click_1);
				 // 
				 // panel6
				 // 
				 this->panel6->BackColor = System::Drawing::Color::Silver;
				 this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->panel6->Controls->Add(this->radioButton8);
				 this->panel6->Controls->Add(this->radioButton9);
				 this->panel6->Controls->Add(this->label16);
				 this->panel6->Location = System::Drawing::Point(167, 280);
				 this->panel6->Name = L"panel6";
				 this->panel6->Size = System::Drawing::Size(155, 128);
				 this->panel6->TabIndex = 20;
				 // 
				 // radioButton8
				 // 
				 this->radioButton8->AutoSize = true;
				 this->radioButton8->Checked = true;
				 this->radioButton8->Location = System::Drawing::Point(7, 32);
				 this->radioButton8->Name = L"radioButton8";
				 this->radioButton8->Size = System::Drawing::Size(39, 17);
				 this->radioButton8->TabIndex = 2;
				 this->radioButton8->TabStop = true;
				 this->radioButton8->Text = L"No";
				 this->radioButton8->UseVisualStyleBackColor = true;
				 this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton8_CheckedChanged);
				 // 
				 // radioButton9
				 // 
				 this->radioButton9->AutoSize = true;
				 this->radioButton9->Location = System::Drawing::Point(7, 68);
				 this->radioButton9->Name = L"radioButton9";
				 this->radioButton9->Size = System::Drawing::Size(43, 17);
				 this->radioButton9->TabIndex = 1;
				 this->radioButton9->Text = L"Yes";
				 this->radioButton9->UseVisualStyleBackColor = true;
				 // 
				 // label16
				 // 
				 this->label16->AutoSize = true;
				 this->label16->Location = System::Drawing::Point(4, 4);
				 this->label16->Name = L"label16";
				 this->label16->Size = System::Drawing::Size(79, 13);
				 this->label16->TabIndex = 0;
				 this->label16->Text = L"Intra-Feedback";
				 // 
				 // label8
				 // 
				 this->label8->AutoSize = true;
				 this->label8->Location = System::Drawing::Point(3, 116);
				 this->label8->Name = L"label8";
				 this->label8->Size = System::Drawing::Size(110, 13);
				 this->label8->TabIndex = 22;
				 this->label8->Text = L"Connectivity Probaility";
				 this->label8->Click += gcnew System::EventHandler(this, &MyForm1::label8_Click);
				 // 
				 // panel5
				 // 
				 this->panel5->BackColor = System::Drawing::Color::Silver;
				 this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->panel5->Controls->Add(this->radioButton7);
				 this->panel5->Controls->Add(this->label15);
				 this->panel5->Controls->Add(this->radioButton6);
				 this->panel5->Location = System::Drawing::Point(3, 280);
				 this->panel5->Name = L"panel5";
				 this->panel5->Size = System::Drawing::Size(158, 128);
				 this->panel5->TabIndex = 19;
				 // 
				 // radioButton7
				 // 
				 this->radioButton7->AutoSize = true;
				 this->radioButton7->Location = System::Drawing::Point(3, 69);
				 this->radioButton7->Name = L"radioButton7";
				 this->radioButton7->Size = System::Drawing::Size(43, 17);
				 this->radioButton7->TabIndex = 3;
				 this->radioButton7->Text = L"Yes";
				 this->radioButton7->UseVisualStyleBackColor = true;
				 // 
				 // label15
				 // 
				 this->label15->AutoSize = true;
				 this->label15->Location = System::Drawing::Point(4, 4);
				 this->label15->Name = L"label15";
				 this->label15->Size = System::Drawing::Size(79, 13);
				 this->label15->TabIndex = 2;
				 this->label15->Text = L"Inter-Feedback";
				 // 
				 // radioButton6
				 // 
				 this->radioButton6->AutoSize = true;
				 this->radioButton6->Checked = true;
				 this->radioButton6->Location = System::Drawing::Point(3, 32);
				 this->radioButton6->Name = L"radioButton6";
				 this->radioButton6->Size = System::Drawing::Size(42, 17);
				 this->radioButton6->TabIndex = 0;
				 this->radioButton6->TabStop = true;
				 this->radioButton6->Text = L"No ";
				 this->radioButton6->UseVisualStyleBackColor = true;
				 this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton6_CheckedChanged);
				 // 
				 // panel4
				 // 
				 this->panel4->BackColor = System::Drawing::Color::Silver;
				 this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->panel4->Controls->Add(this->radioButton4);
				 this->panel4->Controls->Add(this->radioButton3);
				 this->panel4->Controls->Add(this->label14);
				 this->panel4->Location = System::Drawing::Point(167, 143);
				 this->panel4->Name = L"panel4";
				 this->panel4->Size = System::Drawing::Size(155, 128);
				 this->panel4->TabIndex = 18;
				 // 
				 // radioButton4
				 // 
				 this->radioButton4->AutoSize = true;
				 this->radioButton4->Location = System::Drawing::Point(7, 32);
				 this->radioButton4->Name = L"radioButton4";
				 this->radioButton4->Size = System::Drawing::Size(63, 17);
				 this->radioButton4->TabIndex = 2;
				 this->radioButton4->Text = L"Irregular";
				 this->radioButton4->UseVisualStyleBackColor = true;
				 // 
				 // radioButton3
				 // 
				 this->radioButton3->AutoSize = true;
				 this->radioButton3->Checked = true;
				 this->radioButton3->Location = System::Drawing::Point(7, 67);
				 this->radioButton3->Name = L"radioButton3";
				 this->radioButton3->Size = System::Drawing::Size(62, 17);
				 this->radioButton3->TabIndex = 1;
				 this->radioButton3->TabStop = true;
				 this->radioButton3->Text = L"Regular";
				 this->radioButton3->UseVisualStyleBackColor = true;
				 this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton3_CheckedChanged);
				 // 
				 // label14
				 // 
				 this->label14->AutoSize = true;
				 this->label14->Location = System::Drawing::Point(4, 4);
				 this->label14->Name = L"label14";
				 this->label14->Size = System::Drawing::Size(33, 13);
				 this->label14->TabIndex = 0;
				 this->label14->Text = L"Layer";
				 // 
				 // panel3
				 // 
				 this->panel3->BackColor = System::Drawing::Color::Silver;
				 this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->panel3->Controls->Add(this->label13);
				 this->panel3->Controls->Add(this->radioButton2);
				 this->panel3->Controls->Add(this->radioButton1);
				 this->panel3->Location = System::Drawing::Point(3, 143);
				 this->panel3->Name = L"panel3";
				 this->panel3->Size = System::Drawing::Size(158, 128);
				 this->panel3->TabIndex = 17;
				 // 
				 // label13
				 // 
				 this->label13->AutoSize = true;
				 this->label13->Location = System::Drawing::Point(4, 4);
				 this->label13->Name = L"label13";
				 this->label13->Size = System::Drawing::Size(65, 13);
				 this->label13->TabIndex = 2;
				 this->label13->Text = L"Connectivity";
				 // 
				 // radioButton2
				 // 
				 this->radioButton2->AutoSize = true;
				 this->radioButton2->Checked = true;
				 this->radioButton2->Location = System::Drawing::Point(3, 32);
				 this->radioButton2->Name = L"radioButton2";
				 this->radioButton2->Size = System::Drawing::Size(118, 17);
				 this->radioButton2->TabIndex = 1;
				 this->radioButton2->TabStop = true;
				 this->radioButton2->Text = L"Constant Probability";
				 this->radioButton2->UseVisualStyleBackColor = true;
				 this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton2_CheckedChanged);
				 // 
				 // radioButton1
				 // 
				 this->radioButton1->AutoSize = true;
				 this->radioButton1->Location = System::Drawing::Point(1, 67);
				 this->radioButton1->Name = L"radioButton1";
				 this->radioButton1->Size = System::Drawing::Size(152, 17);
				 this->radioButton1->TabIndex = 0;
				 this->radioButton1->Text = L"Distance Related Probaility";
				 this->radioButton1->UseVisualStyleBackColor = true;
				 this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton1_CheckedChanged);
				 // 
				 // textBox8
				 // 
				 this->textBox8->Location = System::Drawing::Point(233, 77);
				 this->textBox8->Name = L"textBox8";
				 this->textBox8->Size = System::Drawing::Size(89, 20);
				 this->textBox8->TabIndex = 16;
				 this->textBox8->Text = L"0";
				 this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox8_TextChanged);
				 this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox1_KeyPress);
				 // 
				 // textBox7
				 // 
				 this->textBox7->Location = System::Drawing::Point(233, 54);
				 this->textBox7->Name = L"textBox7";
				 this->textBox7->Size = System::Drawing::Size(89, 20);
				 this->textBox7->TabIndex = 15;
				 this->textBox7->Text = L"0";
				 this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox7_TextChanged);
				 this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox1_KeyPress);
				 // 
				 // label12
				 // 
				 this->label12->AutoSize = true;
				 this->label12->Location = System::Drawing::Point(106, 79);
				 this->label12->Name = L"label12";
				 this->label12->Size = System::Drawing::Size(129, 13);
				 this->label12->TabIndex = 14;
				 this->label12->Text = L"Number of Output Neuron";
				 // 
				 // label11
				 // 
				 this->label11->AutoSize = true;
				 this->label11->Location = System::Drawing::Point(106, 56);
				 this->label11->Name = L"label11";
				 this->label11->Size = System::Drawing::Size(121, 13);
				 this->label11->TabIndex = 13;
				 this->label11->Text = L"Number of Input Neuron";
				 // 
				 // label10
				 // 
				 this->label10->AutoSize = true;
				 this->label10->Location = System::Drawing::Point(106, 34);
				 this->label10->Name = L"label10";
				 this->label10->Size = System::Drawing::Size(90, 13);
				 this->label10->TabIndex = 12;
				 this->label10->Text = L"Number of Layers";
				 // 
				 // textBox6
				 // 
				 this->textBox6->Location = System::Drawing::Point(233, 31);
				 this->textBox6->Name = L"textBox6";
				 this->textBox6->Size = System::Drawing::Size(89, 20);
				 this->textBox6->TabIndex = 11;
				 this->textBox6->Text = L"0";
				 this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox6_TextChanged);
				 this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox1_KeyPress);
				 // 
				 // checkBox2
				 // 
				 this->checkBox2->AutoSize = true;
				 this->checkBox2->Location = System::Drawing::Point(3, 35);
				 this->checkBox2->Name = L"checkBox2";
				 this->checkBox2->Size = System::Drawing::Size(79, 17);
				 this->checkBox2->TabIndex = 5;
				 this->checkBox2->Text = L"Myelination";
				 this->checkBox2->UseVisualStyleBackColor = true;
				 this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox2_CheckedChanged);
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(105, 12);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(121, 13);
				 this->label1->TabIndex = 4;
				 this->label1->Text = L"Total Number of Neuron";
				 // 
				 // textBox1
				 // 
				 this->textBox1->Location = System::Drawing::Point(233, 8);
				 this->textBox1->Name = L"textBox1";
				 this->textBox1->Size = System::Drawing::Size(89, 20);
				 this->textBox1->TabIndex = 3;
				 this->textBox1->Text = L"0";
				 this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
				 this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox1_KeyPress);
				 // 
				 // panel2
				 // 
				 this->panel2->BackColor = System::Drawing::SystemColors::GrayText;
				 this->panel2->Controls->Add(this->checkBox3);
				 this->panel2->Controls->Add(this->button6);
				 this->panel2->Controls->Add(this->button4);
				 this->panel2->Controls->Add(this->button3);
				 this->panel2->Controls->Add(this->label7);
				 this->panel2->Controls->Add(this->InputList);
				 this->panel2->Controls->Add(this->textBox4);
				 this->panel2->Controls->Add(this->textBox2);
				 this->panel2->Controls->Add(this->button2);
				 this->panel2->Controls->Add(this->label4);
				 this->panel2->Controls->Add(this->textBox3);
				 this->panel2->Controls->Add(this->label6);
				 this->panel2->Location = System::Drawing::Point(345, 47);
				 this->panel2->Name = L"panel2";
				 this->panel2->Size = System::Drawing::Size(307, 225);
				 this->panel2->TabIndex = 4;
				 // 
				 // checkBox3
				 // 
				 this->checkBox3->AutoSize = true;
				 this->checkBox3->Location = System::Drawing::Point(21, 8);
				 this->checkBox3->Name = L"checkBox3";
				 this->checkBox3->Size = System::Drawing::Size(95, 17);
				 this->checkBox3->TabIndex = 23;
				 this->checkBox3->Text = L"Input From File";
				 this->checkBox3->UseVisualStyleBackColor = true;
				 this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox3_CheckedChanged);
				 // 
				 // button6
				 // 
				 this->button6->Enabled = false;
				 this->button6->Location = System::Drawing::Point(181, 3);
				 this->button6->Name = L"button6";
				 this->button6->Size = System::Drawing::Size(56, 23);
				 this->button6->TabIndex = 22;
				 this->button6->Text = L"Open";
				 this->button6->UseVisualStyleBackColor = true;
				 this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click_1);
				 // 
				 // button4
				 // 
				 this->button4->Location = System::Drawing::Point(94, 194);
				 this->button4->Name = L"button4";
				 this->button4->Size = System::Drawing::Size(56, 23);
				 this->button4->TabIndex = 21;
				 this->button4->Text = L"Clear";
				 this->button4->UseVisualStyleBackColor = true;
				 this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
				 // 
				 // button3
				 // 
				 this->button3->Location = System::Drawing::Point(11, 194);
				 this->button3->Name = L"button3";
				 this->button3->Size = System::Drawing::Size(56, 23);
				 this->button3->TabIndex = 20;
				 this->button3->Text = L"Delete";
				 this->button3->UseVisualStyleBackColor = true;
				 this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
				 // 
				 // label7
				 // 
				 this->label7->AutoSize = true;
				 this->label7->Location = System::Drawing::Point(236, 172);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(43, 13);
				 this->label7->TabIndex = 18;
				 this->label7->Text = L"Voltage";
				 // 
				 // InputList
				 // 
				 this->InputList->FormattingEnabled = true;
				 this->InputList->Location = System::Drawing::Point(2, 35);
				 this->InputList->Name = L"InputList";
				 this->InputList->Size = System::Drawing::Size(302, 108);
				 this->InputList->TabIndex = 12;
				 // 
				 // textBox4
				 // 
				 this->textBox4->Location = System::Drawing::Point(239, 149);
				 this->textBox4->Name = L"textBox4";
				 this->textBox4->Size = System::Drawing::Size(32, 20);
				 this->textBox4->TabIndex = 19;
				 this->textBox4->Text = L"0";
				 this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox2_KeyPress);
				 // 
				 // textBox2
				 // 
				 this->textBox2->Location = System::Drawing::Point(94, 149);
				 this->textBox2->Name = L"textBox2";
				 this->textBox2->Size = System::Drawing::Size(32, 20);
				 this->textBox2->TabIndex = 13;
				 this->textBox2->Text = L"0";
				 this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox2_KeyPress);
				 // 
				 // button2
				 // 
				 this->button2->Location = System::Drawing::Point(12, 149);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(56, 23);
				 this->button2->TabIndex = 17;
				 this->button2->Text = L"Add";
				 this->button2->UseVisualStyleBackColor = true;
				 this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Location = System::Drawing::Point(91, 172);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(30, 13);
				 this->label4->TabIndex = 14;
				 this->label4->Text = L"Time";
				 // 
				 // textBox3
				 // 
				 this->textBox3->Location = System::Drawing::Point(164, 149);
				 this->textBox3->Name = L"textBox3";
				 this->textBox3->Size = System::Drawing::Size(32, 20);
				 this->textBox3->TabIndex = 16;
				 this->textBox3->Text = L"0";
				 this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox1_KeyPress);
				 // 
				 // label6
				 // 
				 this->label6->AutoSize = true;
				 this->label6->Location = System::Drawing::Point(146, 172);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(82, 13);
				 this->label6->TabIndex = 15;
				 this->label6->Text = L"Neuron Number";
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
				 this->pictureBox1->Location = System::Drawing::Point(1147, 650);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(223, 99);
				 this->pictureBox1->TabIndex = 5;
				 this->pictureBox1->TabStop = false;
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(12, 30);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(116, 13);
				 this->label2->TabIndex = 6;
				 this->label2->Text = L"Network Specifications";
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->Location = System::Drawing::Point(342, 30);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(100, 13);
				 this->label5->TabIndex = 8;
				 this->label5->Text = L"Input Specifications";
				 // 
				 // label9
				 // 
				 this->label9->AutoSize = true;
				 this->label9->Location = System::Drawing::Point(871, 30);
				 this->label9->Name = L"label9";
				 this->label9->Size = System::Drawing::Size(108, 13);
				 this->label9->TabIndex = 10;
				 this->label9->Text = L"Network Visualization";
				 // 
				 // ConnMap
				 // 
				 this->ConnMap->Location = System::Drawing::Point(933, 662);
				 this->ConnMap->Name = L"ConnMap";
				 this->ConnMap->Size = System::Drawing::Size(190, 72);
				 this->ConnMap->TabIndex = 15;
				 this->ConnMap->Text = L"ConnMap";
				 // 
				 // EventLog
				 // 
				 this->EventLog->FormattingEnabled = true;
				 this->EventLog->Location = System::Drawing::Point(12, 524);
				 this->EventLog->Name = L"EventLog";
				 this->EventLog->Size = System::Drawing::Size(567, 225);
				 this->EventLog->TabIndex = 16;
				 // 
				 // pictureBox2
				 // 
				 this->pictureBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
				 this->pictureBox2->Location = System::Drawing::Point(874, 47);
				 this->pictureBox2->Name = L"pictureBox2";
				 this->pictureBox2->Size = System::Drawing::Size(483, 300);
				 this->pictureBox2->TabIndex = 17;
				 this->pictureBox2->TabStop = false;
				 this->pictureBox2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::pictureBox2_MouseDown);
				 // 
				 // button7
				 // 
				 this->button7->BackColor = System::Drawing::SystemColors::ButtonShadow;
				 this->button7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->button7->Location = System::Drawing::Point(1121, 487);
				 this->button7->Name = L"button7";
				 this->button7->Size = System::Drawing::Size(119, 62);
				 this->button7->TabIndex = 18;
				 this->button7->Text = L"Error Check";
				 this->button7->UseVisualStyleBackColor = false;
				 this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
				 // 
				 // timer1
				 // 
				 this->timer1->Enabled = true;
				 this->timer1->Interval = 1000;
				 this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
				 // 
				 // panel7
				 // 
				 this->panel7->BackColor = System::Drawing::SystemColors::InfoText;
				 this->panel7->Controls->Add(this->TimeL);
				 this->panel7->Controls->Add(this->label3);
				 this->panel7->Location = System::Drawing::Point(1045, 357);
				 this->panel7->Name = L"panel7";
				 this->panel7->Size = System::Drawing::Size(313, 72);
				 this->panel7->TabIndex = 21;
				 // 
				 // TimeL
				 // 
				 this->TimeL->AutoSize = true;
				 this->TimeL->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->TimeL->ForeColor = System::Drawing::Color::Red;
				 this->TimeL->Location = System::Drawing::Point(181, 19);
				 this->TimeL->Name = L"TimeL";
				 this->TimeL->Size = System::Drawing::Size(32, 21);
				 this->TimeL->TabIndex = 22;
				 this->TimeL->Text = L"0 ";
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->BackColor = System::Drawing::SystemColors::ControlText;
				 this->label3->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->label3->ForeColor = System::Drawing::SystemColors::Info;
				 this->label3->Location = System::Drawing::Point(12, 20);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(168, 18);
				 this->label3->TabIndex = 21;
				 this->label3->Text = L"Simulation Time:";
				 // 
				 // textBox9
				 // 
				 this->textBox9->Location = System::Drawing::Point(1092, 570);
				 this->textBox9->Name = L"textBox9";
				 this->textBox9->Size = System::Drawing::Size(100, 20);
				 this->textBox9->TabIndex = 22;
				 this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox9_TextChanged);
				 this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox1_KeyPress);
				 // 
				 // textBox10
				 // 
				 this->textBox10->Location = System::Drawing::Point(1092, 610);
				 this->textBox10->Name = L"textBox10";
				 this->textBox10->Size = System::Drawing::Size(100, 20);
				 this->textBox10->TabIndex = 23;
				 this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox10_TextChanged);
				 this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox5_KeyPress);
				 // 
				 // label17
				 // 
				 this->label17->AutoSize = true;
				 this->label17->Location = System::Drawing::Point(1092, 551);
				 this->label17->Name = L"label17";
				 this->label17->Size = System::Drawing::Size(102, 13);
				 this->label17->TabIndex = 24;
				 this->label17->Text = L"Number of Iterations";
				 // 
				 // label18
				 // 
				 this->label18->AutoSize = true;
				 this->label18->Location = System::Drawing::Point(1107, 595);
				 this->label18->Name = L"label18";
				 this->label18->Size = System::Drawing::Size(30, 13);
				 this->label18->TabIndex = 25;
				 this->label18->Text = L"Time";
				 // 
				 // label19
				 // 
				 this->label19->AutoSize = true;
				 this->label19->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->label19->ForeColor = System::Drawing::Color::Red;
				 this->label19->Location = System::Drawing::Point(1286, 447);
				 this->label19->Name = L"label19";
				 this->label19->Size = System::Drawing::Size(32, 21);
				 this->label19->TabIndex = 26;
				 this->label19->Text = L"0 ";
				 // 
				 // label20
				 // 
				 this->label20->AutoSize = true;
				 this->label20->BackColor = System::Drawing::SystemColors::ButtonShadow;
				 this->label20->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->label20->ForeColor = System::Drawing::SystemColors::Info;
				 this->label20->Location = System::Drawing::Point(1043, 448);
				 this->label20->Name = L"label20";
				 this->label20->Size = System::Drawing::Size(248, 18);
				 this->label20->TabIndex = 27;
				 this->label20->Text = L"Number of AP Generation:";
				 // 
				 // button10
				 // 
				 this->button10->Location = System::Drawing::Point(584, 660);
				 this->button10->Name = L"button10";
				 this->button10->Size = System::Drawing::Size(105, 23);
				 this->button10->TabIndex = 28;
				 this->button10->Text = L"Save Event Log";
				 this->button10->UseVisualStyleBackColor = true;
				 this->button10->Click += gcnew System::EventHandler(this, &MyForm1::button10_Click);
				 // 
				 // button11
				 // 
				 this->button11->Location = System::Drawing::Point(585, 631);
				 this->button11->Name = L"button11";
				 this->button11->Size = System::Drawing::Size(75, 23);
				 this->button11->TabIndex = 29;
				 this->button11->Text = L"Matlab";
				 this->button11->UseVisualStyleBackColor = true;
				 this->button11->Click += gcnew System::EventHandler(this, &MyForm1::button11_Click);
				 // 
				 // button12
				 // 
				 this->button12->Location = System::Drawing::Point(603, 567);
				 this->button12->Name = L"button12";
				 this->button12->Size = System::Drawing::Size(75, 23);
				 this->button12->TabIndex = 30;
				 this->button12->Text = L"Visual";
				 this->button12->UseVisualStyleBackColor = true;
				 this->button12->Click += gcnew System::EventHandler(this, &MyForm1::button12_Click);
				 // 
				 // label21
				 // 
				 this->label21->AutoSize = true;
				 this->label21->Location = System::Drawing::Point(1222, 551);
				 this->label21->Name = L"label21";
				 this->label21->Size = System::Drawing::Size(38, 13);
				 this->label21->TabIndex = 32;
				 this->label21->Text = L"X-Limit";
				 // 
				 // textBox11
				 // 
				 this->textBox11->Location = System::Drawing::Point(1222, 570);
				 this->textBox11->Name = L"textBox11";
				 this->textBox11->Size = System::Drawing::Size(100, 20);
				 this->textBox11->TabIndex = 31;
				 this->textBox11->Text = L"1";
				 this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox11_TextChanged);
				 this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox11_KeyPress);
				 // 
				 // label22
				 // 
				 this->label22->AutoSize = true;
				 this->label22->Location = System::Drawing::Point(1223, 594);
				 this->label22->Name = L"label22";
				 this->label22->Size = System::Drawing::Size(38, 13);
				 this->label22->TabIndex = 34;
				 this->label22->Text = L"Y-Limit";
				 // 
				 // textBox12
				 // 
				 this->textBox12->Location = System::Drawing::Point(1222, 610);
				 this->textBox12->Name = L"textBox12";
				 this->textBox12->Size = System::Drawing::Size(100, 20);
				 this->textBox12->TabIndex = 33;
				 this->textBox12->Text = L"1";
				 this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox12_TextChanged);
				 this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox12_KeyPress);
				 // 
				 // panel8
				 // 
				 this->panel8->BackColor = System::Drawing::SystemColors::GrayText;
				 this->panel8->Controls->Add(this->button17);
				 this->panel8->Controls->Add(this->checkBox7);
				 this->panel8->Controls->Add(this->label32);
				 this->panel8->Controls->Add(this->label31);
				 this->panel8->Controls->Add(this->textBox19);
				 this->panel8->Controls->Add(this->textBox18);
				 this->panel8->Controls->Add(this->label28);
				 this->panel8->Controls->Add(this->textBox17);
				 this->panel8->Controls->Add(this->label26);
				 this->panel8->Controls->Add(this->textBox16);
				 this->panel8->Controls->Add(this->checkBox5);
				 this->panel8->Controls->Add(this->button13);
				 this->panel8->Controls->Add(this->button14);
				 this->panel8->Controls->Add(this->button15);
				 this->panel8->Controls->Add(this->label23);
				 this->panel8->Controls->Add(this->LayerList);
				 this->panel8->Controls->Add(this->textBox13);
				 this->panel8->Controls->Add(this->textBox14);
				 this->panel8->Controls->Add(this->button16);
				 this->panel8->Controls->Add(this->label24);
				 this->panel8->Controls->Add(this->textBox15);
				 this->panel8->Controls->Add(this->label25);
				 this->panel8->Enabled = false;
				 this->panel8->Location = System::Drawing::Point(345, 293);
				 this->panel8->Name = L"panel8";
				 this->panel8->Size = System::Drawing::Size(523, 230);
				 this->panel8->TabIndex = 35;
				 // 
				 // button17
				 // 
				 this->button17->Enabled = false;
				 this->button17->Location = System::Drawing::Point(403, 7);
				 this->button17->Name = L"button17";
				 this->button17->Size = System::Drawing::Size(56, 23);
				 this->button17->TabIndex = 33;
				 this->button17->Text = L"Open";
				 this->button17->UseVisualStyleBackColor = true;
				 this->button17->Click += gcnew System::EventHandler(this, &MyForm1::button17_Click);
				 // 
				 // checkBox7
				 // 
				 this->checkBox7->AutoSize = true;
				 this->checkBox7->Location = System::Drawing::Point(275, 11);
				 this->checkBox7->Name = L"checkBox7";
				 this->checkBox7->Size = System::Drawing::Size(110, 17);
				 this->checkBox7->TabIndex = 32;
				 this->checkBox7->Text = L"Custom Locations";
				 this->checkBox7->UseVisualStyleBackColor = true;
				 this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox7_CheckedChanged);
				 // 
				 // label32
				 // 
				 this->label32->AutoSize = true;
				 this->label32->Location = System::Drawing::Point(345, 172);
				 this->label32->Name = L"label32";
				 this->label32->Size = System::Drawing::Size(20, 13);
				 this->label32->TabIndex = 31;
				 this->label32->Text = L"Z2";
				 // 
				 // label31
				 // 
				 this->label31->AutoSize = true;
				 this->label31->Location = System::Drawing::Point(166, 173);
				 this->label31->Name = L"label31";
				 this->label31->Size = System::Drawing::Size(20, 13);
				 this->label31->TabIndex = 30;
				 this->label31->Text = L"Z1";
				 // 
				 // textBox19
				 // 
				 this->textBox19->Location = System::Drawing::Point(333, 149);
				 this->textBox19->Name = L"textBox19";
				 this->textBox19->Size = System::Drawing::Size(32, 20);
				 this->textBox19->TabIndex = 29;
				 this->textBox19->Text = L"0";
				 this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBox19->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox19_TextChanged);
				 this->textBox19->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox19_KeyPress);
				 // 
				 // textBox18
				 // 
				 this->textBox18->Location = System::Drawing::Point(157, 151);
				 this->textBox18->Name = L"textBox18";
				 this->textBox18->Size = System::Drawing::Size(32, 20);
				 this->textBox18->TabIndex = 28;
				 this->textBox18->Text = L"0";
				 this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBox18->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox18_TextChanged);
				 this->textBox18->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox18_KeyPress);
				 // 
				 // label28
				 // 
				 this->label28->AutoSize = true;
				 this->label28->Location = System::Drawing::Point(424, 172);
				 this->label28->Name = L"label28";
				 this->label28->Size = System::Drawing::Size(82, 13);
				 this->label28->TabIndex = 27;
				 this->label28->Text = L"Neuron Number";
				 // 
				 // textBox17
				 // 
				 this->textBox17->Location = System::Drawing::Point(447, 149);
				 this->textBox17->Name = L"textBox17";
				 this->textBox17->Size = System::Drawing::Size(32, 20);
				 this->textBox17->TabIndex = 26;
				 this->textBox17->Text = L"0";
				 this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBox17->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox17_KeyPress);
				 // 
				 // label26
				 // 
				 this->label26->AutoSize = true;
				 this->label26->Location = System::Drawing::Point(308, 172);
				 this->label26->Name = L"label26";
				 this->label26->Size = System::Drawing::Size(20, 13);
				 this->label26->TabIndex = 25;
				 this->label26->Text = L"Y2";
				 // 
				 // textBox16
				 // 
				 this->textBox16->Location = System::Drawing::Point(296, 150);
				 this->textBox16->Name = L"textBox16";
				 this->textBox16->Size = System::Drawing::Size(32, 20);
				 this->textBox16->TabIndex = 24;
				 this->textBox16->Text = L"0";
				 this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBox16->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox16_TextChanged);
				 this->textBox16->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox16_KeyPress);
				 // 
				 // checkBox5
				 // 
				 this->checkBox5->AutoSize = true;
				 this->checkBox5->Location = System::Drawing::Point(21, 11);
				 this->checkBox5->Name = L"checkBox5";
				 this->checkBox5->Size = System::Drawing::Size(95, 17);
				 this->checkBox5->TabIndex = 23;
				 this->checkBox5->Text = L"Input From File";
				 this->checkBox5->UseVisualStyleBackColor = true;
				 this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox5_CheckedChanged);
				 // 
				 // button13
				 // 
				 this->button13->Enabled = false;
				 this->button13->Location = System::Drawing::Point(181, 7);
				 this->button13->Name = L"button13";
				 this->button13->Size = System::Drawing::Size(56, 23);
				 this->button13->TabIndex = 22;
				 this->button13->Text = L"Open";
				 this->button13->UseVisualStyleBackColor = true;
				 this->button13->Click += gcnew System::EventHandler(this, &MyForm1::button13_Click);
				 // 
				 // button14
				 // 
				 this->button14->Location = System::Drawing::Point(106, 194);
				 this->button14->Name = L"button14";
				 this->button14->Size = System::Drawing::Size(56, 23);
				 this->button14->TabIndex = 21;
				 this->button14->Text = L"Clear";
				 this->button14->UseVisualStyleBackColor = true;
				 this->button14->Click += gcnew System::EventHandler(this, &MyForm1::button14_Click);
				 // 
				 // button15
				 // 
				 this->button15->Location = System::Drawing::Point(11, 194);
				 this->button15->Name = L"button15";
				 this->button15->Size = System::Drawing::Size(56, 23);
				 this->button15->TabIndex = 20;
				 this->button15->Text = L"Delete";
				 this->button15->UseVisualStyleBackColor = true;
				 this->button15->Click += gcnew System::EventHandler(this, &MyForm1::button15_Click);
				 // 
				 // label23
				 // 
				 this->label23->AutoSize = true;
				 this->label23->Location = System::Drawing::Point(267, 172);
				 this->label23->Name = L"label23";
				 this->label23->Size = System::Drawing::Size(20, 13);
				 this->label23->TabIndex = 18;
				 this->label23->Text = L"X2";
				 // 
				 // LayerList
				 // 
				 this->LayerList->FormattingEnabled = true;
				 this->LayerList->Location = System::Drawing::Point(2, 35);
				 this->LayerList->Name = L"LayerList";
				 this->LayerList->Size = System::Drawing::Size(518, 108);
				 this->LayerList->TabIndex = 12;
				 // 
				 // textBox13
				 // 
				 this->textBox13->Location = System::Drawing::Point(259, 150);
				 this->textBox13->Name = L"textBox13";
				 this->textBox13->Size = System::Drawing::Size(32, 20);
				 this->textBox13->TabIndex = 19;
				 this->textBox13->Text = L"0";
				 this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBox13->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox13_TextChanged);
				 this->textBox13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox13_KeyPress);
				 // 
				 // textBox14
				 // 
				 this->textBox14->Location = System::Drawing::Point(82, 151);
				 this->textBox14->Name = L"textBox14";
				 this->textBox14->Size = System::Drawing::Size(32, 20);
				 this->textBox14->TabIndex = 13;
				 this->textBox14->Text = L"0";
				 this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBox14->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox14_TextChanged);
				 this->textBox14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox14_KeyPress);
				 // 
				 // button16
				 // 
				 this->button16->Location = System::Drawing::Point(12, 149);
				 this->button16->Name = L"button16";
				 this->button16->Size = System::Drawing::Size(56, 23);
				 this->button16->TabIndex = 17;
				 this->button16->Text = L"Add";
				 this->button16->UseVisualStyleBackColor = true;
				 this->button16->Click += gcnew System::EventHandler(this, &MyForm1::button16_Click);
				 // 
				 // label24
				 // 
				 this->label24->AutoSize = true;
				 this->label24->Location = System::Drawing::Point(89, 172);
				 this->label24->Name = L"label24";
				 this->label24->Size = System::Drawing::Size(20, 13);
				 this->label24->TabIndex = 14;
				 this->label24->Text = L"X1";
				 // 
				 // textBox15
				 // 
				 this->textBox15->Location = System::Drawing::Point(119, 151);
				 this->textBox15->Name = L"textBox15";
				 this->textBox15->Size = System::Drawing::Size(32, 20);
				 this->textBox15->TabIndex = 16;
				 this->textBox15->Text = L"0";
				 this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBox15->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox15_TextChanged);
				 this->textBox15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox15_KeyPress);
				 // 
				 // label25
				 // 
				 this->label25->AutoSize = true;
				 this->label25->Location = System::Drawing::Point(126, 172);
				 this->label25->Name = L"label25";
				 this->label25->Size = System::Drawing::Size(20, 13);
				 this->label25->TabIndex = 15;
				 this->label25->Text = L"Y1";
				 // 
				 // label27
				 // 
				 this->label27->AutoSize = true;
				 this->label27->Location = System::Drawing::Point(345, 277);
				 this->label27->Name = L"label27";
				 this->label27->Size = System::Drawing::Size(102, 13);
				 this->label27->TabIndex = 36;
				 this->label27->Text = L"Layer Specifications";
				 // 
				 // label29
				 // 
				 this->label29->AutoSize = true;
				 this->label29->Location = System::Drawing::Point(1328, 573);
				 this->label29->Name = L"label29";
				 this->label29->Size = System::Drawing::Size(15, 13);
				 this->label29->TabIndex = 37;
				 this->label29->Text = L"m";
				 // 
				 // label30
				 // 
				 this->label30->AutoSize = true;
				 this->label30->Location = System::Drawing::Point(1328, 613);
				 this->label30->Name = L"label30";
				 this->label30->Size = System::Drawing::Size(15, 13);
				 this->label30->TabIndex = 38;
				 this->label30->Text = L"m";
				 // 
				 // FileManager
				 // 
				 this->FileManager->Location = System::Drawing::Point(874, 357);
				 this->FileManager->Name = L"FileManager";
				 treeNode1->Name = L"Node0";
				 treeNode1->Text = L"Network";
				 this->FileManager->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode1 });
				 this->FileManager->Size = System::Drawing::Size(153, 256);
				 this->FileManager->TabIndex = 39;
				 this->FileManager->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm1::FileManager_AfterSelect);
				 this->FileManager->NodeMouseClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &MyForm1::FileManager_NodeMouseClick);
				 this->FileManager->NodeMouseDoubleClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &MyForm1::FileManager_NodeMouseDoubleClick);
				 // 
				 // BottomToolStripPanel
				 // 
				 this->BottomToolStripPanel->Location = System::Drawing::Point(0, 0);
				 this->BottomToolStripPanel->Name = L"BottomToolStripPanel";
				 this->BottomToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
				 this->BottomToolStripPanel->RowMargin = System::Windows::Forms::Padding(3, 0, 0, 0);
				 this->BottomToolStripPanel->Size = System::Drawing::Size(0, 0);
				 // 
				 // TopToolStripPanel
				 // 
				 this->TopToolStripPanel->Location = System::Drawing::Point(0, 0);
				 this->TopToolStripPanel->Name = L"TopToolStripPanel";
				 this->TopToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
				 this->TopToolStripPanel->RowMargin = System::Windows::Forms::Padding(3, 0, 0, 0);
				 this->TopToolStripPanel->Size = System::Drawing::Size(0, 0);
				 // 
				 // RightToolStripPanel
				 // 
				 this->RightToolStripPanel->Location = System::Drawing::Point(0, 0);
				 this->RightToolStripPanel->Name = L"RightToolStripPanel";
				 this->RightToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
				 this->RightToolStripPanel->RowMargin = System::Windows::Forms::Padding(3, 0, 0, 0);
				 this->RightToolStripPanel->Size = System::Drawing::Size(0, 0);
				 // 
				 // LeftToolStripPanel
				 // 
				 this->LeftToolStripPanel->Location = System::Drawing::Point(0, 0);
				 this->LeftToolStripPanel->Name = L"LeftToolStripPanel";
				 this->LeftToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
				 this->LeftToolStripPanel->RowMargin = System::Windows::Forms::Padding(3, 0, 0, 0);
				 this->LeftToolStripPanel->Size = System::Drawing::Size(0, 0);
				 // 
				 // ContentPanel
				 // 
				 this->ContentPanel->Size = System::Drawing::Size(150, 175);
				 // 
				 // MyForm1
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::SystemColors::ButtonShadow;
				 this->ClientSize = System::Drawing::Size(1370, 749);
				 this->Controls->Add(this->FileManager);
				 this->Controls->Add(this->label30);
				 this->Controls->Add(this->label29);
				 this->Controls->Add(this->label27);
				 this->Controls->Add(this->panel8);
				 this->Controls->Add(this->label22);
				 this->Controls->Add(this->textBox12);
				 this->Controls->Add(this->label21);
				 this->Controls->Add(this->textBox11);
				 this->Controls->Add(this->button12);
				 this->Controls->Add(this->button11);
				 this->Controls->Add(this->button10);
				 this->Controls->Add(this->label20);
				 this->Controls->Add(this->label19);
				 this->Controls->Add(this->label18);
				 this->Controls->Add(this->label17);
				 this->Controls->Add(this->textBox10);
				 this->Controls->Add(this->textBox9);
				 this->Controls->Add(this->panel7);
				 this->Controls->Add(this->button7);
				 this->Controls->Add(this->pictureBox2);
				 this->Controls->Add(this->EventLog);
				 this->Controls->Add(this->ConnMap);
				 this->Controls->Add(this->label9);
				 this->Controls->Add(this->label5);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->pictureBox1);
				 this->Controls->Add(this->panel2);
				 this->Controls->Add(this->panel1);
				 this->Controls->Add(this->button1);
				 this->Controls->Add(this->menuStrip1);
				 this->MainMenuStrip = this->menuStrip1;
				 this->Name = L"MyForm1";
				 this->Text = L"N4SIM";
				 this->menuStrip1->ResumeLayout(false);
				 this->menuStrip1->PerformLayout();
				 this->panel1->ResumeLayout(false);
				 this->panel1->PerformLayout();
				 this->panel6->ResumeLayout(false);
				 this->panel6->PerformLayout();
				 this->panel5->ResumeLayout(false);
				 this->panel5->PerformLayout();
				 this->panel4->ResumeLayout(false);
				 this->panel4->PerformLayout();
				 this->panel3->ResumeLayout(false);
				 this->panel3->PerformLayout();
				 this->panel2->ResumeLayout(false);
				 this->panel2->PerformLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				 this->panel7->ResumeLayout(false);
				 this->panel7->PerformLayout();
				 this->panel8->ResumeLayout(false);
				 this->panel8->PerformLayout();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
			 vector<int>* ConnTemp;
			 vector<double>* LayTemp;
			 vector<double>* LayTemp2;
			 vector<int>* LayIN;
			 vector<Spike>* Neuron_Spike;
			 vector<int>* amp_val;
			 vector<int>* glut_val;
			 ZoomPic^objPic = gcnew ZoomPic();
			 LayerProperty^obj1 = gcnew LayerProperty();
			 NetworkProperty^objNet= gcnew NetworkProperty();
			 ParameterConfigurations^param1 = gcnew ParameterConfigurations();

			 vector<double>* NerCORD;
			 vector<double>* NerCORDTemp;
			 vector<double>* Spike_array;
			 vector<int>* ConnectionMap;
			 vector<int>* LayerConnection;
			 int Loc = 0;
			 int Ref=0;
			 int setIntra=3;
			 int setInter=3;
			 int setType=3;
			 int setReg=3;
			 Network* NA;
			double delta_t=0.1;
			double ind_positive = 0.2;
			double ind_negative = -0.1;
			double tao_positive = 12.2;
			double tao_negative = 13.6;
			float Xlimit=0.0001; // m
			float Ylimit=0.0001; // m
			float Zlimit=0.0001; // m
			 int Iter=1;
			 int Cust=0;
			 double SimTime=2;
			 int TotalN=0;
			 bool Plasticity=false;
			 bool Myelination;
			 int TypeN=0;
			 int LayerN=0;
			 bool GNet=0;
			 int iNeuron;
			 int oNeuron;
			 int yy = 0;

			 double Prob=1;
			 bool regular=1;
			 bool interfeed=0;
			 bool intrafeed=0;
			 Network *New_N;
			double PlasticityThresholdTime = 0.001;

#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		double sumClock = 0;
		int ccc = 0;
		int cx = 0;
		Network N;

		vector<vector<double>> LayEL;
		
		int k = InputList->Items->Count;
		LayTemp = new vector<double>[LayerN];
		ConnTemp = new vector<int>[TotalN];
		for (int sf = 0; sf < TotalN; sf++)
		{
			ConnTemp[sf].resize(TotalN);
		}
		for (int sf = 0; sf < LayerN; sf++) {
			LayTemp[sf].resize(7);
		}

		if (Cust == 1)
		{

			for (int hby = 0; hby < LayerN;hby++) {
				std::string str10;
				std::string str11;
				std::string str12;
				std::string str13;
				double x1;
				double y1;
				double x2;
				double y2;
				double z1;
				double z2;
				int NX;
				std::string str1;
				std::string str2;
				std::string str3;
				std::string str4;
				std::string str5;
				std::string str6;
				std::string str7;
				std::string str8;
				std::string str9;


				LayerList->SetSelected(hby, true);
				String^strr = LayerList->SelectedItems[0]->ToString();
				String^ strk = strr->Replace(",", ".");

				std::string str;
				MarshalString(strk, str);


				std::stringstream ss(str);
				ss >> str1 >> str2 >> x1 >> str3 >> y1 >> str12 >> z1>> str8 >> str13 >> x2 >> str3 >> y2 >> str5>> z2 >>str9>> str6 >> str7 >> NX;
				LayTemp[hby][0] = x1;
				LayTemp[hby][1] = y1;
				LayTemp[hby][2] = x2;
				LayTemp[hby][3] = y2;
				LayTemp[hby][4] = NX;
				LayTemp[hby][5] = z1;
				LayTemp[hby][6] = z2;

				LayEL.push_back(vector<double>());
				LayEL[hby].push_back(x1);
				LayEL[hby].push_back(y1);
				LayEL[hby].push_back(x2);
				LayEL[hby].push_back(y2);
				LayEL[hby].push_back(NX);
				LayEL[hby].push_back(z1);
				LayEL[hby].push_back(z2);




			}

		}


		String^ p = "";

		for (int i = 0; i < LayerN; i++) {
			for (int j = 0; j < 5; j++)
			{
				p += System::Convert::ToString(LayTemp[i][j]) + " ";
			}
			p += "\n";
		}
		ConnMap->Text = p;
		EventLog->Items->Clear();
		
			String^ mess = Convert::ToString(TotalN);
			String^ mess2 = Convert::ToString(Plasticity);
			String^ mess3 = Convert::ToString(TypeN);
			String^ o = "";
			String^ r = "";
			String^ strr = "";
			String^ temp = "";
			String^temp2 = "";

			int l = 0;
			int m = 0;
			int len = 53;
			double Volt;
			double Time;
			int NerNum;
			for (int a = 0; a < k; a++)
			{
				std::string str10;
				std::string str11;
				std::string str12;
				std::string str13;

				std::string str1;
				std::string str2;
				std::string str3;

				InputList->SetSelected(a, true);
				strr = InputList->SelectedItems[0]->ToString();
				String^ strk = strr->Replace(",", ".");

				std::string str;
				MarshalString(strk, str);


				std::stringstream ss(str);
				ss >> Volt >> str1 >> str10 >> Time >> str2 >> str11 >> str12 >> str13 >> NerNum >> str3;

				if (NerNum > TotalN)
				{
					MessageBox::Show("Neuron Number Should be less than Total Number of Neuron");
					InputList->Items->RemoveAt(a);
					k = k - 1;
					a = a - 1;
				}
				else {
					temp += Convert::ToString(Volt) + " ";
					temp += Convert::ToString(Time) + " ";
					temp += Convert::ToString(NerNum) + "\n";

					OutEvent Ov(Time, NerNum, 0);
					Ov.Inp_check = 1;
					N.MAIN_LOG.push_back(Ov);
				}

			}
			
			
		for (int y = 0; y < Iter; y++) {
			EventLog->Items->Clear();
			clock_t tStart = clock();
			if (Cust == 0)
				N.Initialize_Network(TotalN, iNeuron, oNeuron, TypeN, LayerN, regular, interfeed, intrafeed, Prob, GNet, Xlimit, Ylimit, Cust, LayEL,Zlimit);
			else if (Cust == 1)
				N.Init_Custom(TotalN,LayerN,ConnectionMap,NerCORD);
				cout << "Initialized " << endl;

				New_N = &N;

				for (int rr = 0; rr < TotalN; rr++)
				{
					for (int cc = 0; cc < TotalN; cc++)
					{
						ConnTemp[rr][cc] = N.ConnMAP[rr][cc];
						cout << N.ConnMAP[rr][cc] << " ";
					}
					cout << endl;
				}
				for (int i = 0; i < TotalN; i++) {


					o += System::Convert::ToString(N.CordVEC[i].X_axis + " " + N.CordVEC[i].Y_axis);

					o += "\n";
				}
				ConnMap->Text = o;

				Pen^obj2 = gcnew Pen(Color::Black, 1);
				Pen^obj3 = gcnew Pen(Color::Red, 1);
				Graphics^g = pictureBox2->CreateGraphics();
				g->Clear(Color::White);

				for (int i = 0; i < TotalN; i++) {

					String^ab = Convert::ToString(i + 1);
					System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 16);
					PointF drawP = PointF((pictureBox2->Size.Width)*N.CordVEC[i].X_axis/Xlimit , (pictureBox2->Size.Height)*N.CordVEC[i].Y_axis/Ylimit);
					SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
					g->DrawEllipse(obj2, (pictureBox2->Size.Width)*N.CordVEC[i].X_axis/Xlimit, (pictureBox2->Size.Height)*N.CordVEC[i].Y_axis/Ylimit, 5, 5);
					g->DrawString(ab, drawFont, drawBrush, drawP);

				}
				Pen^ blackPen = gcnew Pen(Color::Black, 3);
				if (Cust == 1) {
					for (int i = 0; i < LayerN; i++) {
						// Create pen.

						// Create rectangle.

						// Draw rectangle to screen.
						float x = (pictureBox2->Size.Width)*LayTemp[i][0];
						
						float y = (pictureBox2->Size.Height)* LayTemp[i][1];
						float width = (pictureBox2->Size.Width)*(LayTemp[i][2] - LayTemp[i][0]) ;
						float height = (pictureBox2->Size.Height)*( LayTemp[i][3] - LayTemp[i][1]) ;
						g->DrawRectangle(blackPen, x, y, width, height);
					}
				}
				for (int i = 0; i < TotalN; i++) {
					for (int j = 0; j < TotalN; j++)
					{
						if (N.ConnMAP[i][j] == 1)
						{
							float x1 = (pictureBox2->Size.Width)*N.CordVEC[i].X_axis;
							x1 = x1 / Xlimit;
							float y1 = (pictureBox2->Size.Height)*N.CordVEC[i].Y_axis ;
							y1 = y1/ Ylimit;
							float x2 = (pictureBox2->Size.Width)*N.CordVEC[j].X_axis ;
							x2 = x2 / Xlimit;
							float y2 = (pictureBox2->Size.Height)*N.CordVEC[j].Y_axis ;
							y2 = y2 / Ylimit;
							g->DrawLine(obj3, x1, y1, x2, y2);

						}
					}
				}




			
			



				for (int i = 0; i < TotalN; i++) {
					for (int j = 0; j < TotalN; j++)
					{
						p += System::Convert::ToString(N.TsMAP[i][j]) + " ";
					}
					p += "\n";
				}


				vector<double> Out_Spike;
			
		//	N.Start_Network(TotalN, N.LUT1, N.Row);
				Start_Net(TotalN, New_N->LUT1, New_N->Row, *New_N, SimTime);

				for (int i = 0; i < TotalN; i++)
				{
					
						cout << New_N->CordVEC[i].X_axis<<" "<< New_N->CordVEC[i].Y_axis <<" " <<New_N->CordVEC[i].Z_axis <<endl;
					
				}

				int select = TotalN-1;


				for (int i = 0; i < New_N->NerVEC[select].Spike_vector.size(); i++) {
					Out_Spike.push_back(New_N->NerVEC[select].Spike_vector[i].Spike_time);
				}
				cout << "Kral Yilmaz" << "\n";
				int nht = 0;
				for (int i = 0; i < New_N->NerVEC[select].Spike_vector.size(); i++) {
					cout << Out_Spike[i] << " ";
					nht++;
				}
				
				StreamWriter^ outfile2 = gcnew StreamWriter("NewPage20VoltOut.txt");
				for (int j = 0; j < nht; j++)
				{
					
						String^ ss = Convert::ToString(Out_Spike[j]);
						ss = ss->Replace(",", ".");
						outfile2->Write(ss + "  ");
					
				}
				outfile2->Close();
				cout << "AMPA weights Neuron 4  " <<endl;
			/*	for (int i = 0; i<New_N->NerVEC[3].synapse.size(); i++) {
					cout << " Synapse between 4 and "<<New_N->NerVEC[3].synapse[i].out_ID <<" ";

					for (int j=0; j< New_N->NerVEC[3].synapse[i].getPointer()->size();j++){
						cout << New_N->NerVEC[3].synapse[i].getPointer()->at(j) << " ";
					}
					cout << endl;
				}*/
				cout << "asa " << New_N->NerVEC[0].Spike_num << endl;
				//Start_Net(TotalN, N.LUT1, N.Row, N,SimTime);

				//  THIS PART IS FOR DETERMINING INPUT-OUTPUT OF CONTRIBUTION CALCULATION
				cout << "GELDIK" << endl;
			//	int o1 = New_N->NerVEC[5].Spike_num;
			//	int o2 = New_N->NerVEC[6].Spike_num;
			//	int outsize = o1 + o2;
				int insize = 4;
			//	cout << "Outsiz= " << outsize << endl;
				vector<int>* Inp_Spike;
				//Inp_Spike = new vector<int>[insize];
				//Out_Spike = new vector<double>[outsize];

				/*for (int sf = 0; sf < outsize; sf++) {
					Out_Spike[sf].resize(3);

				}
				for (int sf = 0; sf < o1; sf++) {
					Out_Spike[sf][0] = 6;
					Out_Spike[sf][1] = sf + 1;

				}
				for (int sf = o1; sf < outsize; sf++) {
					Out_Spike[sf][0] = 7;
					Out_Spike[sf][1] = sf + 1 - o1;

				}*/
			/*	for (int sf = 0; sf < insize; sf++) {
					Inp_Spike[sf].resize(2);
				}
				Inp_Spike[0][0] = 1;
				Inp_Spike[0][1] = 1;
				Inp_Spike[1][0] = 1;
				Inp_Spike[1][1] = 2;
				Inp_Spike[2][0] = 2;
				Inp_Spike[2][1] = 1;
				Inp_Spike[3][0] = 2;
				Inp_Spike[3][1] = 3;*/
				
				// END OF INITALIZATION OF INPUT-OUTPUT

				// CONTRUBITON CALCULATION FUNCTION
				// Calculate_Neural_Activity(TotalN, *New_N, Inp_Spike, insize, Out_Spike, outsize);
				// END CONTRIBUTION CALCULATION

				int kc = EventLog->Items->Count;
				vector<vector<double>> DatM;
				for (int a = 0; a < kc; a++) {
					std::string str10;
					std::string str11;
					std::string str12;
					std::string str13;
					int ID;
					double atime;
					std::string str1;
					std::string str2;
					std::string str3;

					EventLog->SetSelected(a, true);
					strr = EventLog->SelectedItems[0]->ToString();
					String^ strk = strr->Replace(",", ".");

					std::string str;
					MarshalString(strk, str);


					std::stringstream ss(str);
					ss >> str1 >> str2 >> ID >> str10 >> str11 >> str12 >> str13 >> atime >> str3;
					DatM.push_back(vector<double>());
					DatM[a].push_back(ID);
					DatM[a].push_back( atime);


				}
				
				for (int n = 0; n < kc; n++)
				{
					
					r += Convert::ToString(DatM[n][0])+" "+ Convert::ToString(DatM[n][1]);
					r += "\n";

				}
				//this->ConnMap->Text = r;
				sumClock = sumClock + ((double)(clock() - tStart) / CLOCKS_PER_SEC);
				cx = cx + EventLog->Items->Count;
				
			}
		
	//	String^tim = Convert::ToString((double)(clock() - tStart) / CLOCKS_PER_SEC);
		String^timx = Convert::ToString(sumClock / Iter);
		timx = timx->Replace(",", ".");
		timx += " s";
		TimeL->Text = timx;
		ccc = EventLog->Items->Count;
		label19->Text = Convert::ToString(cx/Iter);
		button1->Enabled = false;
		
		
	}

	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		Plasticity = true;


	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}


	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		String^ s = textBox1->Text;
		Int32 number;
		bool b = Int32::TryParse(s, number);
		if (textBox1->TextLength != 0)
		TotalN = Convert::ToInt32(textBox1->Text);



	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		Myelination = true;
	}

	private: System::Void listBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		double time = Convert::ToDouble(textBox2->Text);
		int id = Convert::ToInt32(textBox3->Text);
		double V = Convert::ToDouble(textBox4->Text);
		String^V2 = " mV at ";
		String^T2 = " s to Neuron number ";
		String^N2 = " is received";
		if (time >= 0 && id > 0) {

			// Create Input Event
			this->InputList->Items->Add(this->textBox4->Text + V2 + this->textBox2->Text + T2 + this->textBox3->Text + N2);
		}
		else if (id > 0)
			MessageBox::Show("Please Enter a Nonnegative Time");
		else if (time >= 0)
			MessageBox::Show("Please Enter a Positive Neuron Number");

		

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->InputList->Items->Remove(this->InputList->SelectedItem);

	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->InputList->Items->Clear();
	}

	
	private: System::Void parameterPropertiesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		param1->ShowDialog();


	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	





	}
	

	private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}
	private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

		if (e->KeyChar == '.')
		{
			if (this->textBox2->Text->Contains(".") && !this->textBox2->SelectedText->Contains("."))
				e->Handled = true;
		}
		// Accept only digits "." and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}
	
	



private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ fd1 = gcnew OpenFileDialog();
	fd1->Filter = "Text File Only|*.txt";
	String^fname = "";
	if (fd1->ShowDialog().Equals(System::Windows::Forms::DialogResult::OK))
	{
		fname = fd1->FileName;
		MessageBox::Show(fname);
	}
	string fID;
	MarshalString(fname, fID);
	ifstream fileIN(fID);

	

	int Col = 0;
	int Row = 0;
	int Exit = 0;
	std::string lineA;
	double x;
	int cntrl = 0;
	vector<vector<double>> INP;
	String^V2 = " mV at ";
	String^T2 = " ms to Neuron number ";
	String^N2 = " is received";
	while (fileIN.good()) {
		cntrl = 1;
		while (getline(fileIN, lineA)) {
			INP.push_back(vector<double>());
			istringstream streamA(lineA);
			Col = 0;
			while (streamA >> x) {
				INP[Row].push_back(x);
				Col++;
			}
			Row++;
			if (Col > 3 || Col<3)
			{
				Exit = 1;
			}
		}
	}
	String^ op = "";
	if(Exit==0 && cntrl==1)
	for (int i = 0; i < Row; i++) {
			InputList->Items->Add(INP[i][2] +V2+ System::Convert::ToString(INP[i][0])+T2+ System::Convert::ToString(INP[i][1])+N2);
			
		
	
	}
	else if(Exit>0)
	{
		MessageBox::Show("The format of the text file is not suitable. Please check the input text types");
	}
}

private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
	if (checkBox3->Checked == true)
	{
		button6->Enabled = true;
	}
	else
	{
		button6->Enabled = false;
	}
		
}

private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox6->Text;
	Int32 number;
	bool b = Int32::TryParse(s, number);
	if (textBox6->TextLength != 0)
	LayerN = Convert::ToInt32(textBox6->Text);
}



private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {
	textBox6->Text = Convert::ToString(3);



	radioButton2->Checked=true;
	radioButton3->Checked = true;
	radioButton6->Checked = true;
	radioButton8->Checked = true;


}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox7->Text;
	Int32 number;
	bool b = Int32::TryParse(s, number);
	if (textBox7->TextLength != 0)
	iNeuron = Convert::ToInt32(textBox7->Text);
}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox8->Text;
	Int32 number;
	bool b = Int32::TryParse(s, number);
	if (textBox8->TextLength != 0)
	oNeuron = Convert::ToInt32(textBox8->Text);
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	int k = InputList->Items->Count;
	
		if (k < 1)
		{
			MessageBox::Show("Please give at least 1 Input");


		}
		else if (TotalN < 2) {
			MessageBox::Show("Total Number of Neuron should be at least 2");
		}
		else if (LayerN < 2)
		{
			MessageBox::Show("There should be at least 2 Layers");
		}
		else if (iNeuron < 1) {

			MessageBox::Show("There should be at least 1 Input Neuron");
		}
		else if (oNeuron < 1) {

			MessageBox::Show("There should be at least 1 Output Neuron");
		}
		else if (TotalN < iNeuron + oNeuron) {
			MessageBox::Show("Total Number of Neuron should be higher than the sum of Input and Output Neurons");

		}
		else if (TotalN <  LayerN ) {
			MessageBox::Show("Too many Layers for given design");
		}
		else if (Xlimit <= 0)
		{
			MessageBox::Show("Please enter positive X-limit");

		}
		else if (Ylimit <= 0)
		{
			MessageBox::Show("Please enter positive Y-limit");

		}
		else {

			MessageBox::Show("You can succesfully start the network");
			button1->Enabled = true;
		}
	
	
		
	
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (radioButton1->Checked == true)
		textBox5->Enabled = false;
	else
		textBox5->Enabled = true;
}
private: System::Void textBox5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == '.')
	{
		if (this->textBox5->Text->Contains(".") && !this->textBox5->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits "." and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;

	
	
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox5->Text;
	Double number;
	String^ sss= s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox5->TextLength != 0 && textBox5->Text!=".") {
		Prob = Convert::ToDouble(sss);
		if (Prob > 1)
		{
			textBox5->Text=Convert::ToString(1);
		}
	}
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (radioButton2->Checked == true)
		TypeN = 0;
	else
		TypeN = 1;

}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (radioButton3->Checked == true)
		regular = 1;
	else
		regular = 0;
}
private: System::Void radioButton8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (radioButton8->Checked == true)
		intrafeed = 0;
	else
		intrafeed = 1;
}
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (radioButton6->Checked == true)
		interfeed = 0;
	else
		interfeed = 1;
}

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

	Second++;
	if (Second == 60) {
		Second = 0;
		Minute++;
	}
	if (Second < 10)
	{
		Sec = Convert::ToString(0) + Convert::ToString(Second);
		Min = Convert::ToString(Minute);
	}
	else
	{
		Sec =  Convert::ToString(Second);
		Min = Convert::ToString(Minute);

	}
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->Title = "Open a Network File";
	openFileDialog1->Filter = "Text File Only|*Network.txt";
	openFileDialog1->ShowDialog();
	
	String^fname = "";
	string fID;
	if (openFileDialog1->FileName != "")
	{
		fname = openFileDialog1->FileName;
	}
	MarshalString(fname, fID);
	ifstream fileIN(fID);


	int Control = 0;
	int Col = 0;
	int Row2 = 0;
	std::string lineA;
	string x;
	vector<vector<string>> INP = {};

	while (fileIN.good()) {
		Control = 1;
		while (getline(fileIN, lineA)) {
			INP.push_back(vector<string>());
			istringstream streamA(lineA);
			Col = 0;
			while (streamA >> x) {
				INP[Row2].push_back(x);
				Col++;
			}
			Row2++;
		}
	}
	String^ IP;
	
	Int32 number;
	if (Control == 1) {
		if (!INP[0].empty() && !INP[1].empty() && !INP[2].empty() && !INP[3].empty() && !INP[4].empty() && !INP[5].empty() && !INP[6].empty() && !INP[7].empty() && !INP[8].empty()) {
			if (!INP[0][4].empty() && !INP[1][3].empty() && !INP[2][4].empty() && !INP[3][4].empty() && !INP[4][2].empty() && !INP[5][1].empty() && !INP[6][2].empty() && !INP[7][1].empty() && !INP[8][1].empty())
			{
				IP = gcnew String(INP[0][4].c_str());
				if (Cust == 0) {
					textBox1->Text = IP;
				}
				IP = gcnew String(INP[1][3].c_str());
				if (Cust == 0) {
					textBox6->Text = IP;
				}
				IP = gcnew String(INP[2][4].c_str());
				textBox7->Text = IP;
				IP = gcnew String(INP[3][4].c_str());
				textBox8->Text = IP;
				String^	 IP1 = gcnew String(INP[4][2].c_str());
				textBox5->Text = IP1;
				IP = gcnew String(INP[5][1].c_str());

				if (Convert::ToInt32(IP) == 0)
				{
					radioButton2->Checked = true;

				}
				else
					radioButton1->Checked = true;
				IP = gcnew String(INP[6][2].c_str());
				if (Convert::ToInt32(IP) == 1)
					radioButton3->Checked = true;
				else
					radioButton4->Checked = true;
				IP = gcnew String(INP[7][1].c_str());
				if (Convert::ToInt32(IP) == 0)
					radioButton6->Checked = true;
				else
					radioButton7->Checked = true;
				IP = gcnew String(INP[8][1].c_str());
				if (Convert::ToInt32(IP) == 0)
					radioButton8->Checked = true;
				else
					radioButton9->Checked = true;
				button8->Enabled = false;
			}
		}
		else {
			MessageBox::Show("Network file format not proper");
		}
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog1->Title = "Save a Network File";
	saveFileDialog1->Filter = "Text File Only|*OutNetwork.txt";

	saveFileDialog1->ShowDialog();

	if (saveFileDialog1->FileName != "")
	{

		StreamWriter^ outfile = gcnew StreamWriter(saveFileDialog1->FileName);
		outfile->Write("Total Number of Neuron: "+textBox1->Text+"\r\n");
		outfile->Write("Number of Layers: " + textBox6->Text + "\r\n");
		outfile->Write("Number of Input Neuron: " + textBox7->Text + "\r\n");
		outfile->Write("Number of Output Neuron: " + textBox8->Text + "\r\n");
		outfile->Write("Connectivity Probaility: " + textBox5->Text + "\r\n");
		int temp;
		if (radioButton2 -> Checked == true)
			temp = 0;
		else
			temp = 1;
		outfile->Write("Connectivity: " + Convert::ToString(temp) + "\r\n");
		if (radioButton4->Checked == true)
			temp = 0;
		else
			temp = 1;
		outfile->Write("Regular Layer: " + Convert::ToString(temp) + "\r\n");
		if (radioButton6->Checked == true)
			temp = 0;
		else
			temp = 1;
		outfile->Write("Interfeedback: " + Convert::ToString(temp) + "\r\n");
		if (radioButton8->Checked == true)
			temp = 0;
		else
			temp = 1;
		outfile->Write("Intrafeedback: " + Convert::ToString(temp) + "\r\n");
		outfile->Close();

	}
}
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox9->Text;
	Int32 number;
	bool b = Int32::TryParse(s, number);
	if (textBox9->TextLength != 0)
		Iter = Convert::ToInt32(textBox9->Text);
}
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	String^ s = textBox10->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox10->TextLength != 0 && textBox10->Text != ".") {
		SimTime = Convert::ToDouble(sss);
		
	}
}
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox4->Checked == true)
	{
		GNet = 1;
	}
	else {
		GNet = 0;
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ strr = "";
	saveFileDialog1->Title = "Save a Network File";
	saveFileDialog1->Filter = "Text File Only|*EventLOG.txt";
	
	saveFileDialog1->ShowDialog();

	if (saveFileDialog1->FileName != "")
	{

		StreamWriter^ outfile = gcnew StreamWriter(saveFileDialog1->FileName);
		int c=EventLog->Items->Count;
		for (int a = 0; a < c; a++) {
			std::string str10;
			std::string str11;
			std::string str12;
			std::string str13;
			int ID;
			double atime;
			std::string str1;
			std::string str2;
			std::string str3;

			EventLog->SetSelected(a, true);
			strr = EventLog->SelectedItems[0]->ToString();
			String^ strk = strr->Replace(",", ".");

			std::string str;
			MarshalString(strk, str);


			std::stringstream ss(str);
			ss >>str1>> str2 >> ID >> str10 >> str11>>str12>>str13>>atime >> str3;
			String^gg = Convert::ToString(atime);
			gg=gg->Replace(",", ".");
			outfile->Write(Convert::ToString(ID) + "  "+ gg +"\r\n");


		}
		
		outfile->Close();
	}

}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	
	//engine *ep;
	//mxarray *t = null;
	//double ts[5] = { 1,2,3,4,5 };
	///*
	//* call engopen with a null string. this starts a matlab process
	//* on the current host using the command "matlab".
	//*/
	//if (!(ep = engopen("")))
	//{
	//	
	//	fprintf(stderr, "\ncan't start matlab engine\n");

	//}
	///*
	//*  now call the matlab script that through matlab engine
	//*/
	//
	// t = mxcreatedoublematrix_730(1, 10, mxreal);
	//memcpy((void *)mxgetpr(t), (void *)ts, sizeof(ts));
	//engputvariable(ep, "t", t);
	//engevalstring(ep, "stem(t);figure,");
	//engevalstring(ep, "datam; stem(a(:,1),a(:,2))");
	//engevalstring(ep, "xlabel('neuron number');");
	//engevalstring(ep, "ylabel('collision times(s)');");



	//cout << "hit return to continue\n\n";
	//fgetc(stdin);
	///*
	//* close the matlab engine
	//*/
	//engclose(ep);
	//
}

private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox11->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox11->TextLength != 0 && textBox11->Text != ".") {
		Xlimit = Convert::ToDouble(sss);
	
	}
	for (int i = 0; i < TotalN; i++)
	{
		NerCORD[i][0] = NerCORD[i][0] * Xlimit;
	}

}

private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox12->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox12->TextLength != 0 && textBox12->Text != ".") {
		Ylimit = Convert::ToDouble(sss);

	}
	for (int i = 0; i < TotalN; i++)
	{
		NerCORD[i][1] = NerCORD[i][1] * Ylimit;
	}
}
private: System::Void textBox11_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == '.')
	{
		if (this->textBox11->Text->Contains(".") && !this->textBox11->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits "." and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void textBox12_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == '.')
	{
		if (this->textBox12->Text->Contains(".") && !this->textBox12->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits "." and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox6->Checked == true)
	{
		Cust = 1;
		TotalN = 0;
		LayerN = 0;
		panel8->Enabled = true;
		textBox1->Text = Convert::ToString(0);
		textBox6->Text = Convert::ToString(0);

		textBox1->Enabled = false;
		textBox6->Enabled = false;
		
		
	}
	else
	{
		Cust = 0;
		textBox1->Enabled = true;
		textBox6->Enabled = true;
		

		panel8->Enabled = false;
	}
}
private: System::Void textBox14_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == '.')
	{
		if (this->textBox14->Text->Contains(".") && !this->textBox14->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits "." and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;

}
private: System::Void textBox15_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == '.')
	{
		if (this->textBox15->Text->Contains(".") && !this->textBox15->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits "." and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void textBox13_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

	if (e->KeyChar == '.')
	{
		if (this->textBox13->Text->Contains(".") && !this->textBox13->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits "." and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void textBox16_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == '.')
	{
		if (this->textBox16->Text->Contains(".") && !this->textBox16->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits "." and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void textBox17_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	
	double x1 = Convert::ToDouble(textBox14->Text->Replace(".", ","));
	double y1 = Convert::ToDouble(textBox15->Text->Replace(".", ","));
	double x2 = Convert::ToDouble(textBox13->Text->Replace(".", ","));
	double y2 = Convert::ToDouble(textBox16->Text->Replace(".", ","));
	double z1 = Convert::ToDouble(textBox18->Text->Replace(".", ","));
	double z2 = Convert::ToDouble(textBox19->Text->Replace(".", ","));
	int  LayN = Convert::ToInt32(textBox17->Text);
	double x3;
	double x4;
	double y3;
	double y4;
	double z3;
	double z4;
	String^V2 = "From point ";
	String^T2 = " to point ";
	String^N2 = " with Neuron Number ";
int	kp = LayerList->Items->Count;
if (kp < 1) {
	 if (x2 > x1 && y2 > y1 && z2>z1 && LayN > 0) {
		// Create Input Event
		this->LayerList->Items->Add(V2 + this->textBox14->Text + " , " + this->textBox15->Text+ " , "+this->textBox18->Text + T2 + this->textBox13->Text + " , " + this->textBox16->Text +" , "+ this->textBox19->Text + N2 + this->textBox17->Text);
		TotalN = TotalN + LayN;
		LayerN = LayerN + 1;
		textBox6->Text = Convert::ToString(LayerN);
		textBox1->Text = Convert::ToString(TotalN);
		FileManager->Nodes[0]->Nodes->Add("Layer " + (kp + 1).ToString());
		for(int f=yy;f<yy+LayN;f++)
			FileManager->Nodes[0]->Nodes[kp]->Nodes->Add("Neuron " + (f + 1).ToString());
		yy += LayN;
		Ref += LayN;
		LayTemp2 = new vector<double>[LayerN];
		NerCORD= new vector<double>[TotalN];
		ConnectionMap=new vector<int>[TotalN];
		LayerConnection= new vector<int>[LayerN];
		for (int sf = 0; sf < LayerN; sf++) {
			LayTemp2[sf].resize(7);
			LayerConnection[sf].resize(LayerN);
		}
		for (int sf = 0; sf < TotalN; sf++) {
			NerCORD[sf].resize(3);
			ConnectionMap[sf].resize(TotalN);
		}
		
		LayerNeuron_ADD(NerCORD,LayTemp2,LayerN,1,Xlimit,Ylimit);
		Connection_ADD(ConnectionMap, LayerConnection, TotalN, LayerN);

		for (int d = 0; d < TotalN; d++)
		{
			for (int df = 0; df < TotalN; df++)
				cout<<ConnectionMap[d][df];
			cout << endl;
		}
	}
	else if (LayN < 1)
		MessageBox::Show(" Neuron Number should be positive");

	else if (x1 >= x2)
		MessageBox::Show(" X2 should be greater than X1  k<111");
	else if (y1 >= y2)
		MessageBox::Show(" Y2 should be greater than Y1");
	}
	else {
		int con = 0;
		int chekc = 0;
		for (int t = 0; t < kp; t++) {
			String^strr;
			LayerList->SetSelected(t, true);
			strr = LayerList->SelectedItems[0]->ToString();
			std::string str1;
			std::string str2;
			std::string str3;
			std::string str4;
			std::string str5;
			std::string str12;
			std::string str13;
			
			String^ strk = strr->Replace(",", ".");

			std::string str;
			MarshalString(strk, str);


			std::stringstream ss(str);
			ss >> str1 >> str2 >> x3 >> str3 >> y3 >> str4 >>z3 >> str12 >> str13 >> x4 >> str3 >> y4>> str5>> z4;

			// --------------------------------------CHANGE HERE------------------------------------------------- //
			if (x3<=x1   && x1<x4   && y1<y3 && y3<y2   )
				chekc = 1;
			if (y3 <= y1 && y1 < y4 && x1<x3 && x3 < x2  )
				chekc = 2;
			if (x1<x3    && y1<y3   && x2>x3 && y2>y3  )
				chekc = 3;						
			if (x3 <= x1 && x1<x4   && y3<=y1&&  y1<y4  )
				chekc = 4;
			if (chekc > 0)
			{
				con = t + 1;
				chekc = 0;
			}
		
			// --------------------------------------CHANGE HERE------------------------------------------------- //

		}
		
		String^V2 = "From point ";
		String^T2 = " to point ";
		String^N2 = " with Neuron Number ";
			 if (LayN < 1)
				MessageBox::Show(" Neuron Number should be positive");
			else if (x1 >= x2)
				MessageBox::Show(" X2 should be greater than X1");
			else if (y1 >= y2)
				MessageBox::Show(" Y2 should be greater than Y1");
			else if (con>0)
				MessageBox::Show(Convert::ToString("No Intersection is allowed between layers (with Layer " + con + ")"));
			else {
				this->LayerList->Items->Add(V2 + this->textBox14->Text + " , " + this->textBox15->Text + " , " + this->textBox18->Text + T2 + this->textBox13->Text + " , " + this->textBox16->Text + " , " + this->textBox19->Text + N2 + this->textBox17->Text);

				TotalN = TotalN + LayN;
				LayerN = LayerN + 1;
				textBox6->Text = Convert::ToString(LayerN);
				textBox1->Text = Convert::ToString(TotalN);
				FileManager->Nodes[0]->Nodes->Add("Layer " + (kp + 1).ToString());
				for (int f = yy; f<yy + LayN; f++)
					FileManager->Nodes[0]->Nodes[kp]->Nodes->Add("Neuron " + (f + 1).ToString());
				yy += LayN;
				LayTemp2 = new vector<double>[LayerN];
				NerCORD = new vector<double>[TotalN];
				
				ConnectionMap = new vector<int>[TotalN];
				LayerConnection = new vector<int>[LayerN];
				for (int sf = 0; sf < LayerN; sf++) {
					LayTemp2[sf].resize(7);
					LayerConnection[sf].resize(LayerN);
				}
				for (int sf = 0; sf < TotalN; sf++) {
					NerCORD[sf].resize(3);
					ConnectionMap[sf].resize(TotalN);
				}
			
				LayerNeuron_ADD(NerCORD,LayTemp2,LayerN,1,Xlimit,Ylimit);
				Connection_ADD(ConnectionMap, LayerConnection, TotalN, LayerN);
				for (int d = 0; d < TotalN; d++)
				{
					for (int df = 0; df < TotalN; df++)
						cout << ConnectionMap[d][df];
					cout << endl;
				}
			
			}
	
		
	}
}
private: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox14->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox14->TextLength != 0 && textBox14->Text != ".") {
	double	x1 = Convert::ToDouble(sss);
		if (x1 > 1)
		{
			textBox14->Text = Convert::ToString(1);
		}
	}
}
private: System::Void textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox15->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox15->TextLength != 0 && textBox15->Text != ".") {
		double	x1 = Convert::ToDouble(sss);
		if (x1 > 1)
		{
			textBox15->Text = Convert::ToString(1);
		}
	}
}
private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox13->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox13->TextLength != 0 && textBox13->Text != ".") {
		double	x1 = Convert::ToDouble(sss);
		if (x1 > 1)
		{
			textBox13->Text = Convert::ToString(1);
		}
	}
}
private: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox16->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox16->TextLength != 0 && textBox16->Text != ".") {
		double	x1 = Convert::ToDouble(sss);
		if (x1 > 1)
		{
			textBox16->Text = Convert::ToString(1);
		}
	}
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	this->LayerList->Items->Clear();
	TotalN = 0;
	LayerN = 0;
	FileManager->Nodes[0]->Nodes->Clear();

}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	// This operation is for reading Neuron Number in the Selected Node
	double x3;
	double x4;
	double y3;
	double y4;
	double z3;
	double z4;
	int NX;
	String^strr = LayerList->SelectedItem->ToString();
	int fM=LayerList->SelectedIndex;
	std::string str1;
	std::string str2;
	std::string str3;
	std::string str12;
	std::string str13;
	std::string str5;
	std::string str6;
	std::string str7;
	std::string str8;
	std::string str9;
	String^ strk = strr->Replace(",", ".");

	std::string str;
	MarshalString(strk, str);


	std::stringstream ss(str);
	ss >> str1 >> str2 >> x3 >> str3 >> y3 >> str8>> z3 >> str12 >> str13 >> x4 >> str3 >> y4 >>str9 >>z4>>str5 >> str6 >> str7 >> NX;
	TotalN = TotalN - NX;
	LayerN = LayerN - 1;
	FileManager->Nodes[0]->Nodes[fM]->Remove();

	// Changing the Order of File Manager and Deleting the corresponding LAYER AND NEURONS
	for (int i = fM; i < LayerN; i++) {
		FileManager->Nodes[0]->Nodes[i]->Text = Convert::ToString("Layer " + (i + 1));
	}
	int ccc = 0;
	NerCORDTemp = new vector<double>[TotalN];

	for (int sf = 0; sf < TotalN; sf++) {
		NerCORDTemp[sf].resize(3);
	}
	int gg = 0;
	for (int i = 0; i < fM; i++)
	{
		 ccc+= FileManager->Nodes[0]->Nodes[i]->Nodes->Count;
		 gg+= FileManager->Nodes[0]->Nodes[i]->Nodes->Count;
	}
	for(int i=fM;i<LayerN;i++)
	{
		int m=FileManager->Nodes[0]->Nodes[i]->Nodes->Count;
		for(int j=0;j<m;j++)
		FileManager->Nodes[0]->Nodes[i]->Nodes[j]->Text = Convert::ToString("Neuron " + (ccc+j + 1));
		ccc += m;
	}

	for (int i =0; i < gg; i++)
	{
		NerCORDTemp[i][0] = NerCORD[i][0];
		NerCORDTemp[i][1] = NerCORD[i][1];
		NerCORDTemp[i][2] = NerCORD[i][2];
	}
	for (int i = gg; i < TotalN; i++)
	{
		NerCORDTemp[i][0] = NerCORD[i+NX][0];
		NerCORDTemp[i][1] = NerCORD[i+NX][1];
		NerCORDTemp[i][2] = NerCORD[i + NX][2];

	}
	NerCORD = new vector<double>[TotalN];
	
	for (int sf = 0; sf < TotalN; sf++)
		NerCORD[sf].resize(3);

for(int i=0;i<TotalN;i++)
{
	NerCORD[i][0] = NerCORDTemp[i][0];
	NerCORD[i][1] = NerCORDTemp[i][1];
	NerCORD[i][2] = NerCORDTemp[i][2];
}
	this->LayerList->Items->Remove(this->LayerList->SelectedItem);
	LayTemp2 = new vector<double>[LayerN];
	for (int sf = 0; sf < LayerN; sf++) {
		LayTemp2[sf].resize(7);
	}

	// For Updating LAYER and NEURON vectors 
	LayerNeuron_ADD(NerCORD, LayTemp2, LayerN, 0,Xlimit,Ylimit);
	Connection_ADD(ConnectionMap, LayerConnection, TotalN, LayerN);
	for (int d = 0; d < TotalN; d++)
	{
		for (int df = 0; df < TotalN; df++)
			cout << ConnectionMap[d][df];
		cout << endl;
	}


}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {

		// This part is for Opening a Dialog File for Text File Input
	OpenFileDialog^ fd1 = gcnew OpenFileDialog();
	fd1->Filter = "Text File Only|*.txt";
	String^fname = "";
	if (fd1->ShowDialog().Equals(System::Windows::Forms::DialogResult::OK))
	{
		fname = fd1->FileName;
		MessageBox::Show(fname);
	}
	string fID;
	MarshalString(fname, fID);
	ifstream fileIN(fID);



	int Col = 0;
	int Row = 0;
	int Exit = 0;
	std::string lineA;
	double x;
	vector<vector<double>> INP;
	String^V2 = "From point ";
	String^T2 = " to point ";
	String^N2 = " with Neuron Number ";
	int cntrl = 0;
	// Assigning Input Text to INP array which consist the 2 point cordinates and number of neuron inside layer
	while (fileIN.good()) {
		cntrl = 1;
		while (getline(fileIN, lineA)) {
			INP.push_back(vector<double>());
			istringstream streamA(lineA);
			Col = 0;
			while (streamA >> x) {
				INP[Row].push_back(x);
				Col++;
				if (Col < 7 && x>1)
					Exit = 1;
			}
			Row++;
			if (Col != 7)
				Exit = 1;
		}
	}
	double x1;
	double x2;
	double y1;
	double y2;
	double z1;
	double z2;
	String^ op = "";
	String^err = "";
	int perr=0;
	int kp = FileManager->Nodes[0]->Nodes->Count;
	int sfy = kp;
	if (Exit == 0 && cntrl==1) {
		// ADD LAYERS TO LAYERLIST INSIDE GUI
		for (int i = kp; i < kp+Row; i++) {
			int chekc = 0;
			int con = 0;
			x1 = INP[i - kp][0];
			y1 = INP[i - kp][1];
			z1 = INP[i - kp][2];
			x2 = INP[i - kp][3];
			y2 = INP[i - kp][4];
			z2=  INP[i - kp][5];
			
			for (int t = 0; t < sfy; t++) {
				String^strr;
				double x3;
				double y3;
				double z3;
				double z4;
				double x4, y4;
				LayerList->SetSelected(t, true);
				strr = LayerList->SelectedItems[0]->ToString();
				std::string str1;
				std::string str2;
				std::string str3;
				std::string str12;
				std::string str13;
				std::string str7;
				std::string str8;
				std::string str9;



				String^ strk = strr->Replace(",", ".");

				std::string str;
				MarshalString(strk, str);
				

				std::stringstream ss(str);
				ss >> str1 >> str2 >> x3 >> str3 >> y3 >> str7>>z3 >>str12 >> str13 >> x4 >> str3 >> y4>>str8>>z4;


				if (x3 <= x1 && x1<x4 && y1<y3 && y3<y2)
					chekc = 1;
				if (y3 <= y1 && y1 < y4 && x1<x3 && x3 < x2)
					chekc = 2;
				if (x1<x3 && y1<y3 && x2>x3 && y2>y3)
					chekc = 3;
				if (x3 <= x1 && x1<x4 && y3 <= y1 && y1<y4)
					chekc = 4;

				if (chekc > 0) 
				{
					con = t + 1;
					chekc = 0;
				}
				


			}
			if (con == 0) {
				LayerList->Items->Add(V2 + INP[i - kp][0] + " , " + System::Convert::ToString(INP[i - kp][1])+ " , " + System::Convert::ToString(INP[i - kp][2]) + T2 + System::Convert::ToString(INP[i - kp][3]) + " , " + System::Convert::ToString(INP[i - kp][4]) + " , " + System::Convert::ToString(INP[i - kp][5]) +N2 + System::Convert::ToString(INP[i - kp][6]));
				FileManager->Nodes[0]->Nodes->Add(Convert::ToString("Layer " + (i + 1-perr)));
			
				for (int j = yy; j < yy + INP[i - kp][6]; j++)
					FileManager->Nodes[0]->Nodes[i-perr]->Nodes->Add(Convert::ToString("Neuron " + (j + 1)));
				
				yy += INP[i - kp][6];
				LayerN += 1;
				TotalN += INP[i - kp][6];
				sfy += 1;
			}
			else {
				err += Convert::ToString("In the Layer File, Row " + (i + 1-kp)+ " can not be added"+" since there is an intersection with Layer "+con);
				err+="\n";
				perr += 1;
			}

		}
		// CREATING VECTORS TO GET LAYERS AND CREATE POSITIONS FOR NEURONS
		LayTemp2 = new vector<double>[LayerN];
		textBox1->Text = Convert::ToString(TotalN);
		textBox6->Text= Convert::ToString(LayerN);
		NerCORD = new vector<double>[TotalN];
		ConnectionMap = new vector<int>[TotalN];
		LayerConnection = new vector<int>[LayerN];
		for (int sf = 0; sf < LayerN; sf++) {
			LayTemp2[sf].resize(7);
			LayerConnection[sf].resize(LayerN);
		}
		for (int sf = 0; sf < TotalN; sf++) {
			NerCORD[sf].resize(3);
			ConnectionMap[sf].resize(TotalN);
		}
		LayerNeuron_ADD(NerCORD, LayTemp2, LayerN, 1,Xlimit,Ylimit);
		Connection_ADD(ConnectionMap, LayerConnection, TotalN, LayerN);
		if(perr>0)
		MessageBox::Show(err);
	}
	else if(Exit>0){
		MessageBox::Show("The format of the text file is not suitable. Please check the input text types");
	}
	
}
private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox5->Checked == true)
	{
		button13->Enabled = true;
	}
	else
		button13->Enabled = false;
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	Pen^ blackPen = gcnew Pen(Color::Black, 3);
	Pen^obj2 = gcnew Pen(Color::Green, 1);
	
	Graphics^g = pictureBox2->CreateGraphics();
	g->Clear(Color::White);
	if (Cust == 1) {
		for (int i = 0; i < LayerN; i++) {
			

			// Drawing Layers and their respective Labels.
			System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 6);
			String^ab = Convert::ToString("Layer "+(i+1));
			SolidBrush^ drawBrush = gcnew SolidBrush(Color::Blue);
			float x = (pictureBox2->Size.Width)*LayTemp2[i][0];
			float y = (pictureBox2->Size.Height)* LayTemp2[i][1];
			float width = (pictureBox2->Size.Width)*(LayTemp2[i][2] - LayTemp2[i][0]);
			float xmid = (x + x + width/2) / 2;
			float ypos = y -10;
			if (ypos <= 0)
				ypos = 1;
			PointF drawP = PointF(xmid,ypos);
			float height = (pictureBox2->Size.Height)*(LayTemp2[i][3] - LayTemp2[i][1]);
			g->DrawRectangle(blackPen, x, y, width, height);
			g->DrawString(ab, drawFont, drawBrush, drawP);
		}
		for (int i = 0; i < TotalN; i++) {
			
			g->DrawEllipse(obj2, (pictureBox2->Size.Width)*NerCORD[i][0]/Xlimit-2.5, (pictureBox2->Size.Height)*NerCORD[i][1]/Ylimit-2.5, 5, 5);
			
		}
	}

}
private: System::Void FileManager_NodeMouseClick(System::Object^  sender, System::Windows::Forms::TreeNodeMouseClickEventArgs^  e) {

}
private: System::Void FileManager_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
	FileManager->SelectedNode->Expand();

}
private: System::Void FileManager_NodeMouseDoubleClick(System::Object^  sender, System::Windows::Forms::TreeNodeMouseClickEventArgs^  e) {
	int indx = e->Node->Index;
	if(intrafeed!=setIntra || interfeed!=setInter || regular!=setReg|| TypeN!=setType)
		Connection_ADD(ConnectionMap, LayerConnection, TotalN, LayerN);
	setIntra = intrafeed;
	setInter = interfeed;
	setReg = regular;
	setType = TypeN;
	obj1->LayTemp3 = new vector<double>[LayerN];
	objNet->LayConn = new vector<int>[LayerN];
	objNet->IndexMat = new vector<int>[LayerN*LayerN];
	obj1->Save = 0;
	objNet->save = 0;
	objNet->nat = 0;
	obj1->RowLay = LayerN;
	obj1->index = indx;
	String^cv = "";
	for (int sf = 0; sf < LayerN*LayerN; sf++) {
		objNet->IndexMat[sf].resize(3);
	}
	for (int sf = 0; sf < LayerN*LayerN; sf++) {
		for(int nf=0;nf<2;nf++)
			objNet->IndexMat[sf][nf]=0;
	}
	for (int sf = 0; sf < LayerN; sf++) {
		obj1->LayTemp3[sf].resize(7);
		objNet->LayConn[sf].resize(LayerN);
	}
	for (int i = 0; i < LayerN; i++)
	{
		for (int j = 0; j < LayerN; j++) {
			cv += Convert::ToString(LayerConnection[i][j] + " ");
			objNet->LayConn[i][j] = LayerConnection[i][j];
		}
		cv += "\n";
	}
	for (int a = 0; a < LayerN; a++)
		for (int b = 0; b < 7; b++)
			obj1->LayTemp3[a][b] = LayTemp2[a][b];
	String^V2 = "From point ";
	String^T2 = " to point ";
	String^N2 = " with Neuron Number ";
	double x3;
	double y3;
	double x4;
	double y4;

	if (e->Node->Text == Convert::ToString("Network")) {
		objNet->Text = Convert::ToString("Network");
		objNet->LayerLimit = LayerN;
		if (LayerN == 0) {
			objNet->textBox1->Enabled = false;
			objNet->textBox2->Enabled = false;
			objNet->textBox3->Enabled = false;
			objNet->button2->Enabled = false;

		}
		else {
			objNet->textBox1->Enabled = true;
			objNet->textBox2->Enabled = true;
			objNet->textBox3->Enabled = true;
			objNet->button2->Enabled = true;


		}
		objNet->richTextBox1->Text = cv;

		objNet->ShowDialog();
	}
	else {
		obj1->Text = Convert::ToString("Layer " + (indx + 1));
		String^s = Convert::ToString(LayTemp2[indx][0]);
		s = s->Replace(",", ".");
		obj1->textBox1->Text = s;
		String^s1 = Convert::ToString(LayTemp2[indx][1]);
		s1 = s1->Replace(",", ".");
		obj1->textBox2->Text = s1;
		String^s2 = Convert::ToString(LayTemp2[indx][2]);
		s2 = s2->Replace(",", ".");
		obj1->textBox3->Text = s2;
		String^s3 = Convert::ToString(LayTemp2[indx][3]);
		s3 = s3->Replace(",", ".");
		obj1->textBox4->Text = s3;
		String^s4 = Convert::ToString(LayTemp2[indx][4]);
		s4 = s4->Replace(",", ".");
		obj1->textBox5->Text = s4;
	
		obj1->LayerIN= new vector<int>[LayTemp2[indx][4]];
		LayIN= new vector<int>[LayTemp2[indx][4]];
		for (int sf = 0; sf <LayTemp2[indx][4]; sf++) {
			obj1->LayerIN[sf].resize(LayTemp2[indx][4]);
			LayIN[sf].resize(LayTemp2[indx][4]);
		}
		String^mmm = "";
		obj1->Limit = LayTemp2[indx][4];
		obj1->label12->Text =Convert::ToString("Connection Map Inside Layer "+(indx+1) );
		int ee = 0;
		for (int dd = 0; dd < indx; dd++)
		{
			ee += LayTemp2[dd][4];
		}
		for (int c = 0; c < LayTemp2[indx][4]; c++)
		{
			for (int d = 0; d < LayTemp2[indx][4]; d++)
			{
				obj1->LayerIN[c][d] = ConnectionMap[ee + c][ee + d];
				LayIN[c][d] = ConnectionMap[ee + c][ee + d];
				mmm += Convert::ToString(ConnectionMap[ee + c][ee + d] + " ");
			}
			mmm += "\n";
		}
		obj1->richTextBox1->Text = mmm;
		obj1->ShowDialog();
		
				
			
		
		

	}

	int kp = LayerList->Items->Count;
	if (obj1->Save == 1) {
	
		int ee = 0;
		for (int dd = 0; dd < indx; dd++)
		{
			ee += LayTemp2[dd][4];
		}
		for (int c = 0; c < LayTemp2[indx][4]; c++)
			for (int d = 0; d < LayTemp2[indx][4]; d++)
			{
				LayIN[c][d] = obj1->LayerIN[c][d];
				ConnectionMap[ee + c][ee + d] = LayIN[c][d];
			}

		

			LayTemp2[indx][0] = obj1->x1;
			LayTemp2[indx][1] = obj1->y1;
			LayTemp2[indx][2] = obj1->x2;
			LayTemp2[indx][3] = obj1->y2;
			LayTemp2[indx][4] = obj1->N;
			LayTemp2[indx][5] = obj1->z1;
			LayTemp2[indx][6] = obj1->z2;


			double x11=  obj1->x1;
			double y11 = obj1->y1;
			double x21 = obj1->x2;
			double y21 = obj1->y2;
			double z11 = obj1->z1;
			double z21 = obj1->z2;
			double NX = obj1->N;
			int tt = 0;
			for (int o = 0; o < indx; o++)
			{

				tt += LayTemp2[o][4];
			}
			LayerList->Items->RemoveAt(indx);

			LayerList->Items->Insert(indx, Convert::ToString(V2 + LayTemp2[indx][0] + " , " + LayTemp2[indx][1] + T2 + LayTemp2[indx][2] + " , " + LayTemp2[indx][3] + N2 + LayTemp2[indx][4]));
			for (int vc = tt; vc < tt + NX; vc++)
			{
				double xtemp;
				double ytemp;
				double ztemp;
				double xdiff = x21 - x11;
				double ydiff = y21 - y11;
				double zdiff = z21 - z11;
				if (xdiff > 1e-3) {
					int xr = xdiff * pow(10, 5);
					xtemp = rand() % xr;
					double xyy = x11 * pow(10, 5);
					xtemp += xyy;
					xtemp = xtemp / pow(10, 5);
					xtemp = xtemp * Xlimit;

				}
				else if (xdiff > 1e-6)
				{
					int xr = xdiff * pow(10, 7);
					xtemp = rand() % xr;
					double xyy = x11 * pow(10, 7);
					xtemp += xyy;
					xtemp = xtemp / pow(10, 7);
					xtemp = xtemp * Xlimit;

				}
				if (ydiff > 1e-3) {
					int yr = ydiff * pow(10, 5);
					ytemp = rand() % yr;
					double yyy = y11 * pow(10, 5);
					ytemp += yyy;
					ytemp = ytemp / pow(10, 5);
					ytemp = ytemp * Ylimit;
				}
				else if (ydiff > 1e-6) {
					int yr = ydiff * pow(10, 7);
					ytemp = rand() % yr;
					double yyy = y11 * pow(10, 7);
					ytemp += yyy;
					ytemp = ytemp / pow(10, 7);
					ytemp = ytemp * Ylimit;

				}
				if (zdiff > 1e-3) {
					int zr = zdiff * pow(10, 5);
					ztemp = rand() % zr;
					double zzz = z11 * pow(10, 5);
					ztemp += zzz;
					ztemp = ztemp / pow(10, 5);
					ztemp = ztemp * Zlimit;
				}
				else if (zdiff > 1e-6) {
					int zr = zdiff * pow(10, 7);
					ztemp = rand() % zr;
					double zzz = z11 * pow(10, 7);
					ztemp += zzz;
					ztemp = ztemp / pow(10, 7);
					ztemp = ztemp * Zlimit;

				}
				NerCORD[vc][0] = xtemp;
				NerCORD[vc][1] = ytemp;
				NerCORD[vc][2] = ztemp;
			}


	}
	cout <<" HERE" << endl;
	if (objNet->save == 1)
	{
		for (int i = 0; i < LayerN; i++)
			for (int j = 0; j < LayerN; j++)
				LayerConnection[i][j] = objNet->LayConn[i][j];

		Connection_CHANGE(ConnectionMap, LayerConnection, LayTemp2,TotalN, LayerN,objNet->nat,objNet->IndexMat);
	}
	for (int i = 0; i < LayerN; i++)
	{
		for (int j = 0; j < LayerN; j++)
			cout << LayerConnection[i][j] << " ";
		cout << endl;
	}
	for (int i = 0; i < TotalN; i++)
	{
		for (int j = 0; j < TotalN; j++)
			cout << ConnectionMap[i][j] << " ";
		cout << endl;
	}
	for (int i = 0; i < objNet->nat; i++) {
		for (int j = 0; j < 3; j++)
			cout << objNet->IndexMat[i][j]<<" ";
		cout << endl;
	}
	
}
private: System::Void pictureBox2_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	double x1 = e->X;
	double y1 = e->Y;
	Pen^ blackPen = gcnew Pen(Color::Black, 3);
	Pen^obj2 = gcnew Pen(Color::Green, 4);
	int ay = 0;
	
	

		

		
		for (int i = 0; i < LayerN; i++) {
			if (x1 > LayTemp2[i][0] * pictureBox2->Size.Width && x1<LayTemp2[i][2] * pictureBox2->Size.Width && y1>LayTemp2[i][1] * pictureBox2->Size.Height && y1 < LayTemp2[i][3] * pictureBox2->Size.Height)
			{
				for (int p = 0; p < i; p++)
					ay += LayTemp2[p][4];
				objPic->Points = new vector<float > [LayTemp2[i][4]];
				objPic->siz = LayTemp2[i][4];
				for (int p = 0; p < LayTemp2[i][4]; p++)
					objPic->Points[p].resize(2);

				for (int j = ay; j < ay + LayTemp2[i][4]; j++)
				{

					float xint = (477)*(NerCORD[j][0]-LayTemp2[i][0])/(LayTemp2[i][2]-LayTemp2[i][0]) ;
					float yint = (361)*(NerCORD[j][1] - LayTemp2[i][1]) / (LayTemp2[i][3] - LayTemp2[i][1]);
					objPic->Points[j - ay][0] = xint;
					objPic->Points[j - ay][1] = yint;

			
				}
				objPic->label1->Text = Convert::ToString("Zoomed View of Layer " + (i + 1));


			}
		}
		objPic->ShowDialog();
		
}
private: System::Void textBox18_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox18->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox18->TextLength != 0 && textBox18->Text != ".") {
		double	x1 = Convert::ToDouble(sss);
		if (x1 > 1)
		{
			textBox18->Text = Convert::ToString(1);
		}
	}
}
private: System::Void textBox19_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox19->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox19->TextLength != 0 && textBox19->Text != ".") {
		double	x1 = Convert::ToDouble(sss);
		if (x1 > 1)
		{
			textBox19->Text = Convert::ToString(1);
		}
	}
}
private: System::Void textBox18_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == '.')
	{
		if (this->textBox18->Text->Contains(".") && !this->textBox18->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits "." and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void textBox19_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == '.')
	{
		if (this->textBox19->Text->Contains(".") && !this->textBox19->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits "." and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox7->Checked == true)
	{
		Loc = 1;
		button17->Enabled = true;
		




	}
	else
	{
		Loc = 0;
		button17->Enabled = false;
		
	}
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ fd1 = gcnew OpenFileDialog();
	fd1->Filter = "Text File Only|*.txt";
	String^fname = "";
	if (fd1->ShowDialog().Equals(System::Windows::Forms::DialogResult::OK))
	{
		fname = fd1->FileName;
		MessageBox::Show(fname);
	}
	string fID;
	MarshalString(fname, fID);
	ifstream fileIN(fID);

	int Col = 0;
	int Row = 0;
	int Exit = 0;
	std::string lineA;
	double x;
	vector<vector<double>> Cor;

	int cntrl = 0;
	// Assigning Input Text to INP array which consist the 2 point cordinates and number of neuron inside layer
	while (fileIN.good()) {
		cntrl = 1;
		while (getline(fileIN, lineA)) {
			Cor.push_back(vector<double>());
			istringstream streamA(lineA);
			Col = 0;
			while (streamA >> x) {
				Cor[Row].push_back(x);
				Col++;
				if (Col < 3 && x>1)
					Exit = 1;
			}
			Row++;
			if (Col != 3)
				Exit = 1;
		}

	}
	TotalN = Row;
	textBox1->Text = Convert::ToString(Row);
	NerCORD = new vector<double>[TotalN];

	for (int sf = 0; sf < TotalN; sf++) {
		NerCORD[sf].resize(3);

	}
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < 3; j++)
		{
			if (j==0)
				NerCORD[i][j] = Cor[i][j] * Xlimit;
			else if (j==1)
				NerCORD[i][j] = Cor[i][j] * Ylimit;
			else if (j == 2)
				NerCORD[i][j] = Cor[i][j] * Zlimit;
			}


	}
}
};
}

