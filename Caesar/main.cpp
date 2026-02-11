#include <iostream>
#include <random>
using namespace std;

random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> dist(1, 26);
const int SHIFT = dist(gen);

string cipher(string plain_text) {
  string cipher;
  for(char c: plain_text){
    if('a'<=c&&c<='z'){
      cipher+=((c-'a'+SHIFT)%26)+'a';
    }else if('A'<=c&&c<='Z'){
      cipher+=((c-'A'+SHIFT)%26)+'A';
    }else{
      cipher+=c;
    }
  }
  return cipher;
}

const string flag = "Flag{Random_ROT}";
const string cipher_flag = cipher(flag);
const string KEY = "DummyKey";

int main() {
  cout << "シーザー暗号ゲームへようこそ" << endl;
  cout << "暗号化されたkeyを予測しよう\n" << endl;

  cout << "元のkeyの内容を予測しよう！"<<endl;
  string key = cipher(KEY);
  cout << "暗号化されたkey: " << key << endl;

  string input;

  cout << "keyを入力してください >> ";
  cin >> input;
  string cipher_input = cipher(input);

  cout << "暗号化: " << cipher_input << endl;

  if(key == cipher_input){
    cout << "おめでとう！！！" << endl;
    cout << cipher_flag << endl;
  }else {
    cout << "残念" << endl;
    cout << "keyが違います。"<<endl;
  }
}

