#include <cstdlib>
#include <string>
#include "box.h"
#include "shopItem.h"
#include "candy.h"
#include "cookie.h"
#include "icecream.h"


using namespace std;

int main() {
	
	Cookie cookie1("Chocolate Chip Cookies",10, 180);   			//(name, pieces, priceperdozen)
	Cookie cookie2("Cake Mix Cookies", 16, 210);				//(name, pieces, priceperdozen)
	
	Box<Cookie> cookieBox(cookie1);						// First Box is a Cookie box, with cookie1 object in it 
	cookieBox.add(cookie2);							// Added cookie2 to the cookieBox
	cout<<cookieBox<<endl;							// We overloaded << operator to use this line, printing the total cost
	
	cout << cookieBox[2] << endl;  						// Will throw an exception
	
	Icecream icecream1("Chocolate ice cream",1.5, 170); 			//(name, litre, priceperlitre)
	
	Box<Icecream> icecreamBox(icecream1);					// Second box is a Icecream box, with icecream1 object in it
	cout<<icecreamBox<<endl;						// Printing the total cost

	icecreamBox.setDiscount(50);						// Will throw an exception too
		
	Candy candy2("Gummi bears",12,89); 					// (name, weight, priceperkg)
	Candy candy3("Hanukkah gelt",8,110);					// (name, weight, priceperkg)
	
	Box<Candy> candyBox(candy2);						// Third box is a Candy box, with candy2 object in it
	candyBox.add(candy3);							// Added candy3 to the candyBox
	candyBox.setDiscount(15);						// Set 15% discount on it
	cout<<candyBox<<endl;							// Printing the total cost; with discount
}
