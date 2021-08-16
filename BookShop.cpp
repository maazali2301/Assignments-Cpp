#include <iostream>
#include <iomanip>
using namespace std;

struct Address{
	
	string city;
	void set_city(string);
	
};

void Address::set_city(string a)
{
	city = a;
}

struct Salary{
		double fixedSalary ; //every salesperson has a fixed salary for a daily wager Rs. 15000/-
		double comission; //2% of sale price of all the books sold
		
		Salary();
		void comissionSalesPerson(float);
};

void Salary::comissionSalesPerson(float s)
{
	comission = s * 0.02;
}

Salary::Salary()
{
	fixedSalary = 15000;
}
struct Book{
		int id;
		string type;
		string bookName;
		string authorName;
		double price;
		int sold;  //by default book is not sold (is in inventory)
		
		static int i;
		Book();
		void set_id(int);
		void set_type(string);
		void is_sold();	
		void set_bookname(string);
		void set_authorname(string);
		void set_price(float);
};

void Book::set_type(string a)
{
	type = a;
}
void Book::set_bookname(string a)
{
	bookName = a;
} 

void Book::set_authorname(string b)
{
	bookName = b;
} 

void Book::set_price(float p)
{
	price = p;
}

int Book::i = 0;
Book::Book()
{
	sold = 0;
	i++;
	id = i;
}

void Book::set_id(int a)
{
	id = a;
}

void Book::is_sold()
{
	sold = 1;
}
struct Customer{
		int cust_No;
		string cust_Name; //duration of project
		Address cust_Address; //structure itself
		Book bk; //
		
		static int c;
		Customer();
		void set_custname(string);
		void set_no();
		void set_no(int);
};

void Customer::set_custname(string a)
{
	cust_Name = a;
}

int Customer::c = 0;
Customer::Customer()
{
	c++;
	cust_No = c;
}

void Customer::set_no(int a)
{
	cust_No = a;
}

struct Sales_Person{
	
		int emp_ID;
		string emp_Name; 
		double Sales;
		int no_of_custs;
		float final_salary;
		Customer* emp_Customer_Array; //array of customers that salesperson sold books to
		Salary emp_sal; //salary of the employee
		
		
		static int ind;
		static float total_sales; //for all sales done
		static float total_salary; //for all employees
		Sales_Person();	
		void set_id(int);
		void set_no_of_custs(int);
		void set_name(string);
		void totalSalesBySalesPerson();
		void totalSalaryofOne();
		float totalSales();
		float totalSalary();
		
};

float Sales_Person::total_sales = 0;
float Sales_Person::total_salary = 0;

float Sales_Person::totalSalary()
{
	total_salary += final_salary;
	return total_salary;
}

float Sales_Person::totalSales()
{
	total_sales += Sales;
	return total_sales;	
}

void Sales_Person::totalSalesBySalesPerson()
{
	Sales = 0;
	for (int i=0; i<no_of_custs; i++)
	{
		Sales += emp_Customer_Array[i].bk.price;
	}
	
	//once sales are found, we can find commission then total salary of the person
	emp_sal.comissionSalesPerson(Sales);
	totalSalaryofOne();
}

void Sales_Person::totalSalaryofOne()
{
	final_salary = emp_sal.fixedSalary + emp_sal.comission;
	
	cout<<"Final Salary is $"<<final_salary<<endl;
}

void Sales_Person::set_name(string a)
{
	emp_Name = a;
}


int Sales_Person::ind = 0;
Sales_Person::Sales_Person()
{
	ind++;
	emp_ID = ind;
}

void Sales_Person::set_id(int a)
{
	emp_ID = a;
}

void Sales_Person::set_no_of_custs(int a)
{
	//makes the Dynamic customer array of n number of customers
	no_of_custs = a;
	emp_Customer_Array = new Customer[a];
}	

