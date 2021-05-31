#include "MyForm.h"

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

//����� ����� ��� ����������, ��� ����, ����� ����� ���� ��������� 
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	�alculatingastudentsscholarship::MyForm form;
	Application::Run(% form);
}

�alculatingastudentsscholarship::MyForm::MyForm(void)
{
	// ������������� �����������
	InitializeComponent();
	calculationStudentsScholarship = gcnew CalculationStudentsScholarship();
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
	MessageBox::Show(result, "���������!");
}

System::Void �alculatingastudentsscholarship::MyForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("��������� ������?", "�����!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes)
		Application::Exit();
}

System::Void �alculatingastudentsscholarship::MyForm::�����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("������ ��������: ������� ������ ��921��� ��������� �.�.\n������ � ����������: ��������� ������������� ��� ������� ��������� � ����","���������� � ���������!");
}

System::Void �alculatingastudentsscholarship::MyForm::������������XMLToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		if (result == "") {
			MessageBox::Show("�������� ������, ����� ����������!","��������!");
			return;
		}

		DataSet^ ds = gcnew DataSet();		// ������� ���� ��� ������ ��� ������
		DataTable^ dt = gcnew DataTable();	// ������� ���� ��� ������ ������� ������
		dt->TableName = "SaveXML";			// �������� �������
		dt->Columns->Add("Result");			// �������� �������
		ds->Tables->Add(dt);				// � ds ��������� �������, � ��������� � ���������, ���������� ����

		DataRow^ row = ds->Tables["SaveXML"]->NewRow(); // ������� ����� ������ � �������, ���������� � ds
		row["Result"] = result;							// � ������� ���� ������ ������� ������
		ds->Tables["SaveXML"]->Rows->Add(row);			// ���������� ���� ���� ������ � ������� ds

		ds->WriteXml("..\\Save\\Data.xml");
		MessageBox::Show("XML ���� ������� ��������!", "���������!");
	}
	catch (IOException^ e) {
		// ���� � ����� try ��������� ������ ���� IOException (�� ���� �����, ������)
		// ��������� ���� catch, ������� ������� ������ ������ � ������� ��,
		// ��� ����, �� �������� ������ ����������� �������
		MessageBox::Show(e->ToString(), "������!");
	}
}
