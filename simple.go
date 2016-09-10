package main

import (
	"time"
	"fmt"
)

func main() {
	ti:= time.Now()
	fmt.Println("current time = ",  ti)
	fmt.Println("+time = ",  ti.Add(time.Duration(1800) * time.Second))

}
