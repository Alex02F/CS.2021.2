#include "MyForm.h"

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

//����� ����� ��� ����������, ��� ����, ����� ����� ���� ��������� 
[STAThreadAttribute]
void main(array<String^>^ args) {
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);

	�alculatingastudentsscholarship::MyForm form;
	System::Windows::Forms::Application::Run(% form);
}

�alculatingastudentsscholarship::MyForm::MyForm(void)
{
	// ������������� �����������
	InitializeComponent();
	calculationStudentsScholarship = gcnew CalculationStudentsScholarship();

	dataGridView->TopLeftHeaderCell->Value = "�";
}

System::Void �alculatingastudentsscholarship::MyForm::buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e)
{
	// ��������� ������
	String^ fullname;
	int course;
	int academicPerfomance;
	int progress;

	fullname = textBoxFullname->Text;
	if (fullname == "") {
		MessageBox::Show("������� ��� ��������!","��������!");
		return;
	}

	course = comboBoxCourse->SelectedIndex;
	if (course == -1) {
		MessageBox::Show("�������� ���� ��������!", "��������!");
		return;
	}

	academicPerfomance = comboBoxAcademicPerfomance->SelectedIndex;
	if (academicPerfomance == -1) {
		MessageBox::Show("�������� ������������ ��������!", "��������!");
		return;
	}
	else {
		// ��������� ����������� ������ ������������ ���������� ������
		switch (academicPerfomance)
		{
		case 0:
			academicPerfomance = 5;
			break;

		case 1:
			academicPerfomance = 4;
			break;

		case 2:
			academicPerfomance = 3;
			break;

		case 3:
			academicPerfomance = 2;
			break;

		default:
			break;
		}
	}

	progress = comboBoxProgress->SelectedIndex;
	if (progress == -1) {
		MessageBox::Show("�������� ���������� ��������!", "��������!");
		return;
	}

	// ������ ������ ��� ��������
	calculationStudentsScholarship->SetFiellds(fullname, course, academicPerfomance, progress);

	// �������� ���������
	result = calculationStudentsScholarship->Calculation();

	// ����� ����������
	//MessageBox::Show(result, "���������!");

	// ��������� ������ � �������
	dataGridView->Rows->Add(fullname, comboBoxCourse->Items[comboBoxCourse->SelectedIndex]->ToString(),
		comboBoxAcademicPerfomance->Items[comboBoxAcademicPerfomance->SelectedIndex]->ToString(),
		comboBoxProgress->Items[comboBoxProgress->SelectedIndex]->ToString(), result);
}

System::Void �alculatingastudentsscholarship::MyForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("��������� ������?", "�����!", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
		System::Windows::Forms::Application::Exit();
}

System::Void �alculatingastudentsscholarship::MyForm::�����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("������ ��������: ������� ��.��921��� ��������� �.�. \n������ � ����������: ��������� ������������� ��� ������� ��������� ��������� ���� ","���������� � ���������! ");
}



System::Void �alculatingastudentsscholarship::MyForm::dataGridView_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e)
{
	for (int i = 0; i < dataGridView->Rows->Count; i++) {
		dataGridView->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
	}
}

System::Void �alculatingastudentsscholarship::MyForm::����������EXCELToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Microsoft::Office::Interop::Excel::Application^ ExcelApp = gcnew Microsoft::Office::Interop::Excel::Application();
	Microsoft::Office::Interop::Excel::Workbook^ ExcelWorkBook;
	Microsoft::Office::Interop::Excel::Worksheet^ ExcelWorkSheet;

	ExcelWorkBook = ExcelApp->Workbooks->Add(System::Reflection::Missing::Value);

	for (int i = 0; i < dataGridView->Rows->Count; i++)
	{
		for (int j = 0; j < dataGridView->ColumnCount; j++)
		{
			ExcelApp->Cells[i + 1, j + 1] = dataGridView->Rows[i]->Cells[j]->Value;
		}
	}

	ExcelApp->Visible = true;
	ExcelApp->UserControl = true;
}
