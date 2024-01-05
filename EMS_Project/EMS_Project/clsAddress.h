#include <iostream>

using namespace std;

class clsAddress
{
private:
	string _AddressLine1;
	string _AddressLine2;
	string _POBox;
	string _ZipCode;
	string _City;
	string _Country;


public:


	clsAddress(string AddressLine1, string AddressLien2, string POBox, string ZipCode)
		: _AddressLine1(AddressLine1), _AddressLine2(AddressLien2), _POBox(POBox), _ZipCode(ZipCode)
	{

	}

	string AddressLIne1() const
	{					  
		return _AddressLine1;
	}					  
	string AddressLIne2() const
	{
		return _AddressLine2;
	}

	void setAddressLine1(string sAddressLine1)
	{
		_AddressLine1 = sAddressLine1;
	}
	void setAddressLine2(string sAddressLine2)
	{
		_AddressLine2 = sAddressLine2;
	}

	string POBox() const
	{
		return _POBox;
	}
	void setPOBox(string sPOBox)
	{
		_POBox = sPOBox;
	}

	string ZipCode()const
	{
		return _ZipCode;
	}
	void setZipCode(string sZipCode)
	{
		_ZipCode = sZipCode;
	}

	void Print()const
	{
		cout << "\nAddress Details:\n";
		cout << "----------------------------------\n";
		cout << "AddressLine1: " << _AddressLine1 << endl;
		cout << "AddressLine2: " << _AddressLine2 << endl;
		cout << "POBox       : " << _POBox << endl;
		cout << "ZipCode     : " << _ZipCode << endl;
	}

};