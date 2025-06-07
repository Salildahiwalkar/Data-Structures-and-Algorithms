# ✨ Pattern Printing with C++ – Striver's DSA Sheet (Patterns Section)

This repository contains my C++ implementations of **pattern printing problems** as part of my journey through the [Striver's DSA Sheet](https://takeuforward.org/interviews/strivers-sde-sheet-top-coding-interview-problems/). This section focuses on building a strong grasp of **loops, nested iterations, and logic building**, which are crucial for cracking beginner-level to intermediate-level coding interviews.

---

## 📂 File Overview

- **File**: `patterns.cpp`
- **Language**: C++
- **Concepts Covered**:
  - Stars and number-based patterns
  - Character pyramids and triangle patterns
  - Symmetric patterns using spaces and alignment
  - Mirror patterns and hollow structures

Each pattern is implemented using a **separate function** with a descriptive name, making it easy to read, test, and expand further.

---

## 📌 List of Pattern Functions

| Function Name        | Description |
|----------------------|-------------|
| `print1` to `print6` | Basic square, triangle, and number sequences |
| `print7` to `print10`| Symmetric pyramids and diamonds |
| `print11`            | Binary triangle pattern |
| `print12`            | Number pyramid with center spacing |
| `print13`            | Incrementing number triangle |
| `print14` to `print18`| Alphabet and pyramid-based character patterns |
| `print19`, `print20` | Hourglass and butterfly patterns |
| `print21`            | Hollow square border |
| `print22`            | Concentric number square |

> You can call any of these functions by passing a value of `n` to see the respective pattern.

---

## 🚀 How to Run

1. Clone the repository:
```bash
git clone https://github.com/your-username/Strivers-DSA-Sheet.git
cd Strivers-DSA-Sheet
```

2. Compile and run:
```bash
g++ patterns.cpp -o patterns
./patterns
```

3. Enter a value of `n` when prompted.

---

## 🎯 Why Pattern Problems?

Pattern problems are essential for:
- Mastering **nested loops**
- Improving **visual and spatial logic**
- Building a strong foundation in **C++ basics**


## 🎨 Pattern Collection (n = 5)

### 1. Square Pattern
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << "* ";
    }
    cout << endl;
}
```
**Output:**
```
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
```

### 2. Right Triangle Pattern
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
```
**Output:**
```
* 
* * 
* * * 
* * * * 
* * * * * 
```

### 3. Number Triangle Pattern
```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << j << " ";
    }
    cout << endl;
}
```
**Output:**
```
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
```

### 4. Repeating Row Number Pattern
```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << i << " ";
    }
    cout << endl;
}
```
**Output:**
```
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
```

### 5. Inverted Right Triangle
```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i + 1; j++) {
        cout << "* ";
    }
    cout << endl;
}
```
**Output:**
```
* * * * * 
* * * * 
* * * 
* * 
* 
```

### 6. Number Inversion
```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i + 1; j++) {
        cout << j << " ";
    }
    cout << endl;
}
```
**Output:**
```
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
```

### 7. Pyramid Pattern
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) cout << " ";
    for (int j = 0; j < 2 * i + 1; j++) cout << "*";
    cout << endl;
}
```
**Output:**
```
    *    
   ***   
  *****  
 ******* 
*********
```

### 8. Inverted Pyramid
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) cout << " ";
    for (int j = 0; j < 2 * (n - i) - 1; j++) cout << "*";
    cout << endl;
}
```
**Output:**
```
********* 
 *******  
  *****   
   ***    
    *     
```

### 9. Diamond Pattern
```cpp
print7(n);
print8(n);
```
**Output:**
```
    *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    *    
```

### 10. Double Triangle
```cpp
for (int i = 1; i <= 2 * n - 1; i++) {
    int stars = i > n ? 2 * n - i : i;
    for (int j = 0; j < stars; j++) cout << "*";
    cout << endl;
}
```
**Output:**
```
* 
** 
*** 
**** 
***** 
**** 
*** 
** 
* 
```

### 11. Binary Triangle
```cpp
for (int i = 0; i < n; i++) {
    int start = i % 2 == 0 ? 1 : 0;
    for (int j = 0; j <= i; j++) {
        cout << start << " ";
        start = 1 - start;
    }
    cout << endl;
}
```
**Output:**
```
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
```

