# C Journey

> *Learning C to understand how software is built, executed, and ultimately attacked.*
![baner](https://miro.medium.com/1*2p6xGs1MCtjM7Giw5gmkpQ.jpeg)

## About

This repository documents my journey of learning the C programming language from the ground up.

The goal isn't simply to become proficient in C. My long-term focus is low-level cybersecurity, including exploit development, reverse engineering, operating system internals, and malware research in authorized security contexts. C is the bridge between high-level programming and the machine, and understanding that bridge is the purpose of this repository.

Rather than memorizing syntax, I aim to understand what actually happens under the hood.

Questions that drive this repository include:

- How does a variable exist in memory?
- What happens after the compiler sees a line of C?
- How does the linker produce an executable?
- How does the operating system load and execute that executable?
- Why do pointers work the way they do?
- How do compiler decisions affect the generated machine code?

If a concept can be traced from source code to CPU execution, I want to understand that complete path.

# Learning Philosophy

I don't study isolated topics.

I build connected mental models.

Whenever I learn a new concept, I try to relate it to:

- Compiler behavior
- Memory layout
- Process execution
- ELF binaries
- Linux internals
- CPU execution
- Assembly output
- Debugger observations

For me, writing working code is only one milestone. Understanding *why* it works is the real objective.





---

# Learning Workflow

```text
Learn a concept
        ↓
Understand the implementation
        ↓
Write code
        ↓
Compile
        ↓
Inspect the assembly
        ↓
Observe execution with GDB
        ↓
Connect it with operating system behavior
        ↓
Document the findings
```

---

# Progress
>the asterisks represents the completed topics
- [*] C Fundamentals
- [*] Operators
- [*] Control Flow
- [ ] Functions
- [ ] Arrays
- [ ] Pointers
- [ ] Memory Management
- [ ] Structures
- [ ] File Handling
- [ ] Dynamic Memory
- [ ] Bit Manipulation
- [ ] Linux System Programming
- [ ] Process Memory
- [ ] Socket Programming
- [ ] Multi-threading
- [ ] Low-level Projects

---

# Tools Used

- Arch Linux
- GCC
- GDB
- Git
- GitHub
- Make
- Vim / Nano

---

# Long-Term Goal

Build a strong foundation in systems programming that supports advanced work in:

- Operating System Internals
- Reverse Engineering
- Binary Analysis
- Exploit Development
- Malware Research (authorized security research)
- Offensive Security

---

## Why this repository exists

This repository is more than a collection of C programs.

It is a chronological record of my growth as a systems-oriented security researcher. Every commit represents another concept understood, another abstraction broken down, and another step toward understanding how software behaves beneath the source code.

I'm documenting the journey not only to track my own progress but also to demonstrate consistency, curiosity, and a genuine interest in understanding computers from first principles.

---

> **"Don't just learn how to write code. Learn how the machine understands it."**
