#include "Warlock.hpp"

Warlock::Warlock(std::string const &_name, std::string const &_title) : name(_name), title(_title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName() const { return name; }

std::string const &Warlock::getTitle() const { return title; }

void Warlock::setTitle(std::string const &newTitle) { title = newTitle; }

void Warlock::introduce() const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell) {
	if (spell) {
		spell_book.learnSpell(spell);
	}
}

void Warlock::forgetSpell(std::string spell_name) {
	spell_book.forgetSpell(spell_name);
}

void Warlock::launchSpell(std::string spell_name, ATarget const &target) {
	if (spell_book.createSpell(spell_name) != NULL) {
		spell_book.createSpell(spell_name)->launch(target);
	}
}