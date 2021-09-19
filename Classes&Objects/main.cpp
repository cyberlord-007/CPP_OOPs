#include<iostream>
#include<string>

using namespace std;

class YouTubeChannel {
  public:
    string name;
    string ownerName;
    int subCount;
};

int main() {
  YouTubeChannel ytChannel;
  ytChannel.name = "cyberlord";
  ytChannel.ownerName = "Akash";

  cout<<"Name: "<<ytChannel.name<<endl;
  cout<<"Owner: "<<ytChannel.ownerName<<endl;
}