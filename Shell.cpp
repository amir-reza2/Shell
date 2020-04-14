#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F first
#define S second
deque <string> v;

void prog(){

}

void run(bool root = false){

}

int main(){
	string s;
	while (true){
		getline(cin, s);
		string t;
		v.empty();
		bool f;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == ' '){
				f = false;
				for (int j = 0; j < t.size(); j++){
					if (t[j] != ' ')
						f = true;
				}
				if (f)
					v.push_back(t);
				t = "";
			}
		}
	}
}

