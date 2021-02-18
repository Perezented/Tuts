package main

import "fmt"

var name string = "Michael"

func main() {
	// MAIN TYPES
	// string
	// bool
	// int
	// int thru int64
	// uint
	// byte
	// rune
	// float32 or float64
	// complex64 complex128

	// var name string = "Michael"
	// short hand setting a var.
	name0, email := "Perez", "Perez64@gmail.com"
	var age int = 37
	var someBool = true
	var size float32 = 2.3

	fmt.Println(name, name0, age, someBool, size, email)
	fmt.Printf("%T\n", age)      // Prints file type
	fmt.Printf("%T\n", someBool) // Prints file type

}
