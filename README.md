# Parking Management System

## Overview
The **Parking Management System** is a user-friendly C-based application designed to efficiently manage parking for both cars and bikes. It helps keep track of parked vehicles, allows easy registration of new entries, and removes vehicles once they leave the parking area.

## Features
- **Easy Vehicle Entry**: Quickly register a car or bike.
- **Real-time Vehicle Count**: Display the total number of parked vehicles.
- **Separate Car & Bike Tracking**: Get specific counts for cars and bikes.
- **Parking Order Overview**: View the sequence of parked vehicles.
- **Smooth Vehicle Exit**: Remove vehicles when they leave.
- **Data Backup**: Save parking details for future reference.

## Installation
1. Clone the repository:
   ```sh
   git clone https://github.com/your-username/Parking-Management-System.git
   ```
2. Navigate to the project directory:
   ```sh
   cd Parking-Management-System
   ```
3. Compile the program using a C compiler (e.g., GCC):
   ```sh
   gcc PROJECT_PARKING_MANAGEMENT.c -o parking.exe
   ```
4. Run the program:
   ```sh
   ./parking.exe
   ```

## How to Use
1. Launch the program.
2. Choose an option from the menu:
   - `1` → Add a new vehicle.
   - `2` → View total parked vehicles.
   - `3` → Check the number of cars.
   - `4` → Check the number of bikes.
   - `5` → View parking order.
   - `6` → Remove a vehicle.
   - `7` → Backup parking data.
   - `8` → Exit the program.

## Contributor
- **Syed Hammad Alam**

## License
This project is open-source and available under the [MIT License](LICENSE).

## Important Notes
- Update the file paths for parking data storage (`PARKING_DATA_CAR.txt` & `PARKING_DATA_BIKE.txt`) according to your system.
- The program is built for Windows as it requires `windows.h`.

---
Contributions, suggestions, and feedback are always welcome!

