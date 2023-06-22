// Data Viewer
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_LINE_LENGTH 100

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
} LogEntry;

// Function to extract each line from the CSV file and store it in the array of structures
int extractLogData(const char *filename, LogEntry logEntries[]) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Unable to open the file: %s\n", filename);
        return 0;
    }

    char line[MAX_LINE_LENGTH];
    int entryCount = 0;

    // Skip the header line
    fgets(line, MAX_LINE_LENGTH, file);

    // Read each line and extract the log data
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        LogEntry entry;

        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,]",
               &entry.entryNo, entry.sensorNo, &entry.temperature, &entry.humidity, &entry.light, entry.timestamp);

        logEntries[entryCount++] = entry;
    }

    fclose(file);
    return entryCount;
}

// Function to display the contents of the array of structures
void displayLogData(const LogEntry logEntries[], int entryCount) {
    printf("Log Entries:\n");
    printf("-----------------------------------------------------------------\n");
    printf("EntryNo  SensorNo  Temperature  Humidity  Light  Timestamp\n");
    printf("-----------------------------------------------------------------\n");

    for (int i = 0; i < entryCount; i++) {
        LogEntry entry = logEntries[i];
        printf("%-8d %-9s %-12.1f %-9d %-6d %-9s\n",
               entry.entryNo, entry.sensorNo, entry.temperature, entry.humidity, entry.light, entry.timestamp);
    }

    printf("-----------------------------------------------------------------\n");
}

int main() {
    const char *filename = "data.csv";
    LogEntry logEntries[MAX_ENTRIES];

    int entryCount = extractLogData(filename, logEntries);
    if (entryCount > 0) {
        displayLogData(logEntries, entryCount);
    } else {
        printf("No log entries found in the file.\n");
    }

    return 0;
}
