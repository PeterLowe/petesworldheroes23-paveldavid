// program to find countries in Pete's World
// date 10/11/2023
// author Pete Lowe
// add your name here
// Pavel Dobias
// David Hajek
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to A or Z to Z" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0;
		}
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}
	}
	if (letter == 'b' || letter == 'B') //written by Pavel
	{
		if (region == 1)
		{
			std::cout << "Belize, Bolivia, Bermuda, Brazil";
		}
		if (region == 2)
		{
			std::cout << "Belarus, Belgium, Bosnia and Herzegovina, Bulgaria";
		}
		if (region == 3)
		{
			std::cout << "Benin, Botswana, Burkina Faso, Burundi";
		}
		if (region == 4)
		{
			std::cout << "Bangladesh, Bhutan, Brunei Darussalam";
		}
		if (region == 5)
		{
			std::cout << "BahrainArabian Peninsula, Barbados, Bahamas";
		}
	}
	if (letter == 'c' || letter == 'C') //written by Pavel
	{
		if (region == 1)
		{
			std::cout << "Canada, Chile, Colombia, Costa Rica";
		}
		if (region == 2)
		{
			std::cout << "Croatia, Czech Republic";
		}
		if (region == 3)
		{
			std::cout << "Cameroon, Cape Verde, Central African Republic, Chad, Comoros, Congo, C�te D'ivoire";
		}
		if (region == 4)
		{
			std::cout << "Cambodia, China, Christmas Land, Cocos Islands, Cyprus";
		}
		if (region == 5)
		{
			std::cout << "Cayman Islands, Cook Islands, Cuba";
		}
	}
	if (letter == 'd' || letter == 'D') //written by Pavel
	{
		if (region == 1)
		{
			std::cout << "There are no D's in Americas ";
		}
		if (region == 2)
		{
			std::cout << "Denmark";
		}
		if (region == 3)
		{
			std::cout << "Djibouti";
		}
		if (region == 4)
		{
			std::cout << "There are no D's in Asia";
		}
		if (region == 5)
		{
			std::cout << "Dominica, Dominican Republic";
		}
	}
	if (letter == 'e' || letter == 'E') //written by Pavel
	{
		if (region == 1)
		{
			std::cout << "Ecuador, El Salvador";
		}
		if (region == 2)
		{
			std::cout << "Estonia";
		}
		if (region == 3)
		{
			std::cout << "Equatorial Guinea, Eritrea, Ethiopia, Egypt";
		}
		if (region == 4)
		{
			std::cout << "East Timor";
		}
		if (region == 5)
		{
			std::cout << "There are no E's in Rest of the world";
		}
	}
	if (letter == 'f' || letter == 'F') //written by Pavel
	{
		if (region == 1)
		{
			std::cout << "Falkland Islands, French Guiana";
		}
		if (region == 2)
		{
			std::cout << "Faroe Islands, Finland, France";
		}
		if (region == 3)
		{
			std::cout << "There are no F's in Africa";
		}
		if (region == 4)
		{
			std::cout << "There are no F's in Asia";
		}
		if (region == 5)
		{
			std::cout << "Fiji, French Polynesia, French Southern Territories";
		}
	}
	if (letter == 'u' || letter == 'U') //written by David
	{
		if (region == 1)
		{
			std::cout << "United States North America, Uruguay Central East South America" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Ukraine Eastern Europe, United Kingdom Northern Europe," << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Uganda Eastern Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Uzbekistan Central Asia, United Arab Emirates Arabian Peninsula, Middle East" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no other Us in the rest of the world" << std::endl;
		}
	}
	if (letter == 'v' || letter == 'V') //written by David
	{
		if (region == 1)
		{
			std::cout << "Virgin Islands (U.S.) Lesser Antilles, Caribbean, Virgin Islands (British) Lesser Antilles, Caribbean. Venezuela Northern South America" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Vatican City State (Holy See) Southern Europe within Italy" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Vs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "vietnam South-East Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Vanuatu Melanesia, Oceania" << std::endl;
		}
	}
	if (letter == 'w' || letter == 'W') //written by David
	{
		if (region == 1)
		{
			std::cout << "There are no Ws in America" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ws in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Western Sahara Northern Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are now Ws in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Wallis and Futuna Islands Polynesia, Oceania" << std::endl;
		}
	}
	if (letter == 'x' || letter == 'X') //written by David
	{
		if (region == 1)
		{
			std::cout << "There are no Xs in America" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Xs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Xs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Xs in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Xs in the rest of the world" << std::endl;
		}
	}
	if (letter == 'y' || letter == 'Y') //written by David
	{
		if (region == 1)
		{
			std::cout << "There are no Y's in America" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Y's in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Ys in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Yemen Arabian Peninsula, Middle East" << std::endl;
		}
		if (region == 5)
		{ 
		std::cout << "There are no other Ys in the rest of the world" << std::endl;
		}
	}
	if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}
	}
	return 1;
	}