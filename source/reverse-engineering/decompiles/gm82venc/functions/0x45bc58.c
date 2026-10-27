// rea decompile_all
// name: FUN_0045bc58
// address: 0x45bc58
// body: available
// range: 0x45bc58-0x45bd29 inclusive
// range: 0x45bd31-0x45bd65 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45bce2 (push 0x45bd2a followed by fs-segment stack chaining); handler 0x45bd2a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045bc58(HANDLE param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint local_34;
  undefined4 local_30;
  undefined4 local_28;
  int local_18;
  undefined4 local_14;
  undefined4 local_c;
  uint *local_8;

  puVar3 = &stack0xfffffffc;
  *param_2 = DAT_0067d4c4;
  param_2[1] = DAT_0067d4c8;
  param_2[2] = DAT_0067d4cc;
  param_2[3] = DAT_0067d4d0;
  if (param_1 != (HANDLE)0x0) {
    iVar1 = GetObjectW(param_1,0,(LPVOID)0x0);
    if (iVar1 == 0x10) {
      iVar1 = GetObjectW(param_1,0x10,&local_18);
      if (iVar1 != 0) {
        *(undefined *)(param_2 + 3) = (&DAT_0067d4d4)[local_18];
        param_2[2] = local_14;
        param_2[1] = local_c;
        *param_2 = param_1;
      }
    }
    else if (0x17 < iVar1) {
      if (0x1c < iVar1) {
        local_8 = (uint *)FUN_00404324(iVar1);
        uVar2 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffffb4;
        iVar1 = GetObjectW(param_1,iVar1,local_8);
        if (iVar1 != 0) {
          *(undefined *)(param_2 + 3) = (&DAT_0067d4d4)[*local_8 & 0xf];
          param_2[2] = local_8[1];
          param_2[1] = local_8[3];
          *param_2 = param_1;
        }
        *in_FS_OFFSET = uVar2;
        FUN_00404340(local_8,uVar2,puVar3);
        return;
      }
      iVar1 = GetObjectW(param_1,0x1c,&local_34);
      if (iVar1 != 0) {
        *(undefined *)(param_2 + 3) = (&DAT_0067d4d4)[local_34 & 0xf];
        param_2[2] = local_30;
        param_2[1] = local_28;
        *param_2 = param_1;
      }
    }
  }
  return;
}
