def sequence_detector(transitions, input_sequence):
    current_state = transitions[0][0]
    output_sequence = ""

    for input_val in input_sequence:
        next_state, output = None, None

        for transition in transitions:
            if transition[0] == current_state and int(transition[2]) == input_val:
                next_state, output = transition[1], transition[3]

        if next_state is not None:
            current_state = next_state
            output_sequence += str(output)

    return output_sequence


def main():
    transitions = []

    # Get transition inputs from the user
    while True:
        transition_input = input(
            "Enter transition (format: current_state next_state input output, enter 'done' to finish): "
        )

        if transition_input.lower() == "done":
            break

        transitions.append(tuple(transition_input.split()))

    input_sequence = list(
        map(int, input("Enter input sequence (space-separated): ").split())
    )

    result_sequence = sequence_detector(transitions, input_sequence)

    print(result_sequence)

    if transitions[-1][1] == "a" and result_sequence[-1] == "1":
        print("Non Overlapping Sequence Detector")
    else:
        print("Overlapping Sequence Detector")


main()
