#include<iostream>
using namespace std;
class tac
{
	public:
	char marker1,marker2;
	bool isXturn=true;
	int digit,turns=0,x=1;
	char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	char last_marker;
	void drawboard()
	{
		cout<<"First Player:Enter Your Marker X or O:";
		cin>>marker1;
		if(marker1=='X' || marker1=='x')
		{
			marker2='O';
			cout<<"Second-player's marker:O\n";
		}
		else
		{
			marker2='X';
			cout<<"Second-player's marker:X\n";
		}
		cout<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<endl;
		cout<<"---|---|---\n";
		cout<<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<endl;
		cout<<"---|---|---\n";
		cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<endl;
	}
	void select()
	{
		int x=1;
		do
		{
			char current_marker=isXturn?marker1:marker2;
			last_marker=current_marker;
			cout<<current_marker<<"'s turn Enter your marker from(1 to 9):";
			cin>>digit;
		if(digit==1)
		{
			if((board[0][0]!='X' && board[0][0]!='x') && (board[0][0]!='O' && board[0][0]!='o'))
			{
				board[0][0]=current_marker;
				x=0;
			}
			else
			{
				cout<<"That Place Is Already Filled! Please Enter A Proper Value\n";
			}
		}
		else if(digit==2)
		{
			if((board[0][1]!='X' && board[0][1]!='x') && (board[0][1]!='O' && board[0][1]!='o'))
			{
				board[0][1]=current_marker;
				x=0;
			}
			else
			{
				cout<<"That Place Is Already Filled! Please Enter A Proper Value\n";
			}
	
		}
		else if(digit==3)
		{
			if((board[0][2]!='X' && board[0][2]!='x') && (board[0][2]!='O' && board[0][2]!='o'))
			{
				board[0][2]=current_marker;
				x=0;
			}
			else
			{
				cout<<"That Place Is Already Filled! Please Enter A Proper Value\n";
			}
		}
		else if(digit==4)
		{
			if((board[1][0]!='X' && board[1][0]!='x') && (board[1][0]!='O' && board[1][0]!='o'))
			{
				board[1][0]=current_marker;
				x=0;
			}
			else
			{
				cout<<"That Place Is Already Filled! Please Enter A Proper Value\n";
			}
		}
		else if(digit==5)
		{
			if((board[1][1]!='X' && board[1][1]!='x') && (board[1][1]!='O' && board[1][1]!='o'))
			{
				board[1][1]=current_marker;
				x=0;
			}
			else
			{
				cout<<"That Place Is Already Filled! Please Enter A Proper Value\n";
			}
		}
		else if(digit==6)
		{
			if((board[1][2]!='X' && board[1][2]!='x') && (board[1][2]!='O' && board[1][2]!='o'))
			{
				board[1][2]=current_marker;
				x=0;
			}
			else
			{
				cout<<"That Place Is Already Filled! Please Enter A Proper Value\n";
			}
		}
		else if(digit==7)
		{
			if((board[2][0]!='X' && board[2][0]!='x') && (board[2][0]!='O' && board[2][0]!='o'))
			{
				board[2][0]=current_marker;
				x=0;
			}
			else
			{
				cout<<"That Place Is Already Filled! Please Enter A Proper Value\n";
			}
		}
		else if(digit==8)
		{
			if((board[2][1]!='X' && board[2][1]!='x') && (board[2][1]!='O' && board[2][1]!='o'))
			{
				board[2][1]=current_marker;
				x=0;
			}
			else
			{
				cout<<"That Place Is Already Filled! Please Enter A Proper Value\n";
			}
		}
		else if(digit==9)
		{
			if((board[2][2]!='X' && board[2][2]!='x') && (board[2][2]!='O' && board[2][2]!='o'))
			{
				board[2][2]=current_marker;
				x=0;
			}
			else
			{
				cout<<"That Place Is Already Filled! Please Enter A Proper Value\n";
			}
		}
		cout<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<endl;
		cout<<"---|---|---\n";
		cout<<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<endl;
		cout<<"---|---|---\n";
		cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<endl;
		if(board[0][0]==board[0][1] && board[0][0]==board[0][2])
		{
			cout<<last_marker<<" Wins\n";
			break;
		}
		else if(board[0][1]==board[1][1] && board[0][1]==board[2][1])
		{
			cout<<last_marker<<" Wins\n";
			break;
		}
		else if(board[1][0]==board[1][1] && board[1][0]==board[1][2])
		{
			cout<<last_marker<<" Wins\n";
			break;
		}
		else if(board[0][0]==board[1][0] && board[0][0]==board[2][0])
		{
			cout<<last_marker<<" Wins\n";
			break;
		}
		else if(board[2][0]==board[2][1] && board[2][0]==board[2][2])
		{
			cout<<last_marker<<" Wins\n";
			break;
		}
		else if(board[0][2]==board[1][2] && board[0][2]==board[2][2])
		{
			cout<<last_marker<<" Wins\n";
			break;
		}
		else if(board[0][2]==board[1][1] && board[0][2]==board[2][0])
		{
			cout<<last_marker<<" Wins\n";
			break;
		}
		if(board[0][0]==board[1][1] && board[0][0]==board[2][2])
		{
			cout<<last_marker<<" Wins\n";
			break;
		}
		turns++;
		isXturn=!isXturn;
		}while(turns<9);
		if(turns==9)
		{
			cout<<"No One Wins\n";
		}
	}
};
int main()
{
	tac t1;
	t1.drawboard();
	t1.select();
}