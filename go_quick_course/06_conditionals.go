package main

import "fmt"

func main() {
	x := 15
	y := 10

	if x < y {
		fmt.Printf("%d aka x is less than %d aka y", x, y)
	} else {
		fmt.Printf("%d is less than %d\n", y, x)
	}

	// color := "red"
	color := "blue"
	// color := "green"

	if color == "red" {
		fmt.Println("color is red")
	} else if color == "blue" {
		fmt.Println("color is not red, it is blue")
	} else {
		fmt.Println("color is not blue or red")
	}

	// Switch
	switch color {
	case "red":
		fmt.Println("color is red")
	case "blue":
		fmt.Println("color is blue")
	default:
		fmt.Println("color is not blue or red")
	}

}
