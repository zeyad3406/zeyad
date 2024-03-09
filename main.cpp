#include <iostream>
#include <bitset>
#include <algorithm>
#include <iomanip>
using namespace std;
int main() {
    int repeat=2;
    while (repeat>0){
    int choice;
        cout<<"Do you want to"<<endl<<"1-encrypt"<<endl<<"2-decrypt"<<endl<<"3-exit"<<endl<<"please select your choice:-";
        cin>>choice;
        while (choice!=1 and choice!=2 and choice!=3){cout<<"please choose a valid number:-";cin>>choice;}
        if (choice==1){
    string input_1,binary_1,upx_1;
    int inp_len_1,order_1;
    cout<<"please insert the word to be encrypted:-";
    cin>>input_1;
    transform(input_1.begin(), input_1.end(), back_inserter(upx_1), ::toupper);
    inp_len_1=upx_1.length();
    for(int i=0;i<inp_len_1;++i){
        order_1=static_cast<int>(upx_1[i])-static_cast<int>('A');
        binary_1=bitset<8>(order_1).to_string();
        if (binary_1.size() > 4) {
            binary_1 = binary_1.substr(binary_1.size() - 5);}
        for (int counter=0;counter<5;++counter){
            if (binary_1[counter]=='0'){cout<<"a";}
            else if(binary_1[counter]=='1'){cout<<"b";}
        }cout<<" ";
}}

//decription
        else if(choice==2){cout<<"please enter the word to be decrypted(separate between letters using '/'";
   string input_2;
   int inp_len_2;
            cin>>input_2;
            inp_len_2=input_2.length();
   int j=0;
   string binary;
   string output="";
   while (j<inp_len_2){
       if(input_2[j]=='a'){binary+='0';}
       else if (input_2[j]=='b'){binary+='1';};j=j+1;}
            for (int l = 0; l < binary.length(); l += 5) {
                string chunk = binary.substr(l, 5);
                bitset<5> binaryChunk(chunk);
                char asciiChar = 'a' + binaryChunk.to_ulong();
                output += asciiChar;}
            cout<<output;}
   else if (choice==3){exit(0);};
   cout<<endl;};
    return 0;}
