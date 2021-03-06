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

//Declaring global string name
//Did not declare, since Options did not exhibit the returned string name
//Attempted to see if the declaration would show up in main

//Declaring function existence:
//GetTextFromUser function
string MyName(string name);
string StayGo(string stay);
//Initially had trouble with this function, as it was telling me there was no definition for it
//Took me a few minutes to fix the error, but I didn't really change anything about it except
// the order of the variables passing into it
//GetNumberFromUser Function
void Options(string name, int choice);

//Beginning the main program
int main()
{
	//declaring variable existence
	string name = "";
	string stay = "";
	int choice = 0;

	cout << "You awaken in an unfamiliar place, a verdant clearing.\n";
	cout << "You cannot for the life of you remember where you were before, or what you were doing.\n";
	cout << "As you sit up, an unusual figure seems to simply appear before you.\n";
	cout << "This person smiles gently at you, despite your confused and relatively alarmed reaction.\n";

	//function designed to get and save the player's name
	MyName(name);

	cout << "The figure straightens out, and the smile fades from their face.\n\n";
	cout << "'This land is called Iredessa, and it is in grave need of someone like you.\n'";
	cout << "'You may call me Vox, I am here to assist you any way I can.'\n";

	//function designed to continue the story or end it immediately
	StayGo(stay);

	//if (stay != "Yes" || stay != "yes")
	//{
	//	return 0;
	//}

	//function designed to direct the first part of the story
	Options(name, choice);

    return 0;
}

string MyName(string name)
{
	cout << "'Welcome to this Interactive Fiction, traveller, what is your name?'\n\n";
	cout << "You're not sure if the person before you had actually spoken, it didn't appear as though they had.\n";
	cout << "Yet you heard the question clearly, as clearly as you hear the wind gently passing by you.\n";
	cout << "So you tentatively give your answer:";
	cin >> name;
	
	//I've attempted the GetUserText, GetUserInput, UserInput, and attempted to recreate the notes we were going over
	//Thursday, but I cannot for the life of me get this to work. I also cannot find it in the chapter or anywhere online.
	//code : 
	
	//string name;  
	//name = GetUserText ("So you tentatively give your answer:");
	//cin >> userInput;
	//cout << "\n'Please to meet you, " << name << ", shall we begin?\n\n'";

	cout << "\nThe figure before you bows just a little, smiling just a little more.\n\n";
	cout << "'Pleased to meet you, " << name << ", shall we begin?\n\n'";

	//attempting to use this says that return value type does not match the function type when the function is void
	//attempting to use this says that no suitable conversion function from string to int when function is int
	//this seems to work while the function is string, however it doesn't look like it actually returns the information
	//I'm not sure how to get it to work in the way I'd like, despite going over the notes we
	//were discussing on Thursday, reading the chapter, or searching online.
	return name;
}

string StayGo(string stay)
{
	cout << "'Although I did summon you here in hopes to gain your assistance,\n";
	cout << "I don't intend to keep you here if you don't wish to stay.\n";
	cout << "Would you like to return to your own world, and your own life?\n";
	cout << "I promise that I will put you right back where you were before.'\n\n";
	cout << "It's odd though, you still can't remember where you were before, or what you were doing.\n";
	cout << "Were you happy in the place you were before? \n";
	cout << "This place seems peaceful enough, but if you were summoned, it must have been for something very serious.\n";
	cout << "You can't remember what life before now was like, and you don't know what lies before you.  But it's time to answer:";
	cin >> stay;
	if (stay == "yes" || stay == "Yes")
	{
		cout << "\n\nVox smiles once more, you've been watching quite carefully since they had first spoken and\n";
		cout << "you're quite sure this person hasn't said a single word this whole time, they've been 'talking' some other way.\n\n";
		cout << "'I'm so glad you decided to stay, please allow me to explain why I have brought you here.'\n\n";
	}
	else
	{
		cout << "\n\nVox bows, perhaps to hide their disappointment, but when they straighten out again a gentle smile is evident.\n\n";
		cout << "'I understand, please be at ease, I will return you to your original life immediately then.'\n";
		cout << "With a wave of their hand, the world around you seems to grow more distant, as if you are travelling away...";
		system("pause");
		//return 0;
		exit(0);
	}
	return stay;
	//originally had system("exit");
	//moved the original line into the main function in an attempt to make it work properly
	//return 0; is the more appropriate code
	//moved return 0; into the staygo function to clean up main function
	//return 0; causing an unhandled exception in staygo function, but closes program regardless of answer in main
	//found that using exit(0) operates as intended
}

