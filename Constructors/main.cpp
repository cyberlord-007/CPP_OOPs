#include<iostream>
#include<string>

using namespace std;

class YoutubeChannel {
  public:
    string Name;
    string ownerName;
    int subCount;

    YoutubeChannel (string name,string owner) {
      Name = name;
      ownerName = owner;
      subCount = 0;
    }
};


int main() {
  YoutubeChannel ytChannel("cyberlord","Akash");
  cout<<"Name: "<<ytChannel.Name<<endl;
  cout<<"Owner: "<<ytChannel.ownerName<<endl;
  cout<<"Subscribers: "<<ytChannel.subCount<<endl;
}