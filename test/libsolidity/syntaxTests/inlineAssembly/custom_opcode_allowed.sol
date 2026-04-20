contract C {
    function f() public {
        assembly {
            let x := custom_opcode_0i_1o(hex"01")
            custom_opcode_1i_0o(hex"02", x)
        }
    }
}
// ----
