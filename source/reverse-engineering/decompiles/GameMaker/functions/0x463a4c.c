// rea decompile_all
// name: FUN_00463a4c
// address: 0x463a4c
// body: available
// range: 0x463a4c-0x463ae6 inclusive
// range: 0x463afe-0x463b0d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x463ac6 (push 0x463ae7 followed by fs-segment stack chaining); handler 0x463ae7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00463a4c(int *param_1,HANDLE param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined1 local_5c [84];
  int local_8;

  iVar1 = param_1[10];
  if (param_2 != *(HANDLE *)(iVar1 + 8)) {
    FUN_00462ef0(param_1);
    FUN_00404f08(local_5c,0x54,0);
    if (param_2 != (HANDLE)0x0) {
      GetObjectW(param_2,0x54,local_5c);
    }
    if (*(int *)(iVar1 + 4) == 1) {
      local_8 = *(int *)(iVar1 + 0x10);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    else if (*(int *)(iVar1 + 0x10) == DAT_00788104) {
      local_8 = DAT_00788104;
    }
    else {
      local_8 = FUN_00461ed4();
    }
    *in_FS_OFFSET = &stack0xffffff8c;
    uVar2 = 0;
    FUN_00463324(param_1,param_2,local_8,0,0,local_5c);
    *in_FS_OFFSET = uVar2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}
