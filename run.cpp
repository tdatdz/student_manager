#include <iostream>   // thu vien nhap xuat du lieu
#include <fstream>    // thu vien doc ghi file
#include <vector>     // su dung vector nhu mang dong
#include <algorithm>  // dung ham sort de sap xep
#include <iomanip>    // dinh dang hien thi bang setw
#include <string>     // su dung chuoi string
#include <cstdlib>    // atoi, atof chuyen string sang so

using namespace std;

// --- KHAI BAO CAU TRUC SINH VIEN ---
struct Student {
    int id;         // ma sinh vien
    string name;    // ten sinh vien
    float score;    // diem trung binh
};

// --- HAM THEM SINH VIEN MOI ---
void addStudent(vector<Student>& list) {
    Student st;
    cout << "Nhap ma sinh vien: ";
    cin >> st.id;
    cin.ignore();
    cout << "Nhap ten sinh vien: ";
    getline(cin, st.name);
    cout << "Nhap diem: ";
    cin >> st.score;

    list.push_back(st);
    cout << "Da them sinh vien thanh cong!\n";
}

// --- HAM HIEN THI DANH SACH SINH VIEN ---
void displayStudents(const vector<Student>& list) {
    if (list.empty()) {
        cout << "Danh sach rong!\n";
        return;
    }

    cout << left << setw(10) << "ID" << setw(25) << "Ten" << setw(10) << "Diem" << endl;
    cout << string(45, '-') << endl;

    for (int i = 0; i < list.size(); i++) {
        cout << left << setw(10) << list[i].id
             << setw(25) << list[i].name
             << setw(10) << list[i].score << endl;
    }
}

// --- HAM TIM SINH VIEN THEO MA ---
void searchStudent(const vector<Student>& list) {
    int id;
    cout << "Nhap ma sinh vien can tim: ";
    cin >> id;

    bool found = false;
    for (int i = 0; i < list.size(); i++) {
        if (list[i].id == id) {
            cout << "Tim thay sinh vien: " << list[i].name
                 << " (Diem: " << list[i].score << ")\n";
            found = true;
            break;
        }
    }

    if (!found) cout << "Khong tim thay sinh vien!\n";
}

// --- HAM SO SANH DIEM DE SAP XEP ---
bool compareScore(const Student& a, const Student& b) {
    return a.score > b.score; // diem cao dung truoc
}

// --- HAM SAP XEP THEO DIEM ---
void sortStudents(vector<Student>& list) {
    sort(list.begin(), list.end(), compareScore);
    cout << "Da sap xep sinh vien theo diem giam dan.\n";
}

// --- HAM LUU DANH SACH VAO FILE ---
void saveToFile(const vector<Student>& list) {
    ofstream file("students.txt");
    if (!file) {
        cout << "Khong mo duoc file de ghi!\n";
        return;
    }

    for (int i = 0; i < list.size(); i++) {
        file << list[i].id << "," << list[i].name << "," << list[i].score << endl;
    }
    file.close();
    cout << "Da luu danh sach vao file students.txt\n";
}

// --- HAM DOC DU LIEU TU FILE ---
void loadFromFile(vector<Student>& list) {
    ifstream file("students.txt");
    if (!file) return;

    list.clear();
    string line;
    while (getline(file, line)) {
        if (line.empty()) continue;

        int p1 = line.find(',');
        int p2 = line.find_last_of(',');

        if (p1 == -1 || p2 == -1 || p2 <= p1) continue;

        Student st;
        st.id = atoi(line.substr(0, p1).c_str());
        st.name = line.substr(p1 + 1, p2 - p1 - 1);
        st.score = atof(line.substr(p2 + 1).c_str());

        list.push_back(st);
    }
    file.close();
    cout << "Da doc du lieu tu file (" << list.size() << " sinh vien).\n";
}

// --- HAM CHINH ---
int main() {
    vector<Student> list; // tao danh sach sinh vien
    loadFromFile(list);   // tu dong doc file neu co

    int choice;
    do {
        cout << "\n===== CHUONG TRINH QUAN LY SINH VIEN =====\n";
        cout << "1. Them sinh vien\n";
        cout << "2. Hien thi danh sach\n";
        cout << "3. Tim sinh vien theo ma\n";
        cout << "4. Sap xep theo diem\n";
        cout << "5. Luu vao file\n";
        cout << "0. Thoat\n";
        cout << "Chon: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(list); break;
            case 2: displayStudents(list); break;
            case 3: searchStudent(list); break;
            case 4: sortStudents(list); break;
            case 5: saveToFile(list); break;
            case 0: cout << "Tam biet!\n"; break;
            default: cout << "Lua chon khong hop le!\n";
        }
    } while (choice != 0);

    return 0;
}

