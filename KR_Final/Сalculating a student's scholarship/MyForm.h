#pragma once

#include "CalculationStudentsScholarship.h"

namespace �alculatingastudentsscholarship {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;









	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxFullname;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonCalculate;



	private: System::Windows::Forms::ComboBox^ comboBoxCourse;
	private: System::Windows::Forms::ComboBox^ comboBoxProgress;


	private: System::Windows::Forms::ComboBox^ comboBoxAcademicPerfomance;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������XMLToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->������������XMLToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBoxProgress = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxAcademicPerfomance = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxCourse = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxFullname = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonCalculate = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->������������XMLToolStripMenuItem,
					this->�����������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(849, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ������������XMLToolStripMenuItem
			// 
			this->������������XMLToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->������������XMLToolStripMenuItem->Name = L"������������XMLToolStripMenuItem";
			this->������������XMLToolStripMenuItem->Size = System::Drawing::Size(126, 20);
			this->������������XMLToolStripMenuItem->Text = L"��������� ��� XML";
			this->������������XMLToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������XMLToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->�����������ToolStripMenuItem->Text = L"� ���������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBoxProgress);
			this->groupBox1->Controls->Add(this->comboBoxAcademicPerfomance);
			this->groupBox1->Controls->Add(this->comboBoxCourse);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBoxFullname);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox1->Location = System::Drawing::Point(12, 40);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(823, 84);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"���� ������";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// comboBoxProgress
			// 
			this->comboBoxProgress->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->comboBoxProgress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxProgress->FormattingEnabled = true;
			this->comboBoxProgress->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"��� ����������", L"���������� � ������",
					L"���������� � �����"
			});
			this->comboBoxProgress->Location = System::Drawing::Point(572, 37);
			this->comboBoxProgress->Name = L"comboBoxProgress";
			this->comboBoxProgress->Size = System::Drawing::Size(236, 26);
			this->comboBoxProgress->TabIndex = 10;
			// 
			// comboBoxAcademicPerfomance
			// 
			this->comboBoxAcademicPerfomance->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->comboBoxAcademicPerfomance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxAcademicPerfomance->FormattingEnabled = true;
			this->comboBoxAcademicPerfomance->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"��������", L"��������", L"��������",
					L"�������"
			});
			this->comboBoxAcademicPerfomance->Location = System::Drawing::Point(386, 37);
			this->comboBoxAcademicPerfomance->Name = L"comboBoxAcademicPerfomance";
			this->comboBoxAcademicPerfomance->Size = System::Drawing::Size(180, 26);
			this->comboBoxAcademicPerfomance->TabIndex = 9;
			// 
			// comboBoxCourse
			// 
			this->comboBoxCourse->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->comboBoxCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxCourse->FormattingEnabled = true;
			this->comboBoxCourse->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1 ����", L"2 ����", L"3 ����", L"4 ����" });
			this->comboBoxCourse->Location = System::Drawing::Point(259, 37);
			this->comboBoxCourse->Name = L"comboBoxCourse";
			this->comboBoxCourse->Size = System::Drawing::Size(121, 26);
			this->comboBoxCourse->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(634, 14);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"����������:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(414, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"������������:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(296, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"����:";
			// 
			// textBoxFullname
			// 
			this->textBoxFullname->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBoxFullname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxFullname->Location = System::Drawing::Point(16, 37);
			this->textBoxFullname->Name = L"textBoxFullname";
			this->textBoxFullname->Size = System::Drawing::Size(237, 26);
			this->textBoxFullname->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(110, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"���:";
			// 
			// buttonCalculate
			// 
			this->buttonCalculate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->buttonCalculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonCalculate->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonCalculate->Location = System::Drawing::Point(331, 136);
			this->buttonCalculate->Name = L"buttonCalculate";
			this->buttonCalculate->Size = System::Drawing::Size(189, 32);
			this->buttonCalculate->TabIndex = 2;
			this->buttonCalculate->Text = L"���������� ���������";
			this->buttonCalculate->UseVisualStyleBackColor = false;
			this->buttonCalculate->Click += gcnew System::EventHandler(this, &MyForm::buttonCalculate_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ClientSize = System::Drawing::Size(849, 206);
			this->ControlBox = false;
			this->Controls->Add(this->buttonCalculate);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(865, 288);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������ ��������� ��������";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// ���� 
		CalculationStudentsScholarship^ calculationStudentsScholarship;
		String^ result = "";

		// ������� �����
		private: System::Void buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void ������������XMLToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
        private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
