package main

import "fmt"

func main() {
	ids := []int{33, 35, 36, 37, 23, 78, 19}
	// Loop through ids

	for i, id := range ids {
		fmt.Printf("%d - ID: %d\n", i, id)
	}
	// No index
	for _, id := range ids {
		fmt.Printf("ID: %d\n", id)
	}

	// add ids together
	sum := 0
	for _, id := range ids {
		sum += id
	}
	fmt.Println("Sum: ", sum)

	electronicMails := map[string]string{"Bob": "bob@gmail.com", "Sharon": "sharon@gmail.com", "DeleteMe": "DeleteMe@gmail.com"}

	for key, value := range electronicMails {
		fmt.Printf("%s: %s\n", key, value)
	}

}
