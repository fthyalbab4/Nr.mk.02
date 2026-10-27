// rea decompile_all
// name: FUN_004104d4
// address: 0x4104d4
// body: available
// range: 0x4104d4-0x41050c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004104d4(void)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;

  uVar3 = FUN_00410510();
  if ((char)uVar3 == '\0') {
    dVar2 = (double)CONCAT44(in_stack_00000018,in_stack_00000014);
    dVar1 = (double)CONCAT44(in_stack_00000010,in_stack_0000000c);
    if (dVar2 < dVar1) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = CONCAT31((int3)(CONCAT22((short)((uint)uVar3 >> 0x10),
                                       (ushort)(dVar2 < dVar1) << 8 |
                                       (ushort)(NAN(dVar2) || NAN(dVar1)) << 10 |
                                       (ushort)(dVar2 == dVar1) << 0xe) >> 8),1);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
