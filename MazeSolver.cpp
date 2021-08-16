#include <iostream>
using namespace std;

//Maze 1 Solver
bool mazeSolver(char arr[12][12], int nrows, int ncols, int srow/*starting row */, int scol /*starting column*/)
{
	
	//Base Case - Exit Location
	if (srow ==11 && scol ==0) 
	{
		arr[srow][scol] == 'X';
		cout<<endl<<"FOUND THE EXIT!!!  - Scroll Up for Steps"<<endl<<endl;
		return true;
	}
	
	
	//If target is accesible to go
	if (arr[srow][scol] == '.' && srow < nrows && scol < ncols && srow>-1 && scol>-1)
	{
		arr[srow][scol] = 'X';
		
		//output after the move
		cout<<endl<<endl<<"Moving Now......"<<endl<<endl;
        for (int i=0; i< ncols; i++)
        {
        	for (int j=0; j<nrows; j++)
        	cout<<arr[i][j]<<" ";
        	
        	cout<<endl;
		} 
		
		//Now traversing till the very end of maze
		
		
		//Check to move right - if exit can be found
		if (mazeSolver(arr, nrows, ncols, srow, scol+1 ))
		return true;
		
		//Check to move down - if exit can be found 
		if (mazeSolver(arr, nrows, ncols, srow+1, scol))
		return true;
		
		//Check to move up - if exit can be found
		if (mazeSolver(arr, nrows, ncols, srow-1, scol ))
		return true;
		
		//Check to move left - if exit can be found
		if (mazeSolver(arr, nrows, ncols, srow, scol-1 ))
		return true;
		
		
		
		//else returns to its starting point
		
	}
	return false;
}



//Maze 2 Solver
bool mazeSolver2( char arr[][12], int nrows, int ncols, int srow/*starting row */, int scol /*starting column*/)
{
	
	//Base Case - Exit Location
	if (srow ==3 && scol ==0) 
	{
		arr[srow][scol] == 'X';
		cout<<endl<<"FOUND THE EXIT!!! "<<endl<<endl;;
		return true;
	}
	
	//If target is accesible to go
	if (arr[srow][scol] == '.' && srow < nrows && scol < ncols && srow>-1 && scol>-1)
	{
		arr[srow][scol] = 'X';
		
		//output after the move
		cout<<endl<<endl<<"Moving Now......"<<endl<<endl;
        for (int i=0; i< ncols; i++)
        {
        	for (int j=0; j<nrows; j++)
        	cout<<arr[i][j]<<" ";
        	
        	cout<<endl;
		} 
		
		//Now traversing till the very end of maze
		
		//Check to move right - if exit can be found
		if (mazeSolver2(arr, nrows, ncols, srow, scol+1 ))
		return true;
		
		//Check to move down - if exit can be found 
		if (mazeSolver2(arr, nrows, ncols, srow+1, scol))
		return true;
		
		//Check to move up - if exit can be found
		if (mazeSolver2(arr, nrows, ncols, srow-1, scol ))
		return true;
		
		//Check to move left - if exit can be found
		if (mazeSolver2(arr, nrows, ncols, srow, scol-1 ))
		return true;
		
		
		
	}
	return false;
}


int main()
{
	cout<<"Maze Solver !"<<endl<<endl;
	
	cout<<"Choose Which MAze to Solve...."<<endl<<endl;
	
	char array1[12][12] = {{'#','#','#','#','#','#','#','#','#','#','#','#' },
						  {'#','.','.','.','#','.','.','.','.','.','.','#' },
						  {'#','.','#','.','#','.','#','#','#','#','.','#' },
						  {'#','#','#','.','#','.','.','.','.','#','.','#' },
						  {'#','.','.','.','.','#','#','#','.','#','.','.' },
						  {'#','#','#','#','.','#','.','#','.','#','.','#' },
						  {'#','.','.','#','.','#','.','#','.','#','.','#' },
						  {'#','#','.','#','.','#','.','#','.','#','.','#' },
						  {'#','.','.','.','.','.','.','.','.','#','.','#' },
						  {'#','#','#','#','#','#','.','#','#','#','.','#' },
						  {'.','.','.','.','.','.','.','#','.','.','.','#' },
					      {'#','#','#','#','#','#','#','#','#','#','#','#' }};
	
	char array2[12][12] ={{'#','#','#','#','#','#','#','#','#','#','#','#' },
						  {'#','.','.','.','#','.','.','.','.','.','.','#' },
						  {'.','.','#','.','#','.','#','#','#','#','.','#' },
						  {'#','#','#','.','#','.','.','.','.','#','.','#' },
						  {'#','.','.','.','.','#','#','#','.','#','.','.' },
						  {'#','#','#','#','.','#','.','#','.','#','.','#' },
						  {'#','.','.','#','.','#','.','#','.','#','.','#' },
						  {'#','#','.','#','.','#','.','#','.','#','.','#' },
						  {'#','.','.','.','.','.','.','.','.','#','.','#' },
						  {'#','#','#','#','#','#','.','#','#','#','.','#' },
						  {'#','.','.','.','.','.','.','#','.','.','.','#' },
					      {'#','#','#','#','#','#','#','#','#','#','#','#' }};
					      
					      
	cout<<"Maze 1... "<<endl;
	for (int i=0; i<12; i++)
	{
		for (int j=0; j<12; j++)
		{
			cout<<array1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	cout<<"Maze 2... "<<endl;
	for (int i=0; i<12; i++)
	{
		for (int j=0; j<12; j++)
		{
			cout<<array2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<endl<<endl;
	int choice;
	cout<<"Which Maze to Solve? (1 or 2) ? ";
	cin>>choice;
	
	if (choice ==1 )
	{
		mazeSolver(array1, 12, 12, 4,11);
		
		cout<<"Final Solution to the Maze is ....."<<endl<<endl;
		for (int i=0; i<12 ;i++)
		{
			for (int j=0; j<12; j++)
			{
				cout<<array1[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	if (choice == 2)
	{
		mazeSolver2(array2, 12, 12, 4,11);
		
		cout<<"Final Solution to the Maze is ....."<<endl<<endl;
		for (int i=0; i<12 ;i++)
		{
			for (int j=0; j<12; j++)
			{
				cout<<array2[i][j]<<" ";
			}
			cout<<endl;
		}
	}			  
						  
}
