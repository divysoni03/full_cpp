/*
Scenario:

You're developing a critical system for a hospital's patient monitoring unit. This system continuously collects vital sign data (e.g., heart rate, blood pressure, oxygen saturation) from sensors attached to patients and displays it on a central monitor for healthcare professionals. It's crucial to ensure robust error handling to prevent potential issues from disrupting patient care.

Potential Exceptions and Handling:

1. Sensor Malfunction:
   - Exception Type: 'SensorDataException' (custom class inheriting from 'std::runtime_error')
   - 'try...catch' Block:
     - In the code that reads sensor data, wrap the reading operation in a 'try' block.
     - Within a 'catch (const SensorDataException& e)' block, handle the exception by:
       - Logging the error message (e.what()) for troubleshooting.
       - Displaying a user-friendly error message on the monitor, indicating which sensor is malfunctioning and suggesting corrective actions (e.g., "Sensor X is temporarily unavailable. Please check connection or replace sensor").
       - Consider using a fallback value (e.g., last valid reading) for display purposes, but clearly indicate it's an estimate to avoid misleading healthcare professionals.

2. Invalid Data Format:
   - Exception Type: 'InvalidDataFormatException' (custom class inheriting from 'std::runtime_error')
   - 'try...catch' Block:
     - In the code that parses sensor data, wrap the parsing logic in a 'try' block.
     - Within a 'catch (const InvalidDataFormatException& e)' block, handle the exception by:
       - Logging the error message for debugging.
       - Displaying an informative message on the monitor ("Invalid data format received from sensor Y. Data integrity may be compromised. Investigating...").
       - Potentially attempt to recover or correct the data if possible (depending on the specific error).
       - If recovery is not feasible, consider using appropriate default values or initiating a sensor calibration routine.

3. Network Communication Failure:
   - Exception Type: 'NetworkException' (custom class inheriting from 'std::runtime_error') or a standard C++ networking exception class (if applicable)
   - 'try...catch' Block:
     - In the code that communicates with the sensors, wrap the network communication logic in a 'try' block.
     - Within a 'catch (const NetworkException& e)' block, handle the exception by:
       - Logging the error details.
       - Displaying a warning message on the monitor ("Network connection to sensors interrupted. Patient data may be delayed. Reconnecting...").
       - Implement retry logic for re-establishing the network connection as long as it's safe to do so without compromising time-sensitive data.
       - Consider storing received data locally while the network is down and transmitting it when the connection is restored.

Benefits of Exception Handling:

- Improved Code Maintainability: Isolates error handling logic, making code easier to read, understand, and modify.
- Enhanced Robustness: Prevents the program from crashing due to unexpected errors, ensuring the system remains operational for critical patient monitoring.
- Informative Error Messages: Provides healthcare professionals with clear error messages to aid in troubleshooting and maintaining patient safety.
- Graceful Fallbacks: Allows the system to gracefully handle errors by displaying appropriate messages, using fallback values, or attempting recovery processes.

By incorporating exception handling with well-defined custom exceptions, you can create a more reliable and informative patient monitoring system that effectively handles potential issues and safeguards patient care.

*/

#include<iostream>
using namespace std;

class SensorDataException : public exception {
    const char* message;
public:
    SensorDataException(const char* message) : message(message) {}

    const char* what() const throw() {
        return message;
    }
};

class InvalidDataFormatException : public runtime_error {
public:
    InvalidDataFormatException(string message) : runtime_error(message) {}
};

class NetworkException : public runtime_error {
public:
    NetworkException(string message) : runtime_error(message) {}
};

typedef struct {
    int heartRate;
    double bloodPressure;
    int oxygenSaturation;
} VitalSigns;

VitalSigns readSensorData(int sensorId) {
    if(sensorId == 1) {
        throw SensorDataException("Sensor 1 malfunction detected!");
    } else if(sensorId == 2) {
        throw InvalidDataFormatException("Invalid data format received from sensor 2.");
    } else if(sensorId == 3) {
        return {120, 120.5, 95};
    } else {
        cout << "Enter valid choice!!!" << endl;
        return {-1, -1, -1};
    }
}

bool sendDataToMonitor(VitalSigns& data) {
    if(data.heartRate > 100) {
        throw NetworkException("Network communication interrupted.");
    } else {
        if(data.heartRate != -1 && data.bloodPressure != -1 && data.oxygenSaturation != -1) cout << "Vital signs data sent to monitor successfully." << endl;
        return true;
    }
}

int main() {
    int sensorId;
    VitalSigns vitalSigns;

    while (true) {
        cout << "Enter sensor ID (1-3, or 0 to exit): ";
        cin >> sensorId;

        if(sensorId == 0) {
            break;
        }

        try {
            vitalSigns = readSensorData(sensorId);
            sendDataToMonitor(vitalSigns);

            if(vitalSigns.heartRate != -1 && vitalSigns.bloodPressure != -1 && vitalSigns.oxygenSaturation != -1) {
                cout << "Vital signs for sensor " << sensorId << ": " << endl;
                cout << "Heart rate: " << vitalSigns.heartRate << " bpm" << endl;
                cout << "Blood Pressure: " << vitalSigns.bloodPressure << " mmHg" << endl;
                cout << "Oxygen Saturation: " << vitalSigns.oxygenSaturation << " %" << endl;
            }
        } catch (SensorDataException& e) {
            cout << "Error: " << e.what() << endl;
            cout << "** Sensor " << sensorId << " malfunction. **" << endl;
        } catch (InvalidDataFormatException& e) {
            cout << "Error: " << e.what() << endl;
            cout << "** Invalid data received from sensor " << sensorId << ". Data integrity compromised. **" << endl;
        } catch (NetworkException& e) {
            cout << "Error: " << e.what() << endl;
            cout << "** Network Communication error. Data transmission failed. Reconnecting... **" << endl;
        }
    }
    


    return 0;
}