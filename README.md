# 📖 Readability Analyzer

![C](https://img.shields.io/badge/Language-C-blue.svg)
![CS50](https://img.shields.io/badge/CS50-Week%202-orange.svg)

A beautiful **C program** that analyzes any English text and tells you the **U.S. school grade level** required to understand it.

## ✨ Overview

This program uses the **Coleman-Liau Index** to calculate the readability of a given text and outputs the approximate grade level (from Before Grade 1 to Grade 16+).

Perfect for writers, educators, or anyone curious about how difficult their writing is!

## 🎯 Features

- ✅ Accurate counting of **letters**, **words**, and **sentences**
- ✅ Implements the famous Coleman-Liau readability formula
- ✅ Clean and user-friendly terminal output
- ✅ Handles punctuation, spaces, and complex sentences properly
- ✅ Clear grade level display:
  - "Before Grade 1"
  - "Grade X" (for grades 1–16)
  - "Grade 16+" (college level)

## 🚀 Quick Start

```bash
# Clone the repository
git clone https://github.com/kabincs9/readability.git
cd readability

# Compile
make

# Run the program
./readability
