#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

class Player{
	
		private:
		string p_name;
		string type; //type of the player attacking” or defensive” ("Attacking" or "Defensive")
		double points; //randomly assign points between 30 to 40 randomly
		bool status; //availability of players
		public:
		// constructors
		static int i;
		int serial;
		Player();
		void set_name(string);
		void set_type(string);
		void set_points(double);
		void add_points(double); //adds points after each match to store final points at the end of league
		void set_status(bool);
		void addPlayers(); //adding data of a player to our main inventory (using console)
		string get_name();
		string get_type();
		bool get_status();
		double get_points();
		
		
		
};

int Player::i = 0;

Player::Player()
{
	i++;
	serial = i; //assigning serial number to each player
	status = 1;
}

bool Player::get_status()
{
	return status;
}

double Player::get_points()
{
	return points;
}

string Player::get_type()
{
	return type;
}

string Player::get_name()
{
	return p_name;
}

void Player::add_points(double p)
{
	points += p;
}

void Player::addPlayers()  //Part 1 - application 1
{
	cout<<"Enter player name: ";
	cin>>this->p_name;
	cout<<"Enter Type : (Attacking or Defensive) ";
	cin>>this->type;
	
	points = 30;
	status = true;
}

void Player::set_name(string a)
{
	p_name = a;
}

void Player::set_type(string t)
{
	type = t;
}

void Player::set_points(double p)
{
	points = p;
}

void Player::set_status(bool s)
{
	status = s;
}


class Team{
		//string teamName;
		int teamRank;
		string strategy;
		int def, att; //no. of attacking and defensive players
		
		public:
		string teamName;
		Player* teamPlayers;
		Team();
		void addPlayers();    //Part 1 - application 2    //add a certain player to a team (update or delete)
		void set_teamname(string);
		string get_teamname();
		float total_score;
		void calc_total_score();
		void assignRanks();
		Player* returnPlayers(string); //Part 2 //given a type, returns and outputs players of that type
		void teamSelection(string);
		void playerSelection(string, Player*, int);

};

Team::Team()
{
	//when each team is made, it has 3 players by default
	teamPlayers = new Player[3];
	total_score = 0;
	def = 0;
	att = 0;	
}

void Team::addPlayers()
{
	cout<<"Current Players: "<<endl;
	
	for (int i=0; i<3; i++)
	{
		cout<<teamPlayers[i].get_name()<<endl;
	}
	
	int n;
	cout<<"Which Index to replace new player with?  (0-2) : ";
	cin>>n;
	cout<<"Enter new data: "<<endl;
	
	string name;
	cout<<"Enter Name: ";
	cin>>name;
	teamPlayers[n].set_name(name);
	
	string typ;
	cout<<"Enter Type: ";
	cin>>typ;
	teamPlayers[n].set_type(typ);
}

void Team::calc_total_score()
{
	for (int i=0; i<3; i++)
	{
		total_score += teamPlayers[i].get_points();
	}
	
}

void Team::teamSelection(string s) //Part 4
{
	strategy = s;
	if (strategy == "Attacking" || strategy == "attacking")
	{
		att = 2;
		def = 1;
	}
	
	if (strategy == "Defensive" || strategy == "defensive")
	{
		att = 1;
		def = 2;
	}
}

void Team::playerSelection(string n, Player *p, int c) //Part 5
{
	//passed pick name, pointer to the data of all players, index of teamPlayers array
	
	//int a = 0; //counts attacking
	//int d = 0; //counts defensive
	int check = 1;
	for (int i=0; i<12; i++)
	{
		if (p[i].get_name() == n && p[i].get_status() == 1)
		{
			/* checks if a team abides by its strategy
			if ((p[i].get_type() == "Attacking" || p[i].get_type()=="attacking") && d>1)
			{
				continue;
			}
			
			if ((p[i].get_type()=="Defensive" || p[i].get_type()=="defensive") && a>1)
			{
				continue;
			} */
			
			check = 0;
			teamPlayers[c] = p[i]; //assigns object if available
			p[i].set_status(0);
			break;
			
			/*
			if (p[i].get_type() == "Attacking" || p[i].get_type() == "attacking")
			{
				a++;
			}
			else
			{
				d++;
			}*/
			
		}
	}
	
	if (check == 1)
	cout<<"This Player is already taken by another team"<<endl;
}

