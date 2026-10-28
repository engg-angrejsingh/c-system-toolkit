# 🛠️ C System Toolkit

<p align="center">
  A collection of useful command-line utilities built with C.
  <br>
  Lightweight, beginner-friendly, and open to contributions.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c" alt="Language C">
  <img src="https://img.shields.io/badge/Platform-Linux-orange?style=for-the-badge&logo=linux" alt="Platform Linux">
  <img src="https://img.shields.io/badge/Contributions-Welcome-brightgreen?style=for-the-badge" alt="Contributions Welcome">
  <img src="https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge" alt="MIT License">
</p>

## 📌 About

**C System Toolkit** is an open-source project that provides practical command-line utilities written in C.

The goal is to build a lightweight toolkit for everyday tasks while helping developers learn C programming, file handling, debugging, testing, and open-source collaboration.

This project is under active development. Contributions, bug reports, feature requests, and documentation improvements are welcome.

## ✨ Features

- 🖥️ Simple command-line interface
- 📄 Count lines in a text file
- ℹ️ Display toolkit information
- ❓ Built-in help menu
- ⚠️ Basic error handling
- 🧩 Modular structure for future utilities
- 🤝 Beginner-friendly contribution opportunities

## 📂 Project Structure

```text
c-system-toolkit/
├── src/
│   └── main.c
├── include/
├── tests/
├── docs/
├── README.md
├── LICENSE
└── .gitignore
```

## ⚙️ Requirements

- Linux operating system
- GCC compiler
- Git

Install the required tools on Ubuntu or Debian:

```bash
sudo apt update
sudo apt install build-essential git
```

## 🚀 Installation

**1. Clone the repository**

```bash
git clone https://github.com/engg-angrejsingh/c-system-toolkit.git
```

**2. Enter the project directory**

```bash
cd c-system-toolkit
```

**3. Compile the program**

```bash
gcc -Wall -Wextra -std=c11 src/main.c -o toolkit
```

**4. Run the toolkit**

```bash
./toolkit help
```

## 💻 Usage

### Display the help menu

```bash
./toolkit help
```

### Display toolkit information

```bash
./toolkit info
```

### Count lines in a file

```bash
./toolkit count README.md
```

Example output:

```text
Lines: 45
```

The actual line count depends on the contents of the file.

## 🗺️ Roadmap

Planned features:

- [ ] File information and size reporting
- [ ] Directory listing utility
- [ ] Search for text inside files
- [ ] Safe file-copy utility
- [ ] File extension detection
- [ ] Linux system information
- [ ] Unit tests
- [ ] GitHub Actions build and test workflow
- [ ] Cross-platform support where practical

Have another useful idea? Open an issue to discuss it.

## 🤝 Contributing

Contributions are welcome! You can help by adding features, fixing bugs, improving documentation, or writing tests.

### How to contribute

1. Fork this repository.
2. Create a new branch.
3. Make your changes.
4. Compile and test your code.
5. Commit your changes.
6. Push your branch to your fork.
7. Open a pull request with a clear explanation.

Example:

```bash
git checkout -b feature/file-info
git add .
git commit -m "Add file information utility"
git push origin feature/file-info
```

Please keep contributions focused, readable, and tested.

### Good first contributions

New to open source? Start with one of these:

- Add tests for empty files.
- Improve error messages.
- Add file-size reporting.
- Document a command with examples.
- Fix a reproducible bug.

Look for issues labeled `good first issue` or `help wanted`.

## 🧰 Technologies

- **C** for system utilities and command-line programming
- **GCC** for compilation
- **Git and GitHub** for version control and collaboration
- **Linux** as the initial development platform

## 📜 License

This project is intended to use the MIT License. See the [LICENSE](LICENSE) file for the license terms.

## 👨‍💻 Author

**Angrej Singh**

- GitHub: [@engg-angrejsingh](https://github.com/engg-angrejsingh)
- LeetCode: [angrejsingh](https://leetcode.com/u/angrejsingh/)

## ⭐ Support the Project

If you find this project useful:

- Give the repository a star.
- Report bugs and suggest improvements.
- Contribute code or documentation.
- Share the project with other developers.

Let's build useful tools and learn C together!

---

<p align="center">
  Made with ❤️ and C
</p>
