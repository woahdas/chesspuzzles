#include <ifstream>
#include <stdio>
using namespace std;

int linecounter = 0;

int main()
{
	ifstream chesspuzzles("lichess_db_puzzle.csv"); //read the puzzle.csv file as chesspuzzles
	while (getline(chesspuzzles) //read it line by line until the end
	{
		linecounter++; //line counter, who knows what it will do?
		for (int i = 0; i < 100; i++) //100 is just randomly picked 
		{
			if (isdigit(chesspuzzles[i]))
			{
				if (chesspuzzles[i] != 1)
				{
					i++;
					return main();
				}
				if (isdigit(chesspuzzles[int i1 = i + 1]) != true)
				{
					i++;
					return main();
				}
				if (isdigit(chesspuzzles[int i2 = i + 2]) != true)
				{
					i++;
					return main();
				}
				if (chesspuzzles[i] == 1 && isdigit(chesspuzzles[i++]) = true && isdigit(chesspuzzles[i + 2]) == true) //if it actually found the 4 digit rating
				{
					int rating1 = 1600; //lower rating boundary
					int rating2 = 1800; //upper rating boundary
					
					if (chesspuzzles[i2] != rating1[1] || rating2[1]) //if the second digit isn't 6 or 8 (not in our rating boundaries)
					{
						i++;
						return main();
					}
					if (chesspuzzles[i2] == rating1[1] || rating2[1])
					{
					} //if it is in our rating boundaries, it's allowed to continue execution
				}
				for (int b = 0; int b < 100; int b++ && while true) //infinite loop
				{
					if (chesspuzzles[i] != "h")//if it isn't h (always not true as we just started looking at the integer
					{
						i++;
					}
					if (chesspuzzles[i] == "h")
					{
					}
					if (chesspuzzles[i + 1] == "t") //at this point we found the url
					{
						bool found = true;
					}
				}
			}
		}
	}
	if (found = true)
	{
		string PartURL = "The link is "; //part of the url
		cout << "You may need to add ht or whatever to the beginning \n";
		for (int c = 0; c < 100; c++)
		{
			cout << i << " ";
			i++;
		}
	}
}
