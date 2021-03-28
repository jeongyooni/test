#include <iostream>
#include <string>
using namespace std;

int main()
{
	int price1, price2, price3;//사과, 바나나, 오렌지의 가격 선언
	int num1, num2, num3;//사과, 바나나, 오렌지의 개수 선언
	int pay;//총가격 선언

	cout << "당신의 이름은 무엇입니까?";
	string name;//문자열의 크기 제약 없음
	getline(cin, name);//name에 이름 입력
	cout << "반갑습니다." << name << "님" << endl;

	cout << "apple의 가격은 얼마입니까?";
	cin >> price1;//사과 가격입력
	cout << "banana의 가격은 얼마입니까?";
	cin >> price2;//바나나 가격입력
	cout << "orange의 가격은 얼마입니까?";
	cin >> price3;//오렌지 가격입력

	cout << "apple은 몇 개 있습니까?";
	cin >> num1;//사과 개수입력
	cout << "banana은 몇 개 있습니까?";
	cin >> num2;//바나나 개수입력
	cout << "orange은 몇 개 있습니까?";
	cin >> num3;//오렌지 개수입력

	pay = price1 * num1 + price2 * num2 + price3 * num3;
	cout << "총" << pay << "원 입니다.";

	return 0;
}