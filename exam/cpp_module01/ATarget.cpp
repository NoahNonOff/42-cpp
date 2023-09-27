#include "ATarget.hpp"

std::string	ATarget::getType() const { return type; }

ATarget::ATarget(std::string const &_type) : type(_type) {

}

ATarget::ATarget(ATarget const &other) {
	*this = other;
}

ATarget &ATarget::operator=(ATarget const &other) {
	if (this != &other) {
		this->type = other.getType();
	}
	return *this;
}

ATarget::~ATarget() {

}

void	ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}