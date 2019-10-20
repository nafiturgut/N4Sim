#pragma once
#include <vector>
#include <cstdlib>
#include <cmath>
#include <msclr\marshal_cppstd.h>
#include <string>
#include <fstream>
#include <sstream>
#include <stdlib.h>
namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LayerProperty
	/// </summary>
	public ref class LayerProperty : public System::Windows::Forms::Form
	{
	public:
		LayerProperty(void)
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
		~LayerProperty()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^  textBox1;
	protected:
	public: System::Windows::Forms::TextBox^  textBox2;
	public: System::Windows::Forms::TextBox^  textBox3;
	public: System::Windows::Forms::TextBox^  textBox4;
	public: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	public: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::RichTextBox^  richTextBox1;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	public: System::Windows::Forms::TextBox^  textBox6;
	private:
	public: System::Windows::Forms::TextBox^  textBox7;
	public: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Panel^  panel2;
	public: System::Windows::Forms::Label^  label12;
	public: System::Windows::Forms::TextBox^  textBox9;
	public: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label13;
	public:
	private: System::Windows::Forms::Label^  label14;
	private:

	public:
	public:
	private:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(122, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &LayerProperty::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LayerProperty::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(248, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &LayerProperty::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LayerProperty::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(122, 56);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &LayerProperty::textBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LayerProperty::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(248, 56);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &LayerProperty::textBox4_TextChanged);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LayerProperty::textBox4_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(121, 94);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &LayerProperty::textBox5_TextChanged);
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LayerProperty::textBox5_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Point 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(101, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"X1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(228, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Y1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Point 2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(100, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"X2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(226, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Y2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 96);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Number of Neuron";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(341, 260);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LayerProperty::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(8, 190);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(199, 161);
			this->richTextBox1->TabIndex = 13;
			this->richTextBox1->Text = L"";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Location = System::Drawing::Point(8, 369);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(494, 92);
			this->panel1->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(127, 61);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"(0->No 1->Yes)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(4, 63);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Connection:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(139, 16);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"To Entry:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(4, 15);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(63, 13);
			this->label11->TabIndex = 7;
			this->label11->Text = L"From  Entry:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(68, 13);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(48, 20);
			this->textBox6->TabIndex = 6;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &LayerProperty::textBox6_TextChanged);
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LayerProperty::textBox6_KeyPress);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(197, 13);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(48, 20);
			this->textBox7->TabIndex = 4;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &LayerProperty::textBox7_TextChanged);
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LayerProperty::textBox7_KeyPress);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(332, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"CHANGE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LayerProperty::button2_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(68, 58);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(48, 20);
			this->textBox8->TabIndex = 5;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &LayerProperty::textBox8_TextChanged);
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LayerProperty::textBox8_KeyPress);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(8, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(494, 144);
			this->panel2->TabIndex = 15;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(380, 12);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 12;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &LayerProperty::textBox9_TextChanged);
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LayerProperty::textBox9_KeyPress);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(380, 56);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 13;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &LayerProperty::textBox10_TextChanged);
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LayerProperty::textBox10_KeyPress);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(358, 59);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(20, 13);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Z2";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(360, 15);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(20, 13);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Z1";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(7, 168);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(57, 13);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Layer Map";
			// 
			// LayerProperty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(514, 478);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Name = L"LayerProperty";
			this->Text = L"LayerProperty";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		public:	std::vector<double>* LayTemp3;
		public: std::vector<int>* LayerIN;
	public: double x1;
	public: double x2;
	public: double y1;
	public: double y2;
	public: double z1;
	public: double z2;

			int RowLay;
			int index;
	public: int N;
			int First;
			int Second;
			int var;
	public: int Limit;
	public: int Save = 0;
#pragma endregion

	


