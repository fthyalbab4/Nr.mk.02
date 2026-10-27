// rea decompile_all
// name: FUN_004f7cec
// address: 0x4f7cec
// body: available
// range: 0x4f7cec-0x4f7d6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f7cec(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = FUN_004f6500(param_1);
  cVar1 = *(char *)(iVar2 + 0x461);
  if (cVar1 == '\x03') {
    uVar3 = FUN_004f2130(*(undefined4 *)(param_1 + 0x138),&PTR_LAB_004f0954);
    iVar2 = FUN_0040621c(uVar3,&PTR_LAB_004f0954);
    if (iVar2 != 0) {
      FUN_004f1e68(*(undefined4 *)(param_1 + 0x138),iVar2);
      return;
    }
  }
  else if ((cVar1 == '\x04') || (cVar1 == '\x06')) {
    if (cVar1 == '\x04') {
      *(undefined1 *)(iVar2 + 0x461) = 0;
    }
    else {
      *(undefined1 *)(iVar2 + 0x461) = 2;
    }
    if (*(int *)(iVar2 + 0x454) != 0) {
      FUN_00404340();
    }
    *(undefined4 *)(iVar2 + 0x454) = 0;
  }
  return;
}
