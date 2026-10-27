// rea decompile_all
// name: FUN_00655ff8
// address: 0x655ff8
// body: available
// range: 0x655ff8-0x656030 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00655ff8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_stack_0000000c;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  uVar7 = *(undefined4 *)(in_stack_0000000c + 0x24);
  uVar6 = *(undefined4 *)(in_stack_0000000c + 0x20);
  uVar5 = *(undefined4 *)(in_stack_0000000c + 0x3c);
  uVar4 = *(undefined4 *)(in_stack_0000000c + 0x38);
  uVar1 = FUN_004048b8();
  uVar2 = FUN_004048b8();
  uVar3 = FUN_004048b8();
  FUN_0058d360(uVar3,uVar2,uVar1,uVar4,uVar5,uVar6,uVar7);
  return;
}
