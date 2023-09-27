#include "SpellBook.hpp"

SpellBook::SpellBook() {
	
}

SpellBook::~SpellBook() {

	for (std::map<std::string, ASpell *>::iterator it = _spellBook.begin(); it != _spellBook.end(); it++) {
		delete it->second;
	}
	_spellBook.clear();
}

void SpellBook::learnSpell(ASpell* spell) {
	if (spell) {
		if (_spellBook.find(spell->getName()) == _spellBook.end()) {
			_spellBook[spell->getName()] = spell->clone();
		}
	}
}

void SpellBook::forgetSpell(std::string const &spell_name) {
	if (_spellBook.find(spell_name) != _spellBook.end()) {
		delete (_spellBook.find(spell_name))->second;
		_spellBook.erase(_spellBook.find(spell_name));
	}
}
ASpell* SpellBook::createSpell(std::string const &spell_name) {
	ASpell *tmp = NULL;

	if (_spellBook.find(spell_name) != _spellBook.end())
		tmp = _spellBook[spell_name];
	return tmp;
}