#include <stdio.h>

int load_steps[] = {5000, 2000, 2000, 1000, 1000, 500, 500, 200, 200, 100, 100};
int relay_count = sizeof(load_steps) / sizeof(load_steps[0]);

void calculate_relay_activation(int setpoint) {
    int activated_relays[relay_count];
    int remaining_setpoint = setpoint;

    for (int i = 0; i < relay_count; i++) {
        activated_relays[i] = 0;
    }

    for (int i = 0; i < relay_count; i++) {
        if (load_steps[i] <= remaining_setpoint) {
            activated_relays[i] = 1;
            remaining_setpoint -= load_steps[i];
        }
        if (remaining_setpoint == 0) {
            break;
        }
    }

    if (remaining_setpoint > 0) {
        printf("Error: Setpoint cannot be reached with the available load steps.\n");
        return;
    }

    for (int i = 0; i < relay_count; i++) {
        printf("Relay %d: %s\n", i + 1, activated_relays[i] ? "ON" : "OFF");
    }
}

int main() {
    int setpoint;
    printf("Enter load setpoint: ");
    scanf("%d", &setpoint);
    calculate_relay_activation(setpoint);
    return 0;
}