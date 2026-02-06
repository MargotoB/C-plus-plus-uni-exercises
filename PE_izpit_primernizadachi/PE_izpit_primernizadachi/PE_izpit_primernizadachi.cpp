#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//zad 1
/*/class Temperature {
protected:
    double Ftemperature;
public:
    Temperature(double t) : Ftemperature(t) {}

    virtual void setFTemp(double t) { Ftemperature = t; }
    virtual double getFTemp() const { return Ftemperature; }
   
    virtual double predifine() const = 0;

    virtual ~Temperature() { cout << "Destructing object!" << endl; }
};

class Celsius : public Temperature {
public:
    Celsius(double t) : Temperature(t) { }
    
    virtual double predifine() const override {
        return (5.0 / 9.0) * (Ftemperature - 32.0);
    }
};

int main()
{
    Temperature* t = new Celsius(0);

    double f;
    cout << "Enter the value in Farenheit: ";
    cin >> f;

    t->setFTemp(f);

    cout << "The tempersture in Celsium: " << t->predifine() << endl;

    delete t;

    return 0;
}*/



//zad 2

/*/class Point {
protected:
    int x;
    int y; 
    char name;
public:
    Point() {
        cout << "Enter the coord of point: ";
        cin >> x >> y;
        cout << "Enter the name: ";
        cin >> name;
    }
    int getX() const { return x; }
    int getY() const { return y; }
    char getName() const { return name; }
};


class Circle{
protected:
    Point p;
    int radius;
public: 
    Circle() {
        cout << "Enter the radius: ";
        cin >> radius;
    }
    int getRadius() const { return radius; }

    void print() {
        cout << "The coordinates of the circle is: " << p.getX() << " and " << p.getY() << endl;
        cout << "The name is: " << p.getName() << endl;
        cout << "The radius is: " << getRadius() << endl;
    }
};

int main() {

    Circle circle[5];

    cout << "Print circles with radius > 10" << endl;

    for (int i = 0; i < 5; i++) {
        if (circle[i].getRadius() > 10) {
            circle[i].print();
        }
    }
    return 0;
}*/


//zad 3
/*/class MPS {
protected:
    char brand;
    int year;
public:
    MPS(char b, int y) {
        brand = b;
        year = y;
    }
    char getBrand() const { return brand; }
    int getYear() const { return year; }
    virtual void print() const{
        cout << "The brand is: " << getBrand() << endl;
        cout << "The year is: " << getYear() << endl;
    }
};

class Car : public MPS {
protected: 
    int registryNum;
public:
    Car(int rn, char b, int y) : MPS(b, y){
        registryNum = rn;
    }
    int getRegistryNum() const { return registryNum; }
    virtual void print() const override {
        MPS::print();
        cout << "The registry number is: " << getRegistryNum() << endl;
    }
};

class RentACar : public Car {
protected:
    double price;
public:
    RentACar(double p, int rn, char b, int y) : Car(rn, b, y) {
        price = p;
    }
    double getPrice() const { return price; }
    virtual void print() const override {
        Car::print();
        cout << "The price is: " << getPrice() << endl;
    }
};

int main() {
    MPS m ('F', 2013);
    m.print();
    Car c(4606, 'F', 2013);
    c.print();
    RentACar rnc(78.50, 4606, 'F', 2013);
    rnc.print();

    return 0;
}*/

//zad 4
/*/class Data {
protected:
    int day;
    int month;
    int year;
public:
    Data(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    Data(const Data& other) {
        day = other.day;
        month = other.month;
        year = other.year;
    }

    void print() const {
        cout << day << "." << month << "." << year;
    }
};

class Patient{
protected:
    string name;
    string EGN;
    string complain;
    Data examDate;
public:
    Patient(string n, string e, string c, Data d):examDate(d){
        name = n;
        EGN = e;
        complain = c;
    }

    string getComplain() const { return complain; }

    void print() const {
        cout << "Name: " << name << endl;
        cout << "EGN: " << EGN << endl;
        cout << "Complain: " << complain << endl;
        cout << "Exam date: ";
        examDate.print();
        cout << endl;
        cout << "--------------------------";
        cout << endl;
    }
};

int main() {
    Patient patients[3] = {
        Patient("Magi", "0452033452", "headache", Data(3,12,2025)),
        Patient("Krasi", "0541093427", "headache", Data(9,1,2024)),
        Patient("Vecna", "5637489624", "toothache", Data(23, 5, 1995))
    };

    string searchComplain;
    cout << "Enter a complain for search: ";
    getline(cin, searchComplain);

    cout << "\nPatients with complain: " << searchComplain << endl;

    bool found = false;
    for (int i = 0; i < 3; i++) {
        if (patients[i].getComplain() == searchComplain) {
            patients[i].print();
            found = true;
        }
    }

    if (!found) {
        cout << "There are no patients with this complain!";
    }
    return 0;
}*/


