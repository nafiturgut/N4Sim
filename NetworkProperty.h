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
	/// Summary for NetworkProperty
	/// </summary>
	public ref class NetworkProperty : public System::Windows::Forms::Form
	{
	public:
		NetworkProperty(void)
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
		~NetworkProperty()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::Button^  button2;
	private:

	public: System::Windows::Forms::TextBox^  textBox1;
	private:
	public: System::Windows::Forms::TextBox^  textBox2;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::TextBox^  textBox3;
	private:

	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::ComponentModel::IContainer^  components;
	public:
	private:
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Layer Connection Map";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(16, 30);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(274, 212);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &NetworkProperty::richTextBox1_TextChanged);
			this->richTextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &NetworkProperty::richTextBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(342, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NetworkProperty::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(287, 33);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"CHANGE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &NetworkProperty::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(68, 11);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(48, 20);
			this->textBox1->TabIndex = 4;
			this->toolTip1->SetToolTip(this->textBox1, L"This textbox will denote the row of entry that will change in Layer Connection Ma"
				L"p");
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &NetworkProperty::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &NetworkProperty::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(194, 11);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(48, 20);
			this->textBox2->TabIndex = 5;
			this->toolTip1->SetToolTip(this->textBox2, L"This textbox will denote the column of entry that will change in Layer Connection"
				L" Map");
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &NetworkProperty::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &NetworkProperty::textBox2_KeyPress);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Location = System::Drawing::Point(12, 260);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(401, 81);
			this->panel1->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(127, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"(0->No 1->Yes)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Connection:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(139, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"To Layer:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"From Layer:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(68, 58);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(48, 20);
			this->textBox3->TabIndex = 6;
			this->toolTip1->SetToolTip(this->textBox3, L"This textbox will denote the value of entry that will change in Layer Connection "
				L"Map");
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &NetworkProperty::textBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &NetworkProperty::textBox3_KeyPress);
			// 
			// toolTip1
			// 
			this->toolTip1->AutomaticDelay = 100;
			this->toolTip1->AutoPopDelay = 2500;
			this->toolTip1->InitialDelay = 50;
			this->toolTip1->ReshowDelay = 20;
			// 
			// NetworkProperty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(446, 365);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Name = L"NetworkProperty";
			this->Text = L"NetworkProperty";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	public:	std::vector<int>* LayConn;
	public: std::vector<int>* IndexMat;
	public: int var;
	public: int nat=0;
			public: int save = 0;
	public: int c=3;
	public:	int First;
	public: int Second;
	public: int LayerLimit;
#pragma endregion
	private: System::Void richTextBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox3->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox3->TextLength != 0 && textBox3->Text != ".") {
		var = Convert::ToDouble(sss);
		if (var > 1)
		{
			textBox3->Text = Convert::ToString(1);
			var = 1;
		}
	}
}
private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox2->Text;
	Double number;
	String^ sss = s->Replace(".", ",");
	
	bool b = Double::TryParse(sss, number);
	if (textBox2->TextLength != 0 && textBox2->Text != ".") {
		Second = Convert::ToDouble(sss);
		if (Second> LayerLimit)
		{
			textBox2->Text = Convert::ToString(LayerLimit);
			Second=LayerLimit;
		}
		else if (Second == 0)
		{
			textBox2->Text = Convert::ToString(1);
			Second = 1;
		}
	}
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
	String^ s = textBox1->Text;
	Double number;
	String^ sss = s->Replace(".", ",");

	bool b = Double::TryParse(sss, number);
	if (textBox1->TextLength != 0 && textBox1->Text != ".") {
		First = Convert::ToDouble(sss);
		if (First> LayerLimit)
		{
			textBox1->Text = Convert::ToString(LayerLimit);
			First = LayerLimit;
		}
		else if(First==0)
		{
			textBox1->Text = Convert::ToString(1);
			First = 1;
		}
	}

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->TextLength != 0) {
		if (textBox2->TextLength != 0) {
			if (textBox3->TextLength != 0) {
			First = Convert::ToInt32(textBox1->Text);
			int ch = -1;
			Second = Convert::ToInt32(textBox2->Text);
			var = Convert::ToInt32(textBox3->Text);
			LayConn[First - 1][Second - 1] = var;
			for (int a = 0; a < nat; a++) {
				if (IndexMat[a][0] == First && IndexMat[a][1] == Second && IndexMat[a][2] == var)
					ch = -2;
				else if (IndexMat[a][0] == First && IndexMat[a][1] == Second)
					ch = a;
			}
			if (ch == -1) {
				IndexMat[nat][0] = First;
				IndexMat[nat][1] = Second;
				IndexMat[nat][2] = var;
				nat = nat + 1;
			}
			else if (ch > -1)
			{
				IndexMat[ch][0] = First;
				IndexMat[ch][1] = Second;
				IndexMat[ch][2] = var;
			}
			String^cv = "";
			for (int i = 0; i < LayerLimit; i++)
			{
				for (int j = 0; j < LayerLimit; j++) {
					cv += Convert::ToString(LayConn[i][j] + " ");

				}
				cv += "\n";
			}
			richTextBox1->Text = cv;
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
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	save = 1;
	Close();
}
};
}
