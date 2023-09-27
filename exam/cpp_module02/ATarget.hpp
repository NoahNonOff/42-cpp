#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>

# include "ASpell.hpp"

class ASpell;

/* abstract */
class ATarget
{
	protected:
		std::string type;
	public:

		/* coplien's form */
		ATarget(std::string const &_type);
		ATarget(ATarget const &other);
		ATarget &operator=(ATarget const &other);
		virtual ~ATarget();

		/* functions */
		std::string getType() const;
		virtual ATarget *clone() const = 0;

		void	getHitBySpell(ASpell const &spell) const;
};

#endif