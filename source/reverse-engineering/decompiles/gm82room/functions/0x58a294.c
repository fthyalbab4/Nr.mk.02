// rea decompile_all
// name: FUN_0058a294
// address: 0x58a294
// body: available
// range: 0x58a294-0x58a3a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x58a2c2 (push 0x58a3a4 followed by fs-segment stack chaining); handler 0x58a3a4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058a294(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar3;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 local_1c [24];

  puStack_38 = (undefined1 *)0x58a2b7;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_3c = &LAB_0058a3a4;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  if ((param_4 < *(int *)(param_3 + 8)) &&
     (puStack_38 = &stack0xfffffffc, *(int *)PTR_DAT_00688c4c == -1)) {
    *(int *)PTR_DAT_00689478 = param_4;
    puStack_38 = &stack0xfffffffc;
    iVar1 = FUN_0060fdc0(param_3,param_4);
    if (*(int *)(iVar1 + 0x28) == -1) {
      FUN_0060fdc0(param_3,param_4);
      iVar1 = FUN_004048b8();
    }
    else {
      puVar3 = local_1c;
      iVar1 = FUN_0060fdc0(param_3,param_4);
      FUN_0058866c(param_1,param_2,*(undefined4 *)(iVar1 + 0x130),puVar3);
      iVar1 = FUN_004048b8();
    }
    if (*(int *)PTR_DAT_00688c4c == -1) {
      if (0 < iVar1) {
        do {
          iVar2 = FUN_0058a414(param_1,param_2,param_3,param_4 + 1);
          if ((iVar2 == 10000000) || (*(int *)PTR_DAT_00688c4c != -1)) goto LAB_0058a388;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_00589f2c(param_3,param_4 + 1);
    }
  }
LAB_0058a388:
  puVar3 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0058a3ab;
  puStack_3c = (undefined1 *)0x58a3a3;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar3);
  return;
}
