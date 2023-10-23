//Finite autoaton

#include <bits/stdc++.h>

using namespace std;
void string_matching(int state_transition_table[4][2], int n, int m, string t){
    
    cout<<"Pattern occurred at indexes : ";
    int q=0;
    for(int i=0;i<n;i++){
        
        q = state_transition_table[q][t[i]-'a'];

        if(q==m){
            cout<<i-m+1+1<<" ";
        }
    }
}

int main(){

    string s= "abaabbabbaabbb";
    int n = s.size();
    string pattern = "aab";
    int m = pattern.size();
    
    int state_transition_table[4][2] = { 1, 0,
                                         1, 2,
                                         1, 3,
                                         1, 0};
    
    string_matching(state_transition_table, n, m, s);
    
	

	return 0;
}
