// rea decompile_all
// name: FUN_0062d598
// address: 0x62d598
// body: available
// range: 0x62d598-0x62d61d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062d598(int param_1)

{
  double dVar1;
  undefined2 uVar2;
  int in_stack_0000000c;

  uVar2 = (undefined2)((uint)PTR_PTR_00689170 >> 0x10);
  if (*PTR_PTR_00689170 == '\0') {
    dVar1 = *(double *)(in_stack_0000000c + 0x50);
    FUN_0062c64c(param_1,0xfffffffd,
                 CONCAT31((int3)(CONCAT22(uVar2,(ushort)(dVar1 < 0.5) << 8 |
                                                (ushort)NAN(dVar1) << 10 |
                                                (ushort)(dVar1 == 0.5) << 0xe) >> 8),
                          dVar1 < 0.5 == 0),*(undefined4 *)(in_stack_0000000c + 0x38),
                 *(undefined4 *)(in_stack_0000000c + 0x3c),*(undefined4 *)(in_stack_0000000c + 0x20)
                 ,*(undefined4 *)(in_stack_0000000c + 0x24),*(undefined4 *)(in_stack_0000000c + 8),
                 *(undefined4 *)(in_stack_0000000c + 0xc));
  }
  else {
    dVar1 = *(double *)(in_stack_0000000c + 0x50);
    FUN_0062c64c(param_1,0xfffffffd,
                 CONCAT31((int3)(CONCAT22(uVar2,(ushort)(dVar1 < 0.5) << 8 |
                                                (ushort)NAN(dVar1) << 10 |
                                                (ushort)(dVar1 == 0.5) << 0xe) >> 8),
                          dVar1 < 0.5 == 0),*(undefined4 *)(in_stack_0000000c + 0x38),
                 *(undefined4 *)(in_stack_0000000c + 0x3c),
                 *(double *)(in_stack_0000000c + 0x20) + *(double *)(param_1 + 0x58),
                 *(double *)(in_stack_0000000c + 8) + *(double *)(param_1 + 0x50));
  }
  return;
}
