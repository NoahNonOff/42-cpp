#include "Warlock.hpp"

Warlock::Warlock(std::string const &_name, std::string const &_title) : name(_name), title(_title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << name << ": My job here is done!" << std::endl;

	for (std::map<std::string, ASpell *>::iterator it = _spellBook.begin(); it != _spellBook.end(); it++) {
		delete it->second;
	}
	_spellBook.clear();
}

std::string const &Warlock::getName() const { return name; }

std::string const &Warlock::getTitle() const { return title; }

void Warlock::setTitle(std::string const &newTitle) { title = newTitle; }

void Warlock::introduce() const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell) {
	if (spell) {
		if (_spellBook.find(spell->getName()) == _spellBook.end()) {
			_spellBook[spell->getName()] = spell->clone();
		}
	}
}

void Warlock::forgetSpell(std::string spell_name) {
	if (_spellBook.find(spell_name) != _spellBook.end()) {
		delete (_spellBook.find(spell_name))->second;
		_spellBook.erase(_spellBook.find(spell_name));
	}
}

void Warlock::launchSpell(std::string spell_name, ATarget const &target) {
	if (_spellBook.find(spell_name) != _spellBook.end()) {
		_spellBook[spell_name]->launch(target);
	}
}
