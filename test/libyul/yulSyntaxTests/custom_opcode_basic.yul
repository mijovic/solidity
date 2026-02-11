{
    custom_opcode_0i_0o(hex"01")
    let x := custom_opcode_0i_1o(hex"02")
    let y := custom_opcode_2i_1o(hex"ff", x, 42)
    custom_opcode_1i_0o(hex"aa", y)
}
// ====
// dialect: evm
// ----
