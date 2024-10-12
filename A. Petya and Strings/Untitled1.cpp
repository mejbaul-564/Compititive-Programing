#include <iostream>
#include <string>
using namespace std;
int main() {

   string s;
   getline(cin,s);
   int sizeA;
   sizeA = s.size();

for(int i=0; i<sizeA; i++){
cout<<s[i];
if(s[i]==' '){
cout<<endl;
}
}

//    std::string input = "Hello,World,This,Is,C++,EXPLODE";
//    char delimiter = ',';
//
//    std::size_t start = 0;
//    std::size_t end = input.find(delimiter);
//
//    while (end != std::string::npos) {
//        std::string token = input.substr(start, end - start);
//        std::cout << token << std::endl;
//
//        start = end + 1;
//        end = input.find(delimiter, start);
//    }
//
//    std::string lastToken = input.substr(start, end);
//    std::cout << lastToken << std::endl;

    return 0;
}
