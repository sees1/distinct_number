#include <iostream>
#include <vector>
#include <algorithm>

int main(){
int n;
bool fl = true;
int buff;
std::vector <int> oper;

std::cin >> n;

for(int i = 0;i < n;i++){
	std::cin>>buff;
	oper.push_back(buff);
}buff = 0;

sort(oper.begin(),oper.end());


for(int i = 0;i < n;i++){
	if(oper[i] == oper[i+1z]){
		fl = true;
		continue;
	}else {
		fl = false;
	}
	 
	if(fl == false){
		buff++;
		fl = true;
	}
}

std::cout << buff;
}