//zad 5
/*/class Square {
protected:
    double radius;
public:
    Square(double r) { radius = r; }
    double getRadius() const { return radius; }
    void setRadius(double r) { radius = r; }

    virtual double Calc() const = 0;

    virtual ~Square() {}
};

class Circle : public Square {
public:
    Circle(double r) : Square(r) {}
    double Calc() const override {
        return 3.14159 * getRadius() * getRadius();
    }
};

int main() {
    Circle c1(0), c2(0);
    double r1, r2;
    cout << "Enter the radius for circle 1: ";
    cin >> r1;
    cout << "Enter the radius for circle 2: ";
    cin >> r2;

    c1.setRadius(r1);
    c2.setRadius(r2);

    double area1 = c1.Calc();
    double area2 = c2.Calc();

    cout << "\nArea of circle 1: " << area1 << endl;
    cout << "\nArea of circle 2: " << area2 << endl;

    cout << "\nCircle with larger radius has radius: "
        << (c1.getRadius() > c2.getRadius() ? c1.getRadius() : c2.getRadius())
        << endl;
    return 0;
}*/

//zad 6
/*/class People {
protected:
    string name;
    string EGN;
public:
    People(string n, string e) {
        name = n;
        EGN = e;
    }
    string getName() const { return name; }
    string getEgn() const { return EGN; }
};

class Student : public People {
protected:
    string faclutaty;
    double avgGarde;
public:
    Student(string f, double gr, string n, string e) : People(n, e) {
        faclutaty = f;
        avgGarde = gr;
    }
    string getFaclutaty() const { return faclutaty; }
    double getAvgGrade() const { return avgGarde; }
};

class PStudent : public Student {
public:
    PStudent(string f, double gr, string n, string e) : Student(f, gr, n, e) { }

    void receiveAward(){
        bool award = false;
        if (getAvgGrade() >= 4.5) {
            award = true;
            cout << "The student is receiving award!\n";
        }
        else {
            cout << "The student is not receiving award!\n";
        }
    }
};

int main() {
    PStudent ps("121223007", 4.45, "Margarita", "0452033452");
    ps.receiveAward();

    return 0;
}*/

//zad 7
/*/class Reader {
protected:
    string name;
    int number;
public: 
    Reader(string n, int num) {
        name = n;
        number = num;
    }
    string getName() const { return name; }
    int getNum() const { return number; }
};

class Library : public Reader {
protected:
    string bookName;
    string status;
public:
    Library(string bn, string s, string n, int num) : Reader(n, num) {
        bookName = bn;
        status = s;
    }
    string getBookName() const { return bookName; }
    string getStatus() const { return status; }

    void takeBook() {
        if (status == "Free") {
            status = "Taken";
        }
    }

    void checkBook() {
        string checkBookName;
        cout << "Enter the book name to check: ";
        cin >> checkBookName;
        if (bookName == checkBookName) {
            cout << "The book is: " << status << endl;
        }
        else {
            cout << "We don't have book with this name!" << endl;
        }
    }
    void print() {
        cout << "The name of the book is: " << bookName << endl;
        cout << "The status of the book is: " << status << endl;
        cout << "The name of the reader is: " << getName() << endl;
        cout << "The number of the reader is: " << getNum() << endl;
        cout << "------------------------------" << endl;
    }
};

int main() {

    Library l1[3] = {
        Library("Harry Potter", "Free", "Margarita", 3),
        Library("Pod igoto", "Taken", "Krasimir", 9),
        Library("Barbie", "Free", "Lady", 6)
    };

    for (int i = 0; i < 3; i++) {
        if (l1[i].getStatus() == "Free") {
            l1[i].print();
        }
    }

    for (int i = 0; i < 3; i++) {
        l1[i].takeBook();
        l1[i].checkBook();
    }
    return 0;
}*/

