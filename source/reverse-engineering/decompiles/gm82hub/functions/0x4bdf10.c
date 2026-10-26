// rea decompile_all
// name: FUN_004bdf10
// address: 0x4bdf10
// body: available
// range: 0x4bdf10-0x4bdf96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bdf10(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_stack_00000004;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  piVar3 = (int *)(in_stack_00000004 + -4);
  local_14 = *(undefined4 *)(*piVar3 + 0x40);
  local_10 = *(undefined4 *)(*piVar3 + 0x44);
  FUN_004bb054(*(undefined4 *)(*piVar3 + 0x34),&local_14,&local_c);
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -8) + 8);
  iVar2 = *(int *)(*piVar3 + 0x34);
  FUN_0040c4c0((*(int *)(iVar2 + 0x40) + *(int *)(iVar1 + 0x4c)) - local_c,
               (*(int *)(iVar2 + 0x44) + *(int *)(iVar1 + 0x50)) - local_8,
               ((*(int *)(iVar1 + 0x54) - *(int *)(iVar1 + 0x4c)) + *(int *)(iVar2 + 0x48)) -
               *(int *)(*piVar3 + 0x48),local_24,
               ((*(int *)(iVar1 + 0x58) - *(int *)(iVar1 + 0x50)) + *(int *)(iVar2 + 0x4c)) -
               *(int *)(*piVar3 + 0x4c));
  FUN_004baf08(iVar2,local_24);
  return;
}
