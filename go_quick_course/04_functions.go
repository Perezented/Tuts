package main

import "fmt"

func greeting(name string) string {
	return "Hello " + name
}

func getSum(num0, num1 int) int {
	return num0 + num1
}

func main() {
	fmt.Println(greeting("myName"))
	fmt.Println(getSum(3, 4))
}
