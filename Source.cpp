#include<iostream>
using namespace std;
int main()
{
	 char ch;   int level = 0;     bool next = true;
	
	cout << "\n\n\t\t\t-------------- Word Search Game with Multilevel -------------- " << endl << endl;
	cout << "\t\t\t  -------- L E T S   P L A Y   O U R   R O U N D  01 -----------" << endl;
	cout << "\t\t----------------------------------------------------------------------------" << endl<< endl;
	cout << "\t\t\t \t----------- L E V E L 01 -------------- " << endl << endl;
	cout << "\t\t\t\t\t The word is :  'I_LAM' " << endl;
	cout << "\t\t\t\t     Guess a missing letter :" ;
	cin >> ch;
	if (ch == 'S' ||ch== 's')
	{
		cout << "\n\t\t\t\t --------- CONGRATULATION ------------" << endl << endl;
		cout << "\t\t\t\t       you guess correct letter " << endl << endl;
		level++;
	}
	else
	{
		cout << "\n\t\t\t\t ------------- SORRY ------------" << endl << endl;
		cout << "\t\t\t\t\tYou Guess wrong letter ." << endl;
		cout << "\t\t\t\t\tCorrect word is ISLAM " << endl;
	}
	cout << "\t\t\t Do you want to play next level : ";
	cin >> next;
	if (next)
	{
		system("cls");
		cout << "\n\n\t\t\t-------------- Word Search Game with Multilevel -------------- " << endl << endl;
		cout << "\t\t\t  -------- L E T S   P L A Y   O U R   R O U N D 02 -----------" << endl;
		cout << "\t\t----------------------------------------------------------------------------" << endl << endl;
		cout << "\t\t\t \t----------- L E V E L 02 -------------- " << endl << endl;
		cout << "\t\t\t\t\t The word is :  'QUR_N' " << endl;
		cout << "\t\t\t\t     Guess a missing letter :";
		cin >> ch;
		if (ch == 'a' || ch == 'A')
		{
			cout << "\n\t\t\t\t --------- CONGRATULATION ------------" << endl << endl;
			cout << "\t\t\t\t       you guess correct letter " << endl << endl;
			level++;
		}
		else
		{
			cout << "\n\t\t\t\t ------------- SORRY ------------" << endl << endl;
			cout << "\t\t\t\t\tYou Guess wrong letter ." << endl;
			cout << "\t\t\t\t\tCorrect word is QURAN " << endl;
		}
		cout << "\t\t\t Do you want to play next level : ";
		cin >> next;
	}
	
	if(next)
	{
		system("cls");
		cout << "\n\n\t\t\t-------------- Word Search Game with Multilevel -------------- " << endl << endl;
		cout << "\t\t\t  -------- L E T S   P L A Y   O U R   R O U N D 03 -----------" << endl;
		cout << "\t\t----------------------------------------------------------------------------" << endl << endl;
		cout << "\t\t\t \t----------- L E V E L 03 -------------- " << endl << endl;
		cout << "\t\t\t\t\t The word is :  'GR_EN' " << endl;
		cout << "\t\t\t\t     Guess a missing letter :";
		cin >> ch;
		if (ch == 'e' || ch == 'E')
		{
			cout << "\n\t\t\t\t --------- CONGRATULATION ------------" << endl << endl;
			cout << "\t\t\t\t       you guess correct letter " << endl << endl;
			level++;
		}
		else
		{
			cout << "\n\t\t\t\t ------------- SORRY ------------" << endl << endl;
			cout << "\t\t\t\t\tYou Guess wrong letter ." << endl;
			cout << "\t\t\t\t\tCorrect word is GREEN " << endl;
		}
		cout << "\t\t\t Do you want to play next level : ";
		cin >> next;
	}
	
	if (next)
	{
		system("cls");
		cout << "\n\n\t\t\t-------------- Word Search Game with Multilevel -------------- " << endl << endl;
		cout << "\t\t\t  -------- L E T S   P L A Y   O U R   R O U N D 04 -----------" << endl;
		cout << "\t\t----------------------------------------------------------------------------" << endl << endl;
		cout << "\t\t\t \t----------- L E V E L 04 -------------- " << endl << endl;
		cout << "\t\t\t\t\t The word is :  'LAHO_E' " << endl;
		cout << "\t\t\t\t     Guess a missing letter :";
		cin >> ch;
		if (ch == 'r' || ch == 'R')
		{
			cout << "\n\t\t\t\t --------- CONGRATULATION ------------" << endl << endl;
			cout << "\t\t\t\t       you guess correct letter " << endl << endl;
			level++;
		}
		else
		{
			cout << "\n\t\t\t\t ------------- SORRY ------------" << endl << endl;
			cout << "\t\t\t\t\tYou Guess wrong letter ." << endl;
			cout << "\t\t\t\t\tCorrect word is LAHORE " << endl;
		}
		cout << "\t\t\t Do you want to play next level : ";
		cin >> next;
	}
	
	if (next)
	{
		system("cls");
		cout << "\n\n\t\t\t-------------- Word Search Game with Multilevel -------------- " << endl << endl;
		cout << "\t\t\t  -------- L E T S   P L A Y   O U R   R O U N D 05 -----------" << endl;
		cout << "\t\t----------------------------------------------------------------------------" << endl << endl;
		cout << "\t\t\t \t----------- L E V E L 05 -------------- " << endl << endl;
		cout << "\t\t\t\t\t The word is :  '_INDH' " << endl;
		cout << "\t\t\t\t     Guess a missing letter :";
		cin >> ch;
		if (ch == 'S' || ch == 's')
		{
			cout << "\n\t\t\t\t --------- CONGRATULATION ------------" << endl << endl;
			cout << "\t\t\t\t       you guess correct letter " << endl << endl;
			level++;
		}
		else
		{
			cout << "\n\t\t\t\t ------------- SORRY ------------" << endl << endl;
			cout << "\t\t\t\t\tYou Guess wrong letter ." << endl;
			cout << "\t\t\t\t\tCorrect word is SINDH " << endl;
		}
		cout << "\t\t\t Do you want to play next level : ";
		cin >> next;
	}
	
	if (next)
	{
		system("cls");
		cout << "\n\n\t\t\t-------------- Word Search Game with Multilevel -------------- " << endl << endl;
		cout << "\t\t\t  -------- L E T S   P L A Y   O U R   R O U N D 06 -----------" << endl;
		cout << "\t\t----------------------------------------------------------------------------" << endl << endl;
		cout << "\t\t\t \t----------- L E V E L 06 -------------- " << endl << endl;
		cout << "\t\t\t\t\t The word is :  'BOO_' " << endl;
		cout << "\t\t\t\t     Guess a missing letter :";
		cin >> ch;
		if (ch == 'k' || ch == 'K')
		{
			cout << "\n\t\t\t\t --------- CONGRATULATION ------------" << endl << endl;
			cout << "\t\t\t\t       you guess correct letter " << endl << endl;
			level++;
		}
		else
		{
			cout << "\n\t\t\t\t ------------- SORRY ------------" << endl << endl;
			cout << "\t\t\t\t\tYou Guess wrong letter ." << endl;
			cout << "\t\t\t\t\tCorrect word is BOOK " << endl;
		}
		cout << "\t\t\t Do you want to play next level : ";
		cin >> next;
	}
	
	if (next)
	{
		system("cls");
		cout << "\n\n\t\t\t-------------- Word Search Game with Multilevel -------------- " << endl << endl;
		cout << "\t\t\t  -------- L E T S   P L A Y   O U R   R O U N D 07 -----------" << endl;
		cout << "\t\t----------------------------------------------------------------------------" << endl << endl;
		cout << "\t\t\t \t----------- L E V E L 07 -------------- " << endl << endl;
		cout << "\t\t\t\t\t The word is :  'HER_' " << endl;
		cout << "\t\t\t\t     Guess a missing letter :";
		cin >> ch;
		if (ch == 'O' || ch == 'o')
		{
			cout << "\n\t\t\t\t --------- CONGRATULATION ------------" << endl << endl;
			cout << "\t\t\t\t       you guess correct letter " << endl << endl;
			level++;
		}
		else
		{
			cout << "\n\t\t\t\t ------------- SORRY ------------" << endl << endl;
			cout << "\t\t\t\t\tYou Guess wrong letter ." << endl;
			cout << "\t\t\t\t\tCorrect word is HERO " << endl;
		}
		cout << "\t\t\t Do you want to play next level : ";
		cin >> next;
	}
	
	if (next)
	{
		system("cls");
		cout << "\n\n\t\t\t-------------- Word Search Game with Multilevel -------------- " << endl << endl;
		cout << "\t\t\t  -------- L E T S   P L A Y   O U R   R O U N D 08 -----------" << endl;
		cout << "\t\t----------------------------------------------------------------------------" << endl << endl;
		cout << "\t\t\t \t----------- L E V E L 08 -------------- " << endl << endl;
		cout << "\t\t\t\t\t The word is :  '_OMPUTER' " << endl;
		cout << "\t\t\t\t     Guess a missing letter :";
		cin >> ch;
		if (ch == 'C' || ch == 'c')
		{
			cout << "\n\t\t\t\t --------- CONGRATULATION ------------" << endl << endl;
			cout << "\t\t\t\t       you guess correct letter " << endl << endl;
			level++;
		}
		else
		{
			cout << "\n\t\t\t\t ------------- SORRY ------------" << endl << endl;
			cout << "\t\t\t\t\tYou Guess wrong letter ." << endl;
			cout << "\t\t\t\t\tCorrect word is COMPUTER " << endl;
		}
		cout << "\t\t\t Do you want to play next level : ";
		cin >> next;
	}
	
	if (next)
	{
		system("cls");
		cout << "\n\n\t\t\t-------------- Word Search Game with Multilevel -------------- " << endl << endl;
		cout << "\t\t\t  -------- L E T S   P L A Y   O U R   R O U N D 09 -----------" << endl;
		cout << "\t\t----------------------------------------------------------------------------" << endl << endl;
		cout << "\t\t\t \t----------- L E V E L 09 -------------- " << endl << endl;
		cout << "\t\t\t\t\t The word is :  '_ESK' " << endl;
		cout << "\t\t\t\t     Guess a missing letter :";
		cin >> ch;
		if (ch == 'D' || ch == 'd')
		{
			cout << "\n\t\t\t\t --------- CONGRATULATION ------------" << endl << endl;
			cout << "\t\t\t\t       you guess correct letter " << endl << endl;
			level++;
		}
		else
		{
			cout << "\n\t\t\t\t ------------- SORRY ------------" << endl << endl;
			cout << "\t\t\t\t\tYou Guess wrong letter ." << endl;
			cout << "\t\t\t\t\tCorrect word is DESK " << endl;
		}
		
	}

	if (next)
	{
		system("cls");
		cout << "\n\n\t\t\t-------------- Word Search Game with Multilevel -------------- " << endl << endl;
		cout << "\t\t\t  -------- L E T S   P L A Y   O U R   R O U N D 10 -----------" << endl;
		cout << "\t\t----------------------------------------------------------------------------" << endl << endl;
		cout << "\t\t\t \t----------- L E V E L 10 -------------- " << endl << endl;
		cout << "\t\t\t\t\t The word is :  'CHA_R' " << endl;
		cout << "\t\t\t\t     Guess a missing letter :";
		cin >> ch;
		if (ch == 'I' || ch == 'i')
		{
			cout << "\n\t\t\t\t --------- CONGRATULATION ------------" << endl << endl;
			cout << "\t\t\t\t       you guess correct letter " << endl << endl;
			level++;
		}
		else
		{
			cout << "\n\t\t\t\t ------------- SORRY ------------" << endl << endl;
			cout << "\t\t\t\t\tYou Guess wrong letter ." << endl;
			cout << "\t\t\t\t\tCorrect word is CHAIR " << endl;
		}
		cout << "\t\t\t Do you want to play next level : ";
		cin >> next;
	}
	
	cout << "\n\n\t\t\t\t ---------- G A M E  F I N I S H ------------" << endl;
	cout << "\t\t\t\tYOUR SCORE IS : " << level << endl;







	return 0;
}