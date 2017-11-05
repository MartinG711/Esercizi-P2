#include<iostream>
#include<string>
#include<iostream>


class Cliente{

public:

	Cliente();

	Cliente(std::string Nome, std::string Cognome, std::string indirizzo);

	std::string getNome();
	std::string getCognome();
	std::string getIndirizzo();
	~Cliente();

	void setNome(std::string Nome);
	void setCognome(std::string Cognome);
	void setIndirizzo(std::string Indirizzo);

private:

	std::string Nome;
	std::string Cognome;
	std::string indirizzo;
};

std::ostream& operator<<(std::ostream& os, const Cliente&);