string Team::get_teamname()
{
	return teamName;
}

Player* Team::returnPlayers(string a)
{
		
		//first counting how many players are there in the team, of that certain type
		int c = 0;
		for (int i=0; i<3; i++)
		{
			if (teamPlayers[i].get_type() == a)
			c++;
		}
		
		Player *arr = new Player[c]; //makes an array to store players of that type
		int j=0;
		for (int i=0; j<c; i++)
		{
			if (teamPlayers[i].get_type() == a)
			{
				cout<<teamPlayers[i].serial<<" - "<<teamPlayers[i].get_name()<<" "<<endl;
				arr[j] = teamPlayers[i];
				j++;
			}
		} 
		
		return arr;
}


void Team::set_teamname(string a)
{
	teamName = a;
}

void Team::assignRanks()  //Part 3
{
	srand(time(NULL));
	teamRank = (rand() % 4) + 1;
}

class Match{
		int Match_No;
		Team homeTeam;
		Team awayTeam;
		static int i;
		
		public:
			Match();
			void set_matchno(int);
			void set_home(Team);
			void set_away(Team);
			void generateMatchStats();
			void bestPlayersInMatch();
			void UpdatePlayerPoints();
};

int Match::i=0;

Match::Match()
{
	i++;
	Match_No = i;
}
void Match::set_matchno(int in)
{
	
	Match_No = in;
}

void Match::set_home(Team p)
{
	homeTeam = p;
}

void Match::generateMatchStats()  //Part 6
{
	srand(time(NULL));
	int c = (rand() % 2) + 1;
	
	cout<<endl<<"--------------------------------------------"<<endl;
	cout<<"Result of Match No. "<<Match_No<<endl;
	cout<<"home: "<<homeTeam.get_teamname()<<" vs away: "<<awayTeam.get_teamname()<<endl;
	cout<<"--------------------------------------------"<<endl;
	if (c==1)
	{
		cout<<"Home Team Won! "<<endl;
		for (int i=0; i<3; i++)
		{
			//randomly assigning scores to players of both teams
			
			srand(time(NULL));
			float p = (rand()%11) + 10;

			homeTeam.teamPlayers[i].add_points(p);
			cout<<"Home Player "<<i+1<<" got points: "<<p<<endl;
			
			
			//srand(time(NULL));
			p = (rand()%5) + 5;
			awayTeam.teamPlayers[i].add_points(p);
			cout<<"Away Player "<<i+1<<" got points: "<<p<<endl;
		}	
	}
	else
	{
		cout<<"Away Team Won! "<<endl;
		for (int i=0; i<3; i++)
		{
			//randomly assigning scores to players of both teams
			
			srand(time(NULL));
			float p = (rand()%11) + 10;
			awayTeam.teamPlayers[i].add_points(p);
			cout<<"Home Player "<<i+1<<" got points: "<<p<<endl;
			
			srand(time(NULL));
			p = (rand()%5) + 5;
			homeTeam.teamPlayers[i].add_points(p);
			cout<<"Away Player "<<i+1<<" got points: "<<p<<endl;
		}	
	}
}

void Match::UpdatePlayerPoints()
{
	//when match stats are updated - player points are automatically updated
	generateMatchStats();
}

void Match::bestPlayersInMatch()  //Part 7
{
	//winning players get the same points
	//losing players get the same points 
	
	cout<<endl<<setw(40)<<"~ BEST PLAYERS FROM EACH TEAM! ~"<<endl<<endl;
	cout<<"Best Player in Home Team: ";
	cout<<homeTeam.teamPlayers[0].get_name()<<" who plays "<<homeTeam.teamPlayers[0].get_type()<<endl;
	
	cout<<"Best Player in Away Team: ";
	cout<<awayTeam.teamPlayers[0].get_name()<<" who plays "<<awayTeam.teamPlayers[0].get_type()<<endl;
	

}

void Match::set_away(Team p)
{
	awayTeam = p;
}