//zad 8
/*/class Data {
protected:
    int day;
    int month;
    int year;
public:
    Data(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    Data(const Data& other) {
        day = other.day;
        month = other.month;
        year = other.year;
    }

    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }

    friend ostream& operator<<(ostream& os, const Data& dt) {
        os << dt.day << "." << dt.month << "." << dt.year;
        return os;
    }
};

class Patient {
protected:
    string EGN;
    string name;
    string complaint;
    Data patView;
    string pill[5];
    int pillCount;
public: 
    Patient(string egn, string n, string c, Data PV, string p[], int count) : patView(PV) {
        EGN = egn;
        name = n;
        complaint = c;
        patView = PV;
        pillCount = (count > 5) ? 5 : count;
        for (int i = 0; i < pillCount; i++) {
            pill[i] = p[i];
        }
    }

    string getComplaint() const { return complaint; }

    friend ostream& operator<<(ostream& os, const Patient& p) {
        os << "Patient: " << p.name << " (" << p.EGN << ")\n";
        os << "Complaint: " << p.complaint << "\n";
        os << "Visit date: " << p.patView << "\n";
        os << "Medicines: ";
        for (int i = 0; i < p.pillCount; i++) {
            os << p.pill[i];
            if (i != p.pillCount - 1)
                os << ", ";
        }
        os << "\n-------------------------\n";
        return os;
    }
};


int main() {

    string pill1[] = { "Paracetamol", "VitaminC" };
    string pill2[] = { "Ibuprofen" };
    string pill3[] = { "Paracetamol", "CoughSyrup" };

    Patient patients[3] = {
        Patient ("1234567890", "Ivan", "headache", Data(3,12,2025), pill1, 2),
        Patient ("0987654321", "Maria", "headache", Data(9,1,2024), pill2, 1),
        Patient ("1122334455", "Gosho", "toothache", Data(23,5,1995), pill3, 2)
    };

    string searchComplaint;
    cout << "Enter complaint to search for: ";
    cin >> searchComplaint;

    cout << "\nPatients with complaint: " << searchComplaint << "\n\n";

    bool found = false;
    for (int i = 0; i < 3; i++) {
        if (patients[i].getComplaint() == searchComplaint) {
            cout << patients[i];  // използва се предефиниран operator<<
            found = true;
        }
    }

    if (!found)
        cout << "No patients with this complaint found!\n";

    return 0;
}*/







//****************************************
//*zad 1
/*/class Student {
protected:
    string name;
    string fNumber;
    int gNumber;
    int course;
public:
    Student() {
        cout << "\nEnter the name of the student: ";
        getline(cin, name);
        cout << "\nEnter the faculty number of the student: ";
        getline(cin, fNumber);
        cout << "\nEnter the group number of the student: ";
        cin >> gNumber;
        cout << "\nEnter the course of the student: ";
        cin >> course;
        cin.ignore();
    }

    virtual void print()const {
        cout << "The whole student info is:\n";
        cout << "Name: " << name << endl;
        cout << "Fnumber: " << fNumber << endl;
        cout << "Gnumber: " << gNumber << endl;
        cout << "Course: " << course << endl;
    }
};

class Grades : public Student {
protected:
    double* grades;
    int numGrades;
public:
    Grades() {
        numGrades = course * 2 * 5;
        grades = new double[numGrades];
        for (int i = 0; i < numGrades; i++) {
            cout << "Grade " << i + 1 << " : ";
            cin >> grades[i];
        }
        cin.ignore();
    }

    double avg() {
        double sum = 0.0;
        for (int i = 0; i < numGrades; i++) {
            sum += grades[i];
        }
        return sum / numGrades;
    }

    void print()const override {
        cout << "The whole student info is:\n";
        cout << "Name: " << name << endl;
        cout << "Fnumber: " << fNumber << endl;
        cout << "Gnumber: " << gNumber << endl;
        cout << "Course: " << course << endl;
        cout << "NumGrades: " << numGrades << endl;
    }

    void fNumberFunction() {
        string searchFnum;
        cout << "Enter the Fnumber you want to search: ";
        getline(cin, searchFnum);
        if (searchFnum == fNumber) {
            print();
        }
        cin.ignore();
    }

    ~Grades() { delete[] grades; }


};

int main()
{
    int n;
    cout << "Number of students: ";
    cin >> n;
    cin.ignore();

    Grades* students = new Grades[n];

    double avg;
    for (int i = 0; i < n; i++) {
        students[i].print();
        avg = students[i].avg();
        cout << "The avg of the student is: " << avg << endl;
    }


    double maxAvg = 0;
    for (int i = 0; i < n; i++)
        if (students[i].avg() > maxAvg)
            maxAvg = students[i].avg();

    cout << "\nMax average in the group: " << maxAvg << endl;

    for (int i = 0; i < n; i++) {
        students[i].fNumberFunction();
    }

    delete[] students;

    return 0;
}*/


