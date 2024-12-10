#include<iostream>
double celsius_to_fah(double fah) {
	return 32 + fah * 9 / 5;
	
}
double fahrenheit_to_cels(double cel) {
	return 5 * (cel - 32) / 9;
}