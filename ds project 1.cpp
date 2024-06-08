#include<iostream>
#include<conio.h>
#include<fstream>
#include<Windows.h>
#include<time.h>
#include<string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Node
{
public:
	string fname, lname;
	int age;
	string email;
	int password;
	string username;
	Node *next, *previous;
	Node()
	{
		fname = "NULL";
		lname = "NULL";
		age = 0;
		email = "NULL";
		username = "NULL";
		password = 0;
	}
	Node(string fn, string last, int a, string em, string un, int p)
	{
		fname = fn;
		lname = last;
		age = a;
		email = em;
		username = un;
		password = p;
	}
};

class Admin
{
private:
	Node *head, *tail;

public:
	Admin()
	{
		head = NULL;
	}
	void registrartion_foam(string fn, string ln, int age, string em, string user, int pass)
	{
		Node *newnode = new Node(fn, ln, age, em, user, pass);
		newnode->next = NULL;
		newnode->previous = head;
		if (tail != NULL)
		{
			tail->next = newnode;
			newnode->previous = tail;
		}
		tail = newnode;
		if (head == NULL)
		{
			head = newnode;
		}
		cout << newnode->fname << " IS REGISTERED" << endl;
	}

	bool login(string usr, int pwd)
	{
		Node *current = head;
		while (current != NULL)
		{
			if (current->username == usr && current->password == pwd)
			{
				return true;
			}
			current = current->next;
		}
		return false;
	}

	void show_register()
	{
		Node *ptr = head;
		while (ptr != NULL)
		{
			cout << "\t\t\t\t+----------------------+" << endl;
			cout << "\t\t\t\t| WELCOME TO REGISTRATION FORM" << endl;
			cout << "\t\t\t\t+----------------------+" << endl;
			cout << "\t\t\t\t| FIRST NAME           |" << endl;
			cout << "\t\t\t\t" << ptr->fname << "       " << endl;;
			cout << "\t\t\t\t+----------------------+" << endl;
			cout << "\t\t\t\t|  LAST NAME           |" << endl;
			cout << "\t\t\t\t" << ptr->lname << "       " << endl;
			cout << "\t\t\t\t+----------------------+" << endl;
			cout << "\t\t\t\t|  AGE                 |" << endl;
			cout << "\t\t\t\t" << ptr->age << "         " << endl;
			cout << "\t\t\t\t+----------------------+" << endl;
			cout << "\t\t\t\t|  EMAIL ADDRESS       |" << endl;
			cout << "\t\t\t\t " << ptr->email << "       " << endl;
			cout << "\t\t\t\t+----------------------+" << endl;
			cout << "\t\t\t\t| USER NAME            |" << endl;
			cout << "\t\t\t\t|" << ptr->username << "    |" << endl;
			cout << "\t\t\t\t+----------------------+" << endl;
			cout << "\t\t\t\t|  PASSWORD            |" << endl;
			cout << "\t\t\t\t|" << ptr->password << "    |" << endl;
			cout << "\t\t\t\t+----------------------+" << endl;
			ptr = ptr->next;
		}
	}
	bool check_user_occurance(string username)
	{
		Node* current = head;
		while (current != NULL)
		{
			if (current->username == username)
			{
				return true;
			}
			current = current->next;
		}
		return false;
	}
	void main_menu()
	{
		cout << "\t\t\t\t+------------------------+" << endl;
		cout << "\t\t\t\t| WELCOME TO GMX-STATION |" << endl;
		cout << "\t\t\t\t|   *******  |" << endl;
		cout << "\t\t\t\t|    *******   |" << endl;
		cout << "\t\t\t\t+------------------------+" << endl;
	}
	void Registration_Form()
	{

		cout << "\t\t\t\t+----------------------+" << endl;
		cout << "\t\t\t\t| 1 TO REGISTER        |" << endl;
		cout << "\t\t\t\t| 2 TO LOGIN           |" << endl;
		cout << "\t\t\t\t+----------------------+" << endl;

	}

};



