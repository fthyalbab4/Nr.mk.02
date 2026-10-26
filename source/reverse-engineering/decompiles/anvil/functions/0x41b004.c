// rea decompile_all
// name: FUN_0041b004
// address: 0x41b004
// body: available
// range: 0x41b004-0x41b1e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41b026 (push 0x41b1e7 followed by fs-segment stack chaining); handler 0x41b1e7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041b004(int param_1,double *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  int local_18;
  int local_14;
  int local_10;
  double *local_c;
  int local_8;

  puStack_3c = (undefined1 *)0x41b01b;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_40 = &LAB_0041b1e7;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_10 = 1;
  local_2c = 0;
  uStack_28 = 0;
  puStack_3c = &stack0xfffffffc;
  FUN_0041a714(local_8,&local_10);
  cVar3 = FUN_0041a888(local_8,&local_10,&local_24);
  if (cVar3 == '\0') {
    FUN_0041af40(local_8,local_c);
  }
  else {
    local_14 = local_10;
    FUN_0041a714(local_8,&local_14);
    iVar4 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar4 = FUN_00407488(&local_8,local_8);
    }
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = *(int *)(iVar4 + -4);
    }
    if (local_14 < iVar5) {
      local_18 = local_10 + -1;
      bVar1 = false;
      while ((!bVar1 && (local_18 < local_14))) {
        if ((local_18 < 1) || (local_14 <= local_18)) {
          bVar1 = true;
        }
        else {
          iVar4 = local_18 + 1;
          local_18 = iVar4;
          cVar3 = FUN_0041a4f0(local_8,&local_18,DAT_0068cca4);
          if ((((cVar3 == '\0') &&
               (cVar3 = FUN_0041a4f0(local_8,&local_18,&PTR_PTR_0041b204), cVar3 == '\0')) &&
              (cVar3 = FUN_0041a4f0(local_8,&local_18,DAT_0068cca8), cVar3 == '\0')) &&
             (cVar3 = FUN_0041a4f0(local_8,&local_18,&PTR_DAT_0041b218), cVar3 == '\0')) {
            bVar1 = false;
            local_18 = iVar4;
          }
          else {
            bVar1 = true;
            local_18 = iVar4;
          }
        }
        if (!bVar1) {
          local_18 = FUN_00410620(&DAT_0041b22c,local_8,local_18);
        }
      }
      if (bVar1) {
        if (local_18 < 1) {
          local_10 = local_14;
        }
        else if (local_18 < local_14) {
          local_10 = local_18;
        }
        else {
          local_10 = local_14;
        }
      }
      else {
        local_10 = local_14;
      }
      cVar3 = FUN_0041ac40(local_8,&local_10,&local_2c);
      if (cVar3 != '\0') {
        if ((double)CONCAT44(uStack_20,local_24) < 0.0) {
          *local_c = (double)CONCAT44(uStack_20,local_24) - (double)CONCAT44(uStack_28,local_2c);
        }
        else {
          *local_c = (double)CONCAT44(uStack_20,local_24) + (double)CONCAT44(uStack_28,local_2c);
        }
      }
    }
    else {
      *(undefined4 *)local_c = local_24;
      *(undefined4 *)((int)local_c + 4) = uStack_20;
    }
  }
  puVar2 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_0041b1ee;
  puStack_40 = (undefined1 *)0x41b1e6;
  thunk_FUN_004072d8(&local_8,uStack_44,puVar2);
  return;
}
