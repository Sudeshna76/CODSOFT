#include <iostream>
#include <vector>

using namespace std;

struct Task {
    string description;
    bool completed = false;
};

vector<Task> tasks;

void displayTasks() {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }
    
    cout << "\nYour Tasks:\n";
    for (size_t i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << (tasks[i].completed ? "[✔] " : "[ ] ") << tasks[i].description << endl;
    }
}

void addTask() {
    string desc;
    cout << "Enter task: ";
    cin.ignore();
    getline(cin, desc);
    tasks.push_back({desc});
    cout << "Task added!\n";
}

void completeTask() {
    displayTasks();
    if (tasks.empty()) return;

    int num;
    cout << "Enter task number to mark as completed: ";
    cin >> num;
    
    if (num >= 1 && num <= tasks.size()) {
        tasks[num - 1].completed = true;
        cout << "Task marked as completed!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}

void deleteTask() {
    displayTasks();
    if (tasks.empty()) return;

    int num;
    cout << "Enter task number to delete: ";
    cin >> num;

    if (num >= 1 && num <= tasks.size()) {
        tasks.erase(tasks.begin() + num - 1);
        cout << "Task deleted!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}

int main() {
    int choice;
    do {
        cout << "\n--- TO-DO LIST MANAGER ---\n";
        cout << "1. Add Task\n2. View Tasks\n3. Complete Task\n4. Delete Task\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addTask(); break;
            case 2: displayTasks(); break;
            case 3: completeTask(); break;
            case 4: deleteTask(); break;
            case 5: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice, try again!\n";
        }
    } while (choice != 5);

    return 0;
}