### 12. Number Pyramid with Mirror
```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) cout << j << " ";
    for (int j = 1; j <= 2 * (n - i); j++) cout << "  ";
    for (int j = i; j >= 1; j--) cout << j << " ";
    cout << endl;
}
```
**Output:**
```
1                 1 
1 2             2 1 
1 2 3         3 2 1 
1 2 3 4     4 3 2 1 
1 2 3 4 5 5 4 3 2 1 
```

### 13. Incremental Numbers
```cpp
int num = 1;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) cout << num++ << " ";
    cout << endl;
}
```
**Output:**
```
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
```

### 14. Alphabet Triangle
```cpp
for (int i = 0; i < n; i++) {
    for (char ch = 'A'; ch <= 'A' + i; ch++) cout << ch << " ";
    cout << endl;
}
```
**Output:**
```
A 
A B 
A B C 
A B C D 
A B C D E 
```

### 15. Inverted Alphabet Triangle
```cpp
for (int i = 0; i < n; i++) {
    for (char ch = 'A'; ch < 'A' + (n - i); ch++) cout << ch << " ";
    cout << endl;
}
```
**Output:**
```
A B C D E 
A B C D 
A B C 
A B 
A 
```

### 16. Repeating Character Triangle
```cpp
for (int i = 0; i < n; i++) {
    char ch = 'A' + i;
    for (int j = 0; j <= i; j++) cout << ch << " ";
    cout << endl;
}
```
**Output:**
```
A 
B B 
C C C 
D D D D 
E E E E E 
```

### 17. Pyramid Character Pattern
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) cout << " ";
    char ch = 'A';
    int bp = (2 * i + 1) / 2;
    for (int j = 0; j < 2 * i + 1; j++) {
        cout << ch;
        if (j < bp) ch++;
        else ch--;
    }
    cout << endl;
}
```
**Output:**
```
    A    
   ABA   
  ABCBA  
 ABCDCBA 
ABCDEDCBA
```

### 18. Reverse Diagonal Characters
```cpp
for (int i = 0; i < n; i++) {
    for (char ch = 'A' + (n - i - 1); ch < 'A' + n; ch++) cout << ch << " ";
    cout << endl;
}
```
**Output:**
```
E 
D E 
C D E 
B C D E 
A B C D E 
```

### 19. Hourglass Star Pattern
```cpp
// Top half
for (int i = 0, space = 0; i < n; i++, space += 2) {
    for (int j = 1; j <= n - i; j++) cout << "*";
    for (int j = 0; j < space; j++) cout << " ";
    for (int j = 1; j <= n - i; j++) cout << "*";
    cout << endl;
}
// Bottom half
for (int i = 1, space = 2 * n - 2; i <= n; i++, space -= 2) {
    for (int j = 1; j <= i; j++) cout << "*";
    for (int j = 0; j < space; j++) cout << " ";
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
}
```
**Output:**
```
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
```

### 20. Butterfly Pattern
```cpp
for (int i = 1, space = 2 * n - 2; i <= 2 * n - 1; i++) {
    int stars = i <= n ? i : 2 * n - i;
    for (int j = 1; j <= stars; j++) cout << "* ";
    for (int j = 1; j <= space; j++) cout << "  ";
    for (int j = 1; j <= stars; j++) cout << "* ";
    cout << endl;
    space += i < n ? -2 : 2;
}
```
**Output:**
```
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
```

### 21. Hollow Square
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        if (i == 0 || i == n - 1 || j == 0 || j == n - 1) cout << "*";
        else cout << " ";
    }
    cout << endl;
}
```
**Output:**
```
*****
*   *
*   *
*   *
*****
```

### 22. Concentric Number Square
```cpp
for (int i = 0; i < 2 * n - 1; i++) {
    for (int j = 0; j < 2 * n - 1; j++) {
        int min_dist = min(min(i, j), min(2 * n - 2 - i, 2 * n - 2 - j));
        cout << n - min_dist;
    }
    cout << endl;
}
```
**Output:**
```
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
```

---

## 🙌 Credits

- Problems inspired by **Striver's DSA Sheet**
- Created during self-practice sessions
