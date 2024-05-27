class HotelManagementSystem:
    def __init__(self):
        self.rooms = {
            '101': {'type': 'Single', 'price': 100, 'available': True},
            '102': {'type': 'Double', 'price': 150, 'available': True},
            '103': {'type': 'Suite', 'price': 200, 'available': True},
        }
        self.customers = {}

    def check_availability(self):
        available_rooms = {room_id: details for room_id, details in self.rooms.items() if details['available']}
        if not available_rooms:
            print("No rooms available.")
        else:
            for room_id, details in available_rooms.items():
                print(f"Room {room_id}: Type: {details['type']}, Price: {details['price']}")
        return available_rooms

    def book_room(self, room_id, customer_name):
        if room_id not in self.rooms:
            print("Room ID does not exist.")
            return
        if not self.rooms[room_id]['available']:
            print("Room is not available.")
            return

        self.rooms[room_id]['available'] = False
        self.customers[room_id] = customer_name
        print(f"Room {room_id} has been booked by {customer_name}.")

    def checkout(self, room_id):
        if room_id not in self.rooms:
            print("Room ID does not exist.")
            return
        if self.rooms[room_id]['available']:
            print("Room is already available.")
            return

        self.rooms[room_id]['available'] = True
        customer_name = self.customers.pop(room_id, None)
        print(f"Room {room_id} has been checked out by {customer_name}.")

    def display_customers(self):
        if not self.customers:
            print("No customers.")
        else:
            for room_id, customer_name in self.customers.items():
                print(f"Room {room_id}: {customer_name}")

# Example usage
hotel_system = HotelManagementSystem()
while True:
    print("\nHotel Management System")
    print("1. Check Room Availability")
    print("2. Book Room")
    print("3. Checkout Room")
    print("4. Display Customers")
    print("5. Exit")

    choice = input("Enter your choice: ")

    if choice == '1':
        hotel_system.check_availability()
    elif choice == '2':
        room_id = input("Enter room ID to book: ")
        customer_name = input("Enter customer name: ")
        hotel_system.book_room(room_id, customer_name)
    elif choice == '3':
        room_id = input("Enter room ID to checkout: ")
        hotel_system.checkout(room_id)
    elif choice == '4':
        hotel_system.display_customers()
    elif choice == '5':
        print("Exiting...")
        break
    else:
        print("Invalid choice. Please try again.")
