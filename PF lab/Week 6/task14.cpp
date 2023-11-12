#include <iostream>
using namespace std;

string calculateCost(float budget, string category, int numPeople);

main()
{
	float budget;
	string category;
	int numPeople;
	string result;

	cout <<"Enter the budget: ";
	cin >> budget;
	cout <<"Enter the category (VIP/Normal): ";
	cin >> category;
	cout <<"Enter the number of people in the group: ";
	cin >> numPeople;
    
	result = calculateCost(budget, category, numPeople);
	cout << result;
}

string calculateCost(float budget, string category, int numPeople)
{
	float transportPrice;
	float ticketPrice;
	float total;
	float leva;
	string result;
    
	if (numPeople < 5)
	{
    	transportPrice = (budget / 100) * 75;
	}
	if (numPeople >= 5 && numPeople < 10)
	{
    	transportPrice = (budget / 100) * 60;
	}
	if (numPeople >=10 && numPeople < 25)
	{
    	transportPrice = (budget / 100) * 50;
	}
	if (numPeople >=25 && numPeople < 50)
	{
    	transportPrice = (budget / 100) * 40;
	}
	if (numPeople >= 50)
	{
    	transportPrice = (budget / 100) * 25;
	}
	
	
	if (category == "VIP")
	{
    	ticketPrice = numPeople * 499.99;
	}
	if (category == "Normal")
	{
        ticketPrice = numPeople * 249.99;
	}
    	
    	
	total = transportPrice + ticketPrice;
    	
    	
	if (total <= budget)
	{
        leva = budget - total;
        result = "Yes! You have "+ to_string(leva) +" leva left.";
	}
	if (total > budget)
	{
        leva = total - budget;
        result = "Not enough money! You need "+ to_string(leva) +" leva.";
	}

	return result;
}
