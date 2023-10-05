def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i  # Return the index of the target element if found
    return -1  # Return -1 if the target element is not in the list

# Example usage
if __name__ == "__main__":
    # Sample list of elements
    my_list = [4, 2, 7, 1, 9, 5, 3]

    # Target element to be searched
    target_element = 5

    # Perform linear search
    result = linear_search(my_list, target_element)

    # Display the result
    if result != -1:
        print(f"Element {target_element} found at index {result}.")
    else:
        print(f"Element {target_element} not found in the list.")
