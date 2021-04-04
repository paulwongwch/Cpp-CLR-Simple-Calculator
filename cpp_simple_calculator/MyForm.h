#pragma once

#include <cmath>

namespace cppsimplecalculator {

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
	private: System::Windows::Forms::TextBox^ text_display;
	protected:


	private: System::Windows::Forms::Button^ button_backspace;
	private: System::Windows::Forms::Button^ button_clearEntry;
	private: System::Windows::Forms::Button^ button_clearAll;




	private: System::Windows::Forms::Button^ button_changeSign;

	private: System::Windows::Forms::Button^ button_digit_7;
	private: System::Windows::Forms::Button^ button_digit_8;
	private: System::Windows::Forms::Button^ button_digit_9;
	private: System::Windows::Forms::Button^ button_add;





	private: System::Windows::Forms::Button^ button_digit_4;
	private: System::Windows::Forms::Button^ button_digit_5;
	private: System::Windows::Forms::Button^ button_digit_6;
	private: System::Windows::Forms::Button^ button_subtract;




	private: System::Windows::Forms::Button^ button_digit_1;

	private: System::Windows::Forms::Button^ button_digit_2;
	private: System::Windows::Forms::Button^ button_digit_3;
	private: System::Windows::Forms::Button^ button_multiply;




	private: System::Windows::Forms::Button^ button_digit_0;
	private: System::Windows::Forms::Button^ button_dot;
	private: System::Windows::Forms::Button^ button_equal;





	private: System::Windows::Forms::Button^ button_divide;