//Global Functions 
void printLeaderBoard(Team t[])  //Part 9
{
	Player temp;
	Player store[12];
	
	//storring data of all players in a new array (we will sort this array for printing leader board)
	for (int i=0; i<3; i++)
	{
		store[i] = t[0].teamPlayers[i];  //Team 1
	}
	
	for (int i=3, j=0; i<6; i++, j++)
	{ 
		store[i] = t[1].teamPlayers[j];  //Team 2
	}
	
	for (int i=6, j=0; i<9; i++, j++)
	{
		store[i] = t[2].teamPlayers[j];  //Team 3
	}
	
	for (int i=9, j=0; i<12; i++, j++)
	{
		store[i] = t[3].teamPlayers[j];  //Team 4
	}
	
	//sorting the Players in descending order
	for (int i=0; i<12; i++)
	{
		for (int j=i+1; j<12; j++)
		{
			if (store[i].get_points() < store[j].get_points())
			{
				temp = store[i];
				store[i] = store[j];
				store[j] = temp;
			}
		}
	}
	
	cout<<endl<<"**************************************"<<endl;
	cout<<"PLAYER RANKINGS (AFTER THE LEAGUE) ";
	cout<<endl<<"**************************************"<<endl<<endl;
	for (int i=0; i<12; i++)
	{
		cout<<store[i].get_name()<<" - Points: "<<store[i].get_points()<<endl;
	}
	cout<<endl;
}

void printTeamRanks(Team t[])  //Part 10
{//passing an array of Team objects to sort and display
	Team temp;
	//sorting the Teams in descending order
	for (int i=0; i<4; i++)
	{
		for (int j=i+1; j<4; j++)
		{
			if (t[i].total_score < t[j].total_score)
			{
				temp = t[i];
				t[i] = t[j];
				t[j] = temp;
			}
		}
	}
	
	cout<<endl<<"**************************************"<<endl;
	cout<<"TEAM RANKINGS (AFTER THE LEAGUE) ";
	cout<<endl<<"**************************************"<<endl<<endl;
	for (int i=0; i<4; i++)
	{
		cout<<t[i].teamName<<" - Total Points: "<<t[i].total_score<<endl;
	}
	
}


