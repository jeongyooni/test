#include <iostream>
#include <string>
using namespace std;

int main()
{
	int price1, price2, price3;//���, �ٳ���, �������� ���� ����
	int num1, num2, num3;//���, �ٳ���, �������� ���� ����
	int pay;//�Ѱ��� ����

	cout << "����� �̸��� �����Դϱ�?";
	string name;//���ڿ��� ũ�� ���� ����
	getline(cin, name);//name�� �̸� �Է�
	cout << "�ݰ����ϴ�." << name << "��" << endl;

	cout << "apple�� ������ ���Դϱ�?";
	cin >> price1;//��� �����Է�
	cout << "banana�� ������ ���Դϱ�?";
	cin >> price2;//�ٳ��� �����Է�
	cout << "orange�� ������ ���Դϱ�?";
	cin >> price3;//������ �����Է�

	cout << "apple�� �� �� �ֽ��ϱ�?";
	cin >> num1;//��� �����Է�
	cout << "banana�� �� �� �ֽ��ϱ�?";
	cin >> num2;//�ٳ��� �����Է�
	cout << "orange�� �� �� �ֽ��ϱ�?";
	cin >> num3;//������ �����Է�

	pay = price1 * num1 + price2 * num2 + price3 * num3;
	cout << "��" << pay << "�� �Դϴ�.";

	return 0;
}