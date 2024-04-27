#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printMenu() {
    cout << "\nTo-Do List Menu:\n";
    cout << "1. Add task\n";
    cout << "2. View tasks\n";
    cout << "3. Mark task as completed\n";
    cout << "4. Edit task\n";
    cout << "5. Delete task\n";
    cout << "6. Clear all tasks\n";
    cout << "7. Exit\n";
}

int main() {
    vector<string> tasks;
    int choice;

    do {
        printMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                {
                    string task;
                    cout << "Enter the task: ";
                    cin.ignore(); // to clear the input buffer
                    getline(cin, task);
                    tasks.push_back(task);
                    cout << "Task added successfully!\n";
                    break;
                }
            case 2:
                {
                    if(tasks.empty()) {
                        cout << "No tasks to display.\n";
                    } else {
                        cout << "Tasks:\n";
                        for(int i = 0; i < tasks.size(); ++i) {
                            cout << i+1 << ". " << tasks[i] << endl;
                        }
                    }
                    break;
                }
            case 3:
                {
                    int taskIndex;
                    cout << "Enter the index of the task to mark as completed: ";
                    cin >> taskIndex;
                    if (taskIndex >= 1 && taskIndex <= tasks.size()) {
                        tasks.erase(tasks.begin() + taskIndex - 1);
                        cout << "Task marked as completed.\n";
                    } else {
                        cout << "Invalid task index.\n";
                    }
                    break;
                }
            case 4:
                {
                    int taskIndex;
                    cout << "Enter the index of the task to edit: ";
                    cin >> taskIndex;
                    if (taskIndex >= 1 && taskIndex <= tasks.size()) {
                        string newTask;
                        cout << "Enter the new task: ";
                        cin.ignore(); // to clear the input buffer
                        getline(cin, newTask);
                        tasks[taskIndex - 1] = newTask;
                        cout << "Task edited successfully.\n";
                    } else {
                        cout << "Invalid task index.\n";
                    }
                    break;
                }
            case 5:
                {
                    int taskIndex;
                    cout << "Enter the index of the task to delete: ";
                    cin >> taskIndex;
                    if (taskIndex >= 1 && taskIndex <= tasks.size()) {
                        tasks.erase(tasks.begin() + taskIndex - 1);
                        cout << "Task deleted successfully.\n";
                    } else {
                        cout << "Invalid task index.\n";
                    }
                    break;
                }
            case 6:
                {
                    tasks.clear();
                    cout << "All tasks cleared.\n";
                    break;
                }
            case 7:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while(choice != 7);

    return 0;
}