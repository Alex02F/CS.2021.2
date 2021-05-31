#include "CalculationStudentsScholarship.h"

Fields::Fields() 
{
    fullname = "";
}

String^ Fields::GetFullName()
{
    return fullname;
}

void Fields::SetFullName(String^ newFullName)
{
    fullname = newFullName;
}

int Fields::GetCourse()
{
    return course;
}

void Fields::SetCourse(int newCourse)
{
    course = newCourse;
}

int Fields::GetAcademicPerfomance()
{
    return academicPerfomance;
}

void Fields::SetAcademicPerfomance(int newAcademicPerfomance)
{
    academicPerfomance = newAcademicPerfomance;
}

int Fields::GetProgress()
{
    return progress;
}

void Fields::SetProgress(int newProgress)
{
    progress = newProgress;
}

CalculationStudentsScholarship::CalculationStudentsScholarship()
{
    fullname = "";
    course = 0;
    academicPerfomance = 0;
    progress = 0;
}

CalculationStudentsScholarship::CalculationStudentsScholarship(String^ _fullname, int _course, int _academicPerfomance, int _progress)
{
    fullname = _fullname;
    course = _course;
    academicPerfomance = _academicPerfomance;
    progress = _progress;
}

CalculationStudentsScholarship::~CalculationStudentsScholarship()
{

}

void CalculationStudentsScholarship::SetFiellds(String^ _fullname, int _course, int _academicPerfomance, int _progress)
{
    fullname = _fullname;
    course = _course;
    academicPerfomance = _academicPerfomance;
    progress = _progress;
}

void CalculationStudentsScholarship::SetBaseRate(float newBaseRate)
{
    baseRate = newBaseRate;
}

String^ CalculationStudentsScholarship::Calculation()
{
    float stipend = 0;
    float buf;
    String^ result;

    // �������� ������������
    switch (academicPerfomance)
    {
    case 2: // �������
        // ���������� ��������� ��������� �� ������� �����
        buf = baseRate * 0.7;
        buf += buf * 0.1 * course; 

        // 10 % �� ���, ���� ��������
        stipend = buf * 0.1;
        stipend = -stipend; // ����� ���� ����� ���������� �����������

        break;

    case 3: // ��������
        stipend = 0;
        break;

    case 4: // ��������
        stipend = baseRate * 0.7;
        break;

    case 5: // ���������
        stipend = baseRate;
        break;

    default:
        break;
    }

    if (academicPerfomance == 4 || academicPerfomance == 5) {
        // ������� �� ����
        stipend += stipend * 0.1 * course;

        // �������� ����������
        if (progress == 1) {
            stipend += stipend * 0.3;
        }
        else  if (progress == 2) {
            stipend += stipend * 0.45;
        }
    }

    // ������������ ����������
    if (stipend < 0) {
        stipend = -stipend;
        result = "���� �������� " + fullname + " �� �������������������� ������������: " + stipend + " ������!";
    }
    else if (stipend == 0) {
        result = "������� " + fullname + " ������ ������ � ��������, ��� ��������� ����������: 0 ������!";
    }
    else {
        result = "��������� �������� " + fullname + ": " + stipend + " ������!";
    }

    return result;
}
