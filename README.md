<h1 align="center">🎓 Student Management System (C++)</h1>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-Project-blue?logo=c%2B%2B&logoColor=white" alt="C++ Project">
  <img src="https://img.shields.io/badge/Status-Completed-brightgreen" alt="Status">
  <img src="https://img.shields.io/badge/Level-Beginner-yellow" alt="Level">
</p>

<p align="center">
  Dự án đầu tiên của sinh viên năm nhất ngành <b>Trí tuệ Nhân tạo Ứng dụng</b> 🎯  
  Thực hành kỹ năng lập trình C++ cơ bản, làm việc với file và cấu trúc dữ liệu.
</p>

---

## 🚀 Tính năng
- ➕ Thêm sinh viên mới (mã, tên, điểm)
- 📋 Hiển thị danh sách sinh viên dạng bảng
- 🔍 Tìm kiếm sinh viên theo mã
- 🔢 Sắp xếp danh sách theo điểm giảm dần
- 💾 Lưu danh sách vào file `students.txt`
- 📂 Tự động đọc lại dữ liệu khi mở chương trình

---

## 🧠 Kỹ năng áp dụng
- Biến, mảng, cấu trúc `struct`
- Vòng lặp `for`, `while`, `do-while`
- Vector `std::vector` để lưu danh sách
- Làm việc với file (`ifstream`, `ofstream`)
- Hàm `sort()` trong thư viện `<algorithm>`
- Quản lý dữ liệu cơ bản trong chương trình C++

---

## 🧩 Cấu trúc thư mục
📦 student-management-cpp
┣ 📜 student_manager.cpp → Mã nguồn chính
┣ 📜 students.txt → File lưu danh sách sinh viên
┗ 📘 README.md → Mô tả dự án
---

## 💻 Cách chạy chương trình

### 🧩 Cách 1: Dùng Code::Blocks hoặc Dev-C++
1. Mở IDE → New → Console Application → C++
2. Copy toàn bộ nội dung file `student_manager.cpp`
3. Nhấn **F9** để biên dịch và chạy.

### ⚙️ Cách 2: Dùng terminal (Windows / Linux / macOS)
```bash
g++ student_manager.cpp -o student
./student     # hoặc student.exe trên Windows
===== CHUONG TRINH QUAN LY SINH VIEN =====
1. Them sinh vien
2. Hien thi danh sach
3. Tim sinh vien theo ma
4. Sap xep theo diem
5. Luu vao file
0. Thoat
Chon: 1
Nhap ma sinh vien: 25004930
Nhap ten sinh vien: Nguyen Thanh Dat
Nhap diem: 10
Da them sinh vien thanh cong!
| Thông tin                  | Mô tả                                                                                        |
| -------------------------- | -------------------------------------------------------------------------------------------- |
| 👤 **Tên**                 | Đạt Thành                                                                                    |
| 🎓 **Ngành học**           | Trí tuệ Nhân tạo Ứng dụng                                                                    |
| 🏫 **Năm học**             | Sinh viên năm nhất                                                                           |
| 📅 **Thời gian thực hiện** | Tháng 10/2025                                                                                |
| 🌐 **GitHub**              | [github.com/tdatdz](https://github.com/tdatdz) *(thay link bằng GitHub của bạn)* |

