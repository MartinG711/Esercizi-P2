#include "stdafx.h"
#include "Cliente.h"

Cliente::Cliente() {
	std::cout << "Cliente costruito con default" << std::endl;
	Nome = "ND";
	Cognome = "ND";
	indirizzo = "ND";
}

Cliente::Cliente(std::string n, std::string c, std::string in) {
	std::cout << "Cliente costruito con parametri" << std::endl;
	Nome = n;
	Cognome = c;
	indirizzo = in;
}


