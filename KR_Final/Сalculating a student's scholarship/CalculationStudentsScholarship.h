#pragma once

using namespace System;
using namespace System::Windows::Forms;

// ������� ����������� ����� ����
ref class Fields {
protected: 
	String^ fullname;
	int course;
	int academicPerfomance;
	int progress;

public:
	Fields(); 
	String^ GetFullName(); 
	void SetFullName(String^ newFullName);
	int GetCourse();
	void SetCourse(int newCourse);
	int GetAcademicPerfomance();
	void SetAcademicPerfomance(int newAcademicPerfomance);
	int GetProgress();
	void SetProgress(int newProgress);
};

// ����������� ����������� ����� ��� ��������� ��������� ��������� 
ref class CalculationStudentsScholarship : Fields
{
	// ���� ������
private: 
	float baseRate = 5000;

	// ������ ������
public: 
	CalculationStudentsScholarship();								// ����������� �� ��������� - ������� ������ ������ ������
	CalculationStudentsScholarship(String^ _fullname, int _course,	// ����������� � ����������� - ������ ������ ������� ������
		int _academicPerfomance, int _progress);
	~CalculationStudentsScholarship();								// ���������� - ������� ������ ������

	void SetFiellds(String^ _fullname, int _course,	// ������ ���� �������
		int _academicPerfomance, int _progress);
	void SetBaseRate(float newBaseRate); //����� ��� ��������� ������� ������
	String^ Calculation(); // �������
};

