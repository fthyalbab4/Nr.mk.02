// rea decompile_all
// name: FUN_004f7d70
// address: 0x4f7d70
// body: available
// range: 0x4f7d70-0x4f7e6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f7d70(int param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;

  iVar3 = FUN_004f6500(param_1);
  cVar1 = *(char *)(iVar3 + 0x461);
  if ((cVar1 != '\0') && (cVar1 != '\x02')) {
    if (cVar1 == '\x03') {
      iVar3 = FUN_004f2130(*(undefined4 *)(param_1 + 0x138),&PTR_LAB_004f0954);
      if (iVar3 == 0) {
        uVar4 = FUN_004f1e7c(*(undefined4 *)(param_1 + 0x138),&PTR_LAB_004f0954);
        iVar3 = FUN_0040621c(uVar4,&PTR_LAB_004f0954);
      }
      else {
        uVar4 = FUN_004f2130(*(undefined4 *)(param_1 + 0x138),&PTR_LAB_004f0954);
        iVar3 = FUN_0040621c(uVar4,&PTR_LAB_004f0954);
      }
      FUN_004f2178(iVar3,0x100);
      FUN_00404f38(iVar3 + 0x15,0x100,0xff);
      iVar5 = FUN_004f21c8(iVar3);
      *(int *)(iVar3 + 8) = 1 << (*(byte *)(iVar5 + 0x460) & 0x1f);
      *(undefined1 *)(iVar3 + 0x14) = 0;
    }
    return;
  }
  if (cVar1 == '\0') {
    *(undefined1 *)(iVar3 + 0x461) = 4;
  }
  else {
    *(undefined1 *)(iVar3 + 0x461) = 6;
  }
  lVar2 = (longlong)*(int *)(iVar3 + 0x458) * (longlong)*(int *)(iVar3 + 0x45c);
  uVar4 = FUN_00404324((int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
  *(undefined4 *)(iVar3 + 0x454) = uVar4;
  FUN_00404f38(uVar4,*(int *)(iVar3 + 0x458) * *(int *)(iVar3 + 0x45c),0xff);
  return;
}
