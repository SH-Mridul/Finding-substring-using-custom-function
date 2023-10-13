#include <bits/stdc++.h>
using namespace std;


bool findSubString(string mainString,string findingString){
    for(int i = 0; i<mainString.size(); i++){
        if(mainString[i] == findingString[0]){
            
            int x = i;
            int y = 0;
            
            while(mainString[x] == findingString[y] && x < mainString.size()){
                x++;
                y++;
            }
            
            if(y == findingString.size()) return true;
        }
    } 
    
    return false;  
}

int main() {
    int t;
    cin>>t;
    
    while(t--){
       int n,m;
       cin>>n>>m;
       string x,s;
       cin>>x>>s;
       
       int operation = 0;
       
       while(!findSubString(x,s)){
            x += x;
            operation++;
            
            if(findSubString(x,s)){
                break;
            }
            
            if(n*m<x.size()){
                operation = -1;
                break;
            }
       }
       
       cout<<operation<<endl;
    }
    
    return 0;
}


