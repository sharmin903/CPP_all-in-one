class Student {
public:
    int roll;
    void display();   // just declared here
};

// defined outside using scope resolution operator ::
void Student::display() {
    cout << "Roll: " << roll << endl;
}
//its function defination out of class 



