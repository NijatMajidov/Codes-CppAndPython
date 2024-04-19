#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Subscriber {
    string surname;
    int installationYear;
    string phoneNumber;
};

void displayPhoneNumber(const string& surname, ifstream& file) {
    Subscriber subscriber;
    bool found = false;
    file.clear();
    file.seekg(0); 
    while (file >> subscriber.surname >> subscriber.installationYear >> subscriber.phoneNumber) {
        if (subscriber.surname == surname) {
            cout << "Phone number for " << surname << ": " << subscriber.phoneNumber << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Subscriber not found." << endl;
    }
}

void countPhonesSinceYear(int year, ifstream& file) {
    Subscriber subscriber;
    int count = 0;
    file.clear(); 
    file.seekg(0); 
    while (file >> subscriber.surname >> subscriber.installationYear >> subscriber.phoneNumber) {
        if (subscriber.installationYear >= year) {
            count++;
        }
    }
    cout << "Number of phones installed since " << year << ": " << count << endl;
}

int main() {
	//bu ad ile bir fayl yaradib icini dolduranda isleyeceq 
	//faylin ici bele olmalidi meselen : ad il nomre
    ifstream inputFile("subscribers.txt");
    if (!inputFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }
    string findSurname;
    cout<<"Enter the surname you are looking for"<<endl;
    cin>>findSurname;
    
    displayPhoneNumber(findSurname, inputFile); 
	int year;
    cout<<"Enter the year you are looking for"<<endl;
    cin>>year;
	countPhonesSinceYear(2020, inputFile);  

    inputFile.close();
    return 0;
}
