
from datetime import datetime

class HotelManagementSystem:
    def __init__(self):
        self.rooms = {
            '101': {'type': 'Single', 'price': 100, 'available': True},
            '102': {'type': 'Double', 'price': 150, 'available': True},
            '103': {'type': 'Suite', 'price': 200, 'available': True},
        }
        self.customers = {}
        self.services = {
            'food': 50,
            'shower': 20,
            'swimming': 30,
            'game': 40,
            'gambling': 100
        }

    def check_availability(self):
        available_rooms = {room_id: details for room_id, details in self.rooms.items() if details['available']}
        if not available_rooms:
            print("No rooms available.")
        else:
            for room_id, details in available_rooms.items():
                print(f"Room {room_id}: Type: {details['type']}, Price: {details['price']}")
        return available_rooms

    def book_room(self, room_id, customer_name, contact, email, check_in_date, check_out_date, additional_services):
        if room_id not in self.rooms:
            print("Room ID does not exist.")
            return
        if not self.rooms[room_id]['available']:
            print("Room is not available.")
            return

        self.rooms[room_id]['available'] = False
        total_service_cost = sum(self.services[service] for service in additional_services)
        self.customers[room_id] = {
            'name': customer_name,
            'contact': contact,
            'email': email,
            'check_in': check_in_date,
            'check_out': check_out_date,
            'services': additional_services,
            'total_service_cost': total_service_cost
        }
        print(f"Room {room_id} has been booked by {customer_name} from {check_in_date} to {check_out_date} with services: {', '.join(additional_services)}.")

    def checkout(self, room_id):
        if room_id not in self.rooms:
            print("Room ID does not exist.")
            return
        if self.rooms[room_id]['available']:
            print("Room is already available.")
            return

        self.rooms[room_id]['available'] = True
        customer_info = self.customers.pop(room_id, None)
        total_cost = self.rooms[room_id]['price'] + customer_info['total_service_cost']
        print(f"Room {room_id} has been checked out by {customer_info['name']}. Total cost: {total_cost} (including services: {customer_info['services']}).")

    def display_customers(self):
        if not self.customers:
            print("No customers.")
        else:
            for room_id, customer_info in self.customers.items():
                print(f"Room {room_id}: {customer_info['name']}, Contact: {customer_info['contact']}, "
                      f"Email: {customer_info['email']}, Check-in: {customer_info['check_in']}, "
                      f"Check-out: {customer_info['check_out']}, Services: {', '.join(customer_info['services'])}, "
                      f"Service Cost: {customer_info['total_service_cost']}")

    def add_room(self, room_id, room_type, price):
        if room_id in self.rooms:
            print("Room ID already exists.")
            return

        self.rooms[room_id] = {'type': room_type, 'price': price, 'available': True}
        print(f"Room {room_id} of type {room_type} with price {price} has been added.")

    def remove_room(self, room_id):
        if room_id not in self.rooms:
            print("Room ID does not exist.")
            return
        if not self.rooms[room_id]['available']:
            print("Room is currently booked and cannot be removed.")
            return

        del self.rooms[room_id]
        print(f"Room {room_id} has been removed.")

# Example usage
hotel_system = HotelManagementSystem()

while True:
    print("\nHotel Management System")
    print("1. Check Room Availability")
    print("2. Book Room")
    print("3. Checkout Room")
    print("4. Display Customers")
    print("5. Add Room")
    print("6. Remove Room")
    print("7. Exit")

    choice = input("Enter your choice: ")

    if choice == '1':
        hotel_system.check_availability()
    elif choice == '2':
        room_id = input("Enter room ID to book: ")
        customer_name = input("Enter customer name: ")
        contact = input("Enter contact number: ")
        email = input("Enter email address: ")
        check_in_date = input("Enter check-in date (YYYY-MM-DD): ")
        check_out_date = input("Enter check-out date (YYYY-MM-DD): ")
        additional_services = input("Enter additional services (comma-separated: food, shower, swimming, game, gambling): ").split(',')
        additional_services = [service.strip() for service in additional_services]
        try:
            check_in_date = datetime.strptime(check_in_date, "%Y-%m-%d").date()
            check_out_date = datetime.strptime(check_out_date, "%Y-%m-%d").date()
            if check_in_date >= check_out_date:
                print("Check-out date must be after check-in date.")
                continue
        except ValueError:
            print("Invalid date format.")
            continue
        hotel_system.book_room(room_id, customer_name, contact, email, check_in_date, check_out_date, additional_services)
    elif choice == '3':
        room_id = input("Enter room ID to checkout: ")
        hotel_system.checkout(room_id)
    elif choice == '4':
        hotel_system.display_customers()
    elif choice == '5':
        room_id = input("Enter new room ID: ")
        room_type = input("Enter room type: ")
        price = input("Enter room price: ")
        try:
            price = float(price)
        except ValueError:
            print("Invalid price format.")
            continue
        hotel_system.add_room(room_id, room_type, price)
    elif choice == '6':
        room_id = input("Enter room ID to remove: ")
        hotel_system.remove_room(room_id)
    elif choice == '7':
        print("Exiting...")
        break
    else:
# existing code...

        print("Invalid choice. Please try again.")
