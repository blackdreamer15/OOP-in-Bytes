#include <iostream>
#include <list>


class YoutubeChannel {
private:
    std::string Name;
    std::string OwnerName;
    int SubscriberCount;
    std::list<std::string> PublishedVideoTitles;

public:
    //CONSTRUCTOR
    YoutubeChannel(std::string name, std::string ownerName) : Name(name), OwnerName(ownerName), SubscriberCount(0) {};

    //MEMBER FUNCTIONS
    void Subscribe() { SubscriberCount++; }
    void Unsubscribe() { if (SubscriberCount>0) SubscriberCount--; }

    void PublishVideo(std::string videoTitle) {
        PublishedVideoTitles.push_back(videoTitle);
    }

    void editOwnerName(std::string newOwnerName) { OwnerName = newOwnerName;}
    void editChannelName(std::string newChannelName) { Name = newChannelName;}

    std::string getChannelName() { return Name; }
    std::string getOwnerName() { return OwnerName; }
    
    int getSubscriberCount() {return SubscriberCount;}

    void GetInfo() {
        std::cout << "Channel Name: " << getChannelName() << std::endl;
        std::cout << "Owner Name: " << getOwnerName() << std::endl;
        std::cout << "Number of Subscribers: " << getSubscriberCount() << std::endl;
        std::cout << "Complete List of Published Videos: \n";
        for(auto VideoTitle : PublishedVideoTitles) {
            std::cout << VideoTitle << "\n";
        }
        std::cout << "\n";
    }
};



int main() {
    YoutubeChannel ytChannel("BakiTech Avenue", "Baki Jessy Justice Julien");
    
    ytChannel.PublishVideo("React.js: From Zero to Hero");
    ytChannel.Unsubscribe();
    ytChannel.GetInfo();

    for (int i = 0; i < 20; i++) {
        ytChannel.Subscribe();
    }

    ytChannel.getSubscriberCount();
    ytChannel.GetInfo();


    return 0;
}