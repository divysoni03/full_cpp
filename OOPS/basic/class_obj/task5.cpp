// 5. Hospital Management System (Simple):

// -> Problem: Schedule an appointment for a patient with a doctor.
// -> Classes:
//     -> Patient (attributes: name)
//     -> Doctor (attributes: name)
//     -> Appointment (attributes: patient object, doctor object, date)
// -> Methods:
//     -> 'Appointment.schedule(patient, doctor, date)': Creates an appointment object with the provided details.

#include<iostream>
using namespace std;

class patient {
private:
    string patient_name;
public:
    patient(string n){
        patient_name = n;
    }

    void displaypatient(){
        cout << "Patient Name : " << patient_name << endl;
    }
};

class doctor{
private:
    string doc_name;
public:
    doctor(string n){
        doc_name = n;
    }

    void displaydoctor(){
        cout << "Doctor Name : " << doc_name << endl;
    }
};

class appointment : public patient, public doctor{
private:
    int appointment_date;
public: 
    appointment(strint p_name,string d_name,int appointment_date) : doctor(d_name) ,patient(p_name){}

    void displayappointment(){
        displaypatient();
        displaydoctor();
        cout << "appointment date : " << appointment_date << endl;
    }
};

int main(){
    appointment app("shrey", "divy", 30);
    app.displayappointment();
    return 0;
}