void Options(string name, int choice)
{
	cout << "Vox lightly takes a seat and looks at you carefully for a moment before continuing:\n\n";
	cout << "'This world is currently embroiled in conflict, but there are some concerns I have, \n'";
	cout << "Regarding what would happen should this conflict come to an end...'\n\n";
	cout << "Vox visibly sighs, looking more than a little dejected, it seems they have been struggling.\n\n";
	cout << "'You see, both sides are in a precarious position, and though it seems that they are \n'";
	cout << "in a better state than before the war, no one has done anything to ensure that they \n";
	cout << "might prosper outside of the war, it's rather complicated, but I can explain better once \n";
	cout << "You meet with one of the leaders...  You see I brought you here because of your extensive knowledge \n";
	cout << "from your world, that you might be able to begin changing one of these countries so that they can\n'";
	cout << "avoid total annihilation not by the sword, but by the collapse of civilization.\n\n";
	cout << "Vox stands back up and smiles slightly at you, beckoning you to walk alongside them.\n\n";
	cout << "'Instead of choosing a place based on it's name, since I know you don't know anything about that...\n'";
	cout << "how about we choose a place based on the issues you'll need to tackle once you get there?'\n\n";
	cout << "You tell Vox that their proposal sounds reasonable, there are some things you're better at than others\n";
	cout << "and it wouldn't be good to show up to a place with a problem that you couldn't solve.\n";
	cout << "Vox chuckles and outlines a few options for you to choose from:\n\n";

	cout << "'1 - A nation that has suffered a major food shortage not by drought, but by poor agricultural practice\n";
	cout << "they only manage to feed their people by receiving funds for their war effort and using it to import\n";
	cout << "the food their people desperately need.'\n\n";
	cout << "'2 - A nation drowning in refugees, which live mostly in destitution as the country doesn't know how to go\n";
	cout << "about dealing with so many people who aren't citizens, it won't be long before these refugees turn to\n";
	cout << "violence simply to survive.'\n\n";
	cout << "'3 - A nation that is on the brink of destruction because of the war, it would be quite easy for them to\n";
	cout << "not only survive, but assist other nations in a myriad of ways.  The problem is the leader there is\n";
	cout << "young and doesn't understand politics or the resources they could share, it doesnt help at all\n";
	cout << "that the nobles around this person are corrupt and self-serving.'\n\n";
	cout << "which of these issues sounds like something you would be able to help with?";
	cin >> choice;

	//switch case to decide between how the story will progress
	switch (choice)
	{
	case 1: choice = 1;
		break;
	case 2: choice = 2;
		break;
	case 3: choice = 3;
		break;
	default: cout << "'I'm sorry, what was your choice?'";
		break;
	}
	//the results of the switch case
	if (choice == 1)
	{
		cout << "\n\nVox nods and beckons for you to take their hand, upon grasping it the world seems to warp around you.\n";
		cout << "When everything settles you are standing in a well-lit and grand hall, several well dressed people\n";
		cout << "turn to look at you, including an elderly looking woman sitting on what could only be called a throne.\n";
		cout << "Vox lightly bows and gestures to you.\n\n";
		cout << "'Your highness, I have brought someone whom I believe may be able to help you bring prosperity and happiness\n";
		cout << "to your people, might I be able to introduce" << name << ", I hope you two can work together.\n\n";
		cout << "the elderly woman smiles and bows slightly towards you, it seems it's time to begin.\n";
		system("pause");
	}
	if (choice == 2)
	{
		cout << "\n\nVox nods and beckons for you to take their hand, upon grasping it the world seems to warp around you.\n";
		cout << "When everything settles you are greeted by a well furnished room with a middle-aged looking man \n";
		cout << "sitting at a desk reading a rather hefty stack of papers, Vox lightly steps forward and gains his attention.\n\n";
		cout << "'My lord I believe I have brought someone who might be able to help you with the current issues you are \n";
		cout << "currently struggling with, might I be able to introduce you to" << name << "?'\n\n";
		cout << "The man smiles warmly, stands, and extends his hand to you in greeting.\n";
		system("pause");
	}
	if (choice == 3)
	{
		cout << "\n\nVox nods and beckons for you to take their hand, upon grasping it the world seems to warp around you.\n";
		cout << "When your vision clears you are standing in a garden of sorts, and a young lady is kneeling,\n";
		cout << "admiring the flowers. she stands and looks to you and Vox as you both step forward to greet her.\n\n";
		cout << "'Good morning my lady, I would like to introduce" << name << ", I believe he will be able to help you with\n";
		cout << "the current issues you face, I hope you two get along.\n\n'";
		cout << "The young lady smiles and curtsies slightly, and you know now that it's time to get to work.\n";
		system("pause");
	}
}

//Thus far, the only thing that doesn't seem to work as intended is changing name
//and having it show up in other functions, I'll continue to work on it.