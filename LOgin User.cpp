#include<iostream>
using namespace std;

int main()
{
	string Username, Password;
	
	while(true) {
	
	cout << "=== LOGIN SYSTEM ===" <<endl;
	cout << "Username:" <<endl;
	cin >> Username;
	
	cout << "Password:" <<endl;
	cin >> Password;
	
	if(Username == "kyura" && Password == "12prmn12")
	{
		cout << "Login berhasil! Akses diberikan." << endl;
		break;
	}else 
	{
		cout << "Login Gagal! Coba Lagi" << endl;
		cout << "Tekan Enter untuk melanjutkan..." << endl;
		cin.ignore();
		cin.get();
	}
	
	system("cls");
}
	 cout << "Selamat datang di sistem!" << endl;
	return 0;
}
