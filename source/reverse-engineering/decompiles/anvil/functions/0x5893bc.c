// rea decompile_all
// name: FUN_005893bc
// address: 0x5893bc
// body: available
// range: 0x5893bc-0x58957b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x589409 (push 0x58957c followed by fs-segment stack chaining); handler 0x58957c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005893bc(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_ec;
  undefined1 *puStack_e8;
  undefined1 *puStack_e4;
  undefined1 local_c4 [168];
  undefined1 local_1c [24];

  puStack_e4 = (undefined1 *)0x5893f0;
  FUN_0040902c(local_c4,&DAT_00615f70,7);
  puStack_e4 = (undefined1 *)0x5893fe;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_e8 = &LAB_0058957c;
  uStack_ec = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_ec;
  if (*(int *)(param_3 + 0x14) == 2) {
    iVar2 = *(int *)(param_3 + 0x24);
    puStack_e4 = &stack0xfffffffc;
    if (-1 < iVar2 + -1) {
      puVar5 = local_c4;
      puVar3 = PTR_DAT_00688dc8;
      puStack_e4 = &stack0xfffffffc;
      do {
        FUN_00409360(puVar5,puVar3,&DAT_00615f70);
        puVar5 = puVar5 + 0x18;
        puVar3 = puVar3 + 0x18;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar1 = *PTR_PTR_00689170;
    if (*(char *)(param_3 + 0x10) == '\0') {
      *PTR_PTR_00689170 = 0;
    }
    else {
      *PTR_PTR_00689170 = *(undefined1 *)(param_3 + 0x4c);
    }
    iVar2 = *(int *)(param_3 + 0x24);
    if (-1 < iVar2 + -1) {
      iVar4 = 0;
      puVar3 = PTR_DAT_00688dc8;
      do {
        if (*(int *)(param_3 + 0x28 + iVar4 * 4) == -1) {
          FUN_00409360(puVar3,param_3 + 0x70 + iVar4 * 0x18,&DAT_00615f70);
        }
        else {
          FUN_0058866c(param_1,param_2,*(undefined4 *)(param_3 + 0x130 + iVar4 * 4),puVar3);
        }
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 0x18;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_0058866c(param_1,param_2,*(undefined4 *)(param_3 + 0x20),local_1c);
    iVar2 = *(int *)(param_3 + 0x24);
    if (-1 < iVar2 + -1) {
      puVar5 = local_c4;
      puVar3 = PTR_DAT_00688dc8;
      do {
        FUN_00409360(puVar3,puVar5,&DAT_00615f70);
        puVar3 = puVar3 + 0x18;
        puVar5 = puVar5 + 0x18;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *PTR_PTR_00689170 = uVar1;
  }
  *in_FS_OFFSET = uStack_ec;
  puStack_e4 = &LAB_00589583;
  puStack_e8 = (undefined1 *)0x58956d;
  FUN_00409120(local_c4,&DAT_00615f70,7);
  puStack_e8 = (undefined1 *)0x58957b;
  FUN_004090d0(local_1c,&DAT_00615f70);
  return;
}
