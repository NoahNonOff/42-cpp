#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include <string>
# include <map>

# include "ATarget.hpp"

class TargetGenerator
{
	private:
		std::map<std::string, ATarget *> _targetBook;

	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget *target);
		void forgetTargetType(std::string const &target_name);
		ATarget* createTarget(std::string const &target_name);
};

#endif