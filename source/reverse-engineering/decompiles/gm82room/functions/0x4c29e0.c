// rea decompile_all
// name: FUN_004c29e0
// address: 0x4c29e0
// body: available
// range: 0x4c29e0-0x4c2abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c29f5 (push 0x4c2ac0 followed by fs-segment stack chaining); handler 0x4c2ac0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c29e0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  HKL hkl;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004c2ac0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (PTR_DAT_00689688[0xc] != '\0') {
    puVar1 = &stack0xfffffffc;
    if (*(int *)(param_1 + 0x1d0) != 0) {
      FUN_004e8bf0(*(undefined4 *)PTR_DAT_00689620,&local_8);
      iVar2 = FUN_00415a90(*(undefined4 *)(param_1 + 0x1d0),local_8);
      puVar1 = puStack_18;
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_004e89ac(*(undefined4 *)PTR_DAT_00689620);
        iVar2 = (**(code **)(*piVar3 + 0x14))();
        puVar1 = puStack_18;
        if (iVar2 != 0) {
          hkl = *(HKL *)(*(int *)PTR_DAT_00689620 + 0x40);
          if (*(char *)(param_1 + 0x1cc) != '\0') {
            piVar3 = (int *)FUN_004e89ac(*(undefined4 *)PTR_DAT_00689620);
            iVar2 = (**(code **)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(param_1 + 0x1d0));
            if (-1 < iVar2) {
              piVar3 = (int *)FUN_004e89ac(*(undefined4 *)PTR_DAT_00689620);
              hkl = (HKL)(**(code **)(*piVar3 + 0x18))(piVar3,iVar2);
            }
          }
          ActivateKeyboardLayout(hkl,1);
          puVar1 = puStack_18;
        }
      }
    }
    puStack_18 = puVar1;
    uVar4 = FUN_004c45dc(param_1);
    FUN_004ca95c(uVar4,*(undefined1 *)(param_1 + 0x1cc));
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004c2ac7;
  puStack_1c = (undefined1 *)0x4c2abf;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
