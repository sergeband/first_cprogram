#include<iostream>

#include "Employee.h"

using namespace std;

namespace Records {
	Employee::Employee(){
		mFirstName      = "";
		mLastName       = "";
		mEmployeeNumber = 1;
		mSalary = kDefaultStartingSalary;
		fHired = false;
	}
}
