#include<iostream>
#include<string>
using namespace std;

extern void menu();
extern void show_menu();

extern wstring** enter_email();
extern wstring** enter_real_name();

extern char** enter_password();
extern char** enter_phone_number();
extern char** enter_real_age();

extern char** enter_new_password();

extern wstring** enter_new_email();

extern wstring** enter_YouTube_email();
extern char** enter_YouTube_password();

extern wstring** enter_TikTok_email();
extern char** enter_TikTok_password();

extern wstring** enter_instagram_email();
extern char** enter_instagram_password();

//extern char** enter_date();

extern wstring** enter_hero_name();
extern char** enter_age_hero();

int startupAuthoriz(int argsC,
	char* argsV[])
{
	int passwordLength = 0;
	for (int argumentIndex = 1;
		argumentIndex < argsC;
		argumentIndex++)
	{
		const char* argK = argsV[argumentIndex];
		const char* argV = argsV[argumentIndex + 1];
		if (strcmp(argK, "-login") == 0)
		{
			cout << "You are logged in as\t" << argV << endl;
		}
		else
		{
			if (strcmp(argK, "-password") == 0)
			{
				passwordLength = strlen(argV);
				break;
			}
		}
	}
	
	return passwordLength;

	//Comp Game Account
	//I used English because it is comfort.
	//If I did something wrong, please let me know.

}
int main(int argsC,
	char* argsV[],
	char* environmentParameters[]
)
{
	setlocale(LC_ALL, "");
	if (argsC > 1)
	{
		return startupAuthoriz(argsC, argsV);
	}
	else
	{
		menu();
	}
	cin.get();
	return 0;
}
#ifndef INPUT_MAIN_SAMPLE_H
#define INPUT_MAIN_SAMPLE_H