// TIC TAC GAME 
char mat[3][3] = { '1','2','3','4','5','6','7','8','9' };
char player = 'X';
int n = 0;
class TicTacToe_Game
{
protected:
	int a;
	string game_name;
	string gamelocation;
public:
	TicTacToe_Game()
	{
		a = 0;
		game_name = "";
		gamelocation = "";
	}
	void name(string gname, string loc)
	{
		game_name = gname;
		gamelocation = loc;
	}
	void display()
	{
		cout << "\t" << game_name << "\t\t\t" << " \t\t\t " << gamelocation << endl << endl;
	}
	void drawgame()
	{
		cout << endl;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << "\t" << mat[i][j] << "\t";
			}
			cout << endl << endl;
		}
	}

	void input()
	{
		cout << "\n\t===== It's " << player << " Turn !=====\n\n\tPress Any Number Where You want To Mark: ";
		cin >> a;
		cout << "\n";
		//fOR 1
		if (a == 1)
		{
			if (mat[0][0] != 'X'&&mat[0][0] != 'O')
			{
				mat[0][0] = player;
			}
			else
			{
				cout << "\n\t========= TRY AGAIN ==========\n" << endl;				input();
			}

		}
		//FOR 2
		if (a == 2)
		{
			if (mat[0][1] != 'X'&&mat[0][1] != 'O')
			{
				mat[0][1] = player;
			}
			else
			{
				cout << "\n\t========= TRY AGAIN ==========\n" << endl;
				input();
			}

		}
		//FOR 3
		if (a == 3)
		{
			if (mat[0][2] != 'X'&&mat[0][2] != 'O')
			{
				mat[0][2] = player;
			}
			else
			{
				cout << "\n\t========= TRY AGAIN ==========\n" << endl;
				input();
			}

		}
		//FOR 4	
		if (a == 4)
		{
			if (mat[1][0] != 'X'&&mat[1][0] != 'O')
			{
				mat[1][0] = player;
			}
			else
			{
				cout << "\n\t========= TRY AGAIN ==========\n" << endl;
				input();
			}

		}
		//FOR 5
		if (a == 5)
		{
			if (mat[1][1] != 'X'&&mat[1][1] != 'O')
			{
				mat[1][1] = player;
			}
			else
			{
				cout << "\n\t========= TRY AGAIN ==========\n" << endl;
				input();
			}
		}
		//FOR 6

		if (a == 6)
		{
			if (mat[1][2] != 'X'&&mat[1][2] != 'O')
			{
				mat[1][2] = player;
			}
			else
			{
				cout << "\n\t========= TRY AGAIN ==========\n" << endl;
				input();
			}

		}
		//FOR 7	
		if (a == 7)
		{
			if (mat[2][0] != 'X'&&mat[2][0] != 'O')
			{
				mat[2][0] = player;
			}
			else
			{
				cout << "\n\t========= TRY AGAIN ==========\n" << endl;
				input();
			}

		}
		//FOR 8
		if (a == 8)
		{
			if (mat[2][1] != 'X'&&mat[2][1] != 'O')
			{
				mat[2][1] = player;
			}
			else
			{
				cout << "\n\t========= TRY AGAIN ==========\n" << endl;
				input();
			}

		}
		//FOR 9
		if (a == 9)
		{
			if (mat[2][2] != 'X'&&mat[2][2] != 'O')
			{
				mat[2][2] = player;
			}
			else
			{
				cout << "\n\t========= TRY AGAIN ==========\n" << endl;
				input();
			}

		}
	}

	char winner()
	{
		if (mat[0][0] == 'X' && mat[0][1] == 'X' && mat[0][2] == 'X')
			return 'X';

		if (mat[1][0] == 'X' && mat[1][1] == 'X' && mat[1][2] == 'X')
			return 'X';

		if (mat[2][0] == 'X' && mat[2][1] == 'X' && mat[2][2] == 'X')
			return 'X';

		if (mat[0][0] == 'X' && mat[1][0] == 'X' && mat[2][0] == 'X')
			return 'X';

		if (mat[0][1] == 'X' && mat[1][1] == 'X' && mat[2][1] == 'X')
			return 'X';

		if (mat[0][2] == 'X' && mat[1][2] == 'X' && mat[2][2] == 'X')
			return 'X';

		if (mat[0][0] == 'X' && mat[1][1] == 'X' && mat[2][2] == 'X')
			return 'X';

		if (mat[2][0] == 'X' && mat[1][1] == 'X' && mat[0][2] == 'X')
			return 'X';

		if (mat[0][0] == 'O' && mat[0][1] == 'O' && mat[0][2] == 'O')
			return 'O';

		if (mat[1][0] == 'O' && mat[1][1] == 'O' && mat[1][2] == 'O')
			return 'O';

		if (mat[2][0] == 'O' && mat[2][1] == 'O' && mat[2][2] == 'O')
			return 'O';

		if (mat[0][0] == 'O' && mat[1][0] == 'O' && mat[2][0] == 'O')
			return 'O';

		if (mat[0][1] == 'O' && mat[1][1] == 'O' && mat[2][1] == 'O')
			return 'O';

		if (mat[0][2] == 'O' && mat[1][2] == 'O' && mat[2][2] == 'O')
			return 'O';

		if (mat[0][0] == 'O' && mat[1][1] == 'O' && mat[2][2] == 'O')
			return 'O';

		if (mat[2][0] == 'O' && mat[1][1] == 'O' && mat[0][2] == 'O')
			return 'O';

		return ('/');

	}
	void player2()
	{
		if (player == 'X')
		{
			player = 'O';
		}
		else
		{
			player = 'X';
		}
	}
	void clear()
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				mat[i][j] = 5;
				//If you want you can change this to the above one '1','2' by manually placing these values at each index od array
			}
		}
		player = 'X';
		n = 0;
	}
};

