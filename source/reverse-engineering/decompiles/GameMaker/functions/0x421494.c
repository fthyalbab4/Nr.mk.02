// rea decompile_all
// name: FUN_00421494
// address: 0x421494
// body: available
// range: 0x421494-0x421589 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4214b0 (push 0x42158a followed by fs-segment stack chaining); handler 0x42158a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00421494(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_0042158a;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if (*param_2 == 0) {
    puStack_28 = &stack0xfffffffc;
    piVar2 = (int *)FUN_0042202c();
    (**(code **)(*piVar2 + 0x18))(piVar2,&local_c);
    cVar1 = FUN_00421438(param_1,local_c);
    if (cVar1 == '\0') {
      piVar2 = (int *)FUN_004213fc();
      (**(code **)(*piVar2 + 0x18))(piVar2,&local_10);
      cVar1 = FUN_00421438(param_1,local_10);
      if (cVar1 == '\0') {
        piVar2 = (int *)FUN_00422068();
        (**(code **)(*piVar2 + 0x18))(piVar2,&local_14);
        cVar1 = FUN_00421438(param_1,local_14);
        if (cVar1 == '\0') {
          iVar3 = FUN_00421f48();
          *param_2 = iVar3;
        }
        else {
          iVar3 = FUN_00422068();
          *param_2 = iVar3;
        }
      }
      else {
        iVar3 = FUN_004213fc();
        *param_2 = iVar3;
      }
    }
    else {
      iVar3 = FUN_0042202c();
      *param_2 = iVar3;
    }
    (**(code **)(*(int *)*param_2 + 0x18))((int *)*param_2,&local_18);
    FUN_00409a18(local_18);
  }
  else {
    (**(code **)(*(int *)*param_2 + 0x18))((int *)*param_2,&local_8);
    cVar1 = FUN_00421438(param_1,local_8);
    if (cVar1 != '\0') {
      FUN_00409a18(local_8);
    }
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00421591;
  puStack_2c = (undefined1 *)0x421589;
  FUN_00408e44(&local_18,&DAT_004108f8,5);
  return;
}
