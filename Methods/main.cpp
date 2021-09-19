#include<iostream>
#include<string>
using namespace std;

class YoutubeChannel {
  public:
    string Name;
    string ownerName;
    int subCount;

    YoutubeChannel(string name,string owner) {
      Name = name;
      ownerName = owner;
      subCount = 0;
    }

    void printInfo() {
      cout<<"Channel Info: "<<endl;
      cout<<"Name: "<<Name<<"\t"<<"Owner: "<<ownerName<<"\t"<<"Subscribers: "<<subCount<<endl;
    }
};


int main() {
  YoutubeChannel channel("cyberlord","Akash");
  channel.printInfo();
}