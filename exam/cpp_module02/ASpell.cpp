#include "ASpell.hpp"

std::string	ASpell::getName() const { return name; }
std::string ASpell::getEffects() const { return effects; }

ASpell::ASpell(std::string const &_name, std::string const &_effects) : name(_name), effects(_effects) {

}

ASpell::ASpell(ASpell const &other) {
	*this = other;
}

ASpell &ASpell::operator=(ASpell const &other) {
	if (this != &other) {
		this->name = other.getName();
		this->effects = other.getEffects();
	}
	return *this;
}

ASpell::~ASpell() {

}

void	ASpell::launch(ATarget const &target) {
	target.getHitBySpell(*this);
}
