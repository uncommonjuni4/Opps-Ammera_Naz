//Task 4 — Friend Class + Constructors + Objects
//Medium–Hard
// 10 Marks
//
//Scenario: University Student Result System
//Ab teeno concepts ko combine karna hai.
//
//Student aur ResultManager naam ki 2 classes banao.
//
//Requirements:
//1. Student class ke private variables:
//   - name — string
//   - rollNo — int
//   - marks — int
//2. Default constructor banao jo "Unknown", 0, 0 set kare.
//3. Parameterized constructor banao jo values arguments se set kare.
//4. ResultManager ko friend class declare karo.
//5. ResultManager mein showResult(Student &s) function banao.
//6. Friend class private data display kare aur grade calculate kare:
//   - 80 or above ? A
//   - 60–79 ? B
//   - Below 60 ? C
//7. main() mein 3 students banao:
//   - s1 — default constructor
//   - s2 — "Ali", 101, 85
//   - s3 — "Ahmed", 102, 72
//8. Manager ke object se teeno students ka result display karo.
//Expected Output
//===== STUDENT RESULT =====
//Name: Unknown
//Roll No: 0
//Marks: 0
//Grade: C
//
//===== STUDENT RESULT =====
//Name: Ali
//Roll No: 101
//Marks: 85
//Grade: A
//
//===== STUDENT RESULT =====
//Name: Ahmed
//Roll No: 102
//Marks: 72
//Grade: B