void booksInventory(Book math[], Book prog[], Book mot[])
{
	cout<<"*Data of All Inventory Left*"<<endl<<endl;
	cout<<"Remaining Math Books..."<<endl;
	for (int i=0; i<4; i++)
	{
		if (math[i].sold == 0)
		{
			cout<<"> "<<math[i].bookName<<endl;
		}
	}
	
	cout<<endl<<"Remaining Programming Books..."<<endl;
	for (int i=0; i<4; i++)
	{
		if (prog[i].sold == 0)
		{
			cout<<"> "<<prog[i].bookName<<endl;
		}
	}
	
	cout<<endl<<"Remaining Motivation Books..."<<endl;
	for (int i=0; i<4; i++)
	{
		if (mot[i].sold == 0)
		{
			cout<<"> "<<mot[i].bookName<<endl;
		}
	}
}


void topSalesPerson(Sales_Person s[], int n)
{
	float *temp = new float[n];
	
	for (int i=0; i<n; i++)
	temp[i] = 0;
	
	cout<<"Top Performers in Sales: "<<endl;
	for (int i=0; i<n; i++)
	temp[i] = s[i].Sales;
	
	float t;
	for (int i=0; i<n; i++)
	{
		for (int j=i+1; j<n; j++)
		if (temp[j] > temp[i]) //descending order
		{
			t = temp[i];
			temp[i] = temp[j];
			temp[j] = t;
		}
		
		cout<<temp[i]<<"$ worth by "<<s[i].emp_Name<<endl;
	}
	
	cout<<endl;
	
}

//type already passed in int main
void booksInventoryByType(Book math[], Book prog[], Book mot[], string a)
{
	cout<<endl<<"Inventory Data by Serach Type --> "<<a<<endl;
	if (a == "Programming")
	{
		cout<<"Programming Books Left: ";
		for (int i=0; i<4; i++)
		{
		if (prog[i].sold == 0)
		cout<<prog[i].bookName<<", ";	
		}
	}
		
	if (a=="Mathematics")
	{
		cout<<endl<<"Mathematics: ";
		for (int i=0; i<4; i++)
		{
		if (math[i].sold == 0)
		cout<<math[i].bookName<<", ";	
		}
	}

	if (a=="Motivation")
	{
		cout<<endl<<"Motivation: ";
		for (int i=0; i<4; i++)
		{
			if (mot[i].sold == 0)
			cout<<mot[i].bookName<<", ";	
		}
	}
	cout<<endl;
}

//type input by the user to find
void booksInventoryByType(Book math[], Book prog[], Book mot[])
{
	string a;
	cout<<endl<<"Enter a type to search remaining books for it (Programming, Mathematics, Motivation):  ";
	cin>>a;
	
	if (a == "Programming" || a=="programming")
	{
		cout<<"Programming Books Left: ";
		for (int i=0; i<4; i++)
		{
		if (prog[i].sold == 0)
		cout<<prog[i].bookName<<", ";	
		}
	}
		
	if (a=="Mathematics" || a=="mathematics")
	{
		cout<<endl<<"Mathematics: ";
		for (int i=0; i<4; i++)
		{
		if (math[i].sold == 0)
		cout<<math[i].bookName<<", ";	
		}
	}

	if (a=="Motivation" || a=="motivation")
	{
		cout<<endl<<"Motivation: ";
		for (int i=0; i<4; i++)
		{
			if (mot[i].sold == 0)
			cout<<mot[i].bookName<<", ";	
		}
	}
	cout<<endl;
	
	
}

