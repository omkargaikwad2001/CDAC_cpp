class Employee {
private:
    int employee_id;
    char* employee_name;
    float salary;

public:
    // Default constructor
    Employee();

    // Parameterized constructor
    Employee(int id, const char* name, float sal);

    // Destructor
    ~Employee();

    // Accept data from console
    void accept();

    // Display data
    void display() const;
};