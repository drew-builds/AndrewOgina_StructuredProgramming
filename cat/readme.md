
---
# 📘 README (Explanation + Resources)

## 📌 Project: Student Grade & Ranking System (C)

### ✅ What the program does

This program:

1. Takes student data (Registration number, Name, Marks).
2. Calculates each student’s grade.
3. Sorts students from highest to lowest marks.
4. Prints the full list.
5. Displays the **Top Student**.

---

## 🧠 Key Concepts Used

### 1. **Struct**

A `struct` groups related data together.

```c
typedef struct Student {
    char RegNo[99];
    char Name[99];
    int Marks;
} Student;
```

### 2. **Function to calculate grade**

This function checks the marks and returns the grade.

```c
char get_Grade(Student *student)
```

### 3. **Sorting**

The program uses `qsort()` to sort the students by marks.

---

## ⚠️ Note

* The program uses `scanf("%s", ...)` which **stops reading input at spaces**.
  So names like **"John Doe"** will not work.
---

## 📚 Resources to Learn More

### 🔹 C Language Basics

* [Learn C - TutorialsPoint](https://www.tutorialspoint.com/cprogramming/index.htm)
* [C Programming - GeeksforGeeks](https://www.geeksforgeeks.org/c-programming-language/)

### 🔹 Data Structures (Structs, Arrays)

* [C Structs - Programiz](https://www.programiz.com/c-programming/c-structures)
* [Arrays in C - W3Schools](https://www.w3schools.com/c/c_arrays.asp)

### 🔹 Sorting in C

* [qsort in C - GeeksforGeeks](https://www.geeksforgeeks.org/qsort-in-c-standard-library/)

---


Just tell me what you want next.