// SNAKE GAME
class Snake_Game
{
private:

public:
};

// PING PONG GAME
class PingPong_Game
{
private:
public:
};
class Game_Administrator
{
private:
	TicTacToe_Game TicTac_Obj;
	PingPong_Game PingPong_Obj;
	Snake_Game Snake_Obj;
public:
	void play_games()
	{
		char ch;
		cout << "\t\t\t\t+----------------------+" << endl;
		cout << "\t\t\t\t| Press s to play snake game" << endl;
		cout << "\t\t\t\t| Press p to play ping pong game" << endl;
		cout << "\t\t\t\t| Press t to play tik tack toe game" << endl;
		cout << "\t\t\t\t+------------------------+" << endl;
		cin >> ch;
		switch (ch)
		{
		case 's':


			break;
		case 'p':
			break;
		case 't':

			char ch, want;
			do
			{
				system("cls");
				TicTac_Obj.name("TOC TAC TOE", "CUST GAMING BLOCK");
				TicTac_Obj.display();
				n = 0;
				TicTac_Obj.clear();
				TicTac_Obj.drawgame();
				while (1)
				{
					n++;
					TicTac_Obj.input();
					TicTac_Obj.drawgame();
					if (TicTac_Obj.winner() == 'X')
					{
						cout << "\n\t\t\t========= CONGRATULATIONS ==========\n" << endl;
						cout << "\t\t\t======= PLAYER 1 WON THE GAME ======\n\n" << endl;
						break;
					}
					else if (TicTac_Obj.winner() == 'O')
					{
						cout << "\n\t\t\t========= CONGRATULATIONS ==========\n" << endl;
						cout << "\t\t\t======= PLAYER 2 WON THE GAME ======\n\n" << endl;
						break;
					}
					else if (TicTac_Obj.winner() == '/' && n == 9)
					{
						cout << "\n\t\t\t========= MATCH DRAW! ==========\n" << endl;
						cout << "\t\t\t======== NO RESULT FOUND =======\n\n" << endl;
						break;
					}
					TicTac_Obj.player2();
				}
				cout << "Do You Want To Play Again? press (y/n)";
				cin >> ch;

			} while (ch == 'y');

			break;
		default:

			cout << "\t\t\t\t+------------------------+" << endl;
			cout << "\t\t\t\t Invalid Command!" << endl;
			cout << "\t\t\t\t+------------------------+" << endl;
		}
	}
};

