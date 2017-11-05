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

//Cliente::~Cliente() {
//	delete 
//}

std::ostream& operator<<(std::ostream& os, Cliente c) {
	return os << "Nome: " << c.getNome() << std::endl;
	return os << "Cognome: " << c.getCognome() << std::endl;
	return os << "Indirizzo: " << c.getIndirizzo() << std::endl;
}


void Cliente::setNome(std::string n) {
	Nome = n;
}
void Cliente::setCognome(std::string n) {
	Cognome = n;
}
void Cliente::setIndirizzo(std::string n) {
	indirizzo= n;
}

std::string Cliente::getNome() {
	return Nome;
}
std::string Cliente::getCognome() {
	return Cognome;
}

std::string Cliente::getIndirizzo() {
	return indirizzo;
}

