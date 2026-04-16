*This project has been created as part of the 42 curriculum by **agerbaud**, **mreynaud**.*

# snow-crash
![42 Project](https://img.shields.io/badge/42-Project-black)
![Language](https://img.shields.io/badge/Language-C%20%7C%20PHP%20%7C%20Perl%20%7C%20Lua%20%7C%20Shell-0E7FC0)

---

## 📌 Summary
- [About](#about)
- [Methodologies](#methodologies)
- [Levels Overview](#levels-overview)
- [Directories structure](#directories-structure)
- [Resources](#resources)
- [Authors](#authors)

---

<a id="about"></a>
## 📖 About

**snow-crash** is an introductory project to cyber security within the 42 curriculum.
It consists of a series of 15 challenges (levels 00 to 14) where the goal is to discover security flaws, exploit software or system vulnerabilities, and retrieve access tokens to progress to the next level.

---

<a id="methodologies"></a>
## ✨ Methodologies

✅ **Binary Analysis**: Study of files with the SUID bit and exploitation of root permissions.  
✅ **Reverse Engineering**: Using **Ghidra** for decompilation and static analysis of complex programs.  
✅ **Cryptography**: Decoding classical ciphers, analyzing system hashes, and reverse engineering custom algorithms.  
✅ **Network Analysis**: Extracting sensitive data from `.pcap` traffic captures.  
✅ **Script Exploitation**: Command injections and logic bypasses in PHP, Perl, Lua, and Bash.  
✅ **Race Conditions**: Exploiting time-of-check to time-of-use (TOCTOU) vulnerabilities through concurrent execution.

---

<a id="levels-overview"></a>
## 🕹️ Levels Overview

Chaque dossier contient un `README.md` détaillant la procédure de résolution.

| Niveau | Concept Clé | Outil / Technologie |
| :--- | :--- | :--- |
| **00 - 02** | Data Recovery | Affine Cipher, John the Ripper, Wireshark |
| **03 - 05** | Env & Permissions | Path hijacking, Command injection, Crontab |
| **06 - 08** | Code Injection | PHP regex `/e`, Env variables, Symbolic links |
| **09 - 11** | Advanced Scripts | Algorithm reversing, Race condition, Lua socket |
| **12 - 14** | Reverse Engineering | Perl CGI injection, Ghidra (UID bypass), getflag reversing |

---

<a id="directories-structure"></a>
## 📂 Directories structure

```plaintext
.
├── level00 ... level14
│   ├── flag            → captured token
│   ├── README.md       → level write-up
│   └── ressources      → helper scripts and files
├── .gitignore
└── README.md
```

---

<a id="resources"></a>
## 🔗 Resources

* [42Lyon](42lyon.fr)
* [Ghidra - NSA](https://github.com/NationalSecurityAgency/ghidra/releases)
* [John the Ripper](https://www.openwall.com/john/)
* [dCode - outil de cryptographie](https://www.dcode.fr/)

---

<a id="author"></a>
## 👤 Author

* Axel – [GitHub (qxxel)](https://gitub.com/qxxel)
* mreynaud42 – [GitHub](https://gitub.com/mreynaud42)

* 42 student - login: *agerbaud* and *mreynaud*

