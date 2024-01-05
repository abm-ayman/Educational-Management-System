#pragma once

#include <iostream>
#include <string>
#include "clsPerson.h"


class clsStudent : protected clsPerson
{

private:

	const string _ID;
	string _UserName;
	string _Password;
	string _Grade;
	float GPA;
	short AcademicYear;
	short Semester;
	string Class;


public:

	

	clsStudent(string FirstName, string LastName, string Email, string Phone,
		_eGender Gender, clsDate DateOfBirth, string ID, string Username, string Password)

		: _ID(ID), _UserName(Username), _Password(Password),
		clsPerson(FirstName, LastName, Email, Phone, Gender, DateOfBirth)
	{

	}


	string ID() const
	{
		return _ID;
	}

	void SetUsername(string Username)
	{
		// validate is username already exist.
		_UserName = Username;
	}
	string Username() const
	{
		return _UserName;
	}
	__declspec(property(get = Username, put = SetUsername)) string Username;


	void SetPassword(string Password)
	{
		_Password = Password;
	}
	string Password() const
	{
		return _Password;
	}
	__declspec(property(get = Password, put = SetPassword)) string Password;

	//--------------------------------->> Tasks: 
	void EnrollInCourse()
	{
		// A method to enroll the studen in a course 
	}

	void DropCourse()
	{
		// A method to remove the student from a course
	}

	void CalculateGPA()
	{
		// A method to calculate the student's Grade Point Average
	}

	void SubmitAssignment()
	{
		// A method to submit assignment or coursework
	}

	void ViewGrades()
	{
		// A method to view the student's grades in various courses
	}

	void PrintInfo()
	{

	}

	//-------------------------------<<





	// Student Main Menu
	/* 
	
	Student main menu Should allow him to:
		Register in course
		List my courses
		View a course 
		Grades Report
		Log out
	
	*/


	// Register in course
	/*  
		Register in course method    >> When student choose Register in course.

			he got list of courses where he is not registered:
				ask user to register in course
	*/


	// List my courses method
	

	// View a course
	/*
		View a course mothod	>> When student choose View a course.

			he got a course summary for him:
				Course name , code
				List Assignments report (see which submitted, which not, any grading)


			A menu allows him to: 
				Submit assignment solution
				Unregister from course


	*/


	// Grade report method
	/* 
	
		Grade report method,  >> When Student choose Grades Report:

			He sees list of course, with # assignments of each course and the total grades
			E.G. Course code, Total 4 assignments, Grade 101/200
	
	
	
	*/


	// info about EMS 
	/*
	
	
		Certainly! For beginners, here are some basic functionalities that can be implemented in a console-based Educational Management System in C++:

		Student Registration: Allow administrators to register new students by entering their basic information, such as name, age, roll number, and contact details.
		
		Student Information Display: Implement a feature to display the information of a specific student by searching for their roll number or name.
		
		Course Management: Provide options to add new courses, edit existing courses, and delete courses. Each course can have attributes such as a unique course code, name, and instructor.
		
		Enrollment: Allow students to enroll in courses by selecting the desired courses from the available list. Keep track of the courses in which each student is enrolled.
		
		Attendance Tracking: Enable teachers to mark student attendance for each class session. Store the attendance data and allow administrators to generate attendance reports for individual students or classes.
		
		Grade Management: Allow teachers to enter grades for assignments or exams and calculate cumulative grades. Implement a feature to display individual student grades and generate grade reports.
		
		Student List: Implement a feature to display a list of all registered students, including their basic information and enrolled courses.
		
		User Authentication: Implement a simple login system to differentiate between administrators, teachers, and students. Each user should have a unique username and password.
		
		Data Persistence: Store student information, course details, attendance records, and grades in files or a database for data persistence.
		
		Error Handling: Implement appropriate error handling mechanisms to handle invalid inputs and prevent crashes or unexpected behavior.
		
		These functionalities provide a solid foundation for a basic console-based Educational Management System. As beginners, it's essential to start with smaller, manageable features and gradually build upon them as you become more comfortable with programming concepts and techniques.
	
	*/



};

