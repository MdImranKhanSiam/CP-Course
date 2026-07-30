# Installing Code::Blocks (Windows)

## Step 1: Download Code::Blocks

Visit the official website:

👉 https://www.codeblocks.org/downloads/

Click **Download the binary release**.

---

## Step 2: Choose the Correct Installer

Download the version that includes the MinGW compiler.

Example:

```
codeblocks-25.03mingw-setup.exe
```

> **Important:** Choose the installer with **mingw** in its name. It already includes the GCC compiler, so you don't need to install it separately.

---

## Step 3: Install Code::Blocks

1. Run the downloaded installer.
2. Click **Next**.
3. Accept the license agreement.
4. Keep the default installation options.
5. Choose an installation location (or leave it as default).
6. Click **Install**.
7. Wait for the installation to finish.

---

## Step 4: Launch Code::Blocks

Open **Code::Blocks** from the Start Menu or Desktop shortcut.

On the first launch, it will ask you to select a compiler.

Choose:

```
GNU GCC Compiler
```

Then click **OK**.

---

## Step 5: Verify the Installation

Create a new empty file:

** Press CTRL + Shift + N **

Save the file:

** Press CTRL + S **

** Rename the file as hello.cpp **

Click save

Write this code:

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, Gen Z";
    return 0;
}
```

Press **F9** (Build & Run).

Expected Output:

```
Hello, Gen Z
```

If you see the output, Code::Blocks has been installed successfully.

---

## Troubleshooting

### Compiler not found

If you get the error:

```
Compiler not found
```

You likely installed the version **without MinGW**.

Install the **mingw** version instead.

---

## Keyboard Shortcuts

| Shortcut | Action |
|----------|--------|
| F9 | Build & Run |
| Ctrl + S | Save |
| Ctrl + Shift + N | New File |
| Ctrl + F | Find |
| Ctrl + Z | Undo |

---

## Congratulations!

You are now ready to write and run C++ programs using Code::Blocks.