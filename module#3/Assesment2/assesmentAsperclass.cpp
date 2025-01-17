#include <iostream>
#include <cmath>
#include <string>
using namespace std;

const float COST_PER_HOUR = 18.50;   // Cost per hour for server
const float COST_PER_MINUTE = 0.40; // Cost per additional minute for server
const float COST_PER_DISH = 20.70;  // Cost per dish for food

// Class to represent an Event
class Event {
private:
    string eventName;
    string organizerName;
    int numberOfGuests;
    int eventDurationMinutes;

    //calculation for cost of servers
    float calculateServerCost() {
        float hoursCost = (eventDurationMinutes / 60) * COST_PER_HOUR; // Full hours
        float minutesCost = (eventDurationMinutes % 60) * COST_PER_MINUTE; // Remaining minutes
        return hoursCost + minutesCost;
    }

    float calculateFoodCost() {
        return numberOfGuests * COST_PER_DISH;
    }

public:
    Event(string eventName, string organizerName, int numberOfGuests, int eventDurationMinutes) {
        this->eventName = eventName;
        this->organizerName = organizerName;
        this->numberOfGuests = numberOfGuests;
        this->eventDurationMinutes = eventDurationMinutes;
    }

    void displayEventDetails() {
        cout << "\nEvent Name: " << eventName;
        cout << "\nOrganizer Name: " << organizerName;
        cout << "\nNumber of Guests: " << numberOfGuests;
        cout << "\nEvent Duration: " << eventDurationMinutes << " minutes\n";

        // Calculate costs
        float numOfServers = ceil((float)numberOfGuests / 20); // 1 server for every 20 guests
        float serverCost = calculateServerCost() * numOfServers; // Total server cost
        float foodCost = calculateFoodCost();
        float totalCost = serverCost + foodCost;
        float deposit = totalCost * 0.25; // 25% deposit

        // Display costs
        cout << "\nNumber of Servers Needed: " << numOfServers;
        cout << "\nServer Cost: Rs." << serverCost;
        cout << "\nFood Cost: Rs." << foodCost;
        cout << "\nTotal Cost: Rs." << totalCost;
        cout << "\nDeposit Required (25%): Rs." << deposit << "\n";
    }
};

int main() {
    string eventName;
    string organizerName;
    int numberOfGuests;
    int eventDurationMinutes;

    cout << "Enter the Event Name: ";
    getline(cin, eventName);

    cout << "Enter the Organizer's Name: ";
    getline(cin, organizerName);

    cout << "Enter the Number of Guests: ";
    cin >> numberOfGuests;

    cout << "Enter the Event Duration in Minutes: ";
    cin >> eventDurationMinutes;

    Event event(eventName, organizerName, numberOfGuests, eventDurationMinutes);

    event.displayEventDetails();

    return 0;
}
