#include "iostream"
#include <string>
#include <regex>

using namespace std;

int main(int argc, char const *argv[])
{
	regex reg("\\(\\d*;\\d*\\)");
	vector<string> vec;
	smatch res;
	string str(argv[1]);

	while(regex_search (str, res, reg)){
		vec.push_back(res[0].str());
		str = res.suffix();
	}
	if (vec.size() < 3) {
		cout << argv[1] << endl;
	}
	else {
		cout << vec[0] << " " << vec[2] << endl;
	}

	
	return 0;
}

