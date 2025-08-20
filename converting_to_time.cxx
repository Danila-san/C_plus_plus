#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
int main()

{
int rez;
int sp;
int dis;
char qw = '/';
	cout <<	"Введите скорость (в км/ч) :  " ;
	cin >> sp;
	if ( ! cin >> sp){
		cout << "Введена не цифра";
		return 1;
	}
	else { 
	cout << "Введите растояние (в км) : ";
	cin >> dis;
	}
		if ( !cin >>dis){
		cout << "Введена не цифра";
		return 1;
	}
	switch (qw){
			case '/' : 
		if (dis<sp){
			cout << "Доступно только целочисленное деление";
		}else {
			rez = dis / sp ; cout << "Результат (в ч):" << rez ;
			}
		break ;}
			return 0;
}