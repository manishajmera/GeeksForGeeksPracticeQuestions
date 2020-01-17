/*Q Given a sorted array arr[] of non-repeating integers without duplicates. 
Sort the array into a wave-like array and return it. 
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5..... 
(considering the increasing lexicographical order).*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int temp;
	    vector <int> arr;
	    for(int i=0;i<n;i++){
	        cin >> temp;
	        arr.push_back(temp);
	    }
	    for(int i=0;i<n;){
	        if(i==n-1){
	            break;
	        }
	        int temp = arr[i];
	        arr[i] = arr[i+1];
	        arr[i+1] = temp;
	        i = i+2;
	    }
	     for(int i=0;i<n;i++){
	        cout << arr[i] << " " ;
	      
	    }
	    cout << endl;
	    
	}
	return 0;
}