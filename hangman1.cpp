#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

void mangkitu(string a[], int n){
	string s = "";
	for(int i = 0; i < n; i++){
		s+=a[i];
		
	}
	cout<<s<<endl;
}

string random(string a[], int n){
	srand(time(NULL));
	int b = rand()%2+1;
	return a[b];
}


bool kiemtra(string a, string b){
	if(a.compare(b)==0) return true;
	else return false;
}

void hienthi(string a[], int n, string k, string q[]){
	for(int i = 0; i < n; i++){
		if(kiemtra(a[i], k)==true){
			q[i]=a[i];	
		}
	}
	for(int i = 0; i < n; i++){
		cout<<q[i];
	}
	cout<<endl;
}


bool checkall(string a[], int n, string q[]){
	for(int i = 0; i < n; i++){
		if(q[i]=="*"){
			return false;
		}
	}
    return true;
}

int main(){
	cout << "game start";
	string a[5]={"h", "e", "l", "l", "o"};
	string q[5] = {"*", "*", "*", "*", "*"};
	// mangkitu(a, 5);
	string k;
    while(true){
        Nhap:
	    getline(cin, k);
	    hienthi(a, 5, k, q);
	    if(checkall(a, 5, q)){
		    break;
	    }
    }
    cout<<"tu can tim la: "<<endl;
	    hienthi(a, 5, k, q);
}