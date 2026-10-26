// rea decompile_all
// name: FUN_00726a0c
// address: 0x726a0c
// body: available
// range: 0x726a0c-0x726ac2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x726a2e (push 0x726ac3 followed by fs-segment stack chaining); handler 0x726ac3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00726a0c(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_00726ac3;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  ppuVar6 = &PTR_LAB_00724afc;
  puStack_24 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if ((DAT_007a4664 != 0) &&
     (iVar4 = *(int *)(DAT_007a4664 + 8), puStack_24 = &stack0xfffffffc, -1 < iVar4 + -1)) {
    iVar5 = 0;
    uVar7 = true;
    puStack_24 = &stack0xfffffffc;
    do {
      puVar3 = (undefined4 *)FUN_00726f1c(DAT_007a4664,iVar5);
      (**(code **)*puVar3)((undefined4 *)*puVar3,&local_10);
      uVar2 = local_10;
      FUN_004080b0(&local_14,&local_c,4);
      FUN_00408640(uVar2,local_14);
      if ((bool)uVar7) {
        puVar3 = (undefined4 *)FUN_00726f1c(DAT_007a4664,iVar5);
        ppuVar6 = (undefined **)*puVar3;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
      uVar7 = iVar4 == 0;
    } while (!(bool)uVar7);
  }
  iVar4 = (*(code *)ppuVar6[2])(ppuVar6,1,local_8);
  puVar1 = puStack_24;
  *(undefined4 *)(iVar4 + 0x10) = local_c;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00726aca;
  puStack_28 = (undefined1 *)0x726ac2;
  thunk_FUN_00406e80(&local_14,2,puVar1);
  return;
}
