// rea decompile_all
// name: FUN_00405b44
// address: 0x405b44
// body: available
// range: 0x405b44-0x405c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x405b64 (push 0x405c04 followed by fs-segment stack chaining); handler 0x405c04 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00405b44(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int *local_c;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_00405c04;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *param_3 = 0;
  local_c = param_2;
  iVar2 = FUN_00405c14(*param_1,param_2);
  if (iVar2 == 0) {
    if (((*local_c == DAT_0077304c) && (local_c[3] == DAT_00773058)) && (local_c[2] == DAT_00773054)
       ) {
      *param_3 = (int)param_1;
    }
  }
  else if (*(int *)(iVar2 + 0x14) == 0) {
    FUN_00405b08(param_1,*(undefined4 *)(iVar2 + 0x18),&local_10);
    FUN_0040b158(param_3,local_10);
  }
  else {
    *param_3 = (int)param_1 + *(int *)(iVar2 + 0x14);
    if (*param_3 != 0) {
      (**(code **)(*(int *)*param_3 + 4))();
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00405c0b;
  puStack_24 = (undefined1 *)0x405c03;
  FUN_0040b140(&local_10,uStack_28,puVar1);
  return;
}
