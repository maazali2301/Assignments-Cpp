#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;


class Mirror{

		int day, month, year;
		int hour, min;
		string AM_PM;
		string quote;
		string *to_do;
		int date_choice;
		int time_choice;
	public:
		Mirror();
		void set_day(int);
		void set_month(int);
		void set_year(int);
		void set_hour(int);
		void set_min(int);
		void set_AM_or_PM(string);
		void set_quote(string);
		
		int get_day();
		int get_month();
		int get_year();
		int get_hour();
		int get_min();
		string get_quote();
		
		void initial_display();
		void display_date(int);
		void display_time(int);
		void set_date(int, int, int);
		void date_format();
		void time_format();
		void set_quote();
		void set_checklist();
		void final_display();
		~Mirror();
};

	Mirror::Mirror()
	{
		day = 23;
		month = 5;
		year = 2020;
		date_choice = time_choice = 1;
		hour = 01;
		min = 10;
		AM_PM = "PM";

		quote = "The higher we are placed, the more humbly we should talk";

		to_do = new string[5];
		to_do[0] = "Check the Checklist";
		to_do[1] = "Buy Milk";
		to_do[2] = "Call Carl";
		to_do[3] = "*add a task*";
		to_do[4] = "*add a task*";


	}

	void Mirror::initial_display()
	{
		cout<<"-------------------------------------------------------------"<<endl;
		cout<<setw(45)<<"Hi, Welcome to use the Smart Mirror"<<endl;
		cout<<"-------------------------------------------------------------"<<endl;

		cout<<endl<<"Time : "<<hour<<":"<<min<<endl;
		cout<<endl<<"Date : "<<day<<" / "<<month<<" / "<<year<<endl;

		cout<<endl<<setw(50)<<"~ Motivation for the day ~"<<endl;
		cout<<setw(35)<<quote<<endl;

		cout<<endl<<"Things to do: "<<endl;
		for (int i=0; i<5; i++)
		{
			if (to_do[i] == "*add a task*")
				continue;
			else
				cout<<" > "<<to_do[i]<<endl;
		}

		cout<<"-------------------------------------------------------------"<<endl;
	}
	
	void Mirror::set_day(int d)
		{
			day = d;
		}
		
	void Mirror::set_month(int m)
		{
			month = m;
		}
		
	void Mirror::set_year(int y)
		{
			year = y;
		}
		
	void Mirror::set_hour(int h)
	{
		hour = h;
	}
	
	void Mirror::set_min(int m)
	{
		min = m;
	}
	
	void Mirror::set_AM_or_PM(string a)
	{
		AM_PM = a;
	}
	
	void Mirror::set_quote(string a)
	{
		quote = a;
	}

	void Mirror::display_date(int c)
	{
		if (c==1)
		{
			cout<<day<<" / "<<month<<" / "<<year<<endl;
		}
		if (c==2)
		{
			if (day<11 || day >20)
			{
				if (day%10 == 1)
				{
					cout<<day<<"st ";
				}
				if (day%10 == 2)
				{
					cout<<day<<"nd ";
				}
				if (day%10 == 3)
				{
					cout<<day<<"rd ";
				}
				else
				cout<<day<<"th ";
			}
			else
			cout<<day<<"th ";

			if (month==1) cout<<"January, ";
			if (month==2) cout<<"February, ";
			if (month==3) cout<<"March, ";
			if (month==4) cout<<"April, ";
			if (month==5) cout<<"May, ";
			if (month==6) cout<<"June, ";
			if (month==7) cout<<"July, ";
			if (month==8) cout<<"August, ";
			if (month==9) cout<<"September, ";
			if (month==10) cout<<"October, ";
			if (month==11) cout<<"November, ";
			if (month==12) cout<<"December, ";

			cout<<year<<endl;
		}
	}
	
	int Mirror::get_day()
		{
			return day;
		}
		
	int Mirror::get_month()
		{
			return month;
		}
		
	int Mirror:: get_year()
	{
		return year;
	}
	
	int Mirror::get_hour()
	{
		return hour;
	}
	
	int Mirror::get_min()
	{
		return min;
	}
	
	string Mirror::get_quote()
	{
		return quote;
	}

	void Mirror::display_time(int c)
	{
		if (c==1)
		cout<<endl<<"Time : "<<hour<<":"<<min<<" "<<AM_PM<<endl;

		if (c==2)
		{
			if (AM_PM == "PM")
			hour +=12;
		cout<<endl<<"Time: "<<hour<<" : "<<min<<endl;
		}

	}

	void Mirror::set_date(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}

	void Mirror::date_format()
	{
			cout<<endl<<"Available Date Formats are as follows...."<<endl;
			cout<<"1. day/month/year \n2. day Month, Year\n";
			cin>>date_choice;
	}

	void Mirror::time_format()
	{
			cout<<endl<<"Available Time Formats are as follows...."<<endl;
			cout<<"1. 12-Hour Clock \n2. 24-Hour Clock\n";
			cin>>time_choice;
	}

	void Mirror::set_quote()
	{
		cin.ignore(); 						//to make sure cin.getline works
		string q; 							//new variable to store quote of unknown length
		cout<<"Please enter the new quote: ";
		getline(cin, q);
		quote = q;
		
	}

	void Mirror::set_checklist()
	{
		cout<<"\nHere is your current checklist: \n";
		for (int i=0; i<5; i++)
		{
			cout<<i+1<<") "<<to_do[i]<<endl;
		}

		char c;
		int pos=0;
		char choice;

		do {
		cout<<"Choose an option: Add (a) or Delete (d)  ";
		cin>>c;

		if (c=='a' || c=='A')
		{
				cout<<"Enter position on list (4 and 5 are empty by default): ";
				cin>>pos;

				cin.ignore(); 
				string q;
				cout<<"So, what is the new task? ";
				getline(cin, q);
				to_do[pos-1] = q;
		}

		if (c=='d' || c=='D')
		{
				cout<<"Enter position on list to delete: ";
				cin>>pos;

				to_do[pos-1] = "*add a task*";

		}

		
		cout<<"Do you want to add/delete more? (Y/N): ";
		cin>>choice;

		} while(choice=='Y' || choice=='y');


	}

	void Mirror::final_display()
	{
			cout<<endl<<endl<<"-------------------------------------------------------------"<<endl;
			cout<<setw(45)<<"Hi, Welcome to use the Smart Mirror (Updated Version)"<<endl;
			cout<<"-------------------------------------------------------------"<<endl;

			
			Mirror::display_time(time_choice);
			cout<<"\nDate : ";
			Mirror::display_date(date_choice);

			cout<<endl<<setw(50)<<"~ Motivation for the day ~"<<endl;
			cout<<setw(35)<<quote<<endl;

			cout<<endl<<"Things to do: "<<endl;
			for (int i=0; i<5; i++)
			{
				if (to_do[i] == "*add a task*")
					continue;
				else
					cout<<" > "<<to_do[i]<<endl;
			}

			cout<<"-------------------------------------------------------------"<<endl;

	}

	Mirror::~Mirror()
	{
		cout<<endl<<setw(30)<<"2019. FAST NUCES - All Rights Reserved"<<endl<<endl;
		delete [] to_do;
	}

int main()
{
	char choice;
	Mirror m1;
	m1.initial_display();
	cout<<endl<<endl<<setw(45)<<"~ Press Y to enter Changes Mode / Type X to Finalize this Output~"<<endl;
	cin>>choice;
	while (choice == 'y' || choice == 'Y')
	{
		int n=0;
		cout<<endl<<"You can change the following things...."<<endl;
		cout<<"1. Date Format"<<endl;
		cout<<"2. Clock Format"<<endl;
		cout<<"3. Weekly Quote"<<endl;
		cout<<"4. Update Checklist (Can add more tasks)"<<endl;

		cout<<"Enter Choice: ";
		cin>>n;

		if (n==1)
			m1.date_format();
		if (n==2)
			m1.time_format();
		if (n==3)
			m1.set_quote();
		if (n==4)
			m1.set_checklist();


		cout<<"Do you wish to make more changes? (Y/N)";
		cin>>choice;
	}

	m1.final_display();


	return 0;
}


