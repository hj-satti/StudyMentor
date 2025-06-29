# StudyMentor++ – AI Study Planner in C++

StudyMentor++ is a smart, console-based study planner built in C++. It helps students manage their daily study time by generating a plan that prioritizes weak subjects. The system adapts based on user feedback and is designed using clear, modular software engineering principles.

## Features

- Generates a daily study plan based on available time
- Gives more time to subjects you're weak in
- Saves daily feedback (whether plan was completed)
- Fully written in clean, beginner-friendly C++

## How It Works

1. Enter how much time you have to study today.
2. The system reads your subjects and weakness scores.
3. It distributes time proportionally to help you focus on weak areas.
4. At the end, you confirm whether you completed the plan.
5. The system logs your response to track habits.

## Folder Structure

```
StudyMentor++/
├── src/
│   ├── main.cpp        // Program entry
│   ├── planner.cpp     // Study plan logic
│   └── feedback.cpp    // Logs your response
├── data/
│   ├── subjects.txt    // Subject list and weakness scores
│   └── feedback.csv    // Daily feedback log
├── README.md
```

## How to Run

1. Open terminal in the project directory.
2. Compile the program:
   ```
   g++ src/main.cpp -o studymentor
   ```
3. Run it:
   ```
   ./studymentor
   ```
   On Windows, use:
   ```
   studymentor.exe
   ```

## Sample Output

```
Enter available study time today (in minutes): 120

Your Study Plan:
AI → 50 minutes
DSA → 40 minutes
DBMS → 20 minutes
Math → 10 minutes

Did you complete the plan? (y/n): y
Session complete.
```

## Editing Subjects

Open the file `data/subjects.txt` and edit it like this:

```
SubjectName WeaknessScore
```

Example:
```
AI 5
DSA 4
Math 1
```

Higher score = weaker subject = more time in the plan.
