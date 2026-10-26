// rea decompile_all
// name: FUN_00568a90
// address: 0x568a90
// body: available
// range: 0x568a90-0x568b1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00568a90(void)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint3 uVar4;
  ushort uVar5;
  bool bVar6;
  int in_stack_00000004;

  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x2a0);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + -4);
  }
  if (*(int *)(in_stack_00000004 + -8) < iVar3) {
    uVar2 = *(ushort *)
             (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x2a0) + -2 +
             *(int *)(in_stack_00000004 + -8) * 2);
    if ((ushort)(uVar2 - 0x61) < 0x1a) {
      uVar2 = uVar2 & 0xffdf;
    }
    uVar5 = *(ushort *)
             (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x2a0) +
             *(int *)(in_stack_00000004 + -8) * 2);
    if ((ushort)(uVar5 - 0x61) < 0x1a) {
      uVar5 = uVar5 & 0xffdf;
    }
    bVar6 = uVar5 == uVar2;
    uVar4 = (uint3)(byte)(uVar2 >> 8);
  }
  else {
    bVar6 = false;
    uVar4 = 0;
  }
  return CONCAT31(uVar4,bVar6) ^ 1;
}
