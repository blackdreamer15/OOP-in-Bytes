#include <iostream>

class YouTubeChannel {
public:
    std::string Name;
    int SubscribersCount;

    YouTubeChannel(std::string name, int subscribersCount) {
        Name = name;
        SubscribersCount = subscribersCount;
    }
    friend std::ostream &operator<<(std::ostream &out, YouTubeChannel &yt);
};

std::ostream &operator<<(std::ostream &out, YouTubeChannel &yt) {
    out << "Channel Name     : " << yt.Name << std::endl;
    out << "Subscribers count: " << yt.SubscribersCount << std::endl;
}

int main() {
    YouTubeChannel yt1 = YouTubeChannel("Grade A Under A", 3680000);
    std::cout << yt1;

    return 0;
}