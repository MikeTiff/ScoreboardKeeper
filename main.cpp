#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;
  int first=0, second=0;
void printScoreboard( vector< vector<int> >);
int randomBetween(int, int);

  int periods;
  int teams;
  int i=0, row=0, col=0, row1=0, col1=0;
int main()
 {
  srand((int) time(0));
  cout<<"How many competitors? ";
  cin>>teams;
  cout<<"How many scoring periods? ";
  cin>>periods;

  if( teams < MIN_TEAMS || periods < MIN_PERIODS || 
      teams > MAX_TEAMS || periods > MAX_PERIODS )
  {
    cout<<"Must have between "<<MIN_TEAMS<<" and "<<MAX_TEAMS<<" competitors.\n";
    cout<<"and between "<<MIN_PERIODS<<" and "<<MAX_PERIODS<<" periods.\n";
    return 0;
  }
  else
  {
   vector<vector<int> > Board;
   Board.resize(teams);
   for(i = 0; i<teams; i++)
    {
     Board[i].resize(periods);
    }
   //make scoreboard and fill it with zeros
   //cout<<"SCOREBOARD\n";
   for (row = 0; row<teams; row++)
    {
     for (col = 0; col<periods; col++)
      {
       Board[row][col]= 0;//assigning zeroes
      }
    }
   printScoreboard(Board);
   for (row = 0; row<teams; row++)
    {
     for (col = 0; col<periods; col++)
      {
       Board[row][col]= randomBetween(5,5);//assigning random values
      }
    }
   printScoreboard(Board);


   }
 return 0;
   }
   void printScoreboard( vector< vector<int> > Board)
    {
     cout<<"SCOREBOARD\n"; 
     for (row1 = 0; row1<teams; row1++)
      {
      cout<<"Player "<<(row1+1)<<": ";
      for (col1 = 0; col1<periods; col1++)
       { 
 
       cout<<Board[row1][col1]<<"|";
       }
      cout<<endl; 
      } 
    }
   int randomBetween(int first,int second)
    {
     if (first > second)
      { return second + rand() % (first-second+1);
      }
     else if (second > first)
      { return first + rand() % (second-first+1);
      }
     else
      { return rand();
      }
   }

   //once created, display the scoreboard
   



