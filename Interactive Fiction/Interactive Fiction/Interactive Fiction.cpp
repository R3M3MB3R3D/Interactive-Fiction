// Create a C++ Program that uses more than 1 function
// Control each function through the main function
// Pass and return parameters between the functions

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;
void MyName(string name);
void StayGo(string save);
void Options();

int main()
{
	string name = "";
	string stay = "";

	cout << "You awaken in an unfamiliar place, a verdant clearing.\n";
	cout << "You cannot for the life of you remember where you were before, or what you were doing.\n";
	cout << "As you sit up, an unusual figure seems to simply appear before you.\n";
	cout << "This person smiles gently at you, despite your confused and relatively alarmed reaction.\n";

	MyName(name);

	cout << "The figure straightens out, and the smile fades from their face.\n";
	cout << "'This land is called Iredessa, and it is in grave need of someone like you.\n'";
	cout << "'You may call me Vox, I am here to assist you any way I can.'\n";

	StayGo(stay);



    return 0;
}

void MyName(string name)
{
	cout << "'Welcome to this Interactive Fiction, traveller, what is your name?'\n";
	cout << "You're not sure if the person before you had actually spoken, it didn't appear as though they had.\n";
	cout << "Yet you heard the question clearly, as clearly as you hear the wind gently passing by you.\n";
	cout << "So you tentatively give your answer: ";
	cin >> name;
	cout << "\nThe figure before you bows just a little, smiling just a little more.\n";
	cout << "'Pleased to meet you, " << name << ", shall we begin?\n\n'";
}

void StayGo(string stay)
{
	cout << "'Although I did summon you here in hopes to gain your assistance, \n";
	cout << "I don't intend to keep you here if you don't wish to stay.\n";
	cout << "Would you like to return to your own world, and your own life?\n";
	cout << "I promise that I will put you right back where you were before.'\n";
	cout << "It's odd though, you still can't remember where you were before, or what you were doing.\n";
	cout << "Were you happy in the place you were before? \n";
	cout << "This place seems peaceful enough, but if you were summoned, it must have been for something very serious.\n";
	cout << "You can't remember what life before now was like, and you don't know what lies before you.  But it's time to answer:";
	cin >> stay;
	if (stay == "yes" || stay == "Yes")
	{
		cout << "Vox smiles once more, you've been watching quite carefully since they had first spoken and\n";
		cout << "You're quite sure this person hasn't said a single word this whole time, they've been 'talking' some other way.\n";
		cout << "'I'm so glad you decided to stay, please allow me to explain why I have brought you here.'\n";
	}
	else
	{
		cout << "Vox bows, perhaps to hide their disappointment, but when they straighten out again a gentle smile is evident.\n";
		cout << "'I understand, please be at ease, I will return you to your original life immediately then.'\n";
		cout << "With a wave of their hand, the world around you seems to grow more distant, as if you are travelling away...";
		system("pause");
	}
}

void Options()
{

}