//zad2
/*/class Electronics {
protected:
    int number;
    string name;
    int value;
    string measure;
public:
    Electronics(int num, string n, int v, string m ) {
        number = num;
        name = n;
        value = v;
        measure = m;
    }

    ~Electronics() {
        cout << "The object is destroyed!\n";
    }

    virtual void print() const {
        cout << "The number is: " << number << endl;
        cout << "The name is: " << name << endl;
        cout << "The value is: " << value << endl;
        cout << "The measure is: " << measure << endl;
    }
};

class Device : public Electronics{
protected:
    string country;
    double price;
public:
    Device(string c, double p, int num, string n, int v, string m) : Electronics(num, n,v,m) {
        country = c;
        price = p;
    }

    ~Device() {
        cout << "The object is destroyed!\n";
    }

    void print() const override {
        cout << "The country is: " << country << endl;
        cout << "The price is: " << price << endl;

    }
};*/


//popravitelna sesiq - zad 1
/*/class Book {
private:
    string bookName;
    string author;
    string date;
public:
    Book() = default;
    Book(string bn, string a, string d) {
        bookName = bn;
        author = a;
        date = d;
    }
    string getBookName() const { return bookName; }
    string getAuthor() const { return author; }
    string getDate() const { return date; }

    friend ostream& operator << (ostream& out, const Book& b) {
        out<< "Book name: " << b.bookName
            << ", Author: " << b.author
            << ", Get date: " << b.date;
        return out;
    }
};

class Library {
private:
    int bookNum;
    Book* books;
public:
    Library(int n) {
        bookNum = n;
        books = new Book[bookNum];
    }

    ~Library() {
        delete[] books;
    }

    Book& operator[](int index) {
        return books[index];
    }

    int getBookNum() const { return bookNum; }

    friend ostream& operator<<(ostream& out, const Library& lib) {
        for (int i = 0; i < lib.bookNum; i++) {
            out << lib.books[i] << endl;
        }
        return out;
    }
};

int main() {
    Library library(3);

    library[0] = Book("War and piece", "Lev Tolstoi", "12.03.2024");
    library[1] = Book("Pod igoto", "Ivan Vazov", "12.03.2024");
    library[2] = Book("Hobit", "Tolkin", "01.02.2024");


    cout << "Enter date to search: ";
    string searchDate;
    getline(cin, searchDate);

    cout << "Search books: " << searchDate << "\n\n";

    bool found = false;
    for (int i = 0; i < library.getBookNum(); i++) {
        if (library[i].getDate() == searchDate) {
            cout << library[i].getBookName() << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "There are no books for searched data!\n";
    }

    return 0;
}*/


