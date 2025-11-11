module functions

pub struct Array {
	pub mut:
    data []u32
    size int
    ref_c int
    id   int
}
pub struct ArrayParam {
	pub mut:
    data []Array
    size int
}