	protected:

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
			this->text_display = (gcnew System::Windows::Forms::TextBox());
			this->button_backspace = (gcnew System::Windows::Forms::Button());
			this->button_clearEntry = (gcnew System::Windows::Forms::Button());
			this->button_clearAll = (gcnew System::Windows::Forms::Button());
			this->button_changeSign = (gcnew System::Windows::Forms::Button());
			this->button_digit_7 = (gcnew System::Windows::Forms::Button());
			this->button_digit_8 = (gcnew System::Windows::Forms::Button());
			this->button_digit_9 = (gcnew System::Windows::Forms::Button());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button_digit_4 = (gcnew System::Windows::Forms::Button());
			this->button_digit_5 = (gcnew System::Windows::Forms::Button());
			this->button_digit_6 = (gcnew System::Windows::Forms::Button());
			this->button_subtract = (gcnew System::Windows::Forms::Button());
			this->button_digit_1 = (gcnew System::Windows::Forms::Button());
			this->button_digit_2 = (gcnew System::Windows::Forms::Button());
			this->button_digit_3 = (gcnew System::Windows::Forms::Button());
			this->button_multiply = (gcnew System::Windows::Forms::Button());
			this->button_digit_0 = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->button_equal = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// text_display
			// 
			this->text_display->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text_display->Location = System::Drawing::Point(11, 24);
			this->text_display->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->text_display->Multiline = true;
			this->text_display->Name = L"text_display";
			this->text_display->Size = System::Drawing::Size(410, 94);
			this->text_display->TabIndex = 1;
			this->text_display->Text = L"0";
			this->text_display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button_backspace
			// 
			this->button_backspace->Font = (gcnew System::Drawing::Font(L"Wingdings", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button_backspace->Location = System::Drawing::Point(11, 133);
			this->button_backspace->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_backspace->Name = L"button_backspace";
			this->button_backspace->Size = System::Drawing::Size(98, 78);
			this->button_backspace->TabIndex = 0;
			this->button_backspace->Text = L"จ";
			this->button_backspace->UseVisualStyleBackColor = true;
			this->button_backspace->Click += gcnew System::EventHandler(this, &MyForm::EnterBackspace);
			// 
			// button_clearEntry
			// 
			this->button_clearEntry->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clearEntry->Location = System::Drawing::Point(116, 133);
			this->button_clearEntry->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_clearEntry->Name = L"button_clearEntry";
			this->button_clearEntry->Size = System::Drawing::Size(98, 78);
			this->button_clearEntry->TabIndex = 2;
			this->button_clearEntry->Text = L"CE";
			this->button_clearEntry->UseVisualStyleBackColor = true;
			this->button_clearEntry->Click += gcnew System::EventHandler(this, &MyForm::EnterClearEntry);
			// 
			// button_clearAll
			// 
			this->button_clearAll->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clearAll->Location = System::Drawing::Point(221, 133);
			this->button_clearAll->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_clearAll->Name = L"button_clearAll";
			this->button_clearAll->Size = System::Drawing::Size(98, 78);
			this->button_clearAll->TabIndex = 3;
			this->button_clearAll->Text = L"C";
			this->button_clearAll->UseVisualStyleBackColor = true;
			this->button_clearAll->Click += gcnew System::EventHandler(this, &MyForm::EnterClearAll);
			// 
			// button_changeSign
			// 
			this->button_changeSign->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_changeSign->Location = System::Drawing::Point(324, 133);
			this->button_changeSign->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_changeSign->Name = L"button_changeSign";
			this->button_changeSign->Size = System::Drawing::Size(98, 78);
			this->button_changeSign->TabIndex = 4;
			this->button_changeSign->Text = L"กำ";
			this->button_changeSign->UseVisualStyleBackColor = true;
			this->button_changeSign->Click += gcnew System::EventHandler(this, &MyForm::EnterChangeSign);
			// 
			// button_digit_7
			// 
			this->button_digit_7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_digit_7->Location = System::Drawing::Point(11, 217);
			this->button_digit_7->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_digit_7->Name = L"button_digit_7";
			this->button_digit_7->Size = System::Drawing::Size(98, 78);
			this->button_digit_7->TabIndex = 0;
			this->button_digit_7->Text = L"7";
			this->button_digit_7->UseVisualStyleBackColor = true;
			this->button_digit_7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button_digit_8
			// 
			this->button_digit_8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_digit_8->Location = System::Drawing::Point(116, 217);
			this->button_digit_8->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_digit_8->Name = L"button_digit_8";
			this->button_digit_8->Size = System::Drawing::Size(98, 78);
			this->button_digit_8->TabIndex = 2;
			this->button_digit_8->Text = L"8";
			this->button_digit_8->UseVisualStyleBackColor = true;
			this->button_digit_8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button_digit_9
			// 
			this->button_digit_9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_digit_9->Location = System::Drawing::Point(221, 217);
			this->button_digit_9->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_digit_9->Name = L"button_digit_9";
			this->button_digit_9->Size = System::Drawing::Size(98, 78);
			this->button_digit_9->TabIndex = 3;
			this->button_digit_9->Text = L"9";
			this->button_digit_9->UseVisualStyleBackColor = true;
			this->button_digit_9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button_add
			// 
			this->button_add->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_add->Location = System::Drawing::Point(324, 217);
			this->button_add->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(98, 78);
			this->button_add->TabIndex = 4;
			this->button_add->Text = L"+";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button_digit_4
			// 
			this->button_digit_4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_digit_4->Location = System::Drawing::Point(11, 302);
			this->button_digit_4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_digit_4->Name = L"button_digit_4";
			this->button_digit_4->Size = System::Drawing::Size(98, 78);
			this->button_digit_4->TabIndex = 0;
			this->button_digit_4->Text = L"4";
			this->button_digit_4->UseVisualStyleBackColor = true;
			this->button_digit_4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button_digit_5
			// 
			this->button_digit_5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_digit_5->Location = System::Drawing::Point(116, 302);
			this->button_digit_5->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_digit_5->Name = L"button_digit_5";
			this->button_digit_5->Size = System::Drawing::Size(98, 78);
			this->button_digit_5->TabIndex = 2;
			this->button_digit_5->Text = L"5";
			this->button_digit_5->UseVisualStyleBackColor = true;
			this->button_digit_5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button_digit_6
			// 
			this->button_digit_6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_digit_6->Location = System::Drawing::Point(221, 302);
			this->button_digit_6->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_digit_6->Name = L"button_digit_6";
			this->button_digit_6->Size = System::Drawing::Size(98, 78);
			this->button_digit_6->TabIndex = 3;
			this->button_digit_6->Text = L"6";
			this->button_digit_6->UseVisualStyleBackColor = true;
			this->button_digit_6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button_subtract
			// 
			this->button_subtract->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_subtract->Location = System::Drawing::Point(324, 302);
			this->button_subtract->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_subtract->Name = L"button_subtract";
			this->button_subtract->Size = System::Drawing::Size(98, 78);
			this->button_subtract->TabIndex = 4;
			this->button_subtract->Text = L"-";
			this->button_subtract->UseVisualStyleBackColor = true;
			this->button_subtract->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button_digit_1
			// 
			this->button_digit_1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_digit_1->Location = System::Drawing::Point(11, 385);
			this->button_digit_1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_digit_1->Name = L"button_digit_1";
			this->button_digit_1->Size = System::Drawing::Size(98, 78);
			this->button_digit_1->TabIndex = 0;
			this->button_digit_1->Text = L"1";
			this->button_digit_1->UseVisualStyleBackColor = true;
			this->button_digit_1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button_digit_2
			// 
			this->button_digit_2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_digit_2->Location = System::Drawing::Point(116, 385);
			this->button_digit_2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_digit_2->Name = L"button_digit_2";
			this->button_digit_2->Size = System::Drawing::Size(98, 78);
			this->button_digit_2->TabIndex = 2;
			this->button_digit_2->Text = L"2";
			this->button_digit_2->UseVisualStyleBackColor = true;
			this->button_digit_2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button_digit_3
			// 
			this->button_digit_3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_digit_3->Location = System::Drawing::Point(221, 385);
			this->button_digit_3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_digit_3->Name = L"button_digit_3";
			this->button_digit_3->Size = System::Drawing::Size(98, 78);
			this->button_digit_3->TabIndex = 3;
			this->button_digit_3->Text = L"3";
			this->button_digit_3->UseVisualStyleBackColor = true;
			this->button_digit_3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button_multiply
			// 
			this->button_multiply->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_multiply->Location = System::Drawing::Point(324, 385);
			this->button_multiply->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_multiply->Name = L"button_multiply";
			this->button_multiply->Size = System::Drawing::Size(98, 78);
			this->button_multiply->TabIndex = 4;
			this->button_multiply->Text = L"*";
			this->button_multiply->UseVisualStyleBackColor = true;
			this->button_multiply->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button_digit_0
			// 
			this->button_digit_0->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_digit_0->Location = System::Drawing::Point(11, 468);
			this->button_digit_0->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_digit_0->Name = L"button_digit_0";
			this->button_digit_0->Size = System::Drawing::Size(98, 78);
			this->button_digit_0->TabIndex = 0;
			this->button_digit_0->Text = L"0";
			this->button_digit_0->UseVisualStyleBackColor = true;
			this->button_digit_0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button_dot
			// 
			this->button_dot->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_dot->Location = System::Drawing::Point(116, 468);
			this->button_dot->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(98, 78);
			this->button_dot->TabIndex = 2;
			this->button_dot->Text = L".";
			this->button_dot->UseVisualStyleBackColor = true;
			this->button_dot->Click += gcnew System::EventHandler(this, &MyForm::EnterDecimal);
			// 
			// button_equal
			// 
			this->button_equal->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_equal->Location = System::Drawing::Point(221, 468);
			this->button_equal->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_equal->Name = L"button_equal";
			this->button_equal->Size = System::Drawing::Size(98, 78);
			this->button_equal->TabIndex = 3;
			this->button_equal->Text = L"=";
			this->button_equal->UseVisualStyleBackColor = true;
			this->button_equal->Click += gcnew System::EventHandler(this, &MyForm::EnterEqual);
			// 
			// button_divide
			// 
			this->button_divide->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_divide->Location = System::Drawing::Point(324, 468);
			this->button_divide->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(98, 78);
			this->button_divide->TabIndex = 4;
			this->button_divide->Text = L"/";
			this->button_divide->UseVisualStyleBackColor = true;
			this->button_divide->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(433, 567);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->button_multiply);
			this->Controls->Add(this->button_subtract);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->button_changeSign);
			this->Controls->Add(this->button_equal);
			this->Controls->Add(this->button_digit_3);
			this->Controls->Add(this->button_digit_6);
			this->Controls->Add(this->button_digit_9);
			this->Controls->Add(this->button_clearAll);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->button_digit_2);
			this->Controls->Add(this->button_digit_5);
			this->Controls->Add(this->button_digit_0);
			this->Controls->Add(this->button_digit_1);
			this->Controls->Add(this->button_digit_8);
			this->Controls->Add(this->button_digit_4);
			this->Controls->Add(this->button_clearEntry);
			this->Controls->Add(this->button_digit_7);
			this->Controls->Add(this->text_display);
			this->Controls->Add(this->button_backspace);
			this->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"CppSimpleCalculator";
			this->Text = L"CppSimpleCalculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		double firstDigit = 0;
		bool afterEqual = false;
		String^ operators = "";
		
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
			Button^ Numbers = safe_cast<Button^>(sender);
			if (afterEqual || text_display->Text == "0" || text_display->Text == "+" || text_display->Text == "-" || text_display->Text == "*" || text_display->Text == "/") {
				text_display->Text = Numbers->Text;
			}
			else {
				text_display->Text += Numbers->Text;
			}
			afterEqual = false;
		}
		private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
			Button^ NumbersOp = safe_cast<Button^>(sender);
			if (!(text_display->Text == "+" || text_display->Text == "-" || text_display->Text == "*" || text_display->Text == "/")) {
				if (operators == "") {
					firstDigit = Double::Parse(text_display->Text);
				}
				else if (operators == "+") {
					firstDigit += Double::Parse(text_display->Text);
				}
				else if (operators == "-") {
					firstDigit -= Double::Parse(text_display->Text);
				}
				else if (operators == "*") {
					firstDigit *= Double::Parse(text_display->Text);
				}
				else if (operators == "/") {
					firstDigit /= Double::Parse(text_display->Text);
				}
				if (std::isnan(firstDigit)) {
					firstDigit = 0;
				}
			}
			text_display->Text = operators = NumbersOp->Text;
			afterEqual = false;
		}
		private: System::Void EnterDecimal(System::Object^ sender, System::EventArgs^ e) {
			if (text_display->Text->Contains(".")) {
				// pass
			}
			else if (afterEqual || text_display->Text == "+" || text_display->Text == "-" || text_display->Text == "*" || text_display->Text == "/") {
				text_display->Text = "0.";
			}
			else {
				text_display->Text += ".";
			}
			afterEqual = false;
		}
		private: System::Void EnterEqual(System::Object^ sender, System::EventArgs^ e) {
			if (text_display->Text == "+" || text_display->Text == "-" || text_display->Text == "*" || text_display->Text == "/") {
				// pass
			}
			else {
				double tmp = Double::Parse(text_display->Text);
				double result = 0;
				if (operators == "+") {
					result = firstDigit + tmp;
					if (!std::isnan(result)) {
						text_display->Text = System::Convert::ToString(result);
					}
				}
				else if (operators == "-") {
					result = firstDigit - tmp;
					if (!std::isnan(result)) {
						text_display->Text = System::Convert::ToString(result);
					}
				}
				else if (operators == "*") {
					result = firstDigit * tmp;
					if (!std::isnan(result)) {
						text_display->Text = System::Convert::ToString(result);
					}
				}
				else if (operators == "/") {
					result = firstDigit / tmp;
					if (!std::isnan(result)) {
						text_display->Text = System::Convert::ToString(result);
					}
				}
				operators = "";
				afterEqual = true;
			}
		}
		private: System::Void EnterClearEntry(System::Object^ sender, System::EventArgs^ e) {
			text_display->Text = "0";
			afterEqual = false;
		}
		private: System::Void EnterClearAll(System::Object^ sender, System::EventArgs^ e) {
			firstDigit = 0;
			operators = "";
			text_display->Text = "0";
			afterEqual = false;
		}
		private: System::Void EnterChangeSign(System::Object^ sender, System::EventArgs^ e) {
			if (text_display->Text == "+" || text_display->Text == "-" || text_display->Text == "*" || text_display->Text == "/") {
				// pass
			}
			else {
				text_display->Text = System::Convert::ToString(-Double::Parse(text_display->Text));
			}
		}
		private: System::Void EnterBackspace(System::Object^ sender, System::EventArgs^ e) {
			if (text_display->Text->Length > 0) {
				text_display->Text = text_display->Text->Remove(text_display->Text->Length - 1, 1);
			}
			if (text_display->Text == "") {
				text_display->Text = "0";
			}
			afterEqual = false;
		}
};
}
