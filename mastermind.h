#include <string>
using namespace std;

class mastermind
{
public:
	mastermind(int);
	mastermind(int, string[]);
	int move(string[], int&, int&);
	int getMoveIndex();
	int getNumberOfColumns();
private:
	const int MAX_MOVES;
	string pegs[10];
	int moves;
	int cols;
};
