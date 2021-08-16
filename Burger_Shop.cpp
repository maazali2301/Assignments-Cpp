#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int num_burgers, bun_choice, tasteitem_choice;
	int count_burgers =0;
	int count_cheese = 0;
	int count_veg = 0;
	int count_sauce = 0;
	cout<<setw(65)<<"Welcome to the burger shop!"<<endl<<endl;
	cout<<"How many burgers would you like to purchase? ";
	cin>>num_burgers;
	
	while(count_burgers < num_burgers)
	{
		
		cout<<"\n\nPlease choose your bun (You can only choose 1 bun, and you must choose a bun): "<<endl;
		cout<<"1. Toasted Brioche Style Bun"<<endl;
		cout<<"2. Baker's Bun"<<endl;
		cout<<"3. No bun - Lettuce Wrap"<<endl<<endl;
		
		cin>>bun_choice;
			if (bun_choice == 0)
		{
			cout<<"You can not proceed without choosing a bun, please choose one: ";
			cin>>bun_choice;
		}
		
		cout<<"\n\nPlease choose the cheese types (You can choose as many, Press '0' to skip)";
		cout<<"\n1. Cheddar Cheese"<<endl;
		cout<<"2. Swiss Cheese"<<endl;
		cout<<"3. Colby Jack"<<endl;
		cout<<"4. McDonalds Classic"<<endl;
		cout<<"5. Shaved Parmesan"<<endl;
		
		int cheese_choice = 1;
		while (cheese_choice)
		{
			cout<<"Enter Choice: ";
			cin>>cheese_choice;
			if (cheese_choice == 0)
			break;
			count_cheese++;
			
		}
		
		cout<<"\n\nPlease choose one item to turn up the taste (You can only choose 1 item, and you must choose one)"<<endl;
		cout<<"1. Rasher Bacon"<<endl;
		cout<<"2. Crispy Bacon"<<endl;
		cout<<"3. Egg"<<endl;
		cout<<"4. 113g Agnus Beef Patty"<<endl;
		cout<<"5. Guacamole"<<endl;
		cout<<"6. Tortilla Strips"<<endl;
		cout<<"7. Grilled Mushroom"<<endl;
		cout<<"8. Grilled Pineapple"<<endl;
		
		cin>>tasteitem_choice;
		if (tasteitem_choice == 0)
		{
			cout<<"You can not proceed without choosing an item, please choose one: ";
			cin>>tasteitem_choice;
		}
		
		cout<<"\n\nPlease choose vegetables to freshen it up (You can choose upto 3, Press '0' to skip)"<<endl;
		cout<<"1. Whole leaf lettuce"<<endl;
		cout<<"2. Tomatoes"<<endl;
		cout<<"3. Caramelised grilled onions"<<endl;
		cout<<"4. Sliced beetroot"<<endl;
		cout<<"5. Red Onion"<<endl;
		cout<<"6. Long sliced pickle"<<endl;
		cout<<"7. Jalapenos"<<endl;
		
		int veg_choice = 1;
		while (count_veg < 3)
		{
			
			cout<<"Enter Choice: ";
			cin>>veg_choice;
			if (veg_choice == 0)
			break;
			count_veg++;
		}
			
		
		
		cout<<"\n\nPlease choose sauces (You can choose as many as you want, Press '0' to skip)"<<endl;
		cout<<"1. Ketchup"<<endl;
		cout<<"2. Tomato Chilli Jam"<<endl;
		cout<<"3. Bar B Que"<<endl;
		cout<<"4. Dijonnaise"<<endl;
		cout<<"5. Big Mac special sauce"<<endl;
		cout<<"6. Aioli"<<endl;
		cout<<"7. Herb Aioli"<<endl;
		cout<<"8. Chipotle Mayo"<<endl;
		
		int sauce_choice = 1;
		while (sauce_choice)
		{
			cout<<"Enter Choice: ";
			cin>>sauce_choice;
			if (sauce_choice == 0)
			break;
			count_sauce++;
			
		}
		
		
		count_burgers++;
		cout<<"Price of the burger is: $"<<(0.72) + (count_cheese * 0.5) + (1.2) + (count_veg * 0.2) + (count_sauce * 0.3)<<endl<<endl<<endl;
		
		count_sauce = 0;
		count_cheese = 0;
		count_veg = 0;
}
	
	cout<<setw(80)<<"Your order is confirmed! Thank you for choosing our shop!"<<endl;
}
