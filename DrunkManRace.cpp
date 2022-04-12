#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	
	srand(time(0));
    int size = 60;
    int position = size/2;
    int sleep = 0;
    char x;
	
	cout<<"Please Enter a letter between a-z"<<endl;
    cin>>x;

    while(position>1 && position <size && sleep < 1000000){
        cout<<"Start";
           for(int i =0;i<size;i++){
               if(i ==position){
                   cout<<x;
               }else{
                   cout<<" ";
               }
           }
        cout<<"Finish"<<endl;
        int move = rand()%3 -1;
        position = position + move;
        sleep++;   
    }
    
    if(position<=1){
        cout<<"You couldn't finish the race.";
    }
    if(position>=size){
        cout<<"Yay! Congratulations. You finished the race on time.";
    }
    if(position != 1 && position != size){
		cout<<"Time is up. Please try again"<<endl;
	}
    return 0;
}
