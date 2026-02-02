#include<iostream>
using namespace std;
struct details {
	char name[50];
	int roll_number;
	char degree[50];
	char hostel[50];
    float current_CGPA;
	float new_CGPA;

void addDetails() {
	cout<<"Enter name ";
	cin>>name;
	cout<<"Enter roll number";
	cin>>roll_number;
	cout<<"Enter Degree";
	cin>>degree;
	cout<<"Enter your hostel";
	cin>>hostel;
	cout<<"Enter your current_CGPA";
	cin>>current_CGPA;
}
void updateCGPA() {
	cout<<"Enter your updated CGPA";
	cin>>new_CGPA;
}
void updateHostel() {
	cout<<"Enter your updated hostel";
	cin>>hostel;

}
void updateDetails() {
	updateCGPA();
	updateHostel();
}
void displayDetails() {
	cout<<"name"<<name<<endl;
	cout<<"roll number"<<roll_number<<endl;
	cout<<"degree"<<degree<<endl;
	cout<<"hostel"<<hostel<<endl;
	cout<<"current CGPA"<<current_CGPA<<endl;
	cout<<"updated CGPA"<<new_CGPA<<endl;
	cout<<"updated hostel"<<hostel<<endl;
}
};

int main() {
	details s;
	s.addDetails();
	s.updateDetails();
	s.displayDetails();

}