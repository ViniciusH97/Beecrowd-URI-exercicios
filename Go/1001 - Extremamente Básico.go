package main

import "fmt"

func ExtremamenteBasico(){

	var a, b int

	fmt.Scan(&a)
	fmt.Scan(&b)

	soma := a + b

	fmt.Printf("X = %d\n", soma)
}

func main(){
	ExtremamenteBasico()
}