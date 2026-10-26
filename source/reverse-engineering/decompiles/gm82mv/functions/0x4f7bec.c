// rea decompile_all
// name: FUN_004f7bec
// address: 0x4f7bec
// body: available
// range: 0x4f7bec-0x4f7c2a inclusive
// range: 0x4f7c47-0x4f7c68 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f7bec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;

  iVar1 = FUN_004f6500(param_1);
  uVar4 = 0;
  uVar2 = FUN_004f2130(*(undefined4 *)(param_1 + 0x138),&PTR_LAB_004f0954);
  iVar3 = FUN_0040621c(uVar2,&PTR_LAB_004f0954);
  switch(*(undefined1 *)(iVar1 + 0x461)) {
  case 0:
  case 2:
    if (iVar3 != 0) {
      uVar4 = 1;
    }
    break;
  case 3:
    if (iVar3 != 0) {
      if (*(char *)(iVar3 + 0x14) == '\0') {
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
    }
    break;
  case 4:
  case 6:
    uVar4 = 2;
  }
  return uVar4;
}
