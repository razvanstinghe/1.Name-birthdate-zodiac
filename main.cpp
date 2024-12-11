#include <iostream>
#include <string>
using namespace std;

int main() {

  string MyString;
  string myLastName;
  string myMiddleName;
  string myFirstName;

  char separator = '/';
  int day_birthdate;
  int month_birthdate;
  int year_birthdate;

  cout << "Fill-in your Last Name: " << endl;
  getline (cin, myLastName);

  cout << endl;

  cout << "Fill-in your Middle Name (if you don't have one, just press ENTER or fill-in 'None') : " << endl;
  getline (cin, myMiddleName) ;

  cout << endl;

  cout << "Fill-in your First Name: " << endl;
  getline (cin, myFirstName) ;

  cout << endl;

  cout << "Fill-in you birth day: " << endl;
  cin >> day_birthdate ;

  cout << endl;

  cout << "Fill-in you birth month: " << endl;
  cin >> month_birthdate ;

  cout << endl;

  cout << "Fill-in you birth year: " << endl;
  cin >> year_birthdate ;

  cout << endl;

  cout << "Your full name: " ;
  cout << myLastName;

  if (myMiddleName != "None") {
    cout << " " + myMiddleName << " ";
    }

  cout << " " << myFirstName << endl;

  cout << endl;

  cout << "Your birthdate is : " << " " << day_birthdate << separator << month_birthdate << separator << year_birthdate << endl;

  cout << endl;


    if ((month_birthdate == 01 && day_birthdate >= 20 && day_birthdate <= 31) || (month_birthdate == 02 && day_birthdate >= 01 && day_birthdate <= 18)){
  cout << "Your zodiac sign is AQVARIUS.";
        }

    else if ((month_birthdate == 02 && day_birthdate >= 19 && day_birthdate <= 28) || (month_birthdate == 03 && day_birthdate >= 01 && day_birthdate <= 20)){
  cout << "Your zodiac sign is PISCES.";
        }

   else if ((month_birthdate == 03 && day_birthdate >= 21 && day_birthdate <= 31) || (month_birthdate == 04 && day_birthdate >= 01 && day_birthdate <= 19)) {
  cout << "Your zodiac sign is ARIES.";
    }
    else if ((month_birthdate == 04 && day_birthdate >= 20 && day_birthdate <= 30) || (month_birthdate == 05 && day_birthdate >= 01 && day_birthdate <= 20)){
  cout << "Your zodiac sign is TAURUS.";
        }

    else if ((month_birthdate == 05 && day_birthdate >= 21 && day_birthdate <= 31) || (month_birthdate == 06 && day_birthdate >= 01 && day_birthdate <= 21)){
  cout << "Your zodiac sign is GEMINI.";
        }

    else if ((month_birthdate == 06 && day_birthdate >= 22 && day_birthdate <= 30) || (month_birthdate == 07 && day_birthdate >= 01 && day_birthdate <= 22)){
  cout << "Your zodiac sign is CANCER.";
        }

    else if ((month_birthdate == 7 && day_birthdate >= 23 && day_birthdate <= 31) || (month_birthdate == 8 && day_birthdate >= 01 && day_birthdate <= 22)){
  cout << "Your zodiac sign is LEO.";
        }

    else if ((month_birthdate == 8 && day_birthdate >= 23 && day_birthdate <= 31) || (month_birthdate == 9 && day_birthdate >= 01 && day_birthdate <= 22)){
  cout << "Your zodiac sign is VIRGO.";
        }
    else if ((month_birthdate == 9 && day_birthdate >= 23 && day_birthdate <= 30) || (month_birthdate == 10 && day_birthdate >= 1 && day_birthdate <= 23)) {
  cout << "Your zodiac sign is LIBRA.";
        }

    else if ((month_birthdate == 10 && day_birthdate >= 24 && day_birthdate <= 31) || (month_birthdate == 11 && day_birthdate >= 01 && day_birthdate <= 21)){
  cout << "Your zodiac sign is SCORPIUS.";
        }

    else if ((month_birthdate == 11 && day_birthdate >= 22 && day_birthdate <= 30) || (month_birthdate == 12 && day_birthdate >= 01 && day_birthdate <= 21)){
  cout << "Your zodiac sign is SAGITTARIUS.";
        }

    else if ((month_birthdate == 12 && day_birthdate >= 22 && day_birthdate <= 31) || (month_birthdate == 01 && day_birthdate >= 01 && day_birthdate <= 19)){
  cout << "Your zodiac sign is CAPRICORNUS.";
        }


    else {
  cout << "Your zodiac sign does not exist. Either you filled a number bigger than 31 for the birth day or a number bigger than 12 for the birth month. Please try again.";
    }

    cout << endl;


  return 0;
}
