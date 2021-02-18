package main

import "fmt"

func main() {
	// A map will be alphabetized
	//  Define map
	emails := make(map[string]string) // first string for key, then one for value

	// Assign kv
	emails["Bob"] = "bob@gmail.com"
	emails["Sharon"] = "sharon@gmail.com"
	emails["DeleteMe"] = "DeleteMe@gmail.com"

	fmt.Println(emails)
	fmt.Println(emails["Bob"])
	fmt.Println(len(emails))

	// Delete from map
	delete(emails, "DeleteMe")
	fmt.Println(emails)
	fmt.Println(len(emails))

	// Declare map and add key values
	electronicMails := map[string]string{"Bob": "bob@gmail.com", "Sharon": "sharon@gmail.com", "DeleteMe": "DeleteMe@gmail.com"}
	fmt.Println(electronicMails)
	fmt.Println(electronicMails["Bob"])
	fmt.Println(len(electronicMails))

	// Delete from map
	delete(electronicMails, "DeleteMe")
	fmt.Println(electronicMails)
	fmt.Println(len(electronicMails))

}
