// rea decompile_all
// name: FUN_004f32dc
// address: 0x4f32dc
// body: available
// range: 0x4f32dc-0x4f33c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004f32dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;

  uVar5 = 0;
  iVar3 = FUN_004f21c8(param_1,param_2,param_3,param_3);
  cVar1 = *(char *)(iVar3 + 0x461);
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)(iVar3 + 0x4b + (uint)*(byte *)(param_1 + 0x16) * 4);
    uVar5 = (uint)CONCAT12(uVar2,CONCAT11(uVar2,uVar2));
  }
  else if (cVar1 == '\x02') {
    uVar5 = (uint)CONCAT12(*(undefined1 *)
                            (*(int *)(iVar3 + 0xc) + 0x13d + (uint)*(byte *)(param_1 + 0x1a)),
                           CONCAT11(*(undefined1 *)
                                     (*(int *)(iVar3 + 0xc) + 0x13d +
                                     (uint)*(byte *)(param_1 + 0x18)),
                                    *(undefined1 *)
                                     (*(int *)(iVar3 + 0xc) + 0x13d +
                                     (uint)*(byte *)(param_1 + 0x16))));
  }
  else if (cVar1 == '\x03') {
    uVar4 = FUN_004f2130(*(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x138),&PTR_LAB_004f0784);
    uVar4 = FUN_0040621c(uVar4,&PTR_LAB_004f0784);
    iVar3 = *(int *)(param_1 + 8);
    if (-1 < iVar3 + -1) {
      iVar6 = 0;
      do {
        if (*(char *)(param_1 + 0x15 + iVar6) == '\0') {
          uVar4 = FUN_004f5850(uVar4,iVar6);
          return (uint)CONCAT12((char)uVar4,
                                CONCAT11((char)((uint)uVar4 >> 8),(char)((uint)uVar4 >> 0x10)));
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return uVar5;
}
