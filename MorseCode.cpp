#include <iostream>
using namespace std ;

char *convertToMorseCode ( char * s )
{
	char * morse = new char[800]; //keeping space for longer strings
	for (int i=0; i<800; i++)
	{
		morse[i] = '\0';
	}
	
	int index = 0;
	int len=0;
	for (int i=0; s[i] != '\0'; i++)
	{
		len++;
	}
	
	//cout<<len;
	
	for (int i=0; i<len; i++)
	{
		//cout<<s[i]<<" ";
		if (s[i] == 'A')
		{
			morse[index] = '.';
			morse[index+1] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+2] = ' ';
			index = index+3;}
			else
			{
				index = index+2;
			}
		
		}
		
		 if (s[i] == 'B')
		{
			morse[index] = '-';
			morse[index+1] = '.';
			morse[index+2] = '.';
			morse[index+3] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+4] = ' ';
			index = index + 5;}
			else
			{
				index = index+4;
			}
		}
		
		 if (s[i] == 'C')
		{
			morse[index] = '-';
			morse[index+1] = '.';
			morse[index+2] = '-';
			morse[index+3] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+4] = ' ';
			index = index + 5;}
			else
			{
				index = index+4;
			}
		}  
		
		 if (s[i] == 'D')
		{
			morse[index] = '-';
			morse[index+1] = '.';
			morse[index+2] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+3] = ' ';
			index = index + 4; }
			else
			{
				index = index+3;
			}
		} 
		 if (s[i] == 'E')
		{
			morse[index] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+1] = ' ';
			index = index + 2;}
			else
			{
				index = index+1;
			}
		} 
		 if (s[i] == 'F')
		{
			morse[index] = '.';
			morse[index+1] = '.';
			morse[index+2] = '-';
			morse[index+3] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+4] = ' ';
			index = index + 5;}
			else
			{
				index = index+4;
			} 
		} 
		 if (s[i] == 'G')
		{
			morse[index] = '-';
			morse[index+1] = '-';
			morse[index+2] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+3] = ' ';
			index = index + 4;}
			else
			{
				index = index + 3;
			}
		} 
		 if (s[i] == 'H')
		{
			morse[index] = '.';
			morse[index+1] = '.';
			morse[index+2] = '.';
			morse[index+3] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+4] = ' ';
			index = index + 5;}
			else
			{
				index=index+4;
			} 
		} 
		 if (s[i] == 'I')
		{
			morse[index] = '.';
			morse[index+1] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+2] = ' ';
			 index = index + 3;}
			else
			{
				index=index+2;
			 } 
		} 
		 if (s[i] == 'J')
		{
			morse[index] = '.';
			morse[index+1] = '-';
			morse[index+2] = '-';
			morse[index+3] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+4] = ' ';
			index = index + 5; }
			else
			{
				index = index+4;
			}
		} 
		 if (s[i] == 'K')
		{
			morse[index] = '-';
			morse[index+1] = '.';
			morse[index+2] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+3] = ' ';
			index = index + 5; }
			else
			{
				index = index+4;
			}
		} 
		 if (s[i] == 'L')
		{
			morse[index] = '.';
			morse[index+1] = '-';
			morse[index+2] = '.';
			morse[index+3] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+4] = ' ';
			index = index + 5; }
			else
			{
				index = index+4;
			}
		} 
		 if (s[i] == 'M')
		{
			morse[index] = '-';
			morse[index+1] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+2] = ' ';
			index = index + 3; }
			else
			{
				index=index+2;
			}
		} 
		 if (s[i] == 'N')
		{
			morse[index] = '-';
			morse[index+1] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+2] = ' ';
			index = index + 3; }
			else
			{
				index = index+2;
			}
		} 
		 if (s[i] == 'O')
		{
			morse[index] = '-';
			morse[index+1] = '-';
			morse[index+2] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+3] = ' ';
			index = index + 4; }
			else
			{
				index = index+3;
			}
		} 
		 if (s[i] == 'P')
		{
			morse[index] = '.';
			morse[index+1] = '-';
			morse[index+2] = '-';
			morse[index+3] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+4] = ' ';
			index = index + 5; }
			else
			{
				index = index+4;
			}
		} 
		 if (s[i] == 'Q')
		{
			morse[index] = '-';
			morse[index+1] = '-';
			morse[index+2] = '.';
			morse[index+3] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+4] = ' ';
			index = index + 5;}
			else
			{
				index = index+4;
			 } 
		} 
		 if (s[i] == 'R')
		{
			morse[index] = '.';
			morse[index+1] = '-';
			morse[index+2] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+3] = ' ';
			index = index + 4; }
			else
			{
				index = index+3;
			}
		} 
		 if (s[i] == 'S')
		{
			morse[index] = '.';
			morse[index+1] = '.';
			morse[index+2] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{morse[index+3] = ' ';
			index = index + 4; }
			else
			{
				index = index+3;
			}
		} 
		 if (s[i] == 'T')
		{
			morse[index] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+1] = ' ';
			index = index + 2;}
			else
			{
				index = index+1;
			} 
		} 
		 if (s[i] == 'U')
		{
			morse[index] = '.';
			morse[index+1] = '.';
			morse[index+2] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+3] = ' ';
			index = index + 4; }
			else
			{
				index = index+3;
			}
		} 
		 if (s[i] == 'V')
		{
			morse[index] = '.';
			morse[index+1] = '.';
			morse[index+2] = '.';
			morse[index+3] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+4] = ' ';
			index = index + 5; }
			else
			{
				index = index+4;
			}
		} 
		 if (s[i] == 'W')
		{
			morse[index] = '.';
			morse[index+1] = '-';
			morse[index+2] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+3] = ' ';
			index = index + 4; }
			else
			{
				index = index+3;
			}
		} 
		 if (s[i] == 'X')
		{
			morse[index] = '-';
			morse[index+1] = '.';
			morse[index+2] = '.';
			morse[index+3] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+4] = ' ';
			index = index + 5; }
			else
			{
				index = index+4;
			}
		} 
		 if (s[i] == 'Y')
		{
			morse[index] = '-';
			morse[index+1] = '.';
			morse[index+2] = '-';
			morse[index+3] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+4] = ' ';
			index = index + 5;}
			else
			{
				index = index +4;
			 } 
		} 
		 if (s[i] == 'Z')
		{
			morse[index] = '-';
			morse[index+1] = '-';
			morse[index+2] = '.';
			morse[index+3] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+4] = ' ';
			index = index + 5;}
			else
			{
				index = index+4;
			 } 
		} 
		 if (s[i] == '0')
		{
			morse[index] = '-';
			morse[index+1] = '-';
			morse[index+2] = '-';
			morse[index+3] = '-';
			morse[index+4] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+5] = ' ';
			index = index + 6; }
			else
			{
				index = index+5;
			}
		} 
		 if (s[i] == '1')
		{
			morse[index] = '.';
			morse[index+1] = '-';
			morse[index+2] = '-';
			morse[index+3] = '-';
			morse[index+4] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+5] = ' ';
			index = index + 6; }
			else
			{
				index = index+5;
			}
		} 
		if (s[i] == '2')
		{
			morse[index] = '.';
			morse[index+1] = '.';
			morse[index+2] = '-';
			morse[index+3] = '-';
			morse[index+4] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+5] = ' ';
			index = index + 6; }
			else
			{
				index = index+5;
			}
		} 
		if (s[i] == '3')
		{
			morse[index] = '.';
			morse[index+1] = '.';
			morse[index+2] = '.';
			morse[index+3] = '-';
			morse[index+4] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+5] = ' ';
			index = index + 6; }
			else
			{
				index = index+5;
			}
		} 
		if (s[i] == '4')
		{
			morse[index] = '.';
			morse[index+1] = '.';
			morse[index+2] = '.';
			morse[index+3] = '.';
			morse[index+4] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+5] = ' ';
			index = index + 6; }
			else
			{
				index = index+5;
			}
		} 
		if (s[i] == '5')
		{
			morse[index] = '.';
			morse[index+1] = '.';
			morse[index+2] = '.';
			morse[index+3] = '.';
			morse[index+4] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+5] = ' ';
			index = index + 6; }
			else
			{
				index = index+5;
			}
		} 
		if (s[i] == '6')
		{
			morse[index] = '-';
			morse[index+1] = '.';
			morse[index+2] = '.';
			morse[index+3] = '.';
			morse[index+4] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+5] = ' ';
			index = index + 6; }
			else
			{
				index = index+5;
			}
		} 
		if (s[i] == '7')
		{
			morse[index] = '-';
			morse[index+1] = '-';
			morse[index+2] = '.';
			morse[index+3] = '.';
			morse[index+4] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+5] = ' ';
			index = index + 6; }
			else
			{
				index = index+5;
			}
		} 
		if (s[i] == '8')
		{
			morse[index] = '-';
			morse[index+1] = '-';
			morse[index+2] = '-';
			morse[index+3] = '.';
			morse[index+4] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+5] = ' ';
			index = index + 6;}
			else
			{
				index = index+5;
			 } 
		} 
		if (s[i] == '9')
		{
			morse[index] = '-';
			morse[index+1] = '-';
			morse[index+2] = '-';
			morse[index+3] = '-';
			morse[index+4] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+5] = ' ';
			index = index + 6; }
			else
			{
				index = index+5;
			}
		} 
		if (s[i] == '.')
		{
			morse[index] = '.';
			morse[index+1] = '-';
			morse[index+2] = '.';
			morse[index+3] = '-';
			morse[index+4] = '.';
			morse[index+5] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+6] = ' ';
			index = index + 7; }
			else
			{
				index = index +6;
			}
		} 
		if (s[i] == ',')
		{
			morse[index] = '-';
			morse[index+1] = '-';
			morse[index+2] = '.';
			morse[index+3] = '.';
			morse[index+4] = '-';
			morse[index+5] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+6] = ' ';
			index = index + 7; }
			else
			{
				index = index+6;
			}
		} 
		if (s[i] == '?')
		{
			morse[index] = '.';
			morse[index+1] = '.';
			morse[index+2] = '-';
			morse[index+3] = '-';
			morse[index+4] = '.';
			morse[index+5] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+6] = ' ';
			index = index + 7;}
			else
			{
				index = index+6;
			 } 
		} 
		if (s[i] == '!')
		{
			morse[index] = '-';
			morse[index+1] = '.';
			morse[index+2] = '-';
			morse[index+3] = '.';
			morse[index+4] = '-';
			morse[index+5] = '-';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+6] = ' ';
			index = index + 7; }
			else
			{
				index = index+6;
			}
		} 
		if (s[i] == '/' )
		{
			morse[index] = '-';
			morse[index+1] = '.';
			morse[index+2] = '.';
			morse[index+3] = '-';
			morse[index+4] = '.';
			if (s[i+1]!=' ' && s[i+1] != '\0')
			{
			morse[index+5] = ' ';
			index = index + 6; }
			else
			{
				index = index+5;
			}
		} 
			if (s[i] == ' ')
		{
			morse[index] = '/';
			index = index + 1; 
		} 
	}
	
	cout<<endl;
	morse[index] = '/';
	morse[index+1] = '\0';

	return morse;
}

 char *convertToString ( char * s ) 
{
	int len=0;
	for (int i=0; s[i] != '\0'; i++)
	{
		len++;
	}
	//cout<<len;
	char *array = new char[100];
	for (int i=0; i<100; i++)
	{
		array[i] = '\0';
	}
	
	int index=0;
	for (int i=0; i<len;)
	{
		if (s[i]=='.' && s[i+1]=='-')  //check for A
		{
			if (s[i+2]==' ' || s[i+2]=='\0')
			{
				array[index]='A';
				index++;
				i=i+3;
			}
			else if (s[i+2]=='/')
			{
				array[index]='A';
				array[index+1]=' ';
				index = index+2;
				i=i+3;
			}
		}
		
		if (s[i]=='-' && s[i+1]=='.' && s[i+2] == '.' && s[i+3] == '.')  //check for B
		{
			if (s[i+4]==' ' || s[i+4]=='\0')
			{
				array[index]='B';
				index++;
				i=i+5;
			}
			else if (s[i+4]=='/')
			{
				array[index]='B';
				array[index+1]=' ';
				index = index+2;
				i=i+5;
			}
		}
		
		if (s[i]=='-' && s[i+1]=='.' && s[i+2] == '-' && s[i+3] == '.')  //check for C
		{
			if (s[i+4]==' ' || s[i+4]=='\0')
			{
				array[index]='C';
				index++;
				i=i+5;
			}
			else if (s[i+4]=='/')
			{
				array[index]='C';
				array[index+1]=' ';
				index = index+2;
				i=i+5;
			}
		}
		
		if (s[i]=='-' && s[i+1]=='.' && s[i+2] == '.')  //check for D
		{
			if (s[i+3]==' ' || s[i+3]=='\0')
			{
				array[index]='D';
				index++;
				i=i+4;
			}
			else if (s[i+3]=='/')
			{
				array[index]='D';
				array[index+1]=' ';
				index = index+2;
				i=i+4;
			}
		}
		
		if (s[i]=='.')  //check for E
		{
			if (s[i+1]==' ' || s[i+1]=='\0')
			{
				array[index]='E';
				index++;
				i=i+2;
			}
			else if (s[i+1]=='/')
			{
				array[index]='E';
				array[index+1]=' ';
				index = index+2;
				i=i+2;
			}
		}
			
		if (s[i]=='.' && s[i+1]=='.' && s[i+2] == '-' && s[i+3] == '.')  //check for F
		{
			if (s[i+4]==' ' || s[i+4]=='\0')
			{
				array[index]='F';
				index++;
				i=i+5;
			}
			else if (s[i+4]=='/')
			{
				array[index]='F';
				array[index+1]=' ';
				index = index+2;
				i=i+5;
			}
		}
		
		if (s[i]=='-' && s[i+1]=='-' && s[i+2] == '.')  //check for G
		{
			if (s[i+3]==' ' || s[i+3]=='\0')
			{
				array[index]='G';
				index++;
				i=i+4;
			}
			else if (s[i+3]=='/')
			{
				array[index]='G';
				array[index+1]=' ';
				index = index+2;
				i=i+4;
			}
		}
		
		if (s[i]=='.' && s[i+1]=='.' && s[i+2] == '.' && s[i+3] == '.')  //check for H
		{
			if (s[i+4]==' ' || s[i+4]=='\0')
			{
				array[index]='H';
				index++;
				i=i+5;
			}
			else if (s[i+4]=='/')
			{
				array[index]='H';
				array[index+1]=' ';
				index = index+2;
				i=i+5;
			}
		}
		
		if (s[i]=='.' && s[i+1]=='.')  //check for I
		{
			if (s[i+2]==' ' || s[i+2]=='\0')
			{
				array[index]='I';
				index++;
				i=i+3;
			}
			else if (s[i+2]=='/')
			{
				array[index]='I';
				array[index+1]=' ';
				index = index+2;
				i=i+3;
			}
		}
		
		if (s[i]=='.' && s[i+1]=='-' && s[i+2] == '-' && s[i+3] == '-')  //check for J
		{
			if (s[i+4]==' ' || s[i+4]=='\0')
			{
				array[index]='J';
				index++;
				i=i+5;
			}
			else if (s[i+4]=='/')
			{
				array[index]='J';
				array[index+1]=' ';
				index = index+2;
				i=i+5;
			}
		}
	 
	 	if (s[i]=='-' && s[i+1]=='.' && s[i+2] == '-')  //check for K
		{
			if (s[i+3]==' ' || s[i+3]=='\0')
			{
				array[index]='K';
				index++;
				i=i+4;
			}
			else if (s[i+3]=='/')
			{
				array[index]='K';
				array[index+1]=' ';
				index = index+2;
				i=i+4;
			}
		}
		
		if (s[i]=='.' && s[i+1]=='-' && s[i+2] == '.' && s[i+3] == '.')  //check for L
		{
			if (s[i+4]==' ' || s[i+4]=='\0')
			{
				array[index]='L';
				index++;
				i=i+5;
			}
			else if (s[i+4]=='/')
			{
				array[index]='L';
				array[index+1]=' ';
				index = index+2;
				i=i+5;
			}
		}
		if (s[i]=='-' && s[i+1]=='-')  //check for M
		{
			if (s[i+2]==' ' || s[i+2]=='\0')
			{
				array[index]='M';
				index++;
				i=i+3;
			}
			else if (s[i+2]=='/')
			{
				array[index]='M';
				array[index+1]=' ';
				index = index+2;
				i=i+3;
			}
		}
		
		if (s[i]=='-' && s[i+1]=='.')  //check for N
		{
			if (s[i+2]==' ' || s[i+2]=='\0')
			{
				array[index]='N';
				index++;
				i=i+3;
			}
			else if (s[i+2]=='/')
			{
				array[index]='N';
				array[index+1]=' ';
				index = index+2;
				i=i+3;
			}
		}
	
		if (s[i]=='-' && s[i+1]=='-' && s[i+2] == '-')  //check for O
		{
			if (s[i+3]==' ' || s[i+3]=='\0')
			{
				array[index]='O';
				index++;
				i=i+4;
			}
			else if (s[i+3]=='/')
			{
				array[index]='O';
				array[index+1]=' ';
				index = index+2;
				i=i+4;
			}
		}
		
		if (s[i]=='.' && s[i+1]=='-' && s[i+2] == '-' && s[i+3] == '.')  //check for P
		{
			if (s[i+4]==' ' || s[i+4]=='\0')
			{
				array[index]='P';
				index++;
				i=i+5;
			}
			else if (s[i+4]=='/')
			{
				array[index]='P';
				array[index+1]=' ';
				index = index+2;
				i=i+5;
			}
		}
		
		if (s[i]=='-' && s[i+1]=='-' && s[i+2] == '.' && s[i+3] == '-')  //check for Q
		{
			if (s[i+4]==' ' || s[i+4]=='\0')
			{
				array[index]='Q';
				index++;
				i=i+5;
			}
			else if (s[i+4]=='/')
			{
				array[index]='Q';
				array[index+1]=' ';
				index = index+2;
				i=i+5;
			}
		}
		
		if (s[i]=='.' && s[i+1]=='-' && s[i+2] == '.')  //check for R
		{
			if (s[i+3]==' ' || s[i+3]=='\0')
			{
				array[index]='R';
				index++;
				i=i+4;
			}
			else if (s[i+3]=='/')
			{
				array[index]='R';
				array[index+1]=' ';
				index = index+2;
				i=i+4;
			}
		}
	
		if (s[i]=='.' && s[i+1]=='.' && s[i+2] == '.')  //check for S
		{
			if (s[i+3]==' ' || s[i+3]=='\0')
			{
				array[index]='S';
				index++;
				i=i+4;
			}
			else if (s[i+3]=='/')
			{
				array[index]='S';
				array[index+1]=' ';
				index = index+2;
				i=i+4;
			}
		}
		
		if (s[i]=='-')  //check for T
		{
			if (s[i+1]==' ' || s[i+1]=='\0')
			{
				array[index]='T';
				index++;
				i=i+2;
			}
			else if (s[i+1]=='/')
			{
				array[index]='T';
				array[index+1]=' ';
				index = index+2;
				i=i+2;
			}
		}
		
		if (s[i]=='.' && s[i+1]=='.' && s[i+2] == '-')  //check for U
		{
			if (s[i+3]==' ' || s[i+3]=='\0')
			{
				array[index]='U';
				index++;
				i=i+4;
			}
			else if (s[i+3]=='/')
			{
				array[index]='U';
				array[index+1]=' ';
				index = index+2;
				i=i+4;
			}
		}
		
		if (s[i]=='.' && s[i+1]=='.' && s[i+2] == '.' && s[i+3] == '-')  //check for V
		{
			if (s[i+4]==' ' || s[i+4]=='\0')
			{
				array[index]='V';
				index++;
				i=i+5;
			}
			else if (s[i+4]=='/')
			{
				array[index]='V';
				array[index+1]=' ';
				index = index+2;
				i=i+5;
			}
		}
		
		if (s[i]=='.' && s[i+1]=='-' && s[i+2] == '-' )  //check for W
		{
			if (s[i+3]==' ' || s[i+3]=='\0')
			{
				array[index]='W';
				index++;
				i=i+4;
			}
			else if (s[i+3]=='/')
			{
				array[index]='W';
				array[index+1]=' ';
				index = index+2;
				i=i+4;
			}
		}
		
		if (s[i]=='-' && s[i+1]=='.' && s[i+2] == '.' && s[i+3] == '-')  //check for X
		{
			if (s[i+4]==' ' || s[i+4]=='\0')
			{
				array[index]='X';
				index++;
				i=i+5;
			}
			else if (s[i+4]=='/')
			{
				array[index]='X';
				array[index+1]=' ';
				index = index+2;
				i=i+5;
			}
		}
		
		 if (s[i]=='-' && s[i+1]=='.' && s[i+2] == '-' && s[i+3] == '-')  //check for Y
		{
			if (s[i+4]==' ' || s[i+4]=='\0')
			{
				array[index]='Y';
				index++;
				i=i+5;
			}
			else if (s[i+4]=='/')
			{
				array[index]='Y';
				array[index+1]=' ';
				index = index+2;
				i=i+5;
			}
		}
		
	
		if (s[i]=='-' && s[i+1]=='-' && s[i+2] == '.' && s[i+3] == '.')  //check for Z
		{
			if (s[i+4]==' ' || s[i+4]=='\0')
			{
				array[index]='Z';
				index++;
				i=i+5;
			}
			else if (s[i+4]=='/')
			{
				array[index]='Z';
				array[index+1]=' ';
				index = index+2;
				i=i+5;
			}
		} 
		
		if (s[i]=='-' && s[i+1]=='-' && s[i+2] == '-' && s[i+3] == '-' && s[i+4]=='-')  //check for 0
		{
			if (s[i+5]==' ' || s[i+5]=='\0')
			{
				array[index]='0';
				index++;
				i=i+6;
			}
			else if (s[i+5]=='/')
			{
				array[index]='0';
				array[index+1]=' ';
				index = index+2;
				i=i+6;
			}
		}
		
		if (s[i]=='.' && s[i+1]=='-' && s[i+2] == '-' && s[i+3] == '-' && s[i+4]=='-')  //check for 1
		{
			if (s[i+5]==' ' || s[i+5]=='\0')
			{
				array[index]='1';
				index++;
				i=i+6;
			}
			else if (s[i+5]=='/')
			{
				array[index]='1';
				array[index+1]=' ';
				index = index+2;
				i=i+6;
			}
		}
		
		if (s[i]=='.' && s[i+1]=='.' && s[i+2] == '-' && s[i+3] == '-' && s[i+4]=='-')  //check for 2
		{
			if (s[i+5]==' ' || s[i+5]=='\0')
			{
				array[index]='2';
				index++;
				i=i+6;
			}
			else if (s[i+5]=='/')
			{
				array[index]='2';
				array[index+1]=' ';
				index = index+2;
				i=i+6;
			}
		}
		
		if (s[i]=='.' && s[i+1]=='.' && s[i+2] == '.' && s[i+3] == '-' && s[i+4]=='-')  //check for 3
		{
			if (s[i+5]==' ' || s[i+5]=='\0')
			{
				array[index]='3';
				index++;
				i=i+6;
			}
			else if (s[i+5]=='/')
			{
				array[index]='3';
				array[index+1]=' ';
				index = index+2;
				i=i+6;
			}
		}
	
		if (s[i]=='.' && s[i+1]=='.' && s[i+2] == '.' && s[i+3] == '.' && s[i+4]=='-')  //check for 4
		{
			if (s[i+5]==' ' || s[i+5]=='\0')
			{
				array[index]='4';
				index++;
				i=i+6;
			}
			else if (s[i+5]=='/')
			{
				array[index]='4';
				array[index+1]=' ';
				index = index+2;
				i=i+6;
			}
		}
		
		if (s[i]=='.' && s[i+1]=='.' && s[i+2] == '.' && s[i+3] == '.' && s[i+4]=='.')  //check for 5
		{
			if (s[i+5]==' ' || s[i+5]=='\0')
			{
				array[index]='5';
				index++;
				i=i+6;
			}
			else if (s[i+5]=='/')
			{
				array[index]='5';
				array[index+1]=' ';
				index = index+2;
				i=i+6;
			}
		}
		
		if (s[i]=='-' && s[i+1]=='.' && s[i+2] == '.' && s[i+3] == '.' && s[i+4]=='.')  //check for 6
		{
			if (s[i+5]==' ' || s[i+5]=='\0')
			{
				array[index]='6';
				index++;
				i=i+6;
			}
			else if (s[i+5]=='/')
			{
				array[index]='6';
				array[index+1]=' ';
				index = index+2;
				i=i+6;
			}
		}
	
		if (s[i]=='-' && s[i+1]=='-' && s[i+2] == '.' && s[i+3] == '.' && s[i+4]=='.')  //check for 7
		{
			if (s[i+5]==' ' || s[i+5]=='\0')
			{
				array[index]='7';
				index++;
				i=i+6;
			}
			else if (s[i+5]=='/')
			{
				array[index]='7';
				array[index+1]=' ';
				index = index+2;
				i=i+6;
			}
		}
		
		if (s[i]=='-' && s[i+1]=='-' && s[i+2] == '-' && s[i+3] == '.' && s[i+4]=='.')  //check for 8
		{
			if (s[i+5]==' ' || s[i+5]=='\0')
			{
				array[index]='8';
				index++;
				i=i+6;
			}
			else if (s[i+5]=='/')
			{
				array[index]='8';
				array[index+1]=' ';
				index = index+2;
				i=i+6;
			}
		}
		
		if (s[i]=='-' && s[i+1]=='-' && s[i+2] == '-' && s[i+3] == '-' && s[i+4]=='.')  //check for 9
		{
			if (s[i+5]==' ' || s[i+5]=='\0')
			{
				array[index]='9';
				index++;
				i=i+6;
			}
			else if (s[i+5]=='/')
			{
				array[index]='9';
				array[index+1]=' ';
				index = index+2;
				i=i+6;
			}
		}
		
			
		if (s[i]=='.' && s[i+1]=='-' && s[i+2] == '.' && s[i+3] == '-' && s[i+4]=='.' && s[i
		+5] == '-')  //check for .
		{
			if (s[i+6]==' ' || s[i+6]=='\0')
			{
				array[index]='.';
				index++;
				i=i+7;
			}
			else if (s[i+6]=='/')
			{
				array[index]='.';
				array[index+1]=' ';
				index = index+2;
				i=i+7;
			}
		}
		
		if (s[i]=='-' && s[i+1]=='-' && s[i+2] == '.' && s[i+3] == '.' && s[i+4]=='-' && s[i
		+5] == '-')  //check for ,
		{
			if (s[i+6]==' ' || s[i+6]=='\0')
			{
				array[index]=',';
				index++;
				i=i+7;
			}
			else if (s[i+6]=='/')
			{
				array[index]=',';
				array[index+1]=' ';
				index = index+2;
				i=i+7;
			}
		}
		
		if (s[i]=='.' && s[i+1]=='.' && s[i+2] == '-' && s[i+3] == '-' && s[i+4]=='.' && s[i
		+5] == '.')  //check for ?
		{
			if (s[i+6]==' ' || s[i+6]=='\0')
			{
				array[index]='?';
				index++;
				i=i+7;
			}
			else if (s[i+6]=='/')
			{
				array[index]='?';
				array[index+1]=' ';
				index = index+2;
				i=i+7;
			}
		}
		
		if (s[i]=='-' && s[i+1]=='.' && s[i+2] == '-' && s[i+3] == '.' && s[i+4]=='-' && s[i
		+5] == '-')  //check for !
		{
			if (s[i+6]==' ' || s[i+6]=='\0')
			{
				array[index]='!';
				index++;
				i=i+7;
			}
			else if (s[i+6]=='/')
			{
				array[index]='!';
				array[index+1]=' ';
				index = index+2;
				i=i+7;
			}
		}
		
		if (s[i]=='-' && s[i+1]=='.' && s[i+2] == '.' && s[i+3] == '-' && s[i+4]=='.')  //check for /
		{
			if (s[i+5]==' ' || s[i+5]=='\0')
			{
				array[index]='/';
				index++;
				i=i+6;
			}
			else if (s[i+5]=='/')
			{
				array[index]='/';
				array[index+1]=' ';
				index = index+2;
				i=i+6;
			}
		}
		
		if (s[i]=='-' && s[i+1]=='.' && s[i+2] == '-' && s[i+3] == '-' && s[i+4]=='.')  //check for parenthesis
		{
			if (s[i+5]==' ' || s[i+5]=='\0')
			{
				array[index]='(';
				index++;
				i=i+6;
			}
			else if (s[i+5]=='/')
			{
				array[index]='(';
				array[index+1]=' ';
				index = index+2;
				i=i+6;
			}
		}
		
		if (s[i]=='-' && s[i+1]=='.' && s[i+2] == '-' && s[i+3] == '-' && s[i+4]=='.' && s[i+5] == '-')  //check for parenthesis
		{
			if (s[i+6]==' ' || s[i+6]=='\0')
			{
				array[index]=')';
				index++;
				i=i+7;
			}
			else if (s[i+6]=='/')
			{
				array[index]=')';
				array[index+1]=' ';
				index = index+2;
				i=i+7;
			}
		}
		
		if (s[i]=='.' && s[i+1]=='-' && s[i+2] == '.' && s[i+3] == '.' && s[i+4]=='.')  //check for ampersand
		{
			if (s[i+5]==' ' || s[i+5]=='\0')
			{
				array[index]='&';
				index++;
				i=i+6;
			}
			else if (s[i+5]=='/')
			{
				array[index]='&';
				array[index+1]=' ';
				index = index+2;
				i=i+6;
			}
		}
	
	}
	return array;
} 

/* int main()
{
	char statement[] = "TEST";
	char *morse = convertToMorseCode(statement);
	cout<<morse;
	delete [] morse;
	
	char code[]  ="- .... .. .../.. .../.-/- . ... -/... - .-. .. -. --. -.-.--/";
	char *conv = convertToString(code);
	cout<<endl<<endl<<conv;	
} 
*/
