// CPP_DZ_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>	
#include <unordered_map>
#include <map>


enum EBattleResult
{
	Draw,
	FirstClanWin,
	SecondClanWin
};


struct FHeroInfo
{
	std::string ClanName;
	int Power;
	int Health;
	std::string HeroName;


};
struct FClanInfo 
{
	int power;
	int health;

};




std::pair<int, int> calculateTotalPowerAndHealth(const std::vector<FHeroInfo>& heroes, const std::string& clanName) {
	int totalPower = 0;
	int totalHealth = 0;

	for (const auto& hero : heroes) {
		if (hero.ClanName == clanName) {
			totalPower += hero.Power;
			totalHealth += hero.Health;
		}
	}

	return { totalPower, totalHealth };
}


int main()
{
	FHeroInfo hero1;
	hero1.ClanName = "Akatsuki";
	hero1.Health = 200;
	hero1.Power = 50;
	hero1.HeroName = "Madara";


	FHeroInfo hero2;
	hero2.ClanName = "Akatsuki";
	hero2.Health = 100;
	hero2.Power = 120;
	hero2.HeroName = "Kakashi";

	FHeroInfo hero3;
	hero3.ClanName = "Uzumaki";
	hero3.Health = 250;
	hero3.Power = 40;
	hero3.HeroName = "Kabuto";

	FHeroInfo hero4;
	hero4.ClanName = "Uzumaki";
	hero4.Health = 70;
	hero4.Power = 150;
	hero4.HeroName = "Tobi";


	std::cout << "(1)Madara" << std::endl;
	std::cout << "clan_" << hero1.ClanName << std::endl;
	std::cout << "health_" << hero1.Health << std::endl;
	std::cout << "power_" << hero1.Power << std::endl;

	std::cout << "(2)Kakashi" << std::endl;
	std::cout << "clan_" << hero2.ClanName << std::endl;
	std::cout << "health_" << hero2.Health << std::endl;
	std::cout << "power_" << hero2.Power << std::endl;

	std::cout << "(3)Kabuto" << std::endl;
	std::cout << "clan_" << hero3.ClanName << std::endl;
	std::cout << "health_" << hero3.Health << std::endl;
	std::cout << "power_" << hero3.Power << std::endl;

	std::cout << "(4)Tobi" << std::endl;
	std::cout << "clan_" << hero4.ClanName << std::endl;
	std::cout << "health_" << hero4.Health << std::endl;
	std::cout << "power_" << hero4.Power << std::endl;

	std::cout << std::endl;

	



	std::vector<FHeroInfo> HeroesInLobby;

	int Player_Action_Index = 0;
	int Player_Action2_Index = 1;
	int Player_Action3_Index = 1;
	int Player_Action4_Index = 1;


	while (Player_Action_Index == 0 && Player_Action2_Index >= 0 && Player_Action4_Index == 1)
	{
		std::cout << "Enter 0 to start battle" << std::endl;
		std::cout << "Enter 1 to add hero to lobby" << std::endl;
		std::cout << "Enter 2 to remove hero from lobby" << std::endl;
		std::cout << std::endl;
		std::cin >> Player_Action2_Index;

		switch (Player_Action2_Index)
		{
		case 1:
			while (Player_Action2_Index == 1)
			{
				std::cout << "Chose Heroes to add - (1) (2) (3) (4) ?" << std::endl;
				std::cout << "Press 0 to exit to menu" << std::endl;
				std::cout << std::endl;
				std::cin >> Player_Action3_Index;
				if (Player_Action3_Index == 1)
				{
					HeroesInLobby.push_back(hero1);
					std::cout << "(1)Madara added to Lobby" << std::endl;
					std::cout << "Clan = " << hero1.ClanName << std::endl;
					std::cout << "Health = " << hero1.Health << std::endl;
					std::cout << "Power = " << hero1.Power << std::endl;
					std::cout << "Lobby size:" << HeroesInLobby.size() << std::endl;
				}
				else if (Player_Action3_Index == 2)
				{
					HeroesInLobby.push_back(hero2);
					std::cout << "(2)Kakashi added to Lobby" << std::endl;
					std::cout << "Clan = " << hero2.ClanName << std::endl;
					std::cout << "Health = " << hero2.Health << std::endl;
					std::cout << "Power = " << hero2.Power << std::endl;
					std::cout << "Lobby size:" << HeroesInLobby.size() << std::endl;
				}
				else if (Player_Action3_Index == 3)
				{
					HeroesInLobby.push_back(hero3);
					std::cout << "(3)Kabuto added to Lobby" << std::endl;
					std::cout << "Clan = " << hero3.ClanName << std::endl;
					std::cout << "Health = " << hero3.Health << std::endl;
					std::cout << "Power = " << hero3.Power << std::endl;
					std::cout << "Lobby size:" << HeroesInLobby.size() << std::endl;
				}
				else if (Player_Action3_Index == 4)
				{
					HeroesInLobby.push_back(hero4);
					std::cout << "(4)Tobi added to Lobby" << std::endl;
					std::cout << "Clan = " << hero4.ClanName << std::endl;
					std::cout << "Health = " << hero4.Health << std::endl;
					std::cout << "Power = " << hero4.Power << std::endl;
					std::cout << "Lobby size:" << HeroesInLobby.size() << std::endl;
				}
				else if (Player_Action3_Index == 0)
				{

					std::cout << std::endl;
					Player_Action2_Index = 0;
					Player_Action_Index = 0;
				}

			}
			break;
		case 2:
			
			while (Player_Action2_Index == 2)
			{
				int i;
				std::cout << "Lobby size:" << HeroesInLobby.size() << std::endl;
				std::cout << std::endl;
				for (i = 0; i < HeroesInLobby.size(); ++i)
				{
					std::cout << HeroesInLobby[i].HeroName << std::endl;
				}

				std::cout << "Chose Heroes to Delete - (1) (2) (3) (4) ?" << std::endl;
				std::cout << "Press 0 to exit to menu" << std::endl;
				std::cout << std::endl;
				std::cin >> Player_Action3_Index;
				if (Player_Action3_Index == 1)
				{
					
					std::cout << HeroesInLobby[0].HeroName << " was delete from Lobby" << std::endl;
					
					std::cout << "Clan = " << HeroesInLobby[0].ClanName << std::endl;
					std::cout << "Health = " << HeroesInLobby[0].Health << std::endl;
					std::cout << "Power = " << HeroesInLobby[0].Power << std::endl;
				
					HeroesInLobby.erase(HeroesInLobby.begin());
					std::cout << "Lobby size:" << HeroesInLobby.size() << std::endl;
				}
				else if (Player_Action3_Index == 2)
				{
				
					std::cout << HeroesInLobby[1].HeroName << " was delete from Lobby" << std::endl;
					
					std::cout << "Clan = " << HeroesInLobby[1].ClanName << std::endl;
					std::cout << "Health = " << HeroesInLobby[1].Health << std::endl;
					std::cout << "Power = " << HeroesInLobby[1].Power << std::endl;
					std::cout << "Lobby size:" << HeroesInLobby.size() << std::endl;
					HeroesInLobby.erase(HeroesInLobby.begin() + 1);
				}
				else if (Player_Action3_Index == 3)
				{
					
					std::cout << HeroesInLobby[2].HeroName << " was delete from Lobby" << std::endl;
				
					std::cout << "Clan = " << HeroesInLobby[2].ClanName << std::endl;
					std::cout << "Health = " << HeroesInLobby[2].Health << std::endl;
					std::cout << "Power = " << HeroesInLobby[2].Power << std::endl;

					HeroesInLobby.erase(HeroesInLobby.begin() + 2);
					std::cout << "Lobby size:" << HeroesInLobby.size() << std::endl;
				}
				else if (Player_Action3_Index == 4)
				{
					
					std::cout << HeroesInLobby[3].HeroName << " was delete from Lobby" << std::endl;
				
					std::cout << "Clan = " << HeroesInLobby[3].ClanName << std::endl;
					std::cout << "Health = " << HeroesInLobby[3].Health << std::endl;
					std::cout << "Power = " << HeroesInLobby[3].Power << std::endl;

					HeroesInLobby.erase(HeroesInLobby.begin() + 3);
					std::cout << "Lobby size:" << HeroesInLobby.size() << std::endl;
				}
				else if (Player_Action3_Index == 0)
				{

					std::cout << std::endl;
					Player_Action2_Index = 0;
					Player_Action_Index = 1;
				}

				break;
		case 0:
			Player_Action2_Index = 0;
			Player_Action_Index = 0;
			Player_Action4_Index = 0;
				break;

		default:
			break;

			}
		}

	}

	int AkatsukiPower;
	int UzumakiPower;
	int AkatsukiHealth;
	int UzumakiHealth;

	
	if (Player_Action_Index == 0 && Player_Action2_Index == 0)
	{
		std::string targetClanAkatsuki = "Akatsuki";
		std::string targetClanUzumaki = "Uzumaki";

		auto result = calculateTotalPowerAndHealth(HeroesInLobby, targetClanAkatsuki);
		std::cout << "Total Power for clan " << targetClanAkatsuki << ": " << result.first << std::endl;
		std::cout << "Total Health for clan " << targetClanAkatsuki << ": " << result.second << std::endl;
		std::cout << std::endl;

		auto result2 = calculateTotalPowerAndHealth(HeroesInLobby, targetClanUzumaki);
		std::cout << "Total Power for clan " << targetClanUzumaki << ": " << result2.first << std::endl;
		std::cout << "Total Health for clan " << targetClanUzumaki << ": " << result2.second << std::endl;
		std::cout << std::endl;

		if (result.first >= result2.second && result2.first < result.second)
		{
			std::cout << "THE BATTLE WINNER IS: " << targetClanAkatsuki << std::endl;
	   }
		else if (result2.first >= result.second && result.first < result2.second)
		{
			std::cout << "THE BATTLE WINNER IS: " << targetClanUzumaki << std::endl;
		}
		else if (result.first < result2.second && result2.first < result.second)
		{
			std::cout << "DRAW! Two Clans are alive! " << std::endl;
		}



	}
}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
