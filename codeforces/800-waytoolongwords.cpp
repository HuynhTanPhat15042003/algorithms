#include <iostream>
#include <string>
#include <sstream>
#include <vector> 

using namespace std;

int main(){
 	int n;
 	cin >> n;
	vector<string> arr;
	string s1;
 	for(int i = 0; i < n; i++){
		cin >> s1;
		if(s1.size() > 10 ){
			stringstream ss;
			ss << s1.size()-2;
			s1.erase(1, s1.size()-2);
			string s2 = ss.str();
			s1.insert(1, s2);
			arr.push_back(s1);
		}else{ 
			arr.push_back(s1);
		}
	}
	for( const string& s : arr){
		cout << s << endl;
	}
    return 0;
}
