#include <bits/stdc++.h>
using namespace std;


int main(){
   //
/*Code here Saksham*/
    //

    int num;
    cin>>num;
    for(int i=0;i<num ; i++){
        for (int j = 0; j < num; j++)
        {
            /* code */
            if(j<=num-i){
                cout<<" ";
            }
            else {
                cout<<"*";
            }
        }
        cout<<endl;

        
    }
}

