// rea decompile_all
// name: FUN_00464bf0
// address: 0x464bf0
// body: available
// range: 0x464bf0-0x464c6c inclusive
// range: 0x464c74-0x464c83 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x464c25 (push 0x464c6d followed by fs-segment stack chaining); handler 0x464c6d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00464bf0(int *param_1,HICON param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  ICONINFO local_1c;
  int *local_8;

  local_8 = param_1;
  FUN_00464b40(param_1,param_2,0);
  if (param_2 != (HICON)0x0) {
    uStack_44 = 0x464c16;
    BVar1 = GetIconInfo(param_2,&local_1c);
    if (BVar1 != 0) {
      uStack_44 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_44;
      iVar2 = GetObjectW(local_1c.hbmColor,0x18,local_34);
      if (iVar2 != 0) {
        iVar2 = local_8[10];
        *(undefined4 *)(iVar2 + 0xc) = local_30;
        *(undefined4 *)(iVar2 + 0x10) = local_2c;
      }
      *in_FS_OFFSET = uStack_44;
      uStack_44 = 0x464c63;
      DeleteObject(local_1c.hbmMask);
      uStack_44 = 0x464c6c;
      DeleteObject(local_1c.hbmColor);
      return;
    }
  }
  (**(code **)(*local_8 + 0x10))(local_8,local_8);
  return;
}
