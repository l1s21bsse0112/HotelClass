#include<iostream>
using namespace std;

class HotelRoom{
	private:
		int roomNum;
		int floorNum;
		
	public:
		
		HotelRoom();
		
		void BookRoom(){
			cout << "The Room has been booked\n";
		}
		
		void CheckoutRoom(){
			cout << "The Room has been checked out\n";
		}
		
		bool isRoomBooked();
};

int main (){
	
	return 0;
}
