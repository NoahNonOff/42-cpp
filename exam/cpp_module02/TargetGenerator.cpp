#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {
	
}

TargetGenerator::~TargetGenerator() {
	_targetBook.clear();
}

void TargetGenerator::learnTargetType(ATarget *target) {
	if (target) {
		if (_targetBook.find(target->getType()) == _targetBook.end()) {
			_targetBook[target->getType()] = target;
		}
	}
}

void TargetGenerator::forgetTargetType(std::string const &target_name) {
	if (_targetBook.find(target_name) != _targetBook.end()) {
		_targetBook.erase(_targetBook.find(target_name));
	}
}

ATarget* TargetGenerator::createTarget(std::string const &target_name) {
	ATarget *tmp = NULL;

	if (_targetBook.find(target_name) != _targetBook.end())
		tmp = _targetBook[target_name];
	return tmp;
}