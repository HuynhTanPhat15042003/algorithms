#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string s;
	cin >> s; 
	string temp;
	for(int i =0;i<s.size();i++){
		if(s[i] != '+'){
			temp += s[i];
		}
	
}
	sort(temp.begin(), temp.end());
    string result;
    for (int i = 0; i < temp.size(); i++) {
        result += temp[i];
        if (i != temp.size() - 1) {
            result += '+';
        }
    }
cout << result << endl;
	
	return 0;
}
	
