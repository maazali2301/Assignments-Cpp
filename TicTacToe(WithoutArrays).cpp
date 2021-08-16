#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main()
{
	int p1_a=1, p2_a=1, p1_b=1, p2_b=1, p1_c=1, p2_c=1, p1_d=1, p2_d=1, p1_e=1, p2_e=1;
	int rand_num;
	int choice;
	
	cout<<setw(56)<<" Tic Tac Toe"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	cout<<setw(60)<<"|  1  |   2  |   3  |"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	cout<<setw(60)<<"|  4  |   5  |   6  |"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	cout<<setw(60)<<"|  7  |   8  |   9  |"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	
	cout<<endl<<endl;
	
	cout<<"1. Player vs Computer "<<endl;
	cout<<"2. Player 1 vs Player 2"<<endl;
	
	cout<<"Enter your choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1: 
		{
			cout<<"Player vs Computer!"<<endl;
			int inp_user, inp_comp;
			char pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9;
			int u1, u2, u3, u4, u5, u6, u7, u8, u9;
			int c1, c2, c3, c4, c5, c6, c7, c8, c9;
			
			for (int attempts = 1; attempts <=9; attempts++)  //one game cannot have more than 9 attempts
			{
				cout<<"USER : Enter a number between (1-9) to print O on game board";
				cin>>inp_user;
				
				//Check if number already taken
				if(inp_user == u1 || inp_user == u2||inp_user == u3||inp_user == u4||inp_user == u5||inp_user == u6||inp_user == u7||inp_user == u8||inp_user == u9||inp_user == c1 || inp_user == c2||inp_user == c3||inp_user == c4||inp_user == c5||inp_user == c6||inp_user == c7||inp_user == c8||inp_user == c9)
				{
					cout<<"Number already taken, Enter a new number: ";
					cin>>inp_user;
				}
				if (inp_user == 1)
				{
					u1 = 1;    //position 1 used by user
					pos1 = 'O';
				}
				if (inp_user == 2)
				{
					u2 = 2;    
					pos2 = 'O';
				}
				if (inp_user == 3)
				{
					u3 = 3;    
					pos3 = 'O';
				}
				if (inp_user == 4)
				{
					u4 = 4;    
					pos4 = 'O';
				}
				if (inp_user == 5)
				{
					u5 = 5;    
					pos5 = 'O';
				}
				if (inp_user == 6)
				{
					u6 = 6;    
					pos6 = 'O';
				}
				if (inp_user == 7)
				{
					u7 = 7;    
					pos7 = 'O';
				}
				if (inp_user == 8)
				{
					u8 = 8;    
					pos8 = 'O';
				}
				if (inp_user == 9)
				{
					u9 = 9;    
					pos9 = 'O';
				}
				
				cout<<setw(30)<<" Tic Tac Toe"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	cout<<setw(45)<<" | "<<pos1<<"  |  "<<pos2<<" |  "<<pos3<<" |"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	cout<<setw(45)<<" | "<<pos4<<"  |  "<<pos5<<" |  "<<pos6<<" |"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	cout<<setw(45)<<" | "<<pos7<<"  |  "<<pos8<<" |  "<<pos9<<" |"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	
		if ((u1==1&&u4==4&&u7==7)||(u1==1&&u2==2&&u3==3)||(u1==1&&u5==5&&u9==9)||(u3==3&&u6==6&&u9==9)||(u4==4&&u5==5&&u6==6)||(u7==7&&u8==8&&u9==9)||(u2==2&&u5==5&&u8==8)||(u3==3&&u5==5&&u7==7))
		{
			cout<<"User is the winner! Congratulations!";
			break;	
		}
				cout<<"COMPUTER : Enters number between (1-9) to print X on game board: ";
				
				do {
				inp_comp = rand()%9;}
				while(inp_comp == u1 || inp_comp == u2||inp_comp == u3||inp_comp == u4||inp_comp == u5||inp_comp == u6||inp_comp == u7||inp_comp == u8||inp_comp == u9||inp_comp == c1 || inp_comp == c2||inp_comp == c3||inp_comp == c4||inp_comp == c5||inp_comp == c6||inp_comp == c7||inp_comp == c8||inp_comp == c9);
				
				if (inp_comp == 1)
				{
					c1 = 1;    //position 1 used by user
					pos1 = 'X';
				}
				if (inp_comp == 2)
				{
					c2 = 2;    
					pos2 = 'X';
				}
				if (inp_comp == 3)
				{
					c3 = 3;    
					pos3 = 'X';
				}
				if (inp_comp == 4)
				{
					c4 = 4;    
					pos4 = 'X';
				}
				if (inp_comp == 5)
				{
					c5 = 5;    
					pos5 = 'X';
				}
				if (inp_comp == 6)
				{
					c6 = 6;    
					pos6 = 'X';
				}
				if (inp_comp == 7)
				{
					c7 = 7;    
					pos7 = 'X';
				}
				if (inp_comp == 8)
				{
					c8 = 8;    
					pos8 = 'X';
				}
				if (inp_comp == 9)
				{
					c9 = 9;    
					pos9 = 'X';
				}
				
				cout<<setw(30)<<" Tic Tac Toe"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	cout<<setw(45)<<" | "<<pos1<<"  |  "<<pos2<<" |  "<<pos3<<" |"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	cout<<setw(45)<<" | "<<pos4<<"  |  "<<pos5<<" |  "<<pos6<<" |"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	cout<<setw(45)<<" | "<<pos7<<"  |  "<<pos8<<" |  "<<pos9<<" |"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	
		if ((c1==1&&c4==4&&c7==7)||(c1==1&&c2==2&&c3==3)||(c1==1&&c5==5&&c9==9)||(c3==3&&c6==6&&c9==9)||(c4==4&&c5==5&&c6==6)||(c7==7&&c8==8&&c9==9)||(c2==2&&c5==5&&c8==8)||(c3==3&&c5==5&&c7==7))
		{
			cout<<"Computer is the winner!";
			break;	
		}
		
				
		}
		cout<<"Game Over!"<<endl;
			
			break;	
		}
		
		case 2:
		{
			cout<<"Player1 vs Player2!"<<endl;
			int inp_user1, inp_user2;
			char pos1='1', pos2='2', pos3='3', pos4='4', pos5='5', pos6='6', pos7='7', pos8='8', pos9='9';
			int u1, u2, u3, u4, u5, u6, u7, u8, u9;
			int u2_1, u2_2, u2_3, u2_4, u2_5, u2_6, u2_7, u2_8, u2_9;
			
			for (int attempts = 1; attempts <=9; attempts++)  //one game cannot have more than 9 attempts
			{
				cout<<"USER 1 : Enter a number between (1-9) to print O on game board";
				cin>>inp_user1;
					if(inp_user1 == u1 || inp_user1 == u2||inp_user1 == u3||inp_user1 == u4||inp_user1 == u5||inp_user1 == u6||inp_user1 == u7||inp_user1 == u8||inp_user1 == u9||inp_user1 == u2_1 || inp_user1 == u2_2||inp_user1 == u2_3||inp_user1 == u2_4||inp_user1 == u2_5||inp_user1 == u2_6||inp_user1 == u2_7||inp_user1 == u2_8||inp_user1 == u2_9)
				{
					cout<<"Number already taken, Enter a new number: ";
					cin>>inp_user1;
				}
				
				
				if (inp_user1 == 1)
				{
					u1 = 1;    //position 1 used by user
					pos1 = 'O';
				}
				if (inp_user1 == 2)
				{
					u2 = 2;    
					pos2 = 'O';
				}
				if (inp_user1 == 3)
				{
					u3 = 3;    
					pos3 = 'O';
				}
				if (inp_user1 == 4)
				{
					u4 = 4;    
					pos4 = 'O';
				}
				if (inp_user1 == 5)
				{
					u5 = 5;    
					pos5 = 'O';
				}
				if (inp_user1 == 6)
				{
					u6 = 6;    
					pos6 = 'O';
				}
				if (inp_user1 == 7)
				{
					u7 = 7;    
					pos7 = 'O';
				}
				if (inp_user1 == 8)
				{
					u8 = 8;    
					pos8 = 'O';
				}
				if (inp_user1 == 9)
				{
					u9 = 9;    
					pos9 = 'O';
				}
				
				cout<<setw(30)<<" Tic Tac Toe"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	cout<<setw(45)<<" | "<<pos1<<"  |  "<<pos2<<" |  "<<pos3<<" |"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	cout<<setw(45)<<" | "<<pos4<<"  |  "<<pos5<<" |  "<<pos6<<" |"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	cout<<setw(45)<<" | "<<pos7<<"  |  "<<pos8<<" |  "<<pos9<<" |"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	
		if ((u1==1&&u4==4&&u7==7)||(u1==1&&u2==2&&u3==3)||(u1==1&&u5==5&&u9==9)||(u3==3&&u6==6&&u9==9)||(u4==4&&u5==5&&u6==6)||(u7==7&&u8==8&&u9==9)||(u2==2&&u5==5&&u8==8)||(u3==3&&u5==5&&u7==7))
		{
			cout<<"User 1 is the winner! Congratulations!";
			break;	
		}
				cout<<"USER 2 : Enter a number between (1-9) to print X on game board";
				cin>>inp_user2;
					if(inp_user2 == u1 || inp_user2 == u2||inp_user2 == u3||inp_user2 == u4||inp_user2 == u5||inp_user2 == u6||inp_user2 == u7||inp_user2 == u8||inp_user2 == u9||inp_user2 == u2_1 || inp_user2 == u2_2||inp_user2 == u2_3||inp_user2 == u2_4||inp_user2 == u2_5||inp_user2 == u2_6||inp_user2 == u2_7||inp_user2 == u2_8||inp_user2 == u2_9)
				{
					cout<<"Number already taken, Enter a new number: ";
					cin>>inp_user2;
				}
				
				if (inp_user2 == 1)
				{
					u2_1 = 1;    //position 1 used by user
					pos1 = 'X';
				}
				if (inp_user2 == 2)
				{
					u2_2 = 2;    
					pos2 = 'X';
				}
				if (inp_user2 == 3)
				{
					u2_3 = 3;    
					pos3 = 'X';
				}
				if (inp_user2 == 4)
				{
					u2_4 = 4;    
					pos4 = 'X';
				}
				if (inp_user2 == 5)
				{
					u2_5 = 5;    
					pos5 = 'X';
				}
				if (inp_user2 == 6)
				{
					u2_6 = 6;    
					pos6 = 'X';
				}
				if (inp_user2 == 7)
				{
					u2_7 = 7;    
					pos7 = 'X';
				}
				if (inp_user2 == 8)
				{
					u2_8 = 8;    
					pos8 = 'X';
				}
				if (inp_user2 == 9)
				{
					u2_9 = 9;    
					pos9 = 'X';
				}
				
				cout<<setw(30)<<" Tic Tac Toe"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	cout<<setw(45)<<" | "<<pos1<<"  |  "<<pos2<<" |  "<<pos3<<" |"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	cout<<setw(45)<<" | "<<pos4<<"  |  "<<pos5<<" |  "<<pos6<<" |"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	cout<<setw(45)<<" | "<<pos7<<"  |  "<<pos8<<" |  "<<pos9<<" |"<<endl;
	cout<<setw(60)<<" _____ ______ ______"<<endl;
	
		if ((u2_1==1&&u2_4==4&&u2_7==7)||(u2_1==1&&u2_2==2&&u2_3==3)||(u2_1==1&&u2_5==5&&u2_9==9)||(u2_3==3&&u2_6==6&&u2_9==9)||(u2_4==4&&u2_5==5&&u2_6==6)||(u2_7==7&&u2_8==8&&u2_9==9)||(u2_2==2&&u2_5==5&&u2_8==8)||(u2_3==3&&u2_5==5&&u2_7==7))
		{
			cout<<"User 2 is the winner!";
			break;	
		}
		
				
		}
		cout<<"Game Over!"<<endl;
			
			break;
		}
	}
	
	
	
	
	
return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
