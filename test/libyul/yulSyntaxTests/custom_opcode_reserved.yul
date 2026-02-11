{
    let custom_opcode := 2
    let custom_opcode_abc := 3
    function custom_opcode_fun() {}
}
// ----
// DeclarationError 5017: (10-23): The identifier "custom_opcode" is reserved and can not be used.
// DeclarationError 5017: (37-54): The identifier "custom_opcode_abc" is reserved and can not be used.
// DeclarationError 5017: (64-95): The identifier "custom_opcode_fun" is reserved and can not be used.
