package main

import "fmt"

func main() {
	// Arrays
	var fruitArr [2]string
	// assign values
	fruitArr[0] = "Apple"
	fruitArr[1] = "Orange"

	foodArr := [2]string{"Cake", "Steak"}

	fmt.Println(foodArr)
	fmt.Println(fruitArr)
	fmt.Println(fruitArr[0])
	fmt.Println(fruitArr[1])

	fruitSlice := []string{"Apple", "Mango", "Banana"}
	fmt.Println(fruitSlice)
	fmt.Println(len(fruitSlice))
	fmt.Println(fruitSlice[1:])
}