int main()
{
	//total players available
	int n = 12;
	Player * p  = new Player[n];
	
	p[0].set_name("Maaz");//
	p[0].set_type("Attacking");
	p[0].set_points(35.3);
	
	p[1].set_name("Qureshi");
	p[1].set_type("Defensive");
	p[1].set_points(39.3);
	
	p[2].set_name("Marwat");//
	p[2].set_type("Defensive");
	p[2].set_points(33.8);
	
	p[3].set_name("Khan");//
	p[3].set_type("Defensive");
	p[3].set_points(34.8);
	
	p[4].set_name("Akbar");
	p[4].set_type("Attacking");
	p[4].set_points(34.1);
	
	p[5].set_name("Hunaid");
	p[5].set_type("Defensive");
	p[5].set_points(35.7);
	
	p[6].set_name("Waseem");
	p[6].set_type("Attacking");
	p[6].set_points(36.7);
	
	p[7].set_name("Waqar");
	p[7].set_type("Attacking");
	p[7].set_points(35.7);
	
	p[8].set_name("Shinwari");
	p[8].set_type("Defensive");
	p[8].set_points(37.7);
	
	p[9].set_name("Akhtar");
	p[9].set_type("Attacking");
	p[9].set_points(37.00);
	
	p[10].set_name("Shaheen");
	p[10].set_type("Defensive");
	p[10].set_points(39.9);
	
	p[11].set_name("Hassan");
	p[11].set_type("Attacking");
	p[11].set_points(36.7);
	
		
	cout<<"PLAYERS LIST WHEN SEASON BEGAN: "<<endl<<endl;
	cout<<"Sr.No--   Player Name --  Playing Type  --  Status   --  Points "<<endl;
	cout<<"--------------------------------------------------------------------"<<endl;
	for (int i=0; i<12; i++)
	{
		cout<<p[i].serial<<"    |   "<<p[i].get_name()<<"     |      "<<p[i].get_type()<<"     |     "; 
		if (p[i].get_status() == 1) cout<<"Available   |  "; else cout<<"Not Available   | ";
		cout<<p[i].get_points()<<endl;
	}
	
	
	cout<<endl<<endl<<endl<<setw(80)<<" RANDOMLY SIMULATING THE LEAGUE MATCHES........... (12 Matches in total)"<<endl<<endl;
	//making four teams
	Team t[4];
	//asigned by setters
	t[0].teamName= "Warriors";
	t[0].teamPlayers[0].set_name("Shaheen");
	t[0].teamPlayers[0].set_points(39.9);
	t[0].teamPlayers[1].set_name("Waseem");
	t[0].teamPlayers[1].set_points(36.7);
	t[0].teamPlayers[2].set_name("Hassan");
	t[0].teamPlayers[2].set_points(36.7);
	t[0].teamSelection("Attacking");
	
//	t[0].calc_total_score();
	
	
	//assigned by player selection function
	t[1].teamName= "Dragons";
	t[1].playerSelection("Maaz", p, 0);
	t[1].playerSelection("Hunaid", p, 1);
	t[1].playerSelection("Marwat", p, 2);
	t[1].teamSelection("Defensive");

	
	
	t[2].teamName= "Kings";
	t[2].playerSelection("Waqar", p, 0);
	t[2].playerSelection("Khan", p, 1);
	t[2].playerSelection("Akbar", p, 2);
	t[2].teamSelection("Attacking");


	
	t[3].teamName= "Qalandars";
	t[3].playerSelection("Shinwari", p, 0);
	t[3].playerSelection("Qureshi", p, 1);
	t[3].playerSelection("Akhtar", p, 2);
	t[3].teamSelection("Defensive");
	

	
	Match m[12]; 
	
	//Match 1 - Warriors vs Dragons
	m[0].set_away(t[0]);
	m[0].set_home(t[1]);
	m[0].generateMatchStats();
	m[0].bestPlayersInMatch();
	
	//Match 2 - Qalandars vs Kings
	m[1].set_away(t[2]);
	m[1].set_home(t[3]);
	m[1].generateMatchStats();
	m[1].bestPlayersInMatch();
	
	//Match 3 - Warriors vs Kings
	m[2].set_away(t[0]);
	m[2].set_home(t[2]);
	m[2].generateMatchStats();
	m[2].bestPlayersInMatch();
	
	//Match 4 - Dragons vs Kings
	m[3].set_away(t[2]);
	m[3].set_home(t[1]);
	m[3].generateMatchStats();
	m[3].bestPlayersInMatch();
	
	//Match 5 - Qalandars vs Kings
	m[4].set_away(t[0]);
	m[4].set_home(t[3]);
	m[4].generateMatchStats();
	m[4].bestPlayersInMatch();
	
	//Match 6 - Qalandars vs Kings
	m[5].set_away(t[3]);
	m[5].set_home(t[1]);
	m[5].generateMatchStats();
	m[5].bestPlayersInMatch();
	
	
	//Match 7 - Warriors vs Dragons
	m[6].set_away(t[0]);
	m[6].set_home(t[1]);
	m[6].generateMatchStats();
	m[6].bestPlayersInMatch();
	
	//Match 8 - Qalandars vs Kings
	m[7].set_away(t[2]);
	m[7].set_home(t[3]);
	m[7].generateMatchStats();
	m[7].bestPlayersInMatch();
	
	//Match 9 - Warriors vs Kings
	m[8].set_away(t[0]);
	m[8].set_home(t[2]);
	m[8].generateMatchStats();
	m[8].bestPlayersInMatch();
	
	//Match 10 - Dragons vs Kings
	m[9].set_away(t[2]);
	m[9].set_home(t[1]);
	m[9].generateMatchStats();
	m[9].bestPlayersInMatch();
	
	//Match 11 - Qalandars vs Kings
	m[10].set_away(t[0]);
	m[10].set_home(t[3]);
	m[10].generateMatchStats();
	m[10].bestPlayersInMatch();
	
	//Match 12 - Qalandars vs Kings
	m[11].set_away(t[3]);
	m[11].set_home(t[1]);
	m[11].generateMatchStats();
	m[11].bestPlayersInMatch();
	
	
		
	//find total score of each team once all matches are done
	t[0].calc_total_score();
	t[1].calc_total_score();
	t[2].calc_total_score();
	t[3].calc_total_score();
	
	
	//After the league is done
	printLeaderBoard(t);
	printTeamRanks(t);
	
	return 0;
}