//popravitelna sesiq - zad 2
/*/class Bank {
protected: 
    string name;
    double balance;
    double percent;
    int months;
public:
    Bank(string n, double b, double p, int m) {
        name = n;
        balance = b;
        percent = p;
        months = m;
    }
    string getName() const { return name; }
    double getBalance() const { return balance; }
    double getPercent() const { return percent; }

    virtual void deposit() {
        cout << "You can't deposit money in this account!" << endl;
    }

    virtual void withdraw() {
        cout << "You can't withdraw money in this account!" << endl;
    }

    virtual double sizeOfCredit() const {
        return months * percent;
    }
    virtual ~Bank() {}
};

class DepositAccount : public Bank {
public:
    DepositAccount(string n, double b, double p, int m): Bank(n,b,p,m){}


    void deposit() override{
        cout << "You can't deposit money in this account!" << endl;
    }
    void withdraw() override {
        cout << "You can't withdraw money in this account!" << endl;
    }
    double sizeOfCredit() const override {
        return months * percent;
    }
};

class CreditAccount : public Bank {
public:
    CreditAccount(string n, double b, double p, int m) : Bank(n, b, p, m) {}

    void deposit() override {
        cout << "You can deposit money in this account!" << endl;
        double depositMoney;
        cout << "Enter the money you want to deposit: ";
        cin >> depositMoney;
        balance += depositMoney;
        cout << "The current balance is: " << balance << endl;
    }
    void withdraw() override {
        cout << "You can't withdraw money in this account!" << endl;
    }
    double sizeOfCredit() const override {
        return months * percent;
    }
};

int main() {

    Bank* accounts[3];
    accounts[0] = new DepositAccount("Ivan Ivanov", 5000, 2.5, 12);
    accounts[1] = new CreditAccount("Petar Petrov", 2000, 4.2, 6);
    accounts[2] = new DepositAccount("Maria Georgieva", 8000, 3.1, 10);

    accounts[1]->deposit();

    int indexMax = 0;
    double maxxAcc = accounts[0]->getPercent();
    for (int i = 1; i < 3; i++) {
        if (accounts[i]->getPercent() > maxxAcc) {
            maxxAcc = accounts[i]->getPercent();
            indexMax = i;
        }
    }
    cout << "The bank account with the biggest percent is: " 
        << accounts[indexMax]->getName()
        << " with percent: " << maxxAcc << endl;


    for (int i = 0; i < 3; i++) {
        delete accounts[i];
    }

    return 0;
}*/


class Data {
protected:
    int day;
    int month;
    int year;
public:
    Data(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    Data(const Data& other) {
        day = other.day;
        month = other.month;
        year = other.year;
    }
    friend ostream& operator<<(ostream& out, const Data& d){
        out << "Data: " << d.day << "." << d.month << "." << d.year << endl;
        return out;
    }
};

class Patient {
protected: 
    string EGN;
    string name;
    string complaint;
    Data data;
    string medicines[5];
    int medNum;
public:
    Patient(string egn, string n, string c, Data dt, string med[], int MN) : data(dt) {
        EGN = egn;
        name = n;
        complaint = c;
        data = dt;
        medNum = (MN > 5) ? 5 : MN;
        for (int i = 0; i < medNum; i++) {
            medicines[i] = med[i];
        }
    }
    string getComplaint() const { return complaint; }
    friend ostream& operator<<(ostream& out, const Patient& p) {
        out << "EGN: " << p.EGN << endl;
        out << "Name: " << p.name << endl;
        out << "Complaint: " << p.complaint << endl;
        out << "Data: " << p.data << endl;
        out << "Medicines: ";
        for (int i = 0; i < p.medNum;i++) {
            out << p.medicines[i];
            if (i != p.medNum - 1) {
                out << ", ";
            }
        }
        out << "---------------------------------";
        return out;
    }
};

int main() {
    string medicines1[] = { "Paracetamol", "Vitamin C" };
    string medicines2[] = { "Nurofen" };
    string medicines3[] = {"Teraflu", "Strepsils"};


    Patient patients[3] = {
        Patient("0452033452", "Margarita", "headache", Data(3,12,2009), medicines2,1),
        Patient("0563787902", "Krasi", "headache", Data(9,6,2015), medicines3, 2),
        Patient("0359728567", "Petko", "tootache", Data(14,1,2025), medicines1,2)
    };

    string compareComplain;
    cout << "Enter the complaint to search: ";
    getline(cin, compareComplain);

    cout << "\nPateints with complain: " << compareComplain << "are: " << endl;
    bool flag = false;
    for (int i = 0; i < 3; i++) {
        if (compareComplain == patients[i].getComplaint()) {
            cout << patients[i];
            flag = true;
        }

    }
    if (!flag) {
        cout << "There aren't patients with this complain!";
    }
    return 0;
}
