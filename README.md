# C Programming Guide for Windows

## Introduction
This guide explains how to install a C compiler on Windows, compile, and run a C program using **GCC (MinGW-w64)**.

## Prerequisites
Before running a C program, ensure you have:
- **MinGW-w64 (GCC) installed** (or any C compiler)
- **Command Prompt (cmd) or Windows Terminal**
- **A text editor** (Notepad, VS Code, or Code::Blocks)

---

## 1. Install a C Compiler

### **Option 1: Install MinGW-w64 (Recommended)**
1. Download **MinGW-w64** from [MinGW-w64.org](https://www.mingw-w64.org/).
2. Install MinGW-w64 and select **gcc** during installation.
3. Add the `bin` directory to your system's `PATH`:
   - Open **Control Panel > System > Advanced System Settings**.
   - Click **Environment Variables**.
   - Under **System Variables**, find `Path`, click **Edit**, and add:
     ```
     C:\MinGW\bin
     ```
4. Open **Command Prompt** and verify the installation:
   ```sh
   gcc --version



Running the file
    gcc hello -o hello.c