int main()
{
	//3 book types, 4 books per type
	Book Math[4], Programming[4], Motivation[4];
	
	//defining store inventory
	Math[0].authorName = "Thomas";
	Math[0].type = "Math";
	Math[0].bookName = "Cal-1";
	Math[0].price = 1500;
	Math[0].sold = 0;
	
	Math[1].authorName = "D.Zill";
	Math[1].type = "Math";
	Math[1].bookName = "Cal-2";
	Math[1].price = 1300;
	Math[1].sold = 0;
	
	Math[2].authorName = "Collin";
	Math[2].type = "Math";
	Math[2].bookName = "Cal-3";
	Math[2].price = 2000;
	Math[2].sold = 0;
	
	Math[3].authorName = "Mathew";
	Math[3].type = "Math";
	Math[3].bookName = "Cal-4";
	Math[3].price = 1900;
	Math[3].sold = 0;
	
	Programming[0].authorName = "James";
	Programming[0].type = "Programming";
	Programming[0].bookName = "Java P";
	Programming[0].price = 500;
	Programming[0].sold = 0;
	
	Programming[1].authorName = "Tony";
	Programming[1].type = "Programming";
	Programming[1].bookName = "Starting C++";
	Programming[1].price = 600;
	Programming[1].sold = 0;
	
	Programming[2].authorName = "Rossum";
	Programming[2].type = "Programming";
	Programming[2].bookName = "Python AI";
	Programming[2].price = 850;
	Programming[2].sold = 0;
	
	Programming[3].authorName = "Waleed";
	Programming[3].type = "Programming";
	Programming[3].bookName = "Flutter";
	Programming[3].price = 1050;
	Programming[3].sold = 0;
	
	Motivation[0].authorName = "Ashlee";
	Motivation[0].type = "Motivation";
	Motivation[0].bookName = "Elon Musk";
	Motivation[0].price = 1000;
	Motivation[0].sold = 0;
	
	Motivation[1].authorName = "Stephen Hawking";
	Motivation[1].type = "Motivation";
	Motivation[1].bookName = "Brief Answers";
	Motivation[1].price = 1300;
	Motivation[1].sold = 0;
	
	Motivation[2].authorName = "Covey";
	Motivation[2].type = "Motivation";
	Motivation[2].bookName = "7 Habits";
	Motivation[2].price = 900;
	Motivation[2].sold = 0;
	
	Motivation[3].authorName = "George";
	Motivation[3].type = "Motivation";
	Motivation[3].bookName = "Richest Man";
	Motivation[3].price = 1500;
	Motivation[3].sold = 0;
	
	//Output to show the inventory
	cout<<"-----------------------------------------------------------------"<<endl;
	cout<<"Welcome to the Book Store! Here is our inventory..."<<endl<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	
	cout<<"Mathematics Books : "<<endl<<endl;
	for (int i=0; i<4; i++)
	{
		cout<<i+1<<". "<<Math[i].bookName<<" by "<<Math[i].authorName<<" Price: $"<<Math[i].price<<endl;	
	}
	
	cout<<endl<<"Programming Books : "<<endl<<endl;
	for (int i=0; i<4; i++)
	{
		cout<<i+1<<". "<<Programming[i].bookName<<" by "<<Programming[i].authorName<<" Price: $"<<Programming[i].price<<endl;	
	}
	
	cout<<endl<<"Motivation Books : "<<endl<<endl;
	for (int i=0; i<4; i++)
	{
		cout<<i+1<<". "<<Motivation[i].bookName<<" by "<<Motivation[i].authorName<<" Price: $"<<Motivation[i].price<<endl;	
	}
	
	cout<<"------------------------------------------------------------------------"<<endl;
	cout<<"------------------------ INVENTORY ENDS HERE ---------------------------"<<endl;
	
	
	cout<<endl<<setw(60)<<"*Data after Sales of our 3 Salesmen*"<<endl;
	//Creating Objects for 3 Sales Persons
	Sales_Person s[3];
	
	
	//Giving Values to data of Sales Person 1
	cout<<endl<<"Sales Person 1: ";

	s[0].set_name("Ali");
	s[0].set_no_of_custs(3);
	//customer 1
	s[0].emp_Customer_Array[0].set_custname("Noor");
	s[0].emp_Customer_Array[0].cust_Address.set_city("Rawalpindi");
	s[0].emp_Customer_Array[0].bk.set_type("Math");
	
	string s1b1 = "Cal-1";     //sales person 1 , book 1
	
	for (int i=0; i<4; i++)
	{
		if (Math[i].bookName == s1b1)
		Math[i].is_sold();
		
		if (Programming[i].bookName == s1b1)
		Programming[i].is_sold();
		
		if (Motivation[i].bookName == s1b1)
		Motivation[i].is_sold();
	}
	
	s[0].emp_Customer_Array[0].bk.set_bookname(s1b1);
	s[0].emp_Customer_Array[0].bk.set_authorname("Thomas");
	s[0].emp_Customer_Array[0].bk.set_price(1500);
	
	//customer 2
	s[0].emp_Customer_Array[1].set_custname("Khan");
	s[0].emp_Customer_Array[1].cust_Address.set_city("Peshawar");
	s[0].emp_Customer_Array[1].bk.set_type("Motivation");
	
	string s1b2 = "Elon Musk";       //sales person 1 , book 2
	
	for (int i=0; i<4; i++)
	{
		if (Math[i].bookName == s1b2)
		Math[i].is_sold();
		
		if (Programming[i].bookName == s1b2)
		Programming[i].is_sold();
		
		if (Motivation[i].bookName == s1b2)
		Motivation[i].is_sold();
	}
	
	s[0].emp_Customer_Array[1].bk.set_bookname(s1b2);
	s[0].emp_Customer_Array[1].bk.set_authorname("Ashlee");
	s[0].emp_Customer_Array[1].bk.set_price(1000);
	
	//customer 3
	s[0].emp_Customer_Array[2].set_custname("Wadood");
	s[0].emp_Customer_Array[2].cust_Address.set_city("Islamabad");
	s[0].emp_Customer_Array[2].bk.set_type("Motivation");
	
	string s1b3 = "7 Habits";      //sales person 1 , book 3
	
	for (int i=0; i<4; i++)
	{
		if (Math[i].bookName == s1b3)
		Math[i].is_sold();
		
		if (Programming[i].bookName == s1b3)
		Programming[i].is_sold();
		
		if (Motivation[i].bookName == s1b3)
		Motivation[i].is_sold();
	}
	
	s[0].emp_Customer_Array[2].bk.set_bookname(s1b3);
	s[0].emp_Customer_Array[2].bk.set_authorname("Ashlee");
	s[0].emp_Customer_Array[2].bk.set_price(900);
	
	
	//calculating sales, then comission, then salary. 
	s[0].totalSalesBySalesPerson();
	s[0].totalSales(); //calling to update total sales for employer
	s[0].totalSalary(); //calling to update total salary of employees
	
	
	//Giving Values to data of Sales Person 2
	cout<<endl<<"Sales Person 2: ";
	
	s[1].set_name("Shehryar");
	s[1].set_no_of_custs(2);
	//customer 1
	s[1].emp_Customer_Array[0].set_custname("Imran");
	s[1].emp_Customer_Array[0].cust_Address.set_city("Lahore");
	s[1].emp_Customer_Array[0].bk.set_type("Programmer");
	
	string s2b1 = "Starting C++";   //sales person 2 , book 1
	
	for (int i=0; i<4; i++)
	{
		if (Math[i].bookName == s2b1)
		Math[i].is_sold();
		
		if (Programming[i].bookName == s2b1)
		Programming[i].is_sold();
		
		if (Motivation[i].bookName == s2b1)
		Motivation[i].is_sold();
	}
	
	s[1].emp_Customer_Array[0].bk.set_bookname(s2b1);
	s[1].emp_Customer_Array[0].bk.set_authorname("Tony");
	s[1].emp_Customer_Array[0].bk.set_price(600);
	
	//customer 2
	s[1].emp_Customer_Array[1].set_custname("Mujtaba");
	s[1].emp_Customer_Array[1].cust_Address.set_city("Daska");
	s[1].emp_Customer_Array[1].bk.set_type("Math");
	
	string s2b2 = "Cal-2";    //sales person 2 , book 2
	
	for (int i=0; i<4; i++)
	{
		if (Math[i].bookName == s2b2)
		Math[i].is_sold();
		
		if (Programming[i].bookName == s2b2)
		Programming[i].is_sold();
		
		if (Motivation[i].bookName == s2b2)
		Motivation[i].is_sold();
	}
	
	s[1].emp_Customer_Array[1].bk.set_bookname(s2b2);
	s[1].emp_Customer_Array[1].bk.set_authorname("D.Zill");
	s[1].emp_Customer_Array[1].bk.set_price(1300);
	
	//calculating sales, then comission, then salary. 
	s[1].totalSalesBySalesPerson();
	s[1].totalSales(); //calling to update total sales for employer
	s[1].totalSalary(); //calling to update total salary of employees
	
	//Giving Values to data of Sales Person 2
	cout<<endl<<"Sales Person 3: ";

	s[2].set_name("Salman");
	s[2].set_no_of_custs(3);
	
	//customer 1
	s[2].emp_Customer_Array[0].set_custname("Fawad");
	s[2].emp_Customer_Array[0].cust_Address.set_city("Karachi");
	s[2].emp_Customer_Array[0].bk.set_type("Programming");
	
	string s3b1 = "Python AI";     //sales person 3 , book 1
	
	for (int i=0; i<4; i++)
	{
		if (Math[i].bookName == s3b1)
		Math[i].is_sold();
		
		if (Programming[i].bookName == s3b1)
		Programming[i].is_sold();
		
		if (Motivation[i].bookName == s3b1)
		Motivation[i].is_sold();
	}
	
	s[2].emp_Customer_Array[0].bk.set_bookname(s3b1);
	s[2].emp_Customer_Array[0].bk.set_authorname("Rossum");
	s[2].emp_Customer_Array[0].bk.set_price(850);
	
	//customer 2
	s[2].emp_Customer_Array[1].set_custname("Aman Shah");
	s[2].emp_Customer_Array[1].cust_Address.set_city("Balakot");
	s[2].emp_Customer_Array[1].bk.set_type("Motivation");
	
	string s3b2 = "Brief Answers";       //sales person 3 , book 2
	
	for (int i=0; i<4; i++)
	{
		if (Math[i].bookName == s3b2)
		Math[i].is_sold();
		
		if (Programming[i].bookName == s3b2)
		Programming[i].is_sold();
		
		if (Motivation[i].bookName == s3b2)
		Motivation[i].is_sold();
	}
	
	s[2].emp_Customer_Array[1].bk.set_bookname(s3b2);
	s[2].emp_Customer_Array[1].bk.set_authorname("Stephen Hawking");
	s[2].emp_Customer_Array[1].bk.set_price(1300);
	
	//customer 3
	s[2].emp_Customer_Array[2].set_custname("Rafique");
	s[2].emp_Customer_Array[2].cust_Address.set_city("sialkot");
	s[2].emp_Customer_Array[2].bk.set_type("Math");
	
	string s3b3 = "Cal-4";      //sales person 3 , book 3
	
	for (int i=0; i<4; i++)
	{
		if (Math[i].bookName == s3b3)
		Math[i].is_sold();
		
		if (Programming[i].bookName == s3b3)
		Programming[i].is_sold();
		
		if (Motivation[i].bookName == s3b3)
		Motivation[i].is_sold();
	}
	
	s[2].emp_Customer_Array[2].bk.set_bookname(s3b3);
	s[2].emp_Customer_Array[2].bk.set_authorname("Mathew");
	s[2].emp_Customer_Array[2].bk.set_price(1900);
	
	
	//calculating sales, then comission, then salary. 
	s[2].totalSalesBySalesPerson();
	s[2].totalSales();
	s[2].totalSalary(); //calling to update total salary of employees
	
	cout<<endl<<"Total Sales Made: $"<<s[2].total_sales<<endl;
	cout<<"Total Salary of all : $"<<s[2].total_salary<<endl<<endl;
	
	topSalesPerson(s, 3);
	booksInventory(Math, Programming, Motivation);
	booksInventoryByType(Math, Programming, Motivation, "Programming");
	booksInventoryByType(Math, Programming, Motivation);
	
	
	
	return 0;
}

