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
	int a, b;

	while(regex_search (str, res, reg)){
		vec.push_back(res[0].str());
		str = res.suffix();
	}
	if (vec.size() < 3) {
		cout << argv[1] << endl;
	}
	else {
		int idx = (vec.size() - 1) / 2;
		// cerr << vec[idx] << endl;
		sscanf(vec[idx].c_str(), "(%d;%d)", &a, &b);
		if(a > b) {
			cout << vec[0] << " " << vec[vec.size() - 1] << endl;
		}
		else if (a % 2 == b % 2) {
			for (int i = 0; i < vec.size(); i++) {
				if (i != idx) {
					cout << vec[i];
					if (i != vec.size() - 1) {
						cout  << " ";
					}
				}
			}
			cout << endl;
		}
		else {
			cout << argv[1] << endl;
		}
	}

	
	return 0;
}

