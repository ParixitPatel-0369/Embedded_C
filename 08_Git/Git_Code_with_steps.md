🔹 **What is Git?**

Git = Version Control System



👉 **It tracks:**



Code changes

Who changed what

Lets you go back in time

Enables team collaboration



🔹 **Basic Git Workflow (Big Picture)**

Working Directory → Staging Area → Local Repo → Remote Repo



### **Steps for to use git ::-->>**



📌 **STEP-1: Go inside your project folder** 

🔹 What it does:

Moves Command Prompt into the Embedded\_C folder

(Git always works inside a folder)



📌 **STEP-2: Start Git in this folder**

*git init*



🔹 What it does:

Creates a hidden folder called .git



Tells Git:

👉 “This folder is now a Git project”



No files are saved yet



📌 **STEP-3: Check current Git status**

*git status*



🔹 What it does:

Shows which files/folders are:

Untracked (red)

Modified

Ready to commit

First time, everything will be red



Example output meaning:

Untracked files:

&nbsp; 01\_Basics/

&nbsp; 02\_GPIO/

👉 Git sees them but is NOT saving them yet



📌 **STEP-4: Tell Git to track everything**

*git add .*



🔹 What it does:

add = select files to save

. = everything in current folder



Moves files to staging area

(ready to be saved)



📌 **STEP-5: Save the project (commit)**

*git commit -m "Initial Embedded\_C project structure"*



🔹 What it does:

Takes a snapshot of current folders

Saves it permanently in Git history



-m = message explaining what you saved



Think of it as:

🧠 CTRL + S with memory



📌 **STEP-6: Check status again**

*git status*



🔹 What it does:

Confirms everything is saved



You should see:

nothing to commit, working tree clean



✔ Means Git is happy 😊



📌 **STEP-7: When you add a NEW project later**



Example: you add 03\_ADC/01\_ADC\_Read

Run:

git status        # see new files

git add .         # select new files

git commit -m "Added ADC read project"



🔹 What it does:

Saves only the new changes

Keeps history clean



**IMPORTANT CONCEPT (1 minute)**

**Git → works on your computer (local)**

**GitHub → website to see code online (web)**



👉 To see on web, you must push your project to GitHub once.



**STEP-1: Create Repository on GitHub (Web)**

🔹 Do this:



Open browser

Go to 👉 https://github.com



Login to your account

Click ➕ (top right) → New repository



🔹 Fill details:

Repository name: Embedded\_C

Description: STM32 Embedded C projects



Select Public

❌ Do NOT check README / .gitignore / license



📌 **STEP-8: Push your changes**

*git push*



### **STEP-BY-STEP GIT COMMANDS**



1. **Install Git**

*git --version*

✔ Confirms Git is installed



2\. **Configure Git (ONE TIME)**

*git config --global user.name "Parixit Patel"*

*git config --global user.email "parixitXXX@email.com"*



👉 Git stores who made the change



Check:

*git config --list*



3\. **Create a Repository**

Option A: New project

*git init*



✔ Creates .git/ folder

✔ Your project is now under Git control



Option B: Clone existing repo

git clone https://github.com/user/project.git



✔ Copies remote repo to local system



4\. **Check File Status**

*git status*



Possible states:

Untracked → Git doesn’t know this file

Modified → File changed

Staged → Ready to commit

Committed → Saved in history



5\. **Add Files to Staging Area**

*git add main.c*



or add everything:

*git add .*



👉 Staging = “I want these changes in next commit”



6\. **Commit Changes (SAVE POINT)**

*git commit -m "Added LED blinking logic"*



✔ Creates a snapshot

✔ Commit message should explain why, not what



📌 Purpose:

“Commit is a snapshot of staged changes.”



7\. **View Commit History**

*git log*



Short version:

*git log --oneline*



Shows:

Commit ID

Author

Date

Message



8\. **Create a Branch (REAL PROJECT)**

*git branch feature\_adc*



Switch to branch:

*git checkout feature\_adc*



Shortcut:

*git checkout -b feature\_adc*



👉 Branch = separate line of development

(No risk to main code)



9\. **Merge Branch**

*git checkout main*

*git merge feature\_adc*



✔ Combines feature into main



10\. **Handle Merge Conflict** 

When Git can’t auto-merge:



<<<<<<< HEAD

old code

=======

new code

>>>>>>> feature\_adc



Fix manually → then:

*git add file.c*

*git commit*



11\. **Connect to Remote Repository** (GitHub/GitLab)

*git remote add origin https://github.com/user/repo.git*



Check:

*git remote -v*



12\. **Push Code to Remote**

*git push origin main*

First time:

*git push -u origin main*



👉 Uploads local commits to GitHub



13\. **Pull Latest Code**

*git pull origin main*

👉 Fetch + merge changes from remote



14\. **Fetch vs Pull** (COMMON QUESTION)

*git fetch*

✔ Downloads changes

❌ Does NOT merge



*git pull*

✔ Download + merge



15\. **Undo Mistakes** (VERY IMPORTANT)

*Undo unstaged change*

*git checkout -- file.c*



Unstage file

git reset file.c



Undo last commit (keep code)

*git reset --soft HEAD~1*



Undo last commit (delete code)

*git reset --hard HEAD~1*

⚠️ --hard is dangerous



16\. **Delete Branch**

*git branch -d feature\_adc*

Remote delete:

*git push origin --delete feature\_adc*



17\. **Git Stash** (EMBEDDED DEBUGGING LIFE SAVER 😄)

*git stash*

👉 Temporarily saves work



Bring back:

*git stash pop*

-------------------------------------------

Git for embedded Developer:: 

***What to PUSH vs What to IGNORE***

✅ PUSH (must be in Git)

.c / .h files

startup_stm32f401xx.s

.uvprojx

README.md

.gitignore

❌ NEVER push

Objects/

Listings/

.axf

.hex

.map

.bak

***.gitignore (Embedded-Specific)***

Create .gitignore in root and paste exactly this:

# Keil build output
Objects/
Listings/


# Build files
*.axf
*.hex
*.bin
*.map


# Keil backup files
*.bak
*.dep
*.crf
*.d
*.o


# Editor junk
*.uvguix.*
*.scvd

This keeps your repo clean and professional.

