/*Create a class Student with private data members name, rollNumber, and marks. Implement member functions to:

Set the name, roll number, and marks of a student.
Display the details of a student (name, roll number, and marks).
Ensure that the roll number cannot be modified once set.*/
#include <iostream>

class student
{
private:
	int marks;
	const int rollnumber=0006;
	std::string name;

public:
	 
	

	void SetName(std::string a){

		name = a;
	}

	std::string GetName(){

		return name;
	}
	

	int GetRollNumber(){

		return rollnumber;
	}

	void SetMarks(int m){

		marks = m;
	}

	int GetMarks(){

		return marks;
	}


};

int main()
{
	int j;
	std::string k;
	student s1;

	std::cout << "enter name of student:" << std::endl;
	std::cin >> k ;
	s1.SetName(k);

	std::cout << "enter marks of student" << std::endl;
	std::cin >> j;
	s1.SetMarks(j);
	std::cout << "Name:" << s1.GetName() << "\nRoll Number:" << s1.GetRollNumber() << "\nMarks:" << s1.GetMarks();

	return 0;
}
