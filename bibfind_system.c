#include "bibfind_system.h"

static bibfind_entry ent;

void bibfind_system::bibentry(action ac)
{
	if (ac == create)
	{
		std::getline(std::cin, ent.author);
		auto len = ent.author.length();
		if (len == 0)
			return;
		ent.author[len] = 0;
		ent.key = key_counter;
		key_counter++;
		data_base.db_add(ent.key, ent.author);
		return;
	}
}

std::pair<int, std::string> bibfind_system::bibkey(const std::string& author)
{
	auto v = data_base.db_find(author);
	return v;
}

