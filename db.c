#include "db.h"

void db::db_add(int key, const std::string& author)
{
	auto p = std::make_pair(key, author);
	storage.insert(p);
}

std::pair<int, std::string> db::db_find(const std::string& author)
{
	auto iter = storage.cbegin();
	while (iter != storage.cend())
	{
		if (iter->second == author)
			return *iter;
		iter++;
	}
	return std::pair<int, std::string>(-1, "");
}

