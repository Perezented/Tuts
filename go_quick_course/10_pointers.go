package main

import "fmt"

func main() {
	a := 5
	b := &a

	fmt.Println(a, b)
	fmt.Printf("%T\n", b) // the type of be is an *int, different from an int

	fmt.Println(*b)  //  Use * to read val from address11
	fmt.Println(*&a) // * pretty much cancels &

	*b = 10 // Change value with pointer
	fmt.Println(a)
}
