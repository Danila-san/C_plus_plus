#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
int main()
{
int rez;
int n1;
int n2;
char qw;
	cout <<	"Введите 1-ое число :  " ;
	cin >> n1;
	if ( ! cin >> n1){
		cout << "Введена не цифра";
		return 1;
	}
	else { 
	cout <<"Выберети действие : " ;
	cin >> qw;}
	cout << "Введите 2-ое число : ";
	cin >> n2;
		if ( !cin >>n2){
		cout << "Введена не цифра";
		return 1;
	}
	else 
	switch ( qw ) {
		case '+' : rez = n1 + n2 ; cout << "Результат :" << rez; break ;
		case '-' :  rez = n1  - n2 ; cout << "Результат :" << rez; break ;
		case '/' : 
		if (n2 == 0){
			cout << "На 0 делить нельзя"; 
		}else {
			rez = n1 / n2 ; cout << "Результат :" << rez;
		}
		if (n1<n2){
			cout << "2-ое число больше 1-ого, целочисленное деление не возможно";
			return 1 ;
		}
			break ;
		case '*' :  rez = n1 * n2 ; cout << "Результат :" << rez; break ;
	default : 
	cout << "Ошибка действие введено не верно";
	}
	return 0;
}