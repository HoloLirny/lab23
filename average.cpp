#include<iostream>
#include<cstdlib>

using namespace std;

int main(int a,char *ar[]){
    double sum=0;
    for(int i=0;i<a;i++){

        sum += atof(ar[i]);
    }
    if(a==1){
        cout<<"Please input numbers to find average.\n";
    }else{
      cout<<"---------------------------------\n";

    cout<< "Average of "<<a-1<<" numbers = "<<sum/(a-1)<<endl;

    cout<<"---------------------------------";   
    }
       return 0;

}