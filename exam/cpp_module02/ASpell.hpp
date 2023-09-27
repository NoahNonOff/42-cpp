#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>

# include "ATarget.hpp"

class ATarget;

/* abstract */
class ASpell
{
	protected:
		std::string name;
		std::string effects;
	public:

		/* coplien's form */
		ASpell(std::string const &_name, std::string const &_effects);
		ASpell(ASpell const &other);
		ASpell &operator=(ASpell const &other);
		virtual ~ASpell();

		/* functions */
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell *clone() const = 0;

		void	launch(ATarget const &target);
};

#endif