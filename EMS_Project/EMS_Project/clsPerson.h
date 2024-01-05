#pragma once
#include <iostream>
#include <string>
#include "clsDate.h"
#include "clsInputValidate.h"


using namespace std;

class clsPerson
{

private:


    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;
    clsDate _DateOfBirth;
  

protected:

    enum _eGender { Male = 1, Female = 2};
    _eGender _Gender;



public:

    clsPerson(string FirstName, string LastName, string Email, string Phone, _eGender Gender, clsDate DateOfBirth) :
        _FirstName(FirstName), _LastName(LastName), _Email(Email), _Phone(Phone), _Gender(Gender), _DateOfBirth(DateOfBirth)
    {



    }


    void SetFirstName(string FirstName)
    {
        // validate is punc
        _FirstName = FirstName;
    }
    string FirstName() const 
    {
        return _FirstName;
    }
    __declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;


    void SetLastName(string LastName)
    {
        // validate is punc
        _LastName = LastName;
    }
    string LastName() const 
    {
        return _LastName;
    }
    __declspec(property(get = GetLastName, put = SetLastName)) string LastName;


    void SetEmail(string Email)
    {
        _Email = Email;
    }
    string Email() const 
    {
        return _Email;
    }
    __declspec(property(get = GetEmail, put = SetEmail)) string Email;


    void SetPhone(string Phone)
    {
        // validate
        _Phone = Phone;
    }
    string Phone() const 
    {
        return _Phone;
    }
    __declspec(property(get = GetPhone, put = SetPhone)) string Phone;

    string FullName() const 
    {
        return _FirstName + " " + _LastName;
    }

    short Age() const
    {

    }

    virtual void Print() const 
    {
        cout << "\nInfo:";
        cout << "\n___________________";
        cout << "\nFirstName: " << _FirstName;
        cout << "\nLastName : " << _LastName;
        cout << "\nFull Name: " << FullName();
        cout << "\nEmail    : " << _Email;
        cout << "\nPhone    : " << _Phone;
        cout << "\n___________________\n";

    }

};