int main()
{
	// Objects

	Admin Leading_Obj;
	Game_Administrator Game_Obj;

	// Variables
	string _email;
	int _password;
	string _username;
	Leading_Obj.main_menu();
	int Choice, x = 1, pass, _age;
	string user, f_name, l_name;

	while (x == 1)
	{
		for (int I = 0; I < 5; I++)
		{
			                      cout << ".";
			Sleep(1000);
		}
		Leading_Obj.Registration_Form();
		cin >> Choice;
		switch (Choice)
		{
		case 1:
			cout << "\t\t\t\t+----------------------+" << endl;
			cout << "\t\t\t\t WELCOME TO REGISTRATION FORM" << endl;
			cout << "\t\t\t\t+----------------------+" << endl;
			cout << "\t\t\t\t ENTER YOUR FIRST NAME" << endl;
			cout << "\t\t\t\t+----------------------+" << endl;

			cin >> f_name;
			cout << "\t\t\t\t+----------------------+" << endl;
			cout << "\t\t\t\t ENTER YOUR LAST NAME" << endl;
			cout << "\t\t\t\t+----------------------+" << endl;

			cin >> l_name;
			cout << "\t\t\t\t+----------------------+" << endl;
			cout << "\t\t\t\t ENTER YOUR AGE      " << endl;
			cout << "\t\t\t\t+----------------------+" << endl;

			cin >> _age;
			cout << "\t\t\t\t+----------------------+" << endl;
			cout << "\t\t\t\t ENTER EMAIL ADDRESS " << endl;
			cout << "\t\t\t\t+----------------------+" << endl;
			cin >> _email;
			cout << "\t\t\t\t+----------------------+" << endl;
			cout << "\t\t\t\t ENTER YOUR USER NAME" << endl;
			cout << "\t\t\t\t+----------------------+" << endl;
			cin >> _username;
			while (Leading_Obj.check_user_occurance(_username))
			{
				cout << "\nERROR: THE USER " << _username << " IS ALREADY EXIST IN OUR SYSTEM\n\n";
				cout << "\t\t\t\t+----------------------+" << endl;
				cout << "\t\t\t\t PLEASE RE-ENTER YOUR USER NAME" << endl;
				cout << "\t\t\t\t ";
				cin >> _username;
			}
			cout << "\t\t\t\t+----------------------+" << endl;
			cout << "\t\t\t\t ENTER YOUR PASSWORD" << endl;
			cout << "\t\t\t\t+----------------------+" << endl;
			cin >> _password;
			cout << "\t\t\t\t+----------------------+" << endl;
			cout << endl;
			Leading_Obj.registrartion_foam(f_name, l_name, _age, _email, _username, _password);
			//start:
			Game_Obj.play_games();
			break;
		case 2:
			cout << "\t\t\t\t+----------------------+" << endl;
			cout << "\t\t\t\t ENTER YOUR USER NAME" << endl;
			cout << "\t\t\t\t+----------------------+" << endl;;
			cin >> user;
			cout << "\t\t\t\t+----------------------+" << endl;
			cout << "\t\t\t\t ENTER YOUR PASSWORD" << endl;
			cout << "\t\t\t\t+----------------------+" << endl;
			cin >> pass;
			cout << "\t\t\t\t+----------------------+" << endl;
			if (Leading_Obj.login(user, pass))
			{
				cout << "\t\t\t\t You have successfully login";
				Game_Obj.play_games();
			}
			else
			{
				cout << "\t\t\t\t Wrong Input\n\n";
				system("cls");
			}
			break;
		default:

			cout << "\t\t\t\t+------------------------+" << endl;
			cout << "\t\t\t\t INVALID COMMAND!" << endl;
			cout << "\t\t\t\t+------------------------+" << endl;
			break;
		}
	}
}