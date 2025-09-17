package main
type Array struct {
    Data []uint32
    Size int
    RefC int
    Id   int
}
type ArrayParam struct {
    Data []*Array
    Size int
}

