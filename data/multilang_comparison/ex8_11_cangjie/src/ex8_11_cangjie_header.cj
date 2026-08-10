struct ArrayT{
   var data: Array<Int64>
   var size: Int64
   var refC: Int64
   var id: Int64
   public init(size: Int64, id: Int64, refC: Int64){
        this.data = Array<Int64>(size, repeat: 0)
        this.size = size
        this.id = id
        this.refC = refC
   }
}
struct ArrayTParam{
   var data: Array<Option<ArrayT>>
   var size: Int64
   public init(size: Int64){
        this.data = Array<Option<ArrayT>>(size, repeat: None)
        this.size = size
   }
}

