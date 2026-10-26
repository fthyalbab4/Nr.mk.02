// rea decompile_all
// name: FUN_00755048
// address: 0x755048
// body: available
// range: 0x755048-0x75514a inclusive
// range: 0x755173-0x75517a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x75509c (push 0x75516c followed by fs-segment stack chaining); handler 0x75516c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7550b7 (push 0x75514b followed by fs-segment stack chaining); handler 0x75514b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00755048(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  char local_e;

  puStack_24 = (undefined1 *)0x75505e;
  iVar1 = FUN_0040bd38();
  if ((*(char *)(iVar1 + 0x48) == '\0') && (DAT_00826478 != 0)) {
    puStack_24 = (undefined1 *)0x75507d;
    iVar1 = FUN_0040bd38();
    *(undefined1 *)(iVar1 + 0x48) = 1;
    puStack_24 = (undefined1 *)0x755089;
    iVar1 = FUN_0040bd38();
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    puStack_28 = &LAB_0075516c;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    iVar1 = FUN_0043bb30(DAT_00826478);
    uStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_38;
    if (*(int *)(iVar1 + 8) == 1) {
      uVar2 = FUN_0043b048(iVar1,0);
      FUN_00754ff8(uVar2,param_1,param_2,param_4,param_3);
    }
    else {
      local_e = '\x01';
      do {
        iVar4 = *(int *)(iVar1 + 8);
        if (-1 < iVar4 + -1) {
          iVar5 = 0;
          do {
            iVar3 = FUN_0043b048(iVar1,iVar5);
            if (*(char *)(iVar3 + 0x18) == local_e) {
              FUN_00754ff8(iVar3,param_1,param_2,param_4,param_3);
            }
            iVar5 = iVar5 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        local_e = local_e + -1;
      } while (local_e != -1);
    }
    *in_FS_OFFSET = uStack_38;
    uStack_38 = 0x75514a;
    LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_00826478 + 8));
    return;
  }
  return;
}