void show_menu()
{
	wcout << L"Actions on the account:" << endl;
	wcout << L"1.) Sign Up" << endl;
	wcout << L"2.) Login" << endl;
	wcout << L"3.) Reset password" << endl;
	wcout << L"4.) Reset email" << endl;
	wcout << L"5.) Connect YouTube account" << endl;
	wcout << L"6.) Connect TikTok account" << endl;
	wcout << L"7.) Connect instagram account" << endl;
	wcout << L"8.) Cancel" << endl;
}
wstring** enter_hero_name()
{
	wstring* hero_name = new wstring();
	wcout << L"Enter hero name(login):" << endl;
	wcin.ignore();
	getline(wcin, *hero_name);
	return &hero_name;
}
wstring** enter_email()
{
	wstring* email = new wstring();
	wcout << L"Enter email:" << endl;
	wcin.ignore();
	getline(wcin, *email);
	return &email;
}
wstring** enter_real_name()
{
	wstring* real_name = new wstring();
	wcout << L"Enter nickname:" << endl;
	wcin.ignore();
	getline(wcin, *real_name);
	return &real_name;
}
wstring** enter_new_email()
{
	wstring* new_email = new wstring();
	wcout << L"Enter new email:" << endl;
	wcin.ignore();
	getline(wcin, *new_email);
	return &new_email;
}
wstring** enter_YouTube_email()
{
	wstring* YouTube_email = new wstring();
	wcout << L"Enter YouTube email:" << endl;
	wcin.ignore();
	getline(wcin, *YouTube_email);
	return &YouTube_email;
}
wstring** enter_TikTok_email()
{
	wstring* TikTok_email = new wstring();
	wcout << L"Enter TikTok email:" << endl;
	wcin.ignore();
	getline(wcin, *TikTok_email);
	return &TikTok_email;
}
wstring** enter_instagram_email()
{
	wstring* instagram_email = new wstring();
	wcout << L"Enter instagram email:" << endl;
	wcin.ignore();
	getline(wcin, *instagram_email);
	return &instagram_email;
}
char** enter_password()
{
	const short int MAX_PASSWORD_LENGTH = 16; //16 max
	char* password = new char[MAX_PASSWORD_LENGTH];
	wcout << L"Enter password:" << endl;
	cin >> password;
	return &password;
}
char** enter_phone_number()
{
	const short int MAX_PASSWORD_LENGTH = 12; //12 max +38 000 000 00 00
	char* phone_number = new char[MAX_PASSWORD_LENGTH];
	wcout << L"Enter phone number:" << endl;
	cin >> phone_number;
	return &phone_number;
}
char** enter_real_age()
{
	const short int MAX_PASSWORD_LENGTH = 3; //3 max
	char* real_age = new char[MAX_PASSWORD_LENGTH];
	wcout << L"Enter real age:" << endl;
	cin >> real_age;
	return &real_age;
}
char** enter_date()
{
	const short int MAX_PASSWORD_LENGTH = 10; //10 max 01.01.2000
	char* date = new char[MAX_PASSWORD_LENGTH];
	wcout << L"Enter date:" << endl;
	cin >> date;
	return &date;
}
char** enter_age_hero()
{
	const short int MAX_PASSWORD_LENGTH = 3; //3 max
	char* age_hero = new char[MAX_PASSWORD_LENGTH];
	wcout << L"Enter age hero:" << endl;
	cin >> age_hero;
	return &age_hero;
}
char** enter_new_password()
{
	const short int MAX_PASSWORD_LENGTH = 16; //16 max
	char* new_password = new char[MAX_PASSWORD_LENGTH];
	wcout << L"Enter new password:" << endl;
	cin >> new_password;
	return &new_password;
}
char** enter_YouTube_password()
{
	const short int MAX_PASSWORD_LENGTH = 16; //16 max
	char* YouTube_password = new char[MAX_PASSWORD_LENGTH];
	wcout << L"Enter YouTube password:" << endl;
	cin >> YouTube_password;
	return &YouTube_password;
}
char** enter_TikTok_password()
{
	const short int MAX_PASSWORD_LENGTH = 16; //16 max
	char* TikTok_password = new char[MAX_PASSWORD_LENGTH];
	wcout << L"Enter TikTok password:" << endl;
	cin >> TikTok_password;
	return &TikTok_password;
}
char** enter_instagram_password()
{
	const short int MAX_PASSWORD_LENGTH = 16; //16 max
	char* instagram_password = new char[MAX_PASSWORD_LENGTH];
	wcout << L"Enter instagram password:" << endl;
	cin >> instagram_password;
	return &instagram_password;
}
void menu()
{
	short int selectedMenuItem = 1;
	wstring hero_name = L"";
	wstring email = L"";
	wstring real_name = L"";
	wstring new_email = L"";
	wstring YouTube_email = L"";
	wstring TikTok_email = L"";
	wstring instagram_email= L"";
	char* password = nullptr;
	char* phone_number = nullptr;
	char* real_age = nullptr;
	char* date = nullptr;
	char* age_hero = nullptr;
	char* new_password = nullptr;
	char* YouTube_password = nullptr;
	char* TikTok_password = nullptr;
	char* instagram_password = nullptr;

	show_menu();
	cin >> selectedMenuItem;
	switch (selectedMenuItem)
	{
	case 1:
		email = **enter_email();
		real_name = **enter_real_name();
		password = *enter_password();
		phone_number = *enter_phone_number();
		real_age = *enter_real_age();
		hero_name = **enter_hero_name();
		age_hero = *enter_age_hero();
		break;
	case 2:
			email = **enter_email();
			hero_name = **enter_hero_name();
			password = *enter_password();
			break;
	case 3:
		password = *enter_password();
		new_password = *enter_new_password();
		break;
	case 4:
		email = **enter_email();
		new_email = **enter_new_email();
		break;
	case 5:
		YouTube_email = **enter_YouTube_email();
		YouTube_password = *enter_YouTube_password();
		break;
	case 6:
		TikTok_email = **enter_TikTok_email();
		TikTok_password = *enter_TikTok_password();
		break;
	case 7:
		instagram_email = **enter_instagram_email();
		instagram_password = *enter_instagram_password();
		break;
	case 8:
	default:
		exit(0);
	}
	if (!email.empty())
	{
		wcout << L"Your email:\t" << email << endl;
	}
	if (!real_name.empty())
	{
		wcout << L"Your nikname:\t" << real_name << endl;
	}
	if (!hero_name.empty())
	{
		wcout << L"Your hero name:\t" << hero_name << endl;
	}
	if (!new_email.empty())
	{
		wcout << L"Your new email:\t" << new_email << endl;
	}
	if (!YouTube_email.empty())
	{
		wcout << L"Your YouTube email:\t" << YouTube_email << endl;
	}
	if (!TikTok_email.empty())
	{
		wcout << L"Your TikTok email:\t" << TikTok_email << endl;
	}
	if (!instagram_email.empty())
	{
		wcout << L"Your instagram email :\t" << instagram_email << endl;
	}
	if (password != nullptr)
	{
		wcout << L"Your password:\t"
			<< password << endl;
		delete[] password;
	}
	if (phone_number != nullptr)
	{
		wcout << L"Your phone number:\t"
			<< phone_number << endl;
		delete[] phone_number;
	}
	if (real_age != nullptr)
	{
		wcout << L"Your real age:\t"
			<< real_age << endl;
		delete[] real_age;
	}
	if (date != nullptr)
	{
		wcout << L"Your date:\t"
			<< date << endl;
		delete[] date;
	}
	if (age_hero != nullptr)
	{
		wcout << L"Your age hero:\t"
			<< age_hero << endl;
		delete[] age_hero;
	}
	if (new_password != nullptr)
	{
		wcout << L"Your new password:\t"
			<< new_password << endl;
		delete[] new_password;
	}
	if (YouTube_password != nullptr)
	{
		wcout << L"Your YouTube password:\t"
			<< YouTube_password << endl;
		delete[] YouTube_password;
	}
	if (TikTok_password != nullptr)
	{
		wcout << L"Your TikTok password:\t"
			<< TikTok_password << endl;
		delete[] TikTok_password;
	}
	if (instagram_password != nullptr)
	{
		wcout << L"Your instagram password:\t"
			<< instagram_password << endl;
		delete[] instagram_password;
	}
}
#endif