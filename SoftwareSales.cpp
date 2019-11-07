#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	int quantity, price = 99;
	double discount, cost;
	
	// Get the number of items sold
	cout << "How many packages did you purchase? ";
	cin >> quantity;
	
	// Validate that number sold is greater than 0
	if(quantity > 0){
		// Begin calculating discount
		if(quantity > 10 && quantity < 20){
			discount = .2;
			cost = quantity * price * (1 - discount);
			cout << "Your discount is: " << discount << ". So your cost is: " << cost;
		}
		else if(quantity >= 20 && quantity < 49){
			discount = .3;
			cost = quantity * price * (1 - discount);
			cout << "Your discount is: " << discount << ". So your cost is: " << cost;
		}
                else if(quantity >= 50 && quantity < 99){
                        discount = .4;
                        cost = quantity * price * (1 - discount);
                        cout << "Your discount is: " << discount << ". So your cost is: " << cost;
                }
		else if(quantity >= 100){
                        discount = .3;
                        cost = quantity * price * (1 - discount);
                        cout << "Your discount is: " << discount << ". So your cost is: " << cost;
		}
		else{
			cost = quantity * price;
			cout << "Your total is: " << cost << endl;
		}
	}
	else
	cout << "invalid input";
return 0;
}
