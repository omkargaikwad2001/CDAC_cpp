class MyString {

private:
    int length;
    char* str;

public:
    // Constructors & Destructor
    MyString();                        // Default constructor
    MyString(const char* s);           // Parameterized constructor
    MyString(const MyString& other);   // Copy constructor
    ~MyString();                       // Destructor

    
    void display() const;
};
