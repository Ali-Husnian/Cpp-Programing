#include<iostream>
#include<list>
using namespace std;
// Create a YoutubeChannal class with some attributes
class YoutubeChannal
{
    public:  // Access specifier
        string Name;
        string OwnerName;
        int ViewsCount;
        list<string> VideosCourseTitle;
};

int main(){
// Create an object of YoutubeChannal
    YoutubeChannal YTchannal;
// Access attributes and set values
    YTchannal.Name = "AH Electronics";
    YTchannal.OwnerName = "Ali Husnain";
    YTchannal.ViewsCount = 1000;
    YTchannal.VideosCourseTitle = {"1.LED Convert to TV","2.LED Bulb Repared","3.Make Amplifare with 2822 ic"};
 // Print attribute values
    cout << "Youtube Channal Name: " << YTchannal.Name << endl;
    cout << "Youtube Ownre Name: " << YTchannal.OwnerName << endl;
    cout << "Youtube ViewsCount: " << YTchannal.ViewsCount << endl;
    /*cout << "Youtube Videos: " << YTchannal.VideosCourseTitle << endl;*/
// forEach Loop print list 
    cout << "Youtube Videos:" << endl;
    for(string Title:YTchannal.VideosCourseTitle){
        cout << Title << endl;
    }
    system("pause>0");
}