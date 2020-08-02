#include <iostream>
using namespace std;
int main()
{
	float first, second, third, mid_term, final;
	cout << "Enter first quizz (10) : ";
	cin >> first;
	cout << "Enter second quizz (10) : ";
	cin >> second;
	cout << "Enter third quizz (10) : ";
	cin >> third;
	cout << "Enter mid-term  (40) : ";
	cin >> mid_term;
	cout << "Enter  Final (50) : ";
	cin >>  final;

	float total = (first + second + third) / 3; // หาค่าเฉลี่ยของเลขทั้งสามจำนวน
	cout << "Quizz Total : " << total << endl;
	cout << "Mid term : " << mid_term << endl;
	cout << "Final : " << final << endl;

	float total2 = mid_term + final + total;
	cout << "Total : " << total2 << endl;

	cout << "You score is " << ((total2 >= 60) ? "PASS" : "FAIL") << endl; // ใช้แทน if ถ้ามากกว่าหรือเท่ากับ 60 ให้แสดง pass 



}