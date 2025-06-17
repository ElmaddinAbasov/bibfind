#ifndef DB_H
#define DB_H
#include <map>
#include <string>
class db
{
	std::map<int, std::string, std::less<int>> storage;
public:	
	db() = default;
	void db_add(int key, const std::string& author);
	std::pair<int, std::string> db_find(const std::string& author);
	~db() = default;
};
#endif