private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == '.')
	{
		if (this->textBox1->Text->Contains(".") && !this->textBox1->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits "." and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
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
private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == '.')
	{
		if (this->textBox3->Text->Contains(".") && !this->textBox3->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits "." and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;

}
private: System::Void textBox4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == '.')
	{
		if (this->textBox4->Text->Contains(".") && !this->textBox4->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits "." and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;

}
private: System::Void textBox5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox1->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox1->TextLength != 0 && textBox1->Text != ".") {
		x1 = Convert::ToDouble(sss);
		if (x1 > 1)
		{
			textBox1->Text = Convert::ToString(1);
		}
	}

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	double x3;
	double x4;
	double y3;
	double y4;
	double z3;
	double z4;

	int chekc = 0;
	int con = 0;
	
	for (int i = 0; i < RowLay;i++ ) {
		if (i != index) {
			x3 = LayTemp3[i][0];
			y3 = LayTemp3[i][1];
			x4 = LayTemp3[i][2];
			y4 = LayTemp3[i][3];
			z3= LayTemp3[i][5];
			z4= LayTemp3[i][6];




			if (x3 <= x1 && x1 < x4 && y1 < y3 && y3 < y2)
				chekc = 1;
			if (y3 <= y1 && y1 < y4 && x1 < x3 && x3 < x2)
				chekc = 2;
			if (x1<x3 && y1<y3 && x2>x3 && y2>y3)
				chekc = 3;
			if (x3 <= x1 && x1 < x4 && y3 <= y1 && y1 < y4)
				chekc = 4;

			if (chekc > 0)
			{
				con = i+1;
				chekc = 0;
			}
		}
	}
	if(con>0)
		MessageBox::Show(Convert::ToString("No Intersection is allowed between layers (with Layer " + con + ")"));
	else if (x2 > x1 && y2 > y1 && z2>z1 && N > 0) {

		Save = 1;
		Close();
	}
	else if (N <= 0)
		MessageBox::Show("Number of Neuron should be positive");
	else if (x1>=x2)
		MessageBox::Show("X2 should be greater than X1");
	else if (y1 >= y2)
		MessageBox::Show("Y2 should be greater than Y1");
	else if (z1 >= z2)
		MessageBox::Show("Z2 should be greater than Z1");

}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox2->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox2->TextLength != 0 && textBox2->Text != ".") {
		y1 = Convert::ToDouble(sss);
		if (y1 > 1)
		{
			textBox2->Text = Convert::ToString(1);
		}
	}
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox3->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox3->TextLength != 0 && textBox3->Text != ".") {
		x2 = Convert::ToDouble(sss);
		if (x2 > 1)
		{
			textBox3->Text = Convert::ToString(1);
		}
	}
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox4->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox4->TextLength != 0 && textBox4->Text != ".") {
		y2 = Convert::ToDouble(sss);
		if (y2 > 1)
		{
			textBox4->Text = Convert::ToString(1);
		}
	}
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox5->Text;
	Int32 number;
	bool b = Int32::TryParse(s, number);
	if (textBox5->TextLength != 0)
		N = Convert::ToInt32(textBox5->Text);
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox6->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox6->TextLength != 0 && textBox6->Text != ".") {
		First = Convert::ToUInt32(sss);
		if (First> Limit)
		{
			textBox6->Text = Convert::ToString(Limit);
			First = Limit;
		}
		else if (First == 0)
		{
			textBox6->Text = Convert::ToString(1);
			First = 1;
		}
	}
}
private: System::Void textBox6_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void textBox7_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox8->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox8->TextLength != 0 && textBox8->Text != ".") {
		var = Convert::ToDouble(sss);
		if (var > 1)
		{
			textBox8->Text = Convert::ToString(1);
			var = 1;
		}
	}
}
private: System::Void textBox8_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox7->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox7->TextLength != 0 && textBox7->Text != ".") {
		Second = Convert::ToUInt32(sss);
		if (Second> Limit)
		{
			textBox7->Text = Convert::ToString(Limit);
			Second = Limit;
		}
		else if (Second == 0)
		{
			textBox7->Text = Convert::ToString(1);
			Second = 1;
		}
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox6->TextLength != 0) {
		if (textBox7->TextLength != 0) {
			if (textBox8->TextLength != 0) {
				if (First != Second) {
					First = Convert::ToInt32(textBox6->Text);
					Second = Convert::ToInt32(textBox7->Text);
					var = Convert::ToInt32(textBox8->Text);
					LayerIN[First - 1][Second - 1] = var;
					String^cv = "";
					for (int i = 0; i < Limit; i++)
					{
						for (int j = 0; j < Limit; j++) {
							cv += Convert::ToString(LayerIN[i][j] + " ");

						}
						cv += "\n";
					}
					richTextBox1->Text = cv;
				}
				else {
					MessageBox::Show("Inside neuron connection is not allowed ");
				}
			}
			else {
				MessageBox::Show("Please Enter Connection Value ");
			}

		}
		else {
			MessageBox::Show("Please Enter Second Layer Number ");
		}

	}
	else {
		MessageBox::Show("Please Enter First Layer Number ");
	}
}
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox9->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox9->TextLength != 0 && textBox9->Text != ".") {
		z1 = Convert::ToDouble(sss);
		if (z1 > 1)
		{
			textBox9->Text = Convert::ToString(1);
		}
	}

}
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox10->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox10->TextLength != 0 && textBox10->Text != ".") {
		z2 = Convert::ToDouble(sss);
		if (z2 > 1)
		{
			textBox10->Text = Convert::ToString(1);
		}
	}

}
private: System::Void textBox9_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == '.')
	{
		if (this->textBox9->Text->Contains(".") && !this->textBox9->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits "." and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void textBox10_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == '.')
	{
		if (this->textBox10->Text->Contains(".") && !this->textBox10->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits "." and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
};
}
