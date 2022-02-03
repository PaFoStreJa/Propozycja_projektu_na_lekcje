#include <iostream>
int main()
{
	// ------------------------------------ZMIENNE-----------------------------------
	
	int stopy;								//Do przechowania danej wejœciowej
	double metry;							//Do wpisania wyniku
	double przelicznik = 0.3;				//przelicznik: stopy na metry
	
	// ----------------------pobranie informacji od urzytkownika----------------------
	
	std::cout << "Podaj wysokosc w stopach: ";
	std::cin >> stopy;						// przyjêcie danej
	
	//---------------------------------=PRZELICZENIE----------------------------------
	
	metry = stopy * przelicznik;      		//przeliczenie
	
	std::cout << "\n";						//to samo, co std::cout << std::endl; (przejœcie do nowej lini
	
	// --------------------------------WYPISANIE WYNIKU-------------------------------
	
	std::cout << stopy << " stop - to jest: "
 			  	 << metry << " metrow\n";
}
