#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    
	bool isNextCharBigger(char first, char next){

		string Roman = "IVXLCDM";
		if(first==next){
			return false;
		}

		for(int i=0;i<7;i++){
			if(first==Roman[i]){
				return true;
			}
			else if(next == Roman[i]){
				return false;
			}
		}
        return false;
	}

	int findvalue(char c){
		string Roman = "IVXLCDM";
		int numbers[] = {1,5,10,50,100,500,1000};

		for(int i=0;i<7;i++){
			if(c==Roman[i]){
				return numbers[i];
			}
		}
        return 0;
	}

    int romanToInt(string s) {
        //Code here

		int n = s.size(), index = 0;
		int answer = 0;
        
		while(index<n){
         
		//  if my next character is bigger than me?
		   if(index!=n-1&&isNextCharBigger(s[index],s[index+1])){
                answer-=findvalue(s[index]);
		   }
		   else{
               answer+=findvalue(s[index]);
		   }

		   index++;
		}

		return answer;


    }
};

int main() {
    Solution s;
    string roman = "MCMXCIV";
    cout << "Roman: " << roman << endl;
    cout << "Integer: " << s.romanToInt(roman) << endl;
    return 0;
}