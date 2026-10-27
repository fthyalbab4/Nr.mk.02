// rea decompile_all
// name: FUN_0056798c
// address: 0x56798c
// body: available
// range: 0x56798c-0x567a9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056798c(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float10 in_ST0;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;

  FUN_004048a8();
  dVar1 = (double)in_ST0;
  if (dVar1 != 0.0) {
    dVar3 = (double)CONCAT44(in_stack_00000008,in_stack_00000004);
    if (dVar1 < (double)CONCAT44(in_stack_00000008,in_stack_00000004)) {
      dVar3 = dVar1;
    }
    dVar2 = (((double)CONCAT44(in_stack_00000018,in_stack_00000014) -
             (double)CONCAT44(in_stack_00000028,in_stack_00000024)) * dVar3) / dVar1;
    dVar1 = (((double)CONCAT44(in_stack_00000010,in_stack_0000000c) -
             (double)CONCAT44(in_stack_00000020,in_stack_0000001c)) * dVar3) / dVar1;
    FUN_005663bc();
    dVar3 = ((double)CONCAT44(in_stack_00000018,in_stack_00000014) - dVar2) - dVar1 / 3.0;
    FUN_00566840(0,extraout_EDX,extraout_ECX,
                 ((double)CONCAT44(in_stack_00000010,in_stack_0000000c) - dVar1) - dVar2 / 3.0,
                 dVar1 / 3.0 + ((double)CONCAT44(in_stack_00000018,in_stack_00000014) - dVar2),
                 in_stack_0000000c,in_stack_00000010,in_stack_00000014,in_stack_00000018,
                 dVar2 / 3.0 + ((double)CONCAT44(in_stack_00000010,in_stack_0000000c) - dVar1),
                 SUB84(dVar3,0),(short)((ulonglong)dVar3 >> 0x20));
  }
  return;
}
