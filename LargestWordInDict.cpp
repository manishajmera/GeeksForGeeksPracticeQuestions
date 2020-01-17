/*Q Giving a dictionary and a string ‘str’, your task is to find the longest string in dictionary of size x which can be formed by deleting some characters of the given ‘str’.

Examples:

Input : dict = {"ale", "apple", "monkey", "plea"}   
        str = "abpcplea"  
Output : apple

Input  : dict = {"pintu", "geeksfor", "geeksgeeks", 
                                        " forgeek"} 
         str = "geeksforgeeks"
Output : geeksgeeks */


#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <bits/stdc++.h>

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector <string> dict;
	    string temp;
	    for(int i=0;i<n;i++){
	        cin >> temp;
	        dict.push_back(temp);
	    }
	    string s;
	    cin >> s;
	    int matched = 1;
	    string matchedString="";
	    for(int i=0;i<n;i++){
	        for(int j=0;j<dict[i].length();j++ ){
	            int flag = 0;
	            matched = 1;
	            for(int k=0;k<s.length();k++){
	                if(dict[i][j]==s[k]){
	                    flag = 1;
	                    break;
	                }
	            }
	            if(flag==0){
	               // cout << dict[i]  << " ";
	                matched = 0;
	                break;
	            }
	        }
	       // cout << matched << " " ;
	        if(matched==1){
	            if(matchedString.length()<dict[i].length()){
	                    matchedString =  dict[i];
	            }
	        }
	    }
	    cout << matchedString << endl;
	    
	}
	return 0;
}