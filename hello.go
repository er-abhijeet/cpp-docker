package main

import (
	"fmt"
)

func main() {
	var num1, num2 int

	fmt.Scan(&num1)

	fmt.Scan(&num2)

	sum := num1 + num2
	fmt.Printf("Sum: %d\n", sum)
}
