#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <map>

# include "ASpell.hpp"
# include "ATarget.hpp"

# include "Fwoosh.hpp"
# include "Dummy.hpp"

# include "SpellBook.hpp"
# include "Polymorph.hpp"
# include "Fireball.hpp"
# include "TargetGenerator.hpp"
# include "BrickWall.hpp"

class Warlock
{
	private:
		std::string name;
		std::string	title;

		SpellBook	spell_book;

	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(std::string const &newTitle);
		void introduce() const;

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spell_name);
		void launchSpell(std::string spell_name, ATarget const &target);
};

#endif