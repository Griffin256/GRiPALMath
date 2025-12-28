````markdown
# CONTRIBUTING.md

# Contributing to GRiPALMath

First off, thank you for considering contributing!  
Your contributions help make GRiPALMath a reliable, professional, and expandable math library.

This guide explains how to contribute code, report issues, and follow our coding standards.

---

## How to Contribute

### 1. Fork the Repository

Click Fork in the GitHub UI to create your own copy of GRiPALMath.

```bash
git clone https://github.com/<your-username>/GRiPALMath.git
cd GRiPALMath
````

---

### 2. Create a Feature Branch

Always work on a new branch for each feature, fix, or module:

```bash
git checkout -b feature/my-new-function
```

---

### 3. Make Changes

* Follow the coding style in existing code.
* Document all new functions in the header files.
* Write unit tests where possible (future `tests/` folder).

---

### 4. Commit Changes

All commits must be **signed off** to comply with the Developer Certificate of Origin (DCO):

```bash
git commit -s -m "Add description of your change"
```

* The `-s` flag adds your sign-off automatically.
* Example: `git commit -s -m "Add ipower() for integer exponents"`

---

### 5. Push and Open a Pull Request

```bash
git push origin feature/my-new-function
```

* Open a Pull Request against the **main branch** of GRiPALMath.
* Include a clear description and, if applicable, example usage.

---

## Reporting Issues

Use the **Issues** tab to report bugs, request features, or suggest improvements.

Include:

* Steps to reproduce the issue
* Expected vs actual behavior
* Environment details (compiler, OS, CMake version)

---

## Branch Naming Convention

* `feature/` → new features
* `bugfix/` → bug fixes
* `docs/` → documentation updates
* `test/` → unit tests

**Example:** `feature/ipower-function`

---

## Style Guidelines

* Use `camelCase` or `snake_case` consistently for functions.
* Keep headers and source files separate: `include/` vs `src/`.
* Modular code only — each module should be self-contained.
* Comment **non-trivial logic** for clarity.

---

## Licensing

All contributions are assumed to be under the **MIT License** (or your chosen license).
By contributing, you affirm you have the right to submit this code under the project’s license.

---

## Additional Notes

* This library is modular and expandable, so new math modules are encouraged.
* Avoid global variables unless strictly necessary.
* Always test for numerical precision and boundary conditions.

---

Thank you for helping **GRiPALMath** grow!
Your contributions make the library better for everyone.

```
