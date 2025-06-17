#include "bibfind_system.h"
int bibfind_system::key_counter = 0;
int main()
{
	bibfind_system bs;
	bibfind_system::action ac = bibfind_system::create;
	std::string author;
	bs.bibentry(ac);
	bs.bibentry(ac);
	bs.bibentry(ac);
	std::cin >> author;
	auto entry = bs.bibkey(author);
	if (entry.first == -1)
	{
		fprintf(stderr, "ERROR: System failed to find an author with a name %s\n", author.data());
		exit(1);
	}
	printf("key - %d\tname - %s\n", entry.first, entry.second.data());
	exit(0);
}
