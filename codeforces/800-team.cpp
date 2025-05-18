#include <iostream>
#include <vector> 
#include <string>

using namespace std;

int main () 
{
    int n;
    string cleaned;
    int result =0;
    cin >> n;
    cin.ignore();
    for(int i=0; (int)i<n;i++){
		string s;
		getline(cin, s);
		for(char c : s){
			if(c != ' '){
				cleaned += c;
			}	
	}	
		
}
	for(int j=0; (int) j < cleaned.size();j+=3){
		if((cleaned[j]-'0')+ (cleaned[j+1]-'0')== 2|| (cleaned[j+1] - '0')+ (cleaned[j+2] -'0') == 2|| (cleaned[j] - '0')+ (cleaned[j+2] -'0') == 2 || (cleaned[j] - '0')+ (cleaned[j+1] -'0') + (cleaned[j+2] - '0') == 3){
				result++;	
			}
		
	} 
	cout << result << endl;
    return 0;
}
