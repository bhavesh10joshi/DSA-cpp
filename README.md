# My DSA Learning Journey

A personal repository to track my daily DSA learning journey in C++. Covers core concepts, problem-solving techniques, and coding practice — from basic data structures to advanced algorithms. A step-by-step record of my progress towards mastering competitive programming and logic building.

## Topics Covered

| Topic | Description | Status |
| :--- | :--- | :--- |
| Arrays | Basic array manipulation, searching, and sorting | In Progress |
| Strings | String manipulation, pattern matching | Pending |
| Linked Lists | Singly, doubly, and circular linked lists | Pending |
| Stacks & Queues | LIFO and FIFO data structures | Pending |
| Trees | Binary Trees, BSTs, Traversals | Pending |
| Graphs | BFS, DFS, Shortest Path | Pending |
| Dynamic Programming | Memoization, Tabulation | Pending |
| Greedy Algorithms | Local optimal choices | Pending |

*(Feel free to update the status and add new topics as you progress!)*

## Weekend Revision: LeetCode Problems

Here is a list of important LeetCode questions that I need to revise every weekend to keep the concepts fresh.

| Problem Name | Link | Difficulty | Notes |
| :--- | :--- | :--- | :--- |
| Two Sum | [Link](https://leetcode.com/problems/two-sum/) | <span style="color: green; font-weight: bold;">Easy</span> | Use hash map for O(n) time complexity. |
| Best Time to Buy and Sell Stock | [Link](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | <span style="color: green; font-weight: bold;">Easy</span> | Track min price seen so far. |
| 3Sum | [Link](https://leetcode.com/problems/3sum/) | <span style="color: orange; font-weight: bold;">Medium</span> | Sort array first, use two pointers to avoid duplicates. |
| Longest Substring Without Repeating Characters | [Link](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | <span style="color: orange; font-weight: bold;">Medium</span> | Use sliding window with a hash set. |
| Merge k Sorted Lists | [Link](https://leetcode.com/problems/merge-k-sorted-lists/) | <span style="color: red; font-weight: bold;">Hard</span> | Can use a min-heap (priority queue) or divide and conquer. |

*(Add more tricky problems here to your weekly revision list!)*

## How to Run These Solutions

To run these C++ solutions on your local machine, you will need a C++ compiler installed (like GCC for Linux/MinGW for Windows, or Clang for macOS).

### 1. Install a C++ Compiler
- **Windows:** Install [MinGW-w64](https://www.msys2.org/) (via MSYS2) or use Microsoft Visual Studio C++ build tools.
- **macOS:** Open Terminal and run `xcode-select --install` to install Clang.
- **Linux:** Open terminal and run `sudo apt install build-essential`.

### 2. Compile the Code
Open your terminal or command prompt, navigate to the folder containing your `.cpp` file, and run:

```bash
g++ filename.cpp -o outputname
```
*Note: Replace `filename.cpp` with the name of your C++ file, and `outputname` with whatever you want the compiled program to be called.*

### 3. Run the Executable
After compiling successfully, run the generated executable:

- **Windows:**
  ```cmd
  .\outputname.exe
  ```
- **macOS / Linux:**
  ```bash
  ./outputname
  ```
