#include<iostream>
#include<string>


class Cliente{

public:

	Cliente();

	Cliente(std::string Nome, std::string Cognome, std::string indirizzo);

	std::string getNome();
	std::string getCognome();
	std::string getIndirizzo();

	void setNome(std::string Nome);
	void setCognome(std::string Cognome);
	void setIndirizzo(std::string Indirizzo);

private:

	std::string Nome;
	std::string Cognome;
	std::string indirizzo;
};
