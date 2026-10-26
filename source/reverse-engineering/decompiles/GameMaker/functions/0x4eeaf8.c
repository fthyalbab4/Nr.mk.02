// rea decompile_all
// name: FUN_004eeaf8
// address: 0x4eeaf8
// body: available
// range: 0x4eeaf8-0x4eeb7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004eeaf8(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  undefined1 local_28 [16];
  undefined1 local_18 [19];
  undefined1 local_5;

  local_5 = 1;
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x34) + 0x1dc);
  iVar3 = FUN_0043b0b0(uVar1,*(undefined4 *)(in_stack_00000004 + -4));
  do {
    do {
      if (iVar3 < 1) {
        return 0;
      }
      iVar3 = iVar3 + -1;
      iVar4 = FUN_0043b048(uVar1,iVar3);
    } while ((*(char *)(iVar4 + 0x59) == '\0') || ((*(byte *)(iVar4 + 0x50) & 0x40) == 0));
    FUN_004edf30(iVar4,local_28);
    FUN_0040c180(local_18,in_stack_00000004 + -0x14,local_28);
    cVar2 = FUN_0040c0f0(local_18,in_stack_00000004 + -0x14);
  } while (cVar2 == '\0');
  return local_5;
}
