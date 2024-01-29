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
		
		void CheckoutRoom();
		bool isRoomBooked();
};

int main (){
	
	return 0;
